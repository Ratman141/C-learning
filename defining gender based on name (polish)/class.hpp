#ifndef CLASS_HPP
#define CLASS_HPP

#include <string>

std::string gender(std::string name){
    int length = name.length();
    std::string sex;
    if(name[length-1] == 'a'){
        sex = "Woman";
    }
    else if(name.empty()){
        sex = "unknown";
    }
    else {
        sex = "Man";
    }
    return sex;
}

#endif