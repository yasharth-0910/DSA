#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >>n;
    
    int* arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }   

    //precompute

    int hash[1000001] = {0}; //maxsize we are taking as 1000001
    for(int i =0; i<n; i++){
        hash[arr[i]]++;
    }



    int q;
    cin>>q;

    while(q--){
        int number;
        cin>>number;

        //fetch
        cout<<hash[number]<<endl;
        
    }

}
