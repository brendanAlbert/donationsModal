/*
Albert, Brendan
Rioja-Naranjo, Kenia
RIP_Harambe
CS A250
November 18, 2016

Project 1, part E: Donor List Testing
*/

#ifndef MEMBERTYPE_H
#define MEMBERTYPE_H

#include <iostream>
#include <string>

using namespace std;

class MemberType
{
public:

	MemberType();

	MemberType(const string &fName, const string &lName, int memNum);

	void setMemberInfo(const string &fName, const string &lName, int memNum);

	string getFirstName() const;

	string getLastName() const;

	int getMembershipNo() const;

	void printName() const;

	void printMemberInfo() const;

	~MemberType();

private:
	string firstName;
	string lastName;
	int membershipNum;
};

#endif