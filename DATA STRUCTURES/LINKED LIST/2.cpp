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
void delete_node(Node** headr, int key){
    Node* temp = *headr;
    Node* prev = NULL;

    if(temp!=NULL && temp->data==key){
        *headr = temp->next;
        delete temp;
        return;
    }
    else
    {
        while(temp!=NULL && temp->data!=key){
        prev = temp;
        temp = temp->next;
    }
        if(temp==NULL)
        return;

        prev->next = temp->next;
        delete temp;

    }
}
     void print_list(Node* node){
        while(node!=NULL){
            cout<<node->data<<" ";
            node = node->next;
        }
        cout<<endl;
     }

int main(){
    Node* head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    push(&head, 6);
    push(&head, 7);
    push(&head, 8);
    push(&head, 9);

    cout<<"Created linked list be: ";
    print_list(head);

    delete_node(&head, 5);
    print_list(head);
    
    return 0;
}