//
// Created by ruben on 4/12/19.
//

#include "TwoLinkedList.h"
#include <iostream>
using namespace std;

void TwoLinkedList::push_back1(double num)  {
    Node *newNode;
    Node *nodePtr; // se movera mediante la lista//
    newNode=new Node;
    newNode ->value = num ;
    newNode ->next= nullptr;
    //Si es que no hay nodos en la lista se debe hacer un newNode al primero//
    if(!head1)
        head1=newNode;
    else { // De lo contrario
        nodePtr = head1;//inicializar el proceso desde el primer nodo//
        while (nodePtr->next)//Condicion para que acceda desde el primer hasta el ultimo nodo//
            nodePtr = nodePtr->next;
        nodePtr->next = newNode;//Cuando llego al finar inserta un nuevo nodo
    }
}
void TwoLinkedList::push_back2(double num)  {
    Node *newNode;
    Node *nodePtr; // se movera mediante la lista//
    newNode=new Node;
    newNode ->value = num ;
    newNode ->next= nullptr;
    //Si es que no hay nodos en la lista se debe hacer un newNode al primero//
    if(!head2)
        head2=newNode;
    else { // De lo contrario
        nodePtr = head2;//inicializar el proceso desde el primer nodo//
        while (nodePtr->next)//Condicion para que acceda desde el primer hasta el ultimo nodo//
            nodePtr = nodePtr->next;
        nodePtr->next = newNode;//Cuando llego al finar inserta un nuevo nodo
    }
}
string TwoLinkedList::merge(double num){
    Node *tail;
    if (head1 == head2 && tail1 == tail2)
    {
        cout <<"Operacion duplicada"<< endl;
    }
    else{
        tail->value=num;
        cout <<"Operacion exitosa"<< endl;
    }
}
bool TwoLinkedList::is_merged(bool t) {

}


