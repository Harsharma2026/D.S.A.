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
void delete_list(Node** headr){
    Node* temp = *headr;
    Node* next = NULL;

    while(temp!=NULL){
        next = temp->next;
        free(temp);
        temp = next;
    }
    *headr = NULL;
}

int main(){
    Node* head = NULL;

    push_front(&head, 2);
    push_front(&head, 7);
    push_front(&head, 4);
    push_front(&head, 9);
    push_front(&head, 3);

    delete_list(&head);
    cout<<"Linked list deleted: ";

    return 0;
}