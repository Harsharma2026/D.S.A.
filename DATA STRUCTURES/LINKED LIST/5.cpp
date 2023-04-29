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

int count_list(Node* head){
    int count = 0;
    Node* temp = head;

    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
int main(){
    Node* head = NULL;

    push_front(&head, 1);
    push_front(&head, 1);
    push_front(&head, 1);
    push_front(&head, 1);
    push_front(&head, 1);
    push_front(&head, 1);

    cout<<"No. of counts are: "<<count_list(head);

    return 0;
}