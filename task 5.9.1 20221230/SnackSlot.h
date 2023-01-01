#pragma once

#include <iostream>
#include "Snack.h"

using namespace std;

class SnackSlot
{
public:
	SnackSlot();
	SnackSlot(unsigned int s);
	SnackSlot(unsigned int s, const char* n);
	~SnackSlot();

	void setName(const char* n);
	const char* getName();

	void addSnack(Snack* sn);
	void removeSnack(Snack* sn);

	friend class VendingMachine;
private:
	unsigned int snackCount = 0;
	unsigned int maxSnacks = 0;
	const char* name = nullptr;
	bool isInMachine = false;
};