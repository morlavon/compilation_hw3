#include "stacks.h"

TablesStack::TablesStack() {
    Scope scope;
    vector<TYPE> printArgTypes = { ESTRING };
    vector<TYPE> printiArgTypes = { EINT };

    scope.addSymbol(Symbol("print", printArgTypes, {}, EVOID));
    scope.addSymbol(Symbol("printi", printiArgTypes, {}, EVOID));
    this->scopes.push_back(scope);
}


void TablesStack::addSymbol(Symbol sym) {
    this->scopes.back().addSymbol(sym);
}

void TablesStack::openScope(bool isWhile) {
    scopes.push_back(Scope(isWhile));
}


void TablesStack::closeScope()
{
    this->scopes.back().printScope();
    scopes.pop_back();
}



bool TablesStack::findId(string name, Symbol& s)
{
    for (int i = scopes.size() - 1; i >= 0; i--)
    {
        for(int j=0; j < (scopes[i].symTable).size(); j++)
        {
            if(name == scopes[i].symTable[j].name)
            {
                s = scopes[i].symTable[j];
                return true;
            }
        }
    }
    return false;
}

TYPE TablesStack::lastFuncRetType()
{
    for (int i = scopes.size()-1; i >= 0; i--)
    {
        for(int j = (scopes[i].symTable).size()-1; j>=0; j--)
        {
            if(scopes[i].symTable[j].type == EFUNC)
            {
                return scopes[i].symTable[j].retType;
            }
        }
    }
    return ENONE;
}

OffsetsStack::OffsetsStack() {
    offsets.push_back(0);
}

void OffsetsStack::openScope() {
    int lastOffset = offsets.back();
    offsets.push_back(lastOffset);
}


int OffsetsStack::getOffset() {
    return offsets.back();
}

void OffsetsStack::closeScope() {
    this->offsets.pop_back();
}
