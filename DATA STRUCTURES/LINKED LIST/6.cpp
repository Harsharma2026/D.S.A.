#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void push_front(Node** headr, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*headr);
    (*headr) = new_node;
}
int Nth(Node* head, int i){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        if 
        (count==i)
        return (temp->data);
        count++;
        temp = temp->next;
    }
    assert(0);
}
int main(){
    Node* head = NULL;

    push_front(&head, 3);
    push_front(&head, 5);
    push_front(&head, 7);
    push_front(&head, 9);

    cout<<"Element at no. 2 is: "<<Nth(head, 2);

    return 0;
}