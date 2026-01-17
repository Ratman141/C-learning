#include <iostream>
#include <thread>
#include <chrono>
#include <string>
using namespace std;

void animation(const string text, int time){
    const char spinner[] = {'|', '/', '-', '\\'};
    const int size = 4;

    int elapsed = 0;
    int i = 0;

    while(elapsed<time){
        cout<<"\r"<<text<<" "<<spinner[i%size]<<flush;
        this_thread::sleep_for(chrono::milliseconds(120));
        elapsed += 120;
        i++;
    }
    cout<<"\r"<<text<<" [OK] "<<endl;
}

int main(){
    animation("Loading", 3000);
    animation("Processing", 5000);
    animation("Finalizing", 2000);
    return 0;
}