/*
Albert, Brendan
Rioja-Naranjo, Kenia
RIP_Harambe
CS A250
November 18, 2016

Project 1, part E: Donor List Testing
*/

#ifndef DONORTYPE_H
#define DONORTYPE_H

#include "MemberType.h"
#include <iomanip>

class DonorType : public MemberType
{
public:

	DonorType();

	DonorType(const string &newFirst, const string &newLast,
		int newMemberNumber, double newDonation);

	void setDonorInfo(const string &newFirst, const string &newLast,
		int newMemberNumber, double newDonation);

	void setAmountDonated(double newDonation);

	double getAmountDonated() const;

	void printDonor() const;

	void printDonation() const;

	~DonorType();

private:
	double donation;
};

#endif