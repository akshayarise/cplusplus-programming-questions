/*
 * singlyLinkedList.cpp
 *
 * Author:
 * Akshay Kumar <akshayawakearise[at]gmail[dot]com>
 *
 * Make the SinglyLinkedList containing age of the person in a sequence.
 *
 * */

#include <iostream>
using namespace std;

class Node
{
public:
    int age;
    Node *next;
};
void printLinkedList(Node *head)
{
    cout << "Elements in the Singly LinkedList are: \n";
    while (head)
    {
        cout << head->age << " ";
        head = head->next;
    }
    cout << endl;
}
void createLinkedList(int n)
{
    cout << "Enter the elements in the LinkedList\n";
    Node *node, *head, *temp, *prevNode, *nextNode;
    if (n >= 1)
    {
        node = new Node();
        temp = node;
        cout << "Enter the age in the Node\n";
        cin >> node->age;
        node->next = NULL;
        head = node;
    }
    n--;
    while (n)
    {
        prevNode = head;
        node = new Node();
        cout << "Enter the age in the Node\n";
        cin >> node->age;
        node->next = NULL;
        prevNode->next = node;
        head = node;
        n--;
    }
    printLinkedList(temp);
}

int main()
{
    int n;
    cout << "Enter the number of elements you want to enter\n";
    cin >> n;
    if (n == 0)
    {
        cout << "Please enter atleast number of elements equals to 1 \n";
        cout << "so that we can make atleast 1 node of the list\n";
        return 0;
    }
    createLinkedList(n);
    return 0;
}