#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

     Node(int data)
     {
        this->data=data;
        this->next=NULL;
     }

};
int main(){
    // static creation of an ll
    // Node n1(1);
    // Node* head=&n1;
    // Node n2(2);
    // cout<<head->data<<endl;
    // n1.next=&n2;
    // cout<<n2.data<<endl;

// dynamic creation of an object
    Node* n3=new Node(10);
    Node* head=n3;
    Node* n4=new Node(20);
    n3->next=n4;
    cout<<n3->data<<" "<<n4->data;
}