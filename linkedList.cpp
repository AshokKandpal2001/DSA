#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtEnd(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtNthPosition(Node *&head, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    Node *temp = head;
    int currentNode = 1;
    while (currentNode < position - 1 && temp != nullptr)
    {
        temp = temp->next;
        currentNode++;
    }
    if(temp == nullptr) return;
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

int getLength(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != nullptr){
        count++;
        temp = temp->next;
    }
    return count;
}

void deleteNode(Node* &head , int position){
    if(head == nullptr || position <=0) return;

    // Deleting the first Node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        delete temp;
        return;
    }

    // Deleting any other node
    Node* temp = head;
    int count = 1;
    while(count < position-1 && temp->next != nullptr){
        count++;
        temp = temp->next;
    }

    if(temp->next == nullptr) return;
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}

int main()
{
    Node *node1;
    Node *head = node1;
    Node *tail = node1;
    printList(head);
    insertAtHead(head,5);
    insertAtNthPosition(head,2,20);
    return 0;
}