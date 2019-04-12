//
// Created by ruben on 4/12/19.
//

#ifndef PC1_TWOLINKEDLIST_H
#define PC1_TWOLINKEDLIST_H
#include <string>
class TwoLinkedList {
    //Crear el nodo y sus partes//
    struct Node {
        double value;
        struct Node *next;
    };
        Node *head1;
        Node *head2;
        Node *tail1;
        Node *tail2;
    public:
        //Constructor
        TwoLinkedList() {
            head1 = nullptr;
            head2 = nullptr;
            tail1 = nullptr;
            tail2 = nullptr;
        };

        //Destructor
        ~TwoLinkedList();

        //
        void push_back1(double value);

        void push_back2(double value);
        std::string merge(double value);
        bool is_merged(bool t);
        std::string getlist();
};






#endif //PC1_TWOLINKEDLIST_H
