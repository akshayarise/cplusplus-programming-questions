/*
 * linkedlist.cpp
 *
 * Author:
 * Akshay Kumar <akshayawakearise[at]gmail[dot]com>
 * This is the SinglyLinkedList containing the age in the sequence.

*/

#include <iostream>
using namespace std;

class Node
{
public:
    int age;
    Node *next;
    Node(int age)
    {
        this->age = age;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }
    void insertNode(int);
    void printLinkedList();
};
void LinkedList::printLinkedList()
{
    Node *temp = head;
    cout << "Age in the LinkedList is: \n";
    while (temp)
    {
        cout << temp->age << " ";
        temp = temp->next;
    }
    cout << endl;
}

void LinkedList::insertNode(int age)
{
    Node *node;
    node = new Node(age);
    if (head == NULL)
    {
        head = node;
    }
    else
    {
        Node *temp = head;
        while (temp)
        {
            if (temp->next == NULL)
            {
                temp->next = node;
                return;
            }
            temp = temp->next;
        }
    }
}

int main()
{
    LinkedList l1;
    l1.insertNode(100);
    l1.insertNode(20);
    l1.insertNode(30);
    l1.insertNode(40);
    l1.insertNode(50);
    l1.printLinkedList();
    return 0;
}