#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP
#include <exception>

class EmptyPotion : public std::exception {
    public:
    virtual const char* what() const throw() {
        return "Trying to drink an empty potion!";
    }
};

class IllegalFury : public std::exception {
    bool entering;
    public:
    virtual const char* what() const throw() {
        if(entering){
            return "Cannot enter fury twice !";
        }
        else {
            return "Cannot leave fury if not in fury !";
        }
    }
    public:
    IllegalFury(bool entering) : entering(entering) {}
};

#endif
