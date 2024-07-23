//factorial of a number using functional recursion

#include <iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
    int n;

    cout<<"Enter number whose factorial would be found: ";
    cin>>n;

    cout<<"Factiorial of the number is: "<<fact(n);
}