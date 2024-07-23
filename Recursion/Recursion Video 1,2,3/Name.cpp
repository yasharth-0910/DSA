//print a name N times using recursion
#include <iostream>
using namespace std;

void printName(string name, int N){
    if(N==0){
        return;
    }
    cout<<name<<endl;
    printName(name, N-1);
}

int main(){
    string name;
    int N;

    cout<<"Enter a name: ";
    cin>>name;

    cout<<"Enter the number of times you want to print the name: ";
    cin>>N;

    printName(name, N);

    return 0;
}