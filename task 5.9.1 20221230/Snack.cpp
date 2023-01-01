#include "Snack.h"

Snack::Snack()
{
}

Snack::Snack(const char* n) : name(n)
{
}

Snack::~Snack()
{
}

void Snack::setName(const char* n)
{
	name = n;
	return;
}

void Snack::setBarCode(unsigned long long b)
{
	barCode = b;
	return;
}

void Snack::setWeight(unsigned int w)
{
	weight = w;
	return;
}

const char* Snack::getName()
{
	return name;
}

const unsigned long long Snack::getBarCode()
{
	return barCode;
}

const unsigned int Snack::getWeight()
{
	return weight;
}

void Snack::printInfo()
{
	cout << "This snack is " << name;
	if (weight)
	{
		cout << ", weight is " << weight << " gram";
	}
	else 
	{
		cout << ", weight is unknown";
	}
	if (barCode)
	{
		cout << ", barcode " << barCode << '.' << endl;
	}
	else
	{
		cout << ", barcode is unknown." << endl;
	}
	return;
}