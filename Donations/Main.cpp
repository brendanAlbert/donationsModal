// Program entry

#include "frmDonations.h"
#include "InputHandler.h"
#include "DonorList.h"

using namespace System::Windows::Forms;

[System::STAThreadAttribute]

int main(cli::array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	DonorList *donorList = new DonorList;
	readDonorData(donorList);

	Donations::frmDonations form(donorList);
	Application::Run(%form);

	delete donorList;

	return 0;
}