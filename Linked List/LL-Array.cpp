#include <bits/stdc++.h>

using namespace std;

//Convert LL to array(vector)

class Node{

    int data;
    Node* next;

    Node (int data1){
        data = data1;
        next = NULL;
    }
};


int main(){


    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);

    vector<int> arr;

    while(head !=NULL){
        arr.push_back(head->data);
        head = head->next;
    }

    for (int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}