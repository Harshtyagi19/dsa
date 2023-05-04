#include<iostream>
using namespace std;
 
 class Node{
    public:

    int data;
    Node* next;

    // CONSTRUCTOR
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

 };

void print(Node *head){
     while(head != NULL){
        cout<<head->data<<endl;
        head=head->next;
     }
}
int main(){
    Node n1(2);
    Node* head=&n1;

    Node n2(4);
    Node n3(6);
    Node n4(8);
    Node n5(10);

    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;

    print(head);

  return 0;
    
}