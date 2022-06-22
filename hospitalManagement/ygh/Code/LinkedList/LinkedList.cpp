//
// Created by ongDD on 2022/06/01.
//

#include "LinkedList.h"
LinkedList::LinkedList()
{
    head = new PatientNode(NULL);
    numItems = 0;
}


void LinkedList::addFirst(Patient* patient)
{
    PatientNode* patientNode = new PatientNode(patient);
    patientNode->next = head->next;
    head->next = patientNode;
    increaseNum();
}

void LinkedList::add(Patient* patient)
{
    PatientNode* patientNode = new PatientNode(patient);
    PatientNode* tmp = head;
    while(tmp->next!= NULL)
    {
        tmp = tmp->next;
    }
    tmp->setNextNode(patientNode);
    increaseNum();
}

void LinkedList::removeFirst()
{
    PatientNode* tmp;
    tmp = head->next;
    head->next = tmp->next;
    delete tmp;
    decreaseNum();
}

 PatientNode* LinkedList::getFirst() const
 {
    return head->next;
 }
 PatientNode* LinkedList::getIndexNode(int index) const
 {
    if(index > numItems){
        cout << "index out of range" << endl;
        return NULL;
    }
    PatientNode* tmp;
    tmp = head;
    for(int i=1; i<=index; i++){
        tmp = tmp -> next;
    }
    return tmp;

 }
 int LinkedList::size() const
 {
    return numItems;
 }

 void LinkedList::showAllElement() const
 {
     int counter =0;
     PatientNode* tmp;
     tmp = head;
     while(tmp->next != NULL){
         counter++;
         tmp = tmp->next;
         Patient* tmpPatient = tmp->getCurrentNodeItem();
         cout << "--------------------------------" << endl;
         cout <<"    " << counter <<"th Patient Information" << endl;
         cout << "--------------------------------" << endl;
         tmpPatient->showPatientInfo();
         cout << endl << endl;
     }
 }

 bool LinkedList::isEmpty() const
 {
    return numItems == 0;
 }

void LinkedList::increaseNum(){numItems++;}
void LinkedList::decreaseNum(){numItems--;}