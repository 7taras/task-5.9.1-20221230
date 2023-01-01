#include "SnackSlot.h"

SnackSlot::SnackSlot()
{
}

SnackSlot::SnackSlot(unsigned int s) : maxSnacks(s)
{
}

SnackSlot::SnackSlot(unsigned int s, const char* n) : maxSnacks(s), name(n)
{
}

SnackSlot::~SnackSlot()
{
}

void SnackSlot::setName(const char* n)
{
	name = n;
}

const char* SnackSlot::getName()
{
	return name;
}

void SnackSlot::addSnack(Snack* sn)
{
	if (snackCount == maxSnacks)
	{
		cout << sn->name << " WASN'T added to " << name << ". This slot is full." << endl;		
	}
	else if (sn->isInSlot == true)
	{
		cout << sn->name << " WASN'T added to " << name << ". Snack is added to slot yet." << endl;
	}
	else
	{
		++snackCount;
		sn->isInSlot = true;
		cout << sn->name << " was added to " << name << endl;
	}
	return;
}

void SnackSlot::removeSnack(Snack* sn)
{
	--snackCount;
	sn->isInSlot = false;
	cout << sn->name << " was removed from " << name << endl;
}