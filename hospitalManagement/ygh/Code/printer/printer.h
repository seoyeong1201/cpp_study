//
// Created by ongDD on 2022/05/31.
//

#ifndef HOSPITALMANAGEMENT_PRINTER_H
#define HOSPITALMANAGEMENT_PRINTER_H

using namespace std;

class Printer
{
private:
    string printerName;
public:
    Printer(string);
    void printTitle();
    void printMainMenu();
    void printClinicMenu();
    void inputHandler(int);
    void Exit();
};

#endif //HOSPITALMANAGEMENT_PRINTER_H
