#pragma once

#include "DonorList.h"
#include "frmSearchDonor.h"
#include "frmAddDonor.h"
#include "frmDeleteDonor.h"

namespace Donations {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Text;
	using namespace System::Drawing;


	public ref class frmDonations : public System::Windows::Forms::Form
	{
	public:
		frmDonations(void)
		{
			InitializeComponent();
		}

		frmDonations(DonorList *list)
		{
			InitializeComponent();

			donorList = list;
		}

	protected:
		~frmDonations()
		{
			if (components)
			{
				delete components;
			}
		}

	private: 
		System::Windows::Forms::Label^  label1;
		System::Windows::Forms::GroupBox^  selectionGroupBox;

		System::Windows::Forms::RadioButton^  radioBtnDonors;
		System::Windows::Forms::RadioButton^  radioBtnHighest;
		System::Windows::Forms::RadioButton^  radioBtnTotal;
		System::Windows::Forms::RadioButton^  radioBtnSearch;

		System::Windows::Forms::Button^  btnSelect;
		System::Windows::Forms::Button^  btnExit;

		System::Windows::Forms::Button^  btnAdd;
		System::Windows::Forms::Button^  btnDelete;

		System::ComponentModel::Container ^components;	

		DonorList *donorList;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->selectionGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->radioBtnDonors = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtnHighest = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtnTotal = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtnSearch = (gcnew System::Windows::Forms::RadioButton());
			this->btnSelect = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->selectionGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Please, select an option:";
			// 
			// selectionGroupBox
			// 
			this->selectionGroupBox->Controls->Add(this->radioBtnDonors);
			this->selectionGroupBox->Controls->Add(this->radioBtnHighest);
			this->selectionGroupBox->Controls->Add(this->radioBtnTotal);
			this->selectionGroupBox->Controls->Add(this->radioBtnSearch);
			this->selectionGroupBox->Location = System::Drawing::Point(30, 27);
			this->selectionGroupBox->Name = L"selectionGroupBox";
			this->selectionGroupBox->Size = System::Drawing::Size(143, 169);
			this->selectionGroupBox->TabIndex = 1;
			this->selectionGroupBox->TabStop = false;
			// 
			// radioBtnDonors
			// 
			this->radioBtnDonors->Location = System::Drawing::Point(17, 128);
			this->radioBtnDonors->Name = L"radioBtnDonors";
			this->radioBtnDonors->Size = System::Drawing::Size(94, 17);
			this->radioBtnDonors->TabIndex = 3;
			this->radioBtnDonors->Text = L"Display donors";
			this->radioBtnDonors->UseVisualStyleBackColor = true;
			// 
			// radioBtnHighest
			// 
			this->radioBtnHighest->Location = System::Drawing::Point(17, 92);
			this->radioBtnHighest->Name = L"radioBtnHighest";
			this->radioBtnHighest->Size = System::Drawing::Size(105, 17);
			this->radioBtnHighest->TabIndex = 2;
			this->radioBtnHighest->Text = L"Highest donation";
			this->radioBtnHighest->UseVisualStyleBackColor = true;
			// 
			// radioBtnTotal
			// 
			this->radioBtnTotal->Location = System::Drawing::Point(17, 56);
			this->radioBtnTotal->Name = L"radioBtnTotal";
			this->radioBtnTotal->Size = System::Drawing::Size(96, 17);
			this->radioBtnTotal->TabIndex = 1;
			this->radioBtnTotal->Text = L"Donations total";
			this->radioBtnTotal->UseVisualStyleBackColor = true;
			// 
			// radioBtnSearch
			// 
			this->radioBtnSearch->Location = System::Drawing::Point(17, 20);
			this->radioBtnSearch->Name = L"radioBtnSearch";
			this->radioBtnSearch->Size = System::Drawing::Size(117, 17);
			this->radioBtnSearch->TabIndex = 0;
			this->radioBtnSearch->Text = L"Search donor by ID";
			this->radioBtnSearch->UseVisualStyleBackColor = true;
			// 
			// btnSelect
			// 
			this->btnSelect->Location = System::Drawing::Point(47, 210);
			this->btnSelect->Name = L"btnSelect";
			this->btnSelect->Size = System::Drawing::Size(75, 23);
			this->btnSelect->TabIndex = 2;
			this->btnSelect->Text = L"&Select";
			this->btnSelect->UseVisualStyleBackColor = true;
			this->btnSelect->Click += gcnew System::EventHandler(this, &frmDonations::btnSelect_Click);
			// 
			// btnExit
			// 
			this->btnExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnExit->Location = System::Drawing::Point(191, 210);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 3;
			this->btnExit->Text = L"E&xit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &frmDonations::btnExit_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(183, 96);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(90, 23);
			this->btnAdd->TabIndex = 4;
			this->btnAdd->Text = L"Add donor";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &frmDonations::btnAdd_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(183, 148);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(90, 23);
			this->btnDelete->TabIndex = 5;
			this->btnDelete->Text = L"Delete donor";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &frmDonations::btnDelete_Click);
			// 
			// frmDonations
			// 
			this->AcceptButton = this->btnSelect;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnExit;
			this->ClientSize = System::Drawing::Size(289, 250);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnSelect);
			this->Controls->Add(this->selectionGroupBox);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(305, 289);
			this->MinimumSize = System::Drawing::Size(305, 289);
			this->Name = L"frmDonations";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Donations";
			this->selectionGroupBox->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: 
		System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e);

		System::Void btnSelect_Click(System::Object^  sender, System::EventArgs^  e);

		System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e);

		System::Void btnDelete_Click(System::Object^  sender, System::EventArgs^  e);
};
}
