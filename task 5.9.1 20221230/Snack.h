#pragma once

#include <iostream>

using namespace std;

class Snack
{
public:
	Snack();
	Snack(const char* n);
	~Snack();

	void setName(const char* n);
	void setBarCode(unsigned long long b);
	void setWeight(unsigned int w);	
	const char* getName();
	const unsigned long long getBarCode();
	const unsigned int getWeight();
	void printInfo();

	friend class SnackSlot;
private:
	const char* name = nullptr;
	unsigned int weight = 0;
	unsigned long long barCode = 0;
	bool isInSlot = false;
};