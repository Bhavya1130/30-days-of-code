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

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp-> data << " ";
        temp = temp->next;
    }
}

bool search(node* &head, int key){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    int n;
    cout << "Number of elements in list: ";
    cin >> n;
    node* head = NULL;
    int x;
    cout << "Enter elements: ";
    for(int i {}; i<n; i++){
        cin >> x;
        insertAtEnd(head, x);
    }
    cout << "Elements of list: ";
    display(head);
    cout << endl;
    int m;
    cout << "Enter elememt to search: ";
    cin >> m;
    if(search(head, m)==1){
        cout << m << " found"<< endl;
    }
    else
        cout << m << " not found"<< endl;
    cout << endl;

    return 0;
}
