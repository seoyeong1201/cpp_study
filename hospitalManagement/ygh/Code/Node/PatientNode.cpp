//
// Created by ongDD on 2022/06/01.
//

#include "PatientNode.h"

PatientNode::PatientNode():patient(NULL), next(NULL){};
PatientNode::PatientNode(Patient* patient):patient(patient) {}
PatientNode::~PatientNode()
{
    delete patient;
    delete next;
}

void PatientNode::setNextNode(PatientNode* nextNode){
    next = nextNode;
}

Patient* PatientNode::getCurrentNodeItem() const
{
    return patient;
}
