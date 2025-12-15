#include <iostream>
#include <string>
#include "class.hpp"
using namespace std;

int main(){
    cout<<"Enter your name: ";
    string name;
    cin>>name;
    cout<<"Your gender is: "<<gender(name)<<endl;
    return 0;
}
