#ifndef SCOPESTACKS_H
#define SCOPESTACKS_H
#include "Utils.h"
#include "stacks.h"

class ScopeStacks {
public:
    TablesStack tablesStack;
    OffsetsStack offsetsStack;


    void openScope(bool isWhile = false)
    {
        tablesStack.openScope(isWhile);
        offsetsStack.openScope();
    }

    void closeScope()
    {
        tablesStack.closeScope();
        offsetsStack.closeScope();
    }

    bool isWhileScope()
    {
        return tablesStack.scopes.back().isWhile;
    }

    void addSymbol(Symbol sym)
    {
        tablesStack.addSymbol(sym);
        if (sym.type != EFUNC) {
            (offsetsStack.offsets.back())++;
        }
    }
};

#endif //SCOPESTACKS_H