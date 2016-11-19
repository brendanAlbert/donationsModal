#include  "MemberType.h"

MemberType::MemberType()
{
	membershipNum = 0;
}

MemberType::MemberType(const string &fName, const string &lName, int memNum)
{
	firstName = fName;
	lastName = lName;
	membershipNum = memNum;
}

void MemberType::setMemberInfo(const string &fName, const string &lName, int memNum)
{
	firstName = fName;
	lastName = lName;
	membershipNum = memNum;
}

string MemberType::getFirstName() const
{
	return firstName;
}

string MemberType::getLastName() const
{
	return lastName;
}

int MemberType::getMembershipNo() const
{
	return membershipNum;
}

void MemberType::printName() const
{
	cout << lastName << ", " << firstName << endl;
}

void MemberType::printMemberInfo() const
{
	cout << membershipNum << "# - " << firstName << " " << lastName << endl;
}

MemberType::~MemberType() {}