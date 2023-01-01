#pragma once

#include <iostream>
#include "SnackSlot.h"

using namespace std;

class VendingMachine
{
public:
	VendingMachine();
	VendingMachine(unsigned int m);
	~VendingMachine();

	void setName(const char* n);
	const char* getName();
	void setDescription(const char* d);
	const char* getDescription();

	int getEmptySlotsCount();

	void addSlot(SnackSlot* ss);
	void removeSlot(SnackSlot* ss);

	void printInfo();
private:
	unsigned int slotCount = 0;
	unsigned int maxSlots = 0;
	const char* name = nullptr;
	const char* description = nullptr;
};