#include <iostream>
using namespace std;

int fibo(int n){
    if(n<=1){
        return n;
    }
    int first = fibo(n-1);
    int second = fibo(n-2);
    return first + second;
}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    fibo(n);
    cout<<"Fibonacci of "<<n<<" is: "<<fibo(n)<<endl;
}