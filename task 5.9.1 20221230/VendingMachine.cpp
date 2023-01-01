#include "VendingMachine.h"

VendingMachine::VendingMachine()
{
}

VendingMachine::VendingMachine(unsigned int m) : maxSlots(m)
{
}

VendingMachine::~VendingMachine()
{
}

void VendingMachine::setName(const char* n)
{
	name = n;
}

const char* VendingMachine::getName()
{
	return name;
}

void VendingMachine::setDescription(const char* d)
{
	description = d;
}

const char* VendingMachine::getDescription()
{
	return description;
}

int VendingMachine::getEmptySlotsCount()
{
	return (maxSlots - slotCount);
}

void VendingMachine::addSlot(SnackSlot* ss)
{
	if (slotCount == maxSlots)
	{
		cout << ss->name << " WASN'T added to " << name << ". This Vending mashine is full." << endl;
	}
	else if (ss->isInMachine == true)
	{
		cout << ss->name << " WASN'T added to " << name << ". Slot is added to mashine yet." << endl;
	}
	else
	{
		++slotCount;
		ss->isInMachine = true;
		cout << ss->name << " was added to " << name << endl;
	}
	return;
}

void VendingMachine::removeSlot(SnackSlot* ss)
{
	--slotCount;
	ss->isInMachine = false;
	cout << ss->name << " was removed from " << name << endl;
	return;
}

void VendingMachine::printInfo()
{
	cout << "Name: " << name << " Description: " << description << endl;
	cout << "Total " << maxSlots << " slots. " << slotCount << " is busy. " << (maxSlots - slotCount) << " is empty." << endl;
	return;
}