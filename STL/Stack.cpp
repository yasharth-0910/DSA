#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>

using namespace std;

int main(){

    std::stack<int> s;

    s.push(1); // {1}
    s.push(2); // {1,2}
    s.push(3);  // {1,2,3}
    s.push(3); // {1,2,3,3}

    cout<<s.top()<<endl; // 3

    s.pop(); // {1,2,3}

    cout<<s.top()<<endl; // 3



}