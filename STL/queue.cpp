#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

int main(){

    queue<int> q;   

    q.push(1); //{1}
    q.push(2); //{1,2}
    q.push(3); //{1,2,3}
    q.push(4); //{1,2,3,4}

    q.emplace(5); //{1,2,3,4,5}

    q.front(); //1
    q.back(); //5

    q.pop(); //{2,3,4,5}
    

}