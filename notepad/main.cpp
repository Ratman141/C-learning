#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <limits>
using namespace std;

string note;
char rw;

int main(){

    cout<<"Do you want to read or write siurek.txt file"<<endl;
    cout<<"(r/w)";
    cin>>rw;
    cout<<endl;
    fstream file;
    file.open("siurek.txt", ios::in | ios::app |ios::out);
    if(rw == 'r'){
        stringstream variable;
        variable << file.rdbuf();    //Gets all of files content into variable
        string freakyVariable;
        freakyVariable = variable.str();    ///Gets everything from variable to freakyVariable and makes it string
        cout<<freakyVariable<<endl;
    }
    else{
        cout<<"To leave press ctrl + c"<<endl;
        cout<<"Press enter to open new line"<<endl;
        cout<<"Enter your text"<<endl;
        while(true){
        
            getline(cin, note);

            fstream file;

            file.open("siurek.txt", ios::out | ios::app);

            file<<note<<endl;
        
        }
    }
    file.close();
    return 0;
}