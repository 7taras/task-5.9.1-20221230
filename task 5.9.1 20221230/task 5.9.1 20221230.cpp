// task 5.9.1 20221230.cpp 

#include <iostream>
#include <string>
#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"

using namespace std;

int main()
{
    Snack* bounty = new Snack("Bounty");
    Snack* snickers = new Snack("Snickers");
    snickers->setWeight(90);
    snickers->setBarCode(40000424314);
    snickers->printInfo();
    bounty->printInfo();

    SnackSlot* slot = new SnackSlot(10);
    slot->setName("Slot #1");
    slot->addSnack(bounty);
    slot->addSnack(snickers);
    slot->removeSnack(bounty);

    VendingMachine* machine = new VendingMachine(12);
    machine->setName("Mashine #1");
    machine->setDescription("It's located in DEV's office.");
    cout << machine->getDescription() << endl;
    cout << machine->getName() << endl;
    cout << machine->getEmptySlotsCount() << endl;
    machine->addSlot(slot);
    machine->printInfo();

    delete machine;
    delete slot;
    delete snickers;
    delete bounty;

    return 0;
}