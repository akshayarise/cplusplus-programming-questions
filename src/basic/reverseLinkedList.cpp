/*
 * reverseLinkedList.cpp
 *
 * Author:
 * Akshay Kumar <akshayawakearise[at]gmail[dot]com>
 *
 * Reverse a LinkedList
 *
 * This problem was asked in these companies ----------
 * Accolite, Adobe, Amazon, MakeMyTrip, Microsoft, Qualcomm, Samsung, SAP Labs, Snapdeal, Zoho
 *
 *
 * */
#include <iostream>
using namespace std;

class Node
{
public:
    int num;
    Node *next;
};
class LinkedList
{
public:
    Node *head = NULL, *node;
    void insertNode(int num)
    {
        if (head == NULL)
        {
            node = new Node();
            node->num = num;
            node->next = NULL;
            head = node;
        }
        else
        {
            Node *temp = head;
            while (temp->next)
            {
                temp = temp->next;
            }
            node = new Node();
            node->num = num;
            temp->next = node;
            node->next = NULL;
        }
    }
    void reverse()
    {
        Node *prev = NULL, *current = head, *next = NULL;
        while (current)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
    void print()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->num << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList l1;
    int n;
    cout << "Enter the number of elements you want to enter for the SinglyLinkedList\n";
    cin >> n;
    int num;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i << "th node"
             << " element\n";
        cin >> num;
        l1.insertNode(num);
    }
    cout << "SinglyLinkedList is \n";
    l1.print();
    l1.reverse();
    cout << "SinglyLinkedList after the reverse function call \n";
    l1.print();
    return 0;
}