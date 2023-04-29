#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void push(Node** headr, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*headr);
    (*headr) = new_node;
}

void delete_node(Node** headr, int position){
    if(*headr==NULL)
    return;
    Node* temp = *headr;

    if(position==0){
        *headr = temp->next;
        free(temp);
        return;
    }
    for(int i=0;i<position-1;i++){
        temp = temp->next;

    }
    Node *temp2 = temp->next;
    temp->next = temp->next->next;
    free(temp2);
    return;
}
void printlist(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    Node *head = NULL;
    push(&head , 1);
    push(&head , 2);
    push(&head , 4);
    push(&head , 3);
    delete_node(&head , 2);
    printlist(head);
    return 0;
}