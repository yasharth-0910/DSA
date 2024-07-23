#include <iostream>
#include <string>
using namespace std;


bool palindromeCheck(int i,int n,string s){
    if(i>=n/2){
        cout<<"Palindrome";
        return true;
    }
    if(s[i]!=s[n-i-1]){
        cout<<"Not a palindrome";
        return false;
    }
    return palindromeCheck(i+1,n,s);

}
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    palindromeCheck(0,s.length(),s);
    return 0;
}