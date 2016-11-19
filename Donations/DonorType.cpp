#include "DonorType.h"

DonorType::DonorType()
{
	donation = 0.0;
}

DonorType::DonorType(const string &newFirst, const string &newLast,
	int newMemberNumber, double newDonation) : MemberType(newFirst, newLast, newMemberNumber)
{
	donation = newDonation;
}

void DonorType::setDonorInfo(const string &newFirst, const string &newLast,
	int newMemberNumber, double newDonation)
{
	setMemberInfo(newFirst, newLast, newMemberNumber);
	donation = newDonation;
}

void DonorType::setAmountDonated(double newDonation)
{
	donation = newDonation;
}

double DonorType::getAmountDonated() const
{
	return donation;
}

void DonorType::printDonor() const
{
	printMemberInfo();
}

void DonorType::printDonation() const
{
	printName();
	cout << showpoint << fixed << setprecision(2);
	cout << "    Donation amount: $" << donation << endl;
}

DonorType::~DonorType(){}