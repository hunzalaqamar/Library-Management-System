#include <iostream>

#include "LMS.h"

using namespace std;

int main()
{
	DirectoryDocuments dD;

	dD.bookDetails();

	dD.docDetails();

	dD.executeSystem();
}
void loginMenu()
{
	system("COLOR 0B");
	cout << "\n\n**************************************************************************************************";
	cout << "\n\n				Library Management System               ";
	cout << "\n\n**************************************************************************************************";
	cout << "\n\n					Login Screen                      ";
	cout << "\n\n**************************************************************************************************";
	cout << "\n\nAre You A Student Or A Teacher Or a Library Staff Member ? ";
	cout << "\n\n1:Student Login ";
	cout << "\n\n2:Teacher Login ";
	cout << "\n\n3:Staff Login ";
	cout << "\n\n4:Exit Program ";
	cout << "\n\nYour Choice : ";
}
void studentMenu()
{
	system("CLS");
	cout << "\n\n**************************************************************************************************";
	cout << "\n\n						Student Menu               ";
	cout << "\n\n**************************************************************************************************";
	cout << "\n\n1:Search Books To Issue ";
	cout << "\n\n2:See Issued Books ";
	cout << "\n\n3:Return Book ";
	cout << "\n\n4:Re-Issue Books ";
	cout << "\n\n5:Return To Login Menu";
	cout << "\n\nYour Choice : ";
}

void teacherMenu()
{
	system("CLS");
	cout << "\n\n**************************************************************************************************";
	cout << "\n\n						Teacher Menu               ";
	cout << "\n\n**************************************************************************************************";
	cout << "\n\n1:Search Books To Issue ";
	cout << "\n\n2:See Issued Books ";
	cout << "\n\n3:Return Book ";
	cout << "\n\n4:Re-Issue Books ";
	cout << "\n\n5:Return To Login Menu";
	cout << "\n\nYour Choice : ";
}

void staffMenu()
{
	system("CLS");
	cout << "\n\n**************************************************************************************************";
	cout << "\n\n						Staff Menu		            ";
	cout << "\n\n**************************************************************************************************";
	cout << "\n\n1:Search Books To Issue ";
	cout << "\n\n2:See Issued Books ";
	cout << "\n\n3:Return Book ";
	cout << "\n\n4:Re-Issue Books ";
	cout << "\n\n5:Remove Fine ";
	cout << "\n\n6:Search For A Book ";
	cout << "\n\n7:Enter New Books ";
	cout << "\n\n8:Return To Login Menu";
	cout << "\n\nYour Choice : ";
}

