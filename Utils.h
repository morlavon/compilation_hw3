#ifndef UTILS_H
#define UTILS_H
#include <vector>
#include <list>
#include <string>
#include "hw3_output.hpp"

// ------------------- yystype --------------------------------------------------

#define YYSTYPE yystype*
#include <vector>
#include <string>
#include <list>


enum TYPE {
    EFUNC,
    ESTRING,
    EVOID,
    EBYTE,
    EBOOL,
    EINT,
    ENONE,
};


class yystype {

};


class Type : public yystype {
public:
    TYPE type;

    Type(TYPE type) : type(type) {}
    bool isLegalNum()
    {
        if(type == EBYTE || type == EINT )
        {
            return true;
        }
        return false;
    }
};



class Id : public yystype {
public:
    std::string IdName;
    Id(char* IdName)
    {
        this->IdName = std::string(IdName);
    }
};

class Num : public yystype {
public:
    int value;
    Num(char* num)
    {
        value = atoi(num);
    }
};

class Argument : public yystype {
public:
    TYPE type;
    std::string name;

    Argument(TYPE type, std::string name):
    type(type),
    name(name)
    {}
};

class ArgumentList : public yystype
{
public:
    std::list<Argument> arguments;

    void addArgument(Argument arg)
    {
        arguments.push_front(arg);
    }

    void generateLists(std::vector<TYPE>& types, std::vector<std::string>& names) {
        for (std::list<Argument>::iterator it = arguments.begin(); it != arguments.end(); it++) {
            types.push_back(it->type);
            names.push_back(it->name);
        }
    }

};

class TypeList : public yystype {
public:
    std::list<TYPE> types;
};

// ------------------- yystype --------------------------------------------------

class Symbol {
public:
    Symbol() {}
    Symbol(std::string name, TYPE type, int offset) : name(name), type(type) , offset(offset) {}
    Symbol(std::string name, std::vector<TYPE> argTypes, std::vector<std::string> argNames, TYPE retType) : name(name), type(EFUNC),
                                                                                                             offset(0), argTypes(argTypes), argNames(argNames), retType(retType) {}

    std::string name;
    TYPE type;
    int offset;
    std::vector<TYPE> argTypes;
    std::vector<std::string> argNames;
    TYPE retType;

    std::vector<std::string> typeStringList();
    bool checkArgTypes(TypeList typeList);
};


class Scope {
public:
    Scope(bool isWhile = false) : isWhile(isWhile) {}

    std::vector<Symbol> symTable;
    bool isWhile;

    void addSymbol(Symbol symbol);
    void printScope();
};

#endif //UTILS_H