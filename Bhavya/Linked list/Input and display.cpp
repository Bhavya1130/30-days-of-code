#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtEnd(node* &head, int val){
    node* n = new node (val);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(node* &head, int val){
    node* n = new node (val);
    n->next = head;
    head = n;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp-> data << " ";
        temp = temp->next;
    }
}

int main()
{
    int n;
    cout << "No. of elements in list: ";
    cin >> n;
    node* head = NULL;
    int x;
    cout << "Enter elemets: ";
    for(int i {}; i<n; i++){
        cin >> x;
        insertAtEnd(head, x);
    }
    cout << "Elements in list are: ";
    display(head);
    cout << endl;
    int m;
    cout << "Enter an element to insert at head: ";
    cin >> m;
    insertAtHead(head, m);
    cout << "New list: ";
    display(head);
    cout << endl;
    return 0;
}
