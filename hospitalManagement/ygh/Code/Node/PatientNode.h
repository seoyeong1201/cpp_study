//
// Created by ongDD on 2022/06/01.
//

#ifndef HOSPITALMANAGEMENT_PATIENTNODE_H
#define HOSPITALMANAGEMENT_PATIENTNODE_H

#include "../PatientClass/Patient.h"
class PatientNode{
public:
    PatientNode();
    PatientNode(Patient*);
    ~PatientNode();

    Patient* patient;
    PatientNode* next;

    void setNextNode(PatientNode* nextNode);
    Patient* getCurrentNodeItem() const;
};

#endif //HOSPITALMANAGEMENT_PATIENTNODE_H
