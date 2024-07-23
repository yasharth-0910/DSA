//Print from N to 1 using recusion

#include <iostream>
using namespace std;

void PrintNumber(int N){
    if(N==0){
        return;
    }
    cout<<N<<endl;
    PrintNumber(N-1);
}

int main(){
    int N;
    cout<<"Enter N: ";
    cin >>N;

    PrintNumber(N);
}