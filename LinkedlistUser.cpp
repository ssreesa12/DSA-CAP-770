#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void print(node *n) {
    while (n != NULL) {
        cout << n->data << endl;
        n = n->next;
    }
}

void takeInput(node*&head, int s) {
    node* temp = nullptr;
    for (int i = 0; i < s; i++) {
        int value;
        cout << "Enter the data: ";
        cin >> value;
        node* newNode = new node();
        newNode->data = value;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
    }
}

int main() {
    int n;
    // cout << "Enter the number of lists you want to create: ";
    // cin >> n;
    
    // for (int i = 0; i < n; i++) {
        int s;
        cout << "Enter the size of each list "<< ": ";
        cin >> s;
        node* head = nullptr;
        takeInput(head, s);
        print(head);
    // }

    return 0;
}
