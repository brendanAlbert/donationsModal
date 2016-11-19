#include "DonorList.h"

// default constructor
DonorList::DonorList()
{
	first = nullptr;
	last = nullptr;
	count = 0;
}

// addDonor
void DonorList::addDonor(const string& fName, const string& lName, 
						 int memNumber, double donated)
{
	DonorType donor(fName, lName, memNumber, donated);
	Node *newNode = new Node(donor, nullptr);

	if (first == nullptr)
		first = newNode;
	else
		last->setLink(newNode);

	last = newNode;
	count++;
}

// getNumberOfDonors
int DonorList::getNumberOfDonors() const
{
	return count;
}

// searchID
bool DonorList::searchID(int memNum) const
{
	Node* temp = first;

	while (temp != nullptr)
	{
		if (temp->getDonor().getMembershipNo() == memNum)
			return true;
		temp = temp->getLink();
	}

	return false;
}

// getTotalDonations
double DonorList::getTotalDonations() const
{
	Node* temp = first;
	double amount = 0.0;

	while (temp != nullptr)
	{
		amount += temp->getDonor().getAmountDonated();
		temp = temp->getLink();
	}

	return amount;
}

// deleteDonor
void DonorList::deleteDonor(int memNum)
{
	if (count > 0)
	{
		Node* temp = first;
		Node* prev = nullptr;

		while (temp != nullptr)
		{
			if (temp->getDonor().getMembershipNo() == memNum)
			{
				// if the donor was first...
				if (temp == first)
				{
					temp = first->getLink();
					delete first;
					// and alone in list...
					if (temp == nullptr)
						last = nullptr;
					first = temp;
				}
				// if donor not first in list...
				else
				{
					// if donor last in list...
					if (temp->getLink() == nullptr)
					{
						prev->setLink(nullptr);
						last = prev;
					}
					// in middle somewhere...
					else
						prev->setLink(temp->getLink());
					delete temp;
					temp = nullptr;
				}
				count--;
			}
			prev = temp;
			if (temp != nullptr)
				temp = temp->getLink();
		}
	}
}

// destroyList
void DonorList::destroyList()
{
	if (first != nullptr)
	{
		Node* temp = first;
		Node* prev = nullptr;

		while (temp != nullptr)
		{
			prev = temp;
			temp = temp->getLink();
			delete prev;
			prev = nullptr;
		}
		delete temp;
		temp = nullptr;
		count = 0;
		first = nullptr;
		last = nullptr;
	}
}

// destructor
DonorList::~DonorList()
{
	destroyList();
}

// searchDonorByMemberNo
bool DonorList::searchDonorByMemberNo(string& fAndLName, double& donation, 
									      int id) const
{
	Node* temp = first;

	while (temp != nullptr)
	{
		if (temp->getDonor().getMembershipNo() == id)
		{
			fAndLName = temp->getDonor().getLastName() + ", ";
			fAndLName += temp->getDonor().getFirstName();
			donation = temp->getDonor().getAmountDonated();
			return true;
		}

		temp = temp->getLink();
	}

	return false;
}

// highestDonation
double DonorList::highestDonation(string& fName, string& lName, int& id) const
{
	Node* temp = first;
	double largestDonation = 0.0;

	while (temp != nullptr)
	{
		if (temp->getDonor().getAmountDonated() > largestDonation)
		{
			largestDonation = temp->getDonor().getAmountDonated();
			id = temp->getDonor().getMembershipNo();
			fName = temp->getDonor().getFirstName();
			lName = temp->getDonor().getLastName();
		}

		temp = temp->getLink();
	}

	return largestDonation;
}

//printAllDonors
void DonorList::printAllDonors(string& donorInfo) const
{
	Node* temp = first;

	while (temp != nullptr)
	{
		donorInfo += to_string(temp->getDonor().getMembershipNo()) 
				     + " - " + temp->getDonor().getLastName() 
			         + ", " + temp->getDonor().getFirstName() + "\n";
		temp = temp->getLink();
	}
}