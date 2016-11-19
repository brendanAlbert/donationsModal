#include "frmDonations.h"


// Exit btn
System::Void Donations::frmDonations::btnExit_Click
(System::Object^  sender, System::EventArgs^  e)
{
	this->Close();
}

// Select btn
System::Void Donations::frmDonations::btnSelect_Click
(System::Object^  sender, System::EventArgs^  e)
{
	if (radioBtnSearch->Checked)
	{
		if (donorList->getNumberOfDonors() == 0)
			MessageBox::Show("No donations were made.\n \
				Search cannot be completed.", "Search Donor");
		else
		{
			Form^ searchForm = gcnew frmSearchDonor(donorList);
			searchForm->ShowDialog();
		}
	}
	else if (radioBtnTotal->Checked)
	{
		if (donorList->getNumberOfDonors() == 0)
		{
			MessageBox::Show("No donations were made.", "Total Donations");
		}
		else
		{
			String^ str = donorList->getTotalDonations().ToString("c");
			String^ donations = donorList->getNumberOfDonors().ToString();
			MessageBox::Show("Total amount collected: " + str +
				"\n\nNumber of donations: " + donations, "Total Donations");
		}
	}
	else if (radioBtnHighest->Checked)
	{
		if (donorList->getNumberOfDonors() == 0)
			MessageBox::Show("No donations were made.", "Highest Donation");
		else
		{
			string fName, lName;
			int memberNo = 0;
			double highest = donorList->highestDonation(fName, lName, memberNo);

			String^ firstName = gcnew String(fName.c_str());
			String^ lastName = gcnew String(lName.c_str());

			String^ str = gcnew String(highest.ToString("c"));

			MessageBox::Show("Highest amount collected: " + str +
				"\n\nDonated by: " + lastName + ", " + firstName +
				"\nMember ID: " + memberNo, "Highest Donation");
		}
	}
	else if (radioBtnDonors->Checked)
	{
		string input;
		donorList->printAllDonors(input);

		String^ str = gcnew String(input.c_str());

		MessageBox::Show(str, "Donors");
	}
	else
		MessageBox::Show("Please, make a selection.", "Error",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation); 
}

// Add btn
System::Void Donations::frmDonations::btnAdd_Click
(System::Object^  sender, System::EventArgs^  e)
{
	radioBtnDonors->Checked = false;
	radioBtnHighest->Checked = false;
	radioBtnSearch->Checked = false;
	radioBtnTotal->Checked = false;

	Form^ addForm = gcnew frmAddDonor(donorList);
	addForm->ShowDialog();
}

// Delete btn
System::Void Donations::frmDonations::btnDelete_Click
(System::Object^  sender, System::EventArgs^  e)
{
	radioBtnDonors->Checked = false;
	radioBtnHighest->Checked = false;
	radioBtnSearch->Checked = false;
	radioBtnTotal->Checked = false;

	Form^ addForm = gcnew frmDeleteDonor(donorList);
	addForm->ShowDialog();
}



