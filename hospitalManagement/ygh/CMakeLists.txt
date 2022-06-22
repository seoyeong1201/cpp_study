cmake_minimum_required(VERSION 3.20)
project(hospitalManagement)

set(CMAKE_CXX_STANDARD 14)
set(Headers Clinic/Clinic.h)
set(Headers printer/printer.h)
set(Headers LinkedList/LinkedList.h)
set(Headers PatientClass/abstractPatient.h Patient.h NormalPatient.h UrgentPatient.h patientHeaders.h)
set(Headers Node/Node.h)
add_executable(hospitalManagement ${PROJECT_SOURCE_DIR}/main.cpp
        printer/printer.cpp
        PatientClass/Patient.cpp PatientClass/NormalPatient.cpp PatientClass/UrgentPatient.cpp
        Node/PatientNode.cpp
        LinkedList/LinkedList.cpp
        Clinic/Clinic.cpp
        )

