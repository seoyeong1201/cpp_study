//
// Created by ongDD on 2022/06/01.
//

#ifndef HOSPITALMANAGEMENT_LINKEDLIST_H
#define HOSPITALMANAGEMENT_LINKEDLIST_H

#include "../PatientClass/Patient.h"
#include "../Node/PatientNode.h"

class LinkedList{
private:
    int numItems;
    PatientNode* head;
public:
    LinkedList();
    void add(Patient*);
    void addFirst(Patient*);
    void removeFirst();
    PatientNode* getFirst() const;
    PatientNode* getIndexNode(int) const;
    int size() const;
    void showAllElement() const;
    bool isEmpty() const;

    void increaseNum();
    void decreaseNum();
};

#endif //HOSPITALMANAGEMENT_LINKEDLIST_H
