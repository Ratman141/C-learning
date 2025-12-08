#include <iostream>
#include <cstdlib>
using namespace std;


int number, guess, count;

int main(){
    srand(time(NULL));

    number = rand()%100+1;

    cout<<"Guess the number (1-100): ";
    cin>>guess;

    if(guess != number){
        cout<<"Wrong!"<<endl;
        count++;
        if(guess>number){
            cout<<"The number is smaller"<<endl;
        }
        else {
            cout<<"The number is greater"<<endl;
        }

        while(true){
            cout<<"Enter another guess: ";
            cin>>guess;
            if(guess == number){
                count++;
                break;
            }
            else{
                cout<<"Wrong!"<<endl;
                count++;
                if(guess>number){
                    cout<<"The nmber is smaller"<<endl;
                }
                else {
                    cout<<"The number is greater"<<endl;
                }
            }
        }
    cout<<"Correct! You guessed it on your "<<count<<" try"<<endl;
    }
    else{
        cout<<"Correct! You guessed it on your first try"<<endl;
    }



    return 0;
}