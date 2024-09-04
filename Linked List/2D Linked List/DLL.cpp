#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = NULL;
    }

};

Node* arrToNode(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        prev = temp;
    }   
    while (head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;

    return head;
}

int main(){

    vector <int> arr = {12,4,5,98, 15, 74};

    Node* head = arrToNode(arr);


}