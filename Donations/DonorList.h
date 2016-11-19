/*
Albert, Brendan
Rioja-Naranjo, Kenia
RIP_Harambe
CS A250
November 18, 2016

Project 1, part E: Donor List Testing
*/

#ifndef DONORLIST_H
#define DONORLIST_H

#include "DonorType.h"

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class Node
{
public:
	Node() {}
	Node(const DonorType& theDonor, Node *theLink)
		: donor(theDonor), link(theLink) {}
	Node* getLink() const { return link; }
	DonorType getDonor() const { return donor; }
	void setDonor(const DonorType& theDonor) { donor = theDonor; }
	void setLink(Node *theLink) { link = theLink; }
private:
	DonorType donor;
	Node *link;			// pointer that points to next node
};


class DonorList
{
public:

	// default constructor
	DonorList();

	// addDonor
	void addDonor(const string& fName, const string& lName, int memNumber, double donated);

	// getNumberOfDonors
	int getNumberOfDonors() const;

	// searchID
	bool searchID(int memNum) const;

	// getTotalDonations
	double getTotalDonations() const;

	// deleteDonor
	void deleteDonor(int memNum);

	// destroyList
	void destroyList();

	// destructor
	~DonorList();

	// searchDonorByMemberNo
	bool searchDonorByMemberNo(string& fAndLName, double& donation, int id) const;

	// highestDonation
	double highestDonation(string& fName, string& lName, int& id) const;

	// printAllDonors
	void printAllDonors(string& donorInfo) const;

private:
	Node *first;
	Node *last;		// This is a singly-linked list with a pointer to the last node.
	int count;
};

#endif