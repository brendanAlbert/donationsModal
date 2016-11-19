#pragma once

#include "DonorList.h"

namespace Donations {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Text;
	using namespace System::Drawing;

	public ref class frmDeleteDonor : public System::Windows::Forms::Form
	{
	public:
		frmDeleteDonor(void)
		{
			InitializeComponent();
		}

		frmDeleteDonor(DonorList *list)
		{
			InitializeComponent();

			this->donorList = list;
		}

	protected:
		~frmDeleteDonor()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Label^  label5;
		System::Windows::Forms::TextBox^  txtMemberID;

		System::Windows::Forms::Label^  Label4;
		System::Windows::Forms::Label^  label2;
		System::Windows::Forms::Label^  labelName;
		System::Windows::Forms::Label^  labelDonation;

		System::Windows::Forms::Button^  btnClear;
		System::Windows::Forms::Button^  btnSearch;
		System::Windows::Forms::Button^  btnExit;

		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  btnDelete;

			 DonorList *donorList;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->txtMemberID = (gcnew System::Windows::Forms::TextBox());
				 this->Label4 = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->labelName = (gcnew System::Windows::Forms::Label());
				 this->labelDonation = (gcnew System::Windows::Forms::Label());
				 this->btnClear = (gcnew System::Windows::Forms::Button());
				 this->btnSearch = (gcnew System::Windows::Forms::Button());
				 this->btnExit = (gcnew System::Windows::Forms::Button());
				 this->btnDelete = (gcnew System::Windows::Forms::Button());
				 this->SuspendLayout();
				 // 
				 // label5
				 // 
				 this->label5->Location = System::Drawing::Point(32, 18);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(90, 13);
				 this->label5->TabIndex = 48;
				 this->label5->Text = L"Enter Member ID: ";
				 this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
				 // 
				 // txtMemberID
				 // 
				 this->txtMemberID->Location = System::Drawing::Point(128, 15);
				 this->txtMemberID->MaxLength = 8;
				 this->txtMemberID->Name = L"txtMemberID";
				 this->txtMemberID->Size = System::Drawing::Size(89, 20);
				 this->txtMemberID->TabIndex = 0;
				 // 
				 // Label4
				 // 
				 this->Label4->Location = System::Drawing::Point(14, 86);
				 this->Label4->Name = L"Label4";
				 this->Label4->Size = System::Drawing::Size(66, 16);
				 this->Label4->TabIndex = 49;
				 this->Label4->Text = L"Name:";
				 this->Label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 // 
				 // label2
				 // 
				 this->label2->Location = System::Drawing::Point(14, 115);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(66, 16);
				 this->label2->TabIndex = 51;
				 this->label2->Text = L"Donation:";
				 this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 // 
				 // labelName
				 // 
				 this->labelName->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				 this->labelName->Location = System::Drawing::Point(70, 86);
				 this->labelName->Name = L"labelName";
				 this->labelName->Size = System::Drawing::Size(149, 20);
				 this->labelName->TabIndex = 52;
				 // 
				 // labelDonation
				 // 
				 this->labelDonation->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				 this->labelDonation->Location = System::Drawing::Point(70, 111);
				 this->labelDonation->Name = L"labelDonation";
				 this->labelDonation->Size = System::Drawing::Size(149, 20);
				 this->labelDonation->TabIndex = 54;
				 // 
				 // btnClear
				 // 
				 this->btnClear->Location = System::Drawing::Point(139, 45);
				 this->btnClear->Name = L"btnClear";
				 this->btnClear->Size = System::Drawing::Size(80, 23);
				 this->btnClear->TabIndex = 55;
				 this->btnClear->Text = L"&Clear Entry";
				 this->btnClear->Click += gcnew System::EventHandler(this, &frmDeleteDonor::btnClear_Click);
				 // 
				 // btnSearch
				 // 
				 this->btnSearch->Location = System::Drawing::Point(58, 45);
				 this->btnSearch->Name = L"btnSearch";
				 this->btnSearch->Size = System::Drawing::Size(75, 23);
				 this->btnSearch->TabIndex = 1;
				 this->btnSearch->Text = L"&Search";
				 this->btnSearch->Click += gcnew System::EventHandler(this, &frmDeleteDonor::btnSearch_Click);
				 // 
				 // btnExit
				 // 
				 this->btnExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
				 this->btnExit->Location = System::Drawing::Point(139, 147);
				 this->btnExit->Name = L"btnExit";
				 this->btnExit->Size = System::Drawing::Size(80, 23);
				 this->btnExit->TabIndex = 2;
				 this->btnExit->Text = L"E&xit";
				 this->btnExit->Click += gcnew System::EventHandler(this, &frmDeleteDonor::btnExit_Click);
				 // 
				 // btnDelete
				 // 
				 this->btnDelete->Location = System::Drawing::Point(35, 147);
				 this->btnDelete->Name = L"btnDelete";
				 this->btnDelete->Size = System::Drawing::Size(75, 23);
				 this->btnDelete->TabIndex = 56;
				 this->btnDelete->Text = L"&Delete";
				 this->btnDelete->UseVisualStyleBackColor = true;
				 this->btnDelete->Click += gcnew System::EventHandler(this, &frmDeleteDonor::btnDelete_Click);
				 // 
				 // frmDeleteDonor
				 // 
				 this->AcceptButton = this->btnSearch;
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->CancelButton = this->btnExit;
				 this->ClientSize = System::Drawing::Size(237, 178);
				 this->Controls->Add(this->btnDelete);
				 this->Controls->Add(this->btnExit);
				 this->Controls->Add(this->btnSearch);
				 this->Controls->Add(this->btnClear);
				 this->Controls->Add(this->labelDonation);
				 this->Controls->Add(this->labelName);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->Label4);
				 this->Controls->Add(this->txtMemberID);
				 this->Controls->Add(this->label5);
				 this->MaximumSize = System::Drawing::Size(253, 217);
				 this->Name = L"frmDeleteDonor";
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				 this->Text = L"Search Donor";
				 this->Load += gcnew System::EventHandler(this, &frmDeleteDonor::frmDeleteDonor_Load);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion

