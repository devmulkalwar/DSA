# include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

void insertAtFront (Node * &head , int d){
    Node * newNode = new Node(d);
    newNode->next = head;
    head= newNode;
}

void insertAtTail(Node * head,  int d){
    Node * newNode = new Node(d);
    Node * ptr = head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next = newNode;
}

void insertAtMiddle(Node * head, int d, int pos){
    Node * newNode = new Node(d);
    Node * ptr = head;
    int count = 2;
    // while(count<=pos){
    //     count++;
    //     if(count==pos){
    //         newNode->next = ptr->next;
    //         ptr = newNode;
    //     }
    //     ptr=ptr->next;
    // }
    
    while(count<pos && ptr->next!=NULL){
        count++;
        ptr=ptr->next;
    }
    newNode->next = ptr->next;
    ptr->next = newNode;
}

void DisplayLL (Node * head ){
    Node * ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<"->"<<ptr->next << endl;
        ptr = ptr->next;
    }
     
}

int main(){
    
    Node * head=  new Node(5);
    insertAtFront(head,6);
    insertAtFront(head,7);
    insertAtFront(head,8);
    insertAtTail(head, 9);
    insertAtMiddle(head, 10, 3);
    DisplayLL(head);
    return 0;
}