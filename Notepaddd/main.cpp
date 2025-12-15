#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string note;

int main(){

    fstream file;

    file.open("siurek.txt", ios::out | ios::app);

    getline(plik, note);

    file<<string<<endl;

    file.close();

    return 0;
}