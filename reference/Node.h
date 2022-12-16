
#ifndef NODE_H
#define NODE_H
#define YYSTYPE Node*
#include <vector>
#include <string>
#include <list>


enum EType {
    EFUNC,
    ESTRING,
    EVOID,
    EBYTE,
    EBOOL,
    EINT,
    ENONE,
};


class Node {

};


class Type : public Node {
public:
    EType type;

    Type(EType type) : type(type) {}
    bool isNum()
    {
        if(type == EBYTE || type == EINT )
        {
            return true;
        }
        return false;
    }
};



class Id : public Node {
public:
    std::string name;
    Id(char* name)
    {
        this->name = std::string(name);
    }
};

class Num : public Node {
public:
    int value;
    Num(char* num)
    {
        value = atoi(num);
    }
};

class Argument : public Node {
public:
    EType type;
    std::string name;

    Argument(EType type, std::string name) : type(type), name(name) {}
};

class ArgumentList : public Node
{
public:
    std::list<Argument> arguments;

    void addArgument(Argument arg)
    {
        arguments.push_front(arg);
    }

    void createLists(std::vector<EType>& types, std::vector<std::string>& names) {
        for (std::list<Argument>::iterator it = arguments.begin(); it != arguments.end(); it++) {
            types.push_back(it->type);
            names.push_back(it->name);
        }
    }

};

class TypeList : public Node {
public:
    std::list<EType> types;
};


#endif //NODE_H
