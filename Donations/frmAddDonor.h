#pragma once

#include "DonorList.h"
#include <msclr\marshal_cppstd.h>

namespace Donations {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	public ref class frmAddDonor : public System::Windows::Forms::Form
	{
	public:
		frmAddDonor(void)
		{
			InitializeComponent();
		}

		frmAddDonor(DonorList *list)
		{
			InitializeComponent();

			this->donorList = list;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmAddDonor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::Label^  label1;
		System::Windows::Forms::Label^  label2;
		System::Windows::Forms::Label^  label3;

		System::Windows::Forms::TextBox^  txtLastName;
		System::Windows::Forms::TextBox^  txtFirstName;
	private: System::Windows::Forms::TextBox^  txtMemberID;



		System::Windows::Forms::Button^  btnAddDonor;
		System::Windows::Forms::Button^  btnCancel;

		System::ComponentModel::Container ^components;
		System::Windows::Forms::Label^  label4;
		System::Windows::Forms::TextBox^  txtDonation;

		DonorList *donorList;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->txtMemberID = (gcnew System::Windows::Forms::TextBox());
			this->btnAddDonor = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtDonation = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Last name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"First name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Member ID:";
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(68, 19);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(150, 20);
			this->txtLastName->TabIndex = 0;
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(68, 45);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(149, 20);
			this->txtFirstName->TabIndex = 1;
			// 
			// txtMemberID
			// 
			this->txtMemberID->Location = System::Drawing::Point(68, 71);
			this->txtMemberID->Name = L"txtMemberID";
			this->txtMemberID->Size = System::Drawing::Size(89, 20);
			this->txtMemberID->TabIndex = 3;
			// 
			// btnAddDonor
			// 
			this->btnAddDonor->Location = System::Drawing::Point(42, 138);
			this->btnAddDonor->Name = L"btnAddDonor";
			this->btnAddDonor->Size = System::Drawing::Size(89, 23);
			this->btnAddDonor->TabIndex = 5;
			this->btnAddDonor->Text = L"&Add Donor";
			this->btnAddDonor->Click += gcnew System::EventHandler(this, &frmAddDonor::btnAddDonor_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Location = System::Drawing::Point(137, 138);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(80, 23);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"&Cancel";
			this->btnCancel->Click += gcnew System::EventHandler(this, &frmAddDonor::btnCancel_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Donation:";
			// 
			// txtDonation
			// 
			this->txtDonation->Location = System::Drawing::Point(68, 97);
			this->txtDonation->Name = L"txtDonation";
			this->txtDonation->Size = System::Drawing::Size(89, 20);
			this->txtDonation->TabIndex = 4;
			// 
			// frmAddDonor
			// 
			this->AcceptButton = this->btnAddDonor;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnCancel;
			this->ClientSize = System::Drawing::Size(225, 176);
			this->Controls->Add(this->txtDonation);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnAddDonor);
			this->Controls->Add(this->txtMemberID);
			this->Controls->Add(this->txtFirstName);
			this->Controls->Add(this->txtLastName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(241, 215);
			this->MinimumSize = System::Drawing::Size(241, 215);
			this->Name = L"frmAddDonor";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmAddDonor";
			this->Load += gcnew System::EventHandler(this, &frmAddDonor::frmAddDonor_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			
		// Load
		private: System::Void Donations::frmAddDonor::frmAddDonor_Load(System::Object^  sender, System::EventArgs^  e)
		{
			txtLastName->Text = "";
			txtFirstName->Text = "";
			txtMemberID->Text = "";
			txtDonation->Text = "";
		}

		// Cancel btn
		private: System::Void Donations::frmAddDonor::btnCancel_Click(System::Object^  sender, System::EventArgs^  e)
		{
			this->Close();
		}

		//	Add donor btn
		private: System::Void Donations::frmAddDonor::btnAddDonor_Click(System::Object^  sender, System::EventArgs^  e)
		{

			//retrieve information from text box

			if (IsPresent(txtLastName, "Last name"))
			{
				String^ lNameText = Convert::ToString(txtLastName->Text);

				if (IsPresent(txtFirstName, "First name"))
				{
					String^ fNameText = Convert::ToString(txtFirstName->Text);

					if (IsPresent(txtMemberID, "Member ID") && IsInt32(txtMemberID, "Member ID")
						&& IDIsWithinRange(txtMemberID, "Member ID", 11111111, 99999999))
					{
						int idNumber = Convert::ToInt32(txtMemberID->Text);

						if (IsPresent(txtDonation, "Donation") && IsInt32(txtDonation, "Donation")
							&& DonationIsWithinRange(txtDonation, "Donation", 10, 1000000))
						{
							//search that ID is not already in the list
							if (donorList->searchID(idNumber))
							{
								MessageBox::Show("Cannot assign an existing ID.\n\nPlease, retry.", "Error");
								txtMemberID->Clear();
								txtMemberID->Focus();
							}
							else
							{
								//convert and add donor to list
								string fName = msclr::interop::marshal_as<std::string>(fNameText);
								string lName = msclr::interop::marshal_as<std::string>(lNameText);
								double donation = Convert::ToDouble(txtDonation->Text);
								donorList->addDonor(fName, lName, idNumber, donation);

								//convert data for message box
								String^ id = gcnew String(idNumber.ToString());
								String^ donationAmount = gcnew String(donation.ToString("c"));

								MessageBox::Show("A new donation has been added.\n\n"
									+ "Member ID: " + id + "\nName: " + lNameText + ", " + fNameText
									+ "\nDonation amount: " + donation.ToString("c"), "New Donation");
							}
						}
					}
				}
			}
		}

		// Validator: Text is present
		private: bool IsPresent(TextBox^ textBox, String^ name)
		{
			if (textBox->Text == "")
			{
				MessageBox::Show(name + " is a required field.", "Entry Error");
				textBox->Focus();
				return false;
				IsPresent(textBox, name);
			}
			return true;
		}

		// Validator: Text is integer
		private: bool IsInt32(TextBox^ textBox, String^ name)
		{
			try
			{
				Convert::ToInt32(textBox->Text);
				return true;
			}
			catch (FormatException^)
			{
				MessageBox::Show(name + " must be a valid integer.", "Entry Error");
				textBox->Focus();
				return false;
			}
		}

		// Validator: ID is within range
		private: bool IDIsWithinRange(TextBox^ textBox, String^ name,
			double min, double max)
		{
			double number = Convert::ToDouble(textBox->Text);
			if (number < min || number > max)
			{
				MessageBox::Show(name + " must be between " + min +
					" and " + max + ".", "Entry Error");
				textBox->Focus();
				return false;
			}
			return true;
		}


		// Validator: Text is within range
		private: bool DonationIsWithinRange(TextBox^ textBox, String^ name,
			double min, double max)
		{
			double number = Convert::ToDouble(textBox->Text);
			if (number < min || number > max)
			{
				MessageBox::Show(name + " must be between $" + min +
					".00 and $" + max + ".00.", "Entry Error");
				textBox->Focus();
				return false;
			}
			return true;
		}

};
}
