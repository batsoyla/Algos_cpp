#include <stdio.h>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

/*class Node*/
class Node{
    /* attributes*/
    public:
        int data;
        Node* next;

};

class LinkedList
 {
     /* attributes*/
    public:
        Node* head;
     
    LinkedList()
    {
        head=NULL;
    }
     /* methods*/
     
    public:
    Node* createList(){
        cout<<"Insert the name of the file:";
        string name;
        cin>>name;
        fstream newfile;
        newfile.open(name,ios::in); //open a file to perform read operation using file object
        if (newfile.is_open())
            {   /* checking whether the file is open*/        
                string str;
                while(getline(newfile, str))
                {
      
        /* read data from file object and put it into string.*/
        /* convert string to int*/
                    int data = stoi(str);
                    append(data);
                }
            }
        

        newfile.close(); //close the file object.
        return head;
}
/* add node at the end of the list*/
    void append(int data)
    {
   /*  create and allocate node */
        Node* newNode = new Node; 
        Node* last = head; /* used in step 5*/
    /*  assign data to the node */
        newNode->data = data;
    /*  set next pointer of new node to null as its the last node*/
        newNode->next = NULL;
 
    /*  if list is empty, new node becomes first node */
        if (head == NULL)
        {
            head = newNode;
            return;
        }
 
/*  Else traverse till the last node */
        while (last->next != NULL)
        {
            last = last->next;
        
        }
 
    /*  Change the next of last node */
        last->next = newNode;
        return;
}

    void printList()
    {
        Node* newNode = head ;
        /* if List is empty do nothing*/
        if (head == NULL)
        {
            return;
        }
        else
        {
        /* Print all nodes by moving from node to node*/
            while(newNode != NULL)
            {
                if(newNode->next)
                {
                    cout<<newNode->data;
                    cout<<" -> ";
                    newNode = newNode->next;
                }
                else
                {
                    cout<<newNode->data;
                    newNode = newNode->next;                              
                }
            }
            cout<<endl;
        }
 };

    void splitList(Node *head, Node **front, Node **back)
    {
        Node *slow = head;
        Node *fast=head->next;
    
   /* Advance 'fast' two nodes, and advance 'slow' one node */
        while (fast != NULL) 
            {
                fast = fast->next;
                if (fast != NULL)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
            }
 
    /* 'slow' is before the midpoint in the list, so split it in two
    at that point. */
        *front = head;
        *back = slow->next;
        slow->next = NULL;    
} 



    Node *SortedMerge( Node *Lista, Node *Listb)
    {
        Node* result = NULL;     
        if (Lista == NULL)
        {    
            return Listb;        
        }
        else if (Listb == NULL)
        {
            return Lista;
        }
    
        else if (Lista->data <= Listb->data) 
        {
            result = Lista;
            result->next = SortedMerge(Lista->next, Listb);
        }
        else 
        {
            result = Listb;
            result->next =  SortedMerge(Lista, Listb->next);
        }
   

        return result;       
}

    void mergeSort(Node **source)
    {
        Node *head=*source;
        Node *a;
        Node *b;
    /* Base case -- length 0 or 1 */
        if ((head == NULL) || (head->next == NULL)) {
            return;
        }
    
    /* Split head into 'a' and 'b' sublists */
        splitList(head, &a, &b);    
    /* Recursively sort the sublists */
        mergeSort(&a);
        mergeSort(&b);  
    /* answer = merge the two sorted lists together */
        *source = SortedMerge(a, b);
    }
};
 
 
 /*MAIN functin*/

    int main(int argc, char **argv)
    {

        LinkedList _myList;
        _myList.createList();
        _myList.printList();
        LinkedList _a;
        LinkedList _b;
        LinkedList result;
        _myList.mergeSort(&_myList.head);
        _myList.printList();
        return 0;
    }
