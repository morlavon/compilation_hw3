#include <iostream>
#include "Utils.h"




vector<string> enumToString {"FUNC", "STRING", "VOID", "BYTE", "BOOL", "INT", "NONE"};

vector<string> Symbol::typeStringList() {
    vector<string> res;
    for (TYPE arg : argTypes) {
        res.push_back(enumToString[arg]);
    }
    return res;
}

bool Symbol::checkArgTypes(TypeList typeList)
{
    list<TYPE>::iterator it;
    int i = 0;
    if(argTypes.size() != typeList.types.size())
    {
        return false;
    }
    for(it = typeList.types.begin(); it != typeList.types.end(); i++, it++)
    {
        if (argTypes[i] != *it && !(*it == EBYTE && argTypes[i] == EINT))
        {
            return false;
        }
    }
    return true;
}



void Scope::addSymbol(Symbol symbol) {
    this->symTable.push_back(symbol);
}


void Scope::printScope() {
    output::endScope();
    string typeString;
    for (Symbol sym : symTable) {
        if (sym.type != EFUNC)
        {
            typeString = enumToString[sym.type];
            output::printID(sym.name, sym.offset, typeString);
        }
        else
        {
            vector<string> typeStringList = sym.typeStringList();
            typeString = output::makeFunctionType(enumToString[sym.retType], typeStringList);
            output::printID(sym.name, 0, typeString);
        }
    }
}

