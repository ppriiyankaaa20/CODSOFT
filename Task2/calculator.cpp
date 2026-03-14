#include<iostream>
using namespace std;

int main() {

double num1,num2;
char op;
    cout<<"enter first number:";
    cin>>num1;
    cout<<"enter operator(+,-,*,/):";
    cin>>op;
    cout<<"enter second number:";
    cin>>num2;
if(op=='+'){
    cout<<"result="<<num1+num2;
}
else if(op=='-'){
    cout<<"result="<<num1-num2;
}
else if(op=='*'){
    cout<<"result="<<num1*num2;
}
else if(op=='/'){
    cout<<"result="<<num1/num2;
}
else{
    cout<<"invalid operator";
}
    return 0;
}