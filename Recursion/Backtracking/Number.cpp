//print number 1 to N linearly using backtracking

#include <iostream>
using namespace std;

void printNumber(int N, int i){
    if(i<1){
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

// Time Complexity: O(N)
// Space Complexity: O(N)

//what is backtracking?
//Backtracking is a technique used to solve problems by trying to build a solution incrementally.
//It removes the solutions that fail to satisfy the constraints of the problem at any point of time.