			 // Load
	private: System::Void Donations::frmDeleteDonor::frmDeleteDonor_Load(System::Object^  sender, System::EventArgs^  e)
	{
		this->txtMemberID->Text = "";
	}

			 // Exit btn
			 System::Void Donations::frmDeleteDonor::btnExit_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 this->Close();
			 }

			 // Search btn
	private: System::Void Donations::frmDeleteDonor::btnSearch_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (IsPresent(txtMemberID, "Member ID") && IsInt32(txtMemberID, "Member ID")
			&& IsWithinRange(txtMemberID, "Member ID", 11111111, 99999999))
		{
			int memberID = Convert::ToInt32(txtMemberID->Text);
			string name;
			double donation = 0.0;

			if (donorList->searchDonorByMemberNo(name, donation, memberID))
			{
				labelName->Text = gcnew String(name.c_str());;
				labelDonation->Text = donation.ToString("c");
			}
			else
			{
				MessageBox::Show("Member ID: " + memberID +
					"\n\nThis ID number is not in the database." +
					"\nTry a different ID number.", "Error",
					MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}
	}

			 // Clear btn
	private: System::Void Donations::frmDeleteDonor::btnClear_Click(System::Object^  sender, System::EventArgs^  e)
	{
		txtMemberID->Clear();
		labelName->Text = "";
		labelDonation->Text = "";

		txtMemberID->Focus();
	}

			 // Delet btn
	private: System::Void btnDelete_Click(System::Object^  sender, System::EventArgs^  e) {

		string name;
		double donation = 0.0;
		int memberID = Convert::ToInt32(txtMemberID->Text);

		if (donorList->searchDonorByMemberNo(name, donation, memberID))
		{
			MessageBox::Show("Donor will be deleted from the database,"
				+ "\nand the correspondent donation will be"
				+ "\ndetracted from the total.", "Delete Donor");

			donorList->deleteDonor(memberID);
		}
		else
		{
			MessageBox::Show("Member ID: " + memberID +
				"\n\nThis ID number is not in the database." +
				"\nTry again.", "Error");
		}

		this->Close();
	}

			 // Validator: Text is present
	private: bool IsPresent(TextBox^ textBox, String^ name)
	{
		if (textBox->Text == "")
		{
			MessageBox::Show(name + " is a required field.", "Entry Error");
			textBox->Focus();
			return false;
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

			 // Validator: Text is within range
	private: bool IsWithinRange(TextBox^ textBox, String^ name,
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

	};
}