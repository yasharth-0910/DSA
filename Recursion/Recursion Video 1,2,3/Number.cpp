//Print a number N times using recursion from 1 to N

#include <iostream>

using namespace std;

void printNumber(int N, int i){
    if(i>N){
        return;
    }
    cout<<i<<endl;
    printNumber(N, i+1);
}

int main(){
    int N;
    int i =1;
    cout<<"Enter a number: ";
    cin>>N;

    printNumber(N, i);
}