#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string input;

int main(){
    string a;
    string b;
    char op;
    bool OpFound = false;

    cout<<"Simple Calc 1.0\n";
    cout<<"This calculator only does 2 number equations\n";

    cout<<"Enter your equation:\n";
    cin>>input;

    for(char c : input){
        if(isdigit(c)&&!OpFound){
            a += c;
        }
        else if(!isdigit(c)){
            OpFound = true;
            op = c;
        }
        else{
            b += c;
            int i = stoi(b);
            if(i == 0&&op=='/'){
                cout<<"Invalid argument"<<endl;
                return 0;
            }
        }
    }
    

    int A = stoi(a);
    int B = stoi(b);
    int answer;
    if(op == '+') answer = A+B;
    else if(op == '-') answer = A-B;
    else if(op == '*') answer = A*B;
    else answer = A/B;

    cout<<A<<op<<B<<" = "<<answer<<endl;

    return 0;
}