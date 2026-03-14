#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int number = rand() %100+1;
    int guess;
    cout<<"guess a number between 1 and 100\n";
    do{
        cout<<"enter your guess:";
        cin>>guess;
        if(guess>number)
        cout<<"too high\n";
        else if(guess<number)
        cout<<"too low\n";
        else cout<<"correct\n";

    }while(guess!=number);

    

    return 0;

}