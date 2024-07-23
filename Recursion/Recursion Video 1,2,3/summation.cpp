//Summation of numbers from 1 to n using recursion

#include <iostream>
using namespace std;


int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n + sum(n-1);
    }
}
int main(){

    int n;

    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Sum of numbers from 1 to "<<n<<" is: "<<sum(n)<<endl;

}