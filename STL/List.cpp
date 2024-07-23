#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){

    list <int> ls;

    ls.push_back(1); //{1}
    ls.emplace_back(2); //{1,2}

    ls.push_front(3); //{3,1,2}
    ls.emplace_front(4); //{4,3,1,2}



}