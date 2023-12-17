/*
 * addTwoLinkedLists.cpp
 *
 * problem - Add two linkedlists and return the sum in the form of linkedlist
 *
 * Input:
 * List1: 5->6->3 // represents number 563
 * List2: 8->4->2 // represents number 842
 * Output:
 * Resultant list: 1->4->0->5 // represents number 1405
 * Explanation: 563 + 842 = 1405

 * Input:
 * List1: 7->5->9->4->6 // represents number 75946
 * List2: 8->4 // represents number 84
 * Output:
 * Resultant list: 7->6->0->3->0// represents number 76030
 * Explanation: 75946+84=76030
 *
 * Author:
 * Akshay Kumar <akshayawakearise[at]gmail[dot]com>
 *
 * This problem was asked in these companies interviews-
 * Accolite
 * Amazon
 * Flipkart
 * MakeMyTrip
 * Microsoft
 * Qualcomm
 * Snapdeal
 */

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
            Node *temp;
            temp = head;
            while (temp->next)
            {
                temp = temp->next;
            }
            node = new Node();
            temp->next = node;
            node->num = num;
            node->next = NULL;
        }
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
    void reverse()
    {
        Node *prev = NULL, *current, *next = NULL;
        current = head;
        while (current)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
    Node *newNode(int num)
    {
        Node *node = new Node();
        node->num = num;
        node->next = NULL;
        return node;
    }

    void addTwoLinkedLists(Node *first, Node *second)
    {
        int sum, carry = 0;
        Node *temp, *prev = NULL, *res = NULL;
        while (first || second)
        {
            sum = carry + (first ? (first->num) : 0) + (second ? (second->num) : 0);
            carry = (sum >= 10) ? 1 : 0;
            sum = sum % 10;
            temp = new Node();
            temp->num = sum;
            temp->next = NULL;
            if (res == NULL)
            {
                res = temp;
            }
            if (prev)
            {
                prev->next = temp;
            }
            prev = temp;
            if (first)
            {
                first = first->next;
            }
            if (second)
            {
                second = second->next;
            }
        }
        if (carry == 1)
        {
            prev->next = new Node();
            prev->next->num = carry;
            prev->next->next = NULL;
        }
        head = res;
    }
};

int main()
{
    LinkedList first, second, l3;
    int n, num;
    cout << "Enter the number of elements you want to enter in the first SinglyLinkedList\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i << "th"
             << " element in the SinglyLinkedList\n";
        cin >> num;
        first.insertNode(num);
    }

    cout << "First LinkedList\n";
    first.print();
    cout << "Enter the number of elements you want to enter in the second SinglyLinkedList\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i << "th"
             << " element"
             << "in the SinglyLinkedList\n";
        cin >> num;
        second.insertNode(num);
    }
    cout << "Second LinkedList\n";
    second.print();
    cout << "First LinkedList after the reverse function call\n";
    first.reverse();
    first.print();
    cout << "Second LinkedList after the reverse function call\n";
    second.reverse();
    second.print();
    cout << "The new linkedList after addition \n";
    l3.addTwoLinkedLists(first.head, second.head);
    l3.reverse();
    l3.print();
    return 0;
}
