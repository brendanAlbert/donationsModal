#include "DonorList.h"

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void createCandidateList(ifstream& infile, DonorList *donorList)
{
	string  fName, lName;
	int memberID;
	double donation;

	while (!infile.eof())
	{
		infile >> fName >> lName >> memberID >> donation;

		donorList->addDonor(fName, lName, memberID, donation);
	}
}

void readDonorData(DonorList *donorList)
{
	ifstream infile;

	infile.open("donors_data.txt");

	if (!infile)
	{
		cerr << "Input file does not exist." << endl;
		exit(1);
	}

	createCandidateList(infile, donorList);

	infile.close();
}

