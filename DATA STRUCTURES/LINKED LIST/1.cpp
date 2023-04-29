#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void insert_after(Node* prev_node, int new_data){
    if(prev_node==NULL){
        cout<<"It cannot be NULL "<<endl;
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
void append(Node** head_ref, int new_data){
    Node* new_node = new Node();
    Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    
        if(*head_ref==NULL){
            *head_ref=new_node;
        }
        else{
            while(last->next!=NULL){
            last = last->next;
            }
            last->next = new_node;
        }
        return;
}

    void print_list(Node* node){
        while(node!=NULL){
            cout<<" "<<node->data;
            node = node->next;
        }
    }

int main(){
    Node* head = NULL;

    append(&head, 8);
    push(&head, 4);
    append(&head, 7);
    push(&head, 2);
    insert_after(head->next  , 1);

    cout<<"Created linked list is: ";
    print_list(head);

    return 0;
}