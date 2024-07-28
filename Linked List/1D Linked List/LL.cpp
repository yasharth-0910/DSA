#include <bits/stdc++.h>

using namespace std;

class Node{
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

Node* converArrtoLL(vector<int> arr1){
    Node* head = new Node(arr[0], nullptr);
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++){
        Node* x = new Node(arr[i], nullptr);
        mover->next = x;
        mover = x;
    }

    return head;
}

int main(){

    //vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> arr1 = {34,12, 45, 67, 89};

    // Node* y = new Node(arr[0], nullptr);

    // cout<< y <<endl; // 0x7f8f1b402010
    // cout<< y->data <<endl; // 1


    // for(int i = 0; i < arr.size(); i++){
    //     Node* x = new Node(arr[i], nullptr);
    //     cout<< x <<endl;
    //     cout<< x->data <<endl;
    // }
    //0x2200ed0
    // 1
    // 0x2201300
    // 2
    // 0x2201320
    // 3
    // 0x2201340
    // 4
    // 0x2201360
    // 5

    Node* head = converArrtoLL(arr1);
    cout<< head <<endl;
    cout<< head->data <<endl;

    return 0;
}