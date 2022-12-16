#ifndef STACKS_H_
#define STACKS_H_
#include "Utils.h"

class TablesStack {
public:
    TablesStack();
    std::vector<Scope> scopes;

    void addSymbol(Symbol symbol);
    void openScope(bool isWhile = false);
    void closeScope();
    bool findId(std::string name, Symbol& s);
    TYPE lastFuncRetType();
};


class OffsetsStack {
public:
    OffsetsStack();

    std::vector<int> offsets;

    void openScope();
    void closeScope();
    int getOffset();
};

#endif