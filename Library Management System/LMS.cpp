//this is the Library Management System cpp file which includes all the classes defination and function definations

#include <iostream>

#include <stdio.h>

#include "LMS.h"

#include <Windows.h>

#include <string>

using namespace std;

void loginMenu();

void studentMenu();

void teacherMenu();

void staffMenu();

Date::Date()
{
	day = 0;

	month = 0;

	year = 0;
}

Date::Date(int newDay, int newMonth, int newYear)
{
	day = newDay;

	month = newMonth;

	year = newYear;
}
int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

int Date::getYear()
{
	return year;
}

void Date::setDay(int newDay)
{
	day = newDay;
}

void Date::setMonth(int newMonth)
{
	month = newMonth;
}

void Date::setYear(int newYear)
{
	year = newYear;
}

Student::Student()
{
	studentId = "\0";

	booksCountForStudent = 0;

	sLoc = 0;
	
	bookLoc = 0;

	booksCountForStudent = 0;

	for (int i = 0; i < 3; i++)
	{
		issuedBookLocationsForStudent[i] = 0;
		sIndexLoc[i] = 0;
		sIssueBookLoc[i] = 0;
		sReturnBookLoc[i] = 0;
		issuedBookLocationsForStudent[i] = 0;
		issuedDocLocationsForStudent[i] = 0;
		fineForStudent[i] = 0;
	}
}

Student::Student(string newStudentId)
{
	studentId = newStudentId;
}

string Student::getStudentId()
{
	return studentId;
}

void Student::setStudentId(string newId)
{
	studentId = newId;
}

string Student::getStudentName()
{
	return studentName;
}

void Student::setStudentName(string newStudentName)
{
	studentName = newStudentName;
}

Teacher::Teacher()
{
	teacherId = "\0";

	booksCountForTeacher = 0;

	for (int i = 0; i < 10; i++)
	{
		issuedBookLocationsForTeacher[i] = 0;
		tIndexLoc[i] = 0;
		tIssueBookLoc[i] = 0;
		tReturnBookLoc[i] = 0;
		issuedDocLocationsForTeacher[i] = 0;
		fineForTeacher[i] = 0;
	}
}

Teacher::Teacher(string newTeacherId)
{
	teacherId = newTeacherId;
}

void Teacher::setTeacherId(string newTeacherId)
{
	teacherId = newTeacherId;
}

string Teacher::getTeacherId()
{
	return teacherId;
}

string Teacher::getTeacherName()
{
	return teacherName;
}

void Teacher::setTeacherName(string newTeacherName)
{
	teacherName = newTeacherName;
}

Staff::Staff()
{
	staffId = "\0";

	booksCountForStaff = 0;

	STLoc = 0; 
	
	STBookLoc = 0;

	for (int i = 0; i < 5; i++)
	{
		STIndexLoc[i] = 0;
		STIssueBookLoc[i] = 0;
		STReturnBookLoc[i] = 0;
		issuedBookLocationsForStaff[i] = 0;
		issuedDocLocationsForStaff[i] = 0;
	}
}

Staff::Staff(string newStaffId)
{
	staffId = newStaffId;
}

string Staff::getStaffId()
{
	return staffId;
}

void Staff::setStaffId(string newStaffId)
{
	staffId = newStaffId;
}

string Staff::getStaffName()
{
	return staffName;
}

void Staff::setStaffName(string newStaffName)
{
	staffName = newStaffName;
}
Document::Document()
{
	libraryCode = "\0";

	status="\0";

	category="\0";

	title="\0";

	dateOfPublication = "\0";
}

Document::Document(string title1, string dateOfPublication1, string libraryCode1, string status1, string category1)
{
	libraryCode = libraryCode1;

	dateOfPublication = dateOfPublication1;

	title = title1;

	status = status1;

	category = category1;
}

void Document::setTitle(string title1)
{
	title = title1;
}

void Document::setDOP(string dateOfPublication1)
{
	dateOfPublication = dateOfPublication1;
}

void Document::setLibraryCode(string libraryCode1)
{
	libraryCode = libraryCode1;
}

void Document::setStatus(string status1)
{
	status = status1;
}

void Document::setCategory(string category1)
{
	category = category1;
}

string Document::getLibraryCode()
{
	return libraryCode;
}

string Document::getStatus()
{
	return status;
}

string Document::getDocCategory()
{
	return category;
}

string Document::getDateOfPublication()
{
	return dateOfPublication;
}

string Document::getTitle()
{
	return title;
}

Book::Book()
{
	bookName = "\0";

	authorName = "\0";
	
	yearOfPublication = "\0";
	
	libraryCodeForBook = "\0";
	
	ISBN = "\0";
	
	category = "\0";
	
	statusOfBook = "\0";
	
	issueInfo = "\0";
	
	numberOfCopies = "\0";
	
	copyNumber = "\0";
}

Book::Book(string newBookName, string newAuthorName, string newYearOfPublication, string newLibraryCodeForBook, string newISBN, string newCategory, string newStatusOfBook, string newIssueInfo, string newNumberOfCopies, string newCopyNumber)
{
	bookName= newBookName;
	
	authorName= newAuthorName;
	
	yearOfPublication= newYearOfPublication;
	
	libraryCodeForBook= newLibraryCodeForBook;
	
	ISBN= newISBN;
	
	category= newCategory;
	
	statusOfBook= newStatusOfBook;
	
	issueInfo= newIssueInfo;
	
	numberOfCopies= newNumberOfCopies;
	
	copyNumber= newCopyNumber;
}

void Book::setBookName(string newBookName)
{
	bookName = newBookName;
}

void Book::setAuthorName(string newAuthorName)
{
	authorName = newAuthorName;
}

void Book::setYearOfPublication(string newYearOfPublication)
{
	yearOfPublication = newYearOfPublication;
}

void Book::setLibraryCodeForBook(string newLibraryCodeForBook)
{
	libraryCodeForBook = newLibraryCodeForBook;
}

void Book::setISBN(string newISBN)
{
	ISBN = newISBN;
}

void Book::setCategory(string newCategory)
{
	category = newCategory;
}

void Book::setStatusOfBook(string newStatusOfBook)
{
	statusOfBook = newStatusOfBook;
}

void Book::setIssueInfo(string newIssueInfo)
{
	issueInfo = newIssueInfo;
}

void Book::setNumberOfCopies(string newNumberOfCopies)
{
	numberOfCopies = newNumberOfCopies;
}

void Book::setCopyNumber(string newCopyNumber)
{
	copyNumber = newCopyNumber;
}

string Book::getBookName()
{
	return bookName;
}

string Book::getAuthorName()
{
	return authorName;
}

string Book::getYOP()
{
	return yearOfPublication;
}

string Book::getLCFB()
{
	return libraryCodeForBook;
}

string Book::getISBN()
{
	return ISBN;
}

string Book::getCategory()
{
	return category;
}

string Book::getSOB()
{
	return statusOfBook;
}

string Book::getIssueInfo()
{
	return issueInfo;
}

string Book::getNOC()
{
	return numberOfCopies;
}

string Book::getCN()
{
	return copyNumber;
}

void fineCalculationForStudent(int* fineForStudent,Date* returnBookDateForStudent,int &index);

void fineCalculationForTeacher(int* fineForTeacher, Date* returnBookDateForTeacher, int &index);

void DirectoryDocuments::bookDetails()
{
	int index = 1;

	listOfBooks[index] = Book("Biology", "Neil A.Campbell", "1987", "2211", "1564", "Biology", "Available", "Issued To None", "100", "5");

	index++;

	listOfBooks[index] = Book("The Selfish Gene", "Richard Dawkins", "1976", "1111", "6666", "Biology", "Available", "Issued To None", "10", "2");

	index++;

	listOfBooks[index] = Book("The Double Helix", "James D.Watson", "2008", "2221", "5432", "Biology", "Available", "Issued To None", "16", "3");

	index++;

	listOfBooks[index] = Book("The Diversity Of Life", "Edward O.Wilson", "1992", "2021", "2132", "Biology", "Available", "Issued To None", "163", "31");

	index++;

	listOfBooks[index] = Book("Acids, Bases and Salts", "BCIT", "2017", "7841", "6669", "Chemistry", "Available", "Issued To None", "188", "34");

	index++;

	listOfBooks[index] = Book("Elements of Scientific Agriculture", "John.Pitkin Norton", "2013", "7441", "1679", "Chemistry", "Available", "Issued To None", "88", "9");

	index++;

	listOfBooks[index] = Book("Lecture Notes On Engineering Chemistry", "Mr M Praveen", "2003", "7141", "0669", "Chemistry", "Available", "Issued To None", "80", "78");

	index++;

	listOfBooks[index] = Book("Inorganic Chemistry", "Prof. Joel Rosenthal", "2011", "7111", "0369", "Chemistry", "Available", "Issued To None", "186", "12");

	index++;

	listOfBooks[index] = Book("Faraday, Maxwell, and the Electromagnetic Field", "Nancy Forbes, Basil Mahon", "2014", "9871", "0749", "Physics", "Available", "Issued To None", "164", "102");

	index++;

	listOfBooks[index] = Book("Quantum", "Manjit Kumar", "2003", "9471", "0779", "Physics", "Available", "Issued To None", "111", "2");

	index++;

	listOfBooks[index] = Book("For The Love Of Physics", "Walter Levin", "2011", "3271", "1779", "Physics", "Available", "Issued To None", "100", "98");

	index++;

	listOfBooks[index] = Book("QED:The Strange Theory Of Light And Matter", "Richard P.Feynman", "1986", "1571", "1659", "Physics", "Available", "Issued To None", "200", "65");

	index++;

	listOfBooks[index] = Book("Charlotte's Web", "E.B White", "2006", "6221", "5800", "English", "Available", "Issued To None", "116", "34");

	index++;

	listOfBooks[index] = Book("The House On Mango Street", "Sandra Cisneros", "2001", "2121", "5399", "English", "Available", "Issued To None", "216", "43");

	index++;

	listOfBooks[index] = Book("Thirteen Reasons Why", "Jay Asher", "2015", "2223", "5112", "English", "Available", "Issued To None", "132", "5");

	index++;

	listOfBooks[index] = Book("Peter Pan", "J.M. Barrie", "2012", "0923", "5922", "English", "Available", "Issued To None", "122", "55");

	index++;

}
void DirectoryDocuments::docDetails()
{
	int index = 1;

	listOfDocs[index] = Document("The Times", "2019", "118", "Available","Newspaper");

	index++;

	listOfDocs[index] = Document("Dawn News", "2019", "123", "Available", "Newspaper");

	index++;

	listOfDocs[index] = Document("Geo News", "2019", "133", "Available", "Newspaper");

	index++;

	listOfDocs[index] = Document("Dunya News", "2019", "188", "Available", "Newspaper");

	index++;

	listOfDocs[index] = Document("Newyork Times", "2019", "180", "Available","Newspaper");

	index++;

	listOfDocs[index] = Document("National Geographic", "2019", "213", "Available", "Magazine");

	index++;

	listOfDocs[index] = Document("Reader's Digest", "2019", "241", "Available", "Magazine");

	index++;

	listOfDocs[index] = Document("Vogue", "2019", "421", "Available", "Magazine");

	index++;

	listOfDocs[index] = Document("Game Informer", "2019", "441", "Available", "Magazine");

	index++;

	listOfDocs[index] = Document("In Style", "2019", "521", "Available", "Magazine");

	index++;

	listOfDocs[index] = Document("Women's Day", "2019", "201", "Available", "Magazine");

	index++;

	listOfDocs[index] = Document("WIRED", "2019", "266", "Available", "Magazine");

	index++;

	listOfDocs[index] = Document("Lolita", "2019", "896", "Available", "Journal");

	index++;

	listOfDocs[index] = Document("Under The Volcano", "2019", "898", "Available", "Journal");

	index++;

	listOfDocs[index] = Document("Sons And Lovers", "2019", "896", "Available", "Journal");

	index++;

	listOfDocs[index] = Document("Darkness At Noon", "2019", "893", "Available", "Journal");

	index++;

	listOfDocs[index] = Document("The Grapes Of Wrath", "2019", "925", "Available", "Journal");

	index++;

	listOfDocs[index] = Document("1984", "2019", "936", "Available", "Journal");

	index++;

	listOfDocs[index] = Document("I,Claudius", "2019", "941", "Available", "Journal");

	index++;

	listOfDocs[index] = Document("Winesburg,OHIO", "2019", "935", "Available", "Journal");

	index++;

	listOfDocs[index] = Document("Henderson The Rain King", "2019", "922", "Available", "Journal");

	index++;

	listOfDocs[index] = Document("The Postman Always Rings Twice", "2019", "999", "Available", "Journal");
}

void DirectoryDocuments::executeSystem()
{
	system("CLS");

	int loginChoice = 0, smChoice = 0, tmChoice = 0, Cchoice, checkBook = 0, i = 0, i1 = 0, j = 0, k = 1, l = 0, m = 0, day, month, year, tempDay = 0, tempMonth = 0, tempYear = 0;

	string tempISBN, tempLC, id = "\0";

	studentObj[0].setStudentId("12345");
	
	studentObj[0].setStudentName("Hunzala");

	teacherObj[0].setTeacherId("111");

	teacherObj[0].setTeacherName("Farooq Ali");

	staffObj[0].setStaffId("0000");

	staffObj[0].setStaffName("Junaid");
	
	loginMenu();

	cin >> loginChoice;

	switch (loginChoice)

	{

		case 1:

		{
			while (1)
			{

				cin.ignore();

				system("CLS");

				cout << "\n\nEnter Student Id : ";

				getline(cin, id);

				if (id == studentObj[0].getStudentId())
				{
					cout << "\n\nId Verified Login Successfull\n\n";

					cout <<"Welcome "<<studentObj[0].getStudentName();
					
					cout << "\n\nPlease Wait....";

					Sleep(1500);

					while (1)
					{
						studentMenu();

						cin >> smChoice;

						switch (smChoice)
						{
						case 1:
						{
							system("CLS");

							cout << "\n\nChoose Category";

							for (i=1; i < 101; i++)
							{
								if (i < 100)
								{
									i1 = i + 1;
								}
								else
								{
									i1 = i;
								}
								if (listOfBooks[i].getCategory() != listOfBooks[i1].getCategory())
								{
									cout << "\n\n" << (k) << ":" << listOfBooks[i].getCategory();

									k++;
								}
							}
							for (i = 1; i < 101; i++)
							{
								if (i < 100)
								{
									i1 = i + 1;
								}
								else
								{
									i1 = i;
								}
								if (listOfDocs[i].getDocCategory() != listOfDocs[i1].getDocCategory())
								{
									cout << "\n\n" << (k) << ":" << listOfDocs[i].getDocCategory();

									k++;
								}
							}

							k = 1;

							cout << "\n\nYour Choice : ";

							cin >> Cchoice;

							switch (Cchoice)
							{
							case 1:
							{
								system("CLS");

								if (booksCountForStudent < 3)
								{
									cout << "\nWelcome To Biology Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books Have Been Issued To This Student ";
									
									system("Pause");

									break;
								}

								
								for (i = 1; i < 101; i++)
								{
									if ("Biology" == listOfBooks[i].getCategory())
									{
										listOfBooks[i].bookMenu(listOfBooks, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Book's ISBN To Issue It : ";

								getline(cin, tempISBN);

								for (i = 1; i < 101; i++)
								{
									if (tempISBN == listOfBooks[i].getISBN())
									{
										if (listOfBooks[i].getIssueInfo() == "Issued To None")
										{

											cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

											cin >> day >> month >> year;
						
											if (sLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStudent[sIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 7;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStudent[sIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStudent[sIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStudent[sIndexLoc[l]] = Date(day, month, year);

												}

												listOfBooks[i].setIssueInfo("Issued To Id No.12345");

												bookLoc = i;

												booksCountForStudent++;

												issuedBookLocationsForStudent[sIndexLoc[l]] = i;

												j++;

												l++;

												sLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStudent[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 7;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStudent[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStudent[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStudent[j] = Date(day, month, year);

												}

												listOfBooks[i].setIssueInfo("Issued To Id No.12345");

												bookLoc = i;

												issuedBookLocationsForStudent[m] = i;

												booksCountForStudent++;

												m++;

												j++;

												break;
											}

										}
										else
										{
											cout << "\n\nBook Is Already Issued Try Again With Another Book";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nBook Issued Successfully!";
								}
								else
								{
									cout << "\n\nBook Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;
							}

							case 2:
							{
								system("CLS");

								if (booksCountForStudent <3)
								{
									cout << "\nWelcome To Chemistry Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books Have Been Issued To This Student ";

									system("Pause");

									break;
								}

								for (i = 1; i < 101; i++)
								{
									if ("Chemistry" == listOfBooks[i].getCategory())
									{
										listOfBooks[i].bookMenu(listOfBooks, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Book's ISBN To Issue It : ";

								getline(cin, tempISBN);

								for (i = 1; i < 101; i++)
								{
									if (tempISBN == listOfBooks[i].getISBN())
									{
										if (listOfBooks[i].getIssueInfo() == "Issued To None")
										{

											cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (sLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStudent[sIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 7;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStudent[sIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStudent[sIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStudent[sIndexLoc[l]] = Date(day, month, year);

												}

												issuedBookLocationsForStudent[sIndexLoc[l]] = i;

												listOfBooks[i].setIssueInfo("Issued To Id No.12345");

												bookLoc = i;

												booksCountForStudent++;

												j++;

												l++;

												sLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStudent[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 7;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStudent[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStudent[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStudent[j] = Date(day, month, year);

												}

												listOfBooks[i].setIssueInfo("Issued To Id No.12345");

												bookLoc = i;

												booksCountForStudent++;

												issuedBookLocationsForStudent[m] = i;

												j++;

												m++;

												break;
											}
										}
										else
										{
											cout << "\n\nBook Is Already Issued Try Again With Another Book";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nBook Issued Successfully!";
								}
								else
								{
									cout << "\n\nBook Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;
							}

							case 3:
							{
								system("CLS");

								if (booksCountForStudent < 3)
								{
									cout << "\nWelcome To Physics Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books Have Been Issued To This Student ";

									system("Pause");

									break;
								}

								for (i = 1; i < 101; i++)
								{
									if ("Physics" == listOfBooks[i].getCategory())
									{
										listOfBooks[i].bookMenu(listOfBooks, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Book's ISBN To Issue It : ";

								getline(cin, tempISBN);

								for (i = 1; i < 101; i++)
								{
									if (tempISBN == listOfBooks[i].getISBN())
									{
										if (listOfBooks[i].getIssueInfo() == "Issued To None")
										{

											cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (sLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStudent[sIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 7;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStudent[sIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStudent[sIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStudent[sIndexLoc[l]] = Date(day, month, year);

												}

												listOfBooks[i].setIssueInfo("Issued To Id No.12345");

												bookLoc = i;

												booksCountForStudent++;

												issuedBookLocationsForStudent[sIndexLoc[l]] = i;

												j++;

												l++;

												sLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStudent[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 7;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStudent[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStudent[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStudent[j] = Date(day, month, year);

												}

												listOfBooks[i].setIssueInfo("Issued To Id No.12345");

												bookLoc = i;

												booksCountForStudent++;

												issuedBookLocationsForStudent[m] = i;

												m++;

												j++;

												break;
											}
										}
										else
										{
											cout << "\n\nBook Is Already Issued Try Again With Another Book";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nBook Issued Successfully!";
								}
								else
								{
									cout << "\n\nBook Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;
							}
							case 4:
							{
								system("CLS");

								if (booksCountForStudent < 3)
								{
									cout << "\nWelcome To English Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books Have Been Issued To This Student ";

									system("Pause");

									break;
								}
								
								for (i = 1; i <= 101; i++)
								{
									if ("English" == listOfBooks[i].getCategory())
									{
										listOfBooks[i].bookMenu(listOfBooks, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Book's ISBN To Issue It : ";

								getline(cin, tempISBN);

								for (int i = 1; i < 101; i++)
								{
									if (tempISBN == listOfBooks[i].getISBN())
									{
										if (listOfBooks[i].getIssueInfo() == "Issued To None")
										{

											cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (sLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStudent[sIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 7;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStudent[sIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStudent[sIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStudent[sIndexLoc[l]] = Date(day, month, year);

												}

												listOfBooks[i].setIssueInfo("Issued To Id No.12345");

												bookLoc = i;

												booksCountForStudent++;

												issuedBookLocationsForStudent[sIndexLoc[l]] = i;

												j++;

												l++;

												sLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStudent[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 7;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStudent[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStudent[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStudent[j] = Date(day, month, year);

												}

												listOfBooks[i].setIssueInfo("Issued To Id No.12345");

												bookLoc = i;

												booksCountForStudent++;

												issuedBookLocationsForStudent[m] = i;
												
												m++;

												j++;

												break;
											}
										}
										else
										{
											cout << "\n\nBook Is Already Issued Try Again With Another Book";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nBook Issued Successfully!";
								}
								else
								{
									cout << "\n\nBook Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;
							}
							case 5:
							{
								system("CLS");

								if (booksCountForStudent < 3)
								{
									cout << "\nWelcome To Newspaper Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books Have Been Issued To This Student ";

									system("Pause");

									break;
								}

								for (i = 1; i < 101; i++)
								{
									if ("Newspaper" == listOfDocs[i].getDocCategory())
									{
										listOfDocs[i].docMenu(listOfDocs, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Newspaper's Library Code To Issue It : ";

								getline(cin, tempLC);

								for (int i = 1; i < 101; i++)
								{
									if (tempLC == listOfDocs[i].getLibraryCode())
									{
										if (listOfDocs[i].getStatus() == "Available")
										{

											cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (sLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStudent[sIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 7;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStudent[sIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStudent[sIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStudent[sIndexLoc[l]] = Date(day, month, year);

												}

												listOfDocs[i].setStatus("Issued To Id No.12345");

												bookLoc = i;

												booksCountForStudent++;

												issuedDocLocationsForStudent[sIndexLoc[l]] = i;

												j++;

												l++;

												sLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStudent[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 7;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStudent[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStudent[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStudent[j] = Date(day, month, year);

												}

												listOfDocs[i].setStatus("Issued To Id No.12345");

												bookLoc = i;

												issuedDocLocationsForStudent[m] = i;

												booksCountForStudent++;

												m++;

												j++;

												break;
											}
										}
										else
										{
											cout << "\n\nDocument Is Already Issued Try Again With Another Document";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nDocument Issued Successfully!";
								}
								else
								{
									cout << "\n\nDocument Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;
							}
							case 6:
							{
								system("CLS");

								if (booksCountForStudent < 3)
								{
									cout << "\nWelcome To Magazine Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books Have Been Issued To This Student ";

									system("Pause");

									break;
								}

								for (i = 1; i < 101; i++)
								{
									if ("Magazine" == listOfDocs[i].getDocCategory())
									{
										listOfDocs[i].docMenu(listOfDocs, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Magazine's Library Code To Issue It : ";

								getline(cin, tempLC);

								for (int i = 1; i < 101; i++)
								{
									if (tempLC == listOfDocs[i].getLibraryCode())
									{
										if (listOfDocs[i].getStatus() == "Available")
										{

											cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (sLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStudent[sIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 7;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStudent[sIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStudent[sIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStudent[sIndexLoc[l]] = Date(day, month, year);

												}

												listOfDocs[i].setStatus("Issued To Id No.12345");

												bookLoc = i;

												issuedDocLocationsForStudent[sIndexLoc[l]] = i;

												booksCountForStudent++;

												j++;

												l++;

												sLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStudent[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 7;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStudent[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStudent[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStudent[j] = Date(day, month, year);

												}

												listOfDocs[i].setStatus("Issued To Id No.12345");

												bookLoc = i;

												issuedDocLocationsForStudent[m] = i;

												booksCountForStudent++;

												m++;

												j++;

												break;
											}
										}
										else
										{
											cout << "\n\nDocument Is Already Issued Try Again With Another Document";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nDocument Issued Successfully!";
								}
								else
								{
									cout << "\n\nDocument Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;
							}
							case 7:
							{
								system("CLS");

								if (booksCountForStudent < 3)
								{
									cout << "\nWelcome To Journal Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books Have Been Issued To This Student ";

									system("Pause");

									break;
								}

								for (i = 1; i < 101; i++)
								{
									if ("Journal" == listOfDocs[i].getDocCategory())
									{
										listOfDocs[i].docMenu(listOfDocs, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Journal's Library Code To Issue It : ";

								getline(cin, tempLC);

								for (int i = 1; i < 101; i++)
								{
									if (tempLC == listOfDocs[i].getLibraryCode())
									{
										if (listOfDocs[i].getStatus() == "Available")
										{

											cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (sLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStudent[sIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 7;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStudent[sIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStudent[sIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStudent[sIndexLoc[l]] = Date(day, month, year);

												}

												listOfDocs[i].setStatus("Issued To Id No.12345");

												bookLoc = i;

												issuedDocLocationsForStudent[sIndexLoc[l]] = i;

												booksCountForStudent++;

												j++;

												l++;

												sLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStudent[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 7;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStudent[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStudent[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStudent[j] = Date(day, month, year);

												}

												listOfDocs[i].setStatus("Issued To Id No.12345");

												bookLoc = i;

												issuedDocLocationsForStudent[m] = i;

												booksCountForStudent++;

												m++;

												j++;

												break;
											}
										}
										else
										{
											cout << "\n\nDocument Is Already Issued Try Again With Another Document";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nDocument Issued Successfully!";
								}
								else
								{
									cout << "\n\nDocument Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;
							}
							default:
							{
								cout << "\nInvalid Choice";

								system("Pause");
							}
							}
						}

						case 2:
						{
							seeIssuedBooksForStudent(listOfBooks,listOfDocs);

							system("Pause");

							break;
						}

						case 3:
						{
							returnBooksForStudent(sIndexLoc,sLoc,listOfBooks,listOfDocs);

							break;
						}

						case 4:
						{
							reIssueBooksForStudent(listOfBooks,listOfDocs);

							break;
						}

						case 5:
						{
							executeSystem();
						}
						default:
						{
							cout << "\nInvalid Choice";

							system("Pause");
						}
						}
					}
				}
				else
				{
					cout << "\n\nStudent Id Not Correct Try Again!" << endl;

					system("PAUSE");

				}
			}
		}

		case 2:
		{
			while (1)
			{

				cin.ignore();

				system("CLS");

				cout << "\n\nEnter Teachers Code : ";

				getline(cin, id);

				if (id == teacherObj[0].getTeacherId())
				{
					cout << "\n\nId Verified Login Successfull\n\n";

					cout << teacherObj[0].getTeacherName();

					cout << "\n\nPlease Wait....";

					Sleep(1500);

					while (1)
					{
						teacherMenu();

						cin >> tmChoice;

						switch (tmChoice)
						{
						case 1:
						{
							system("CLS");

							cout << "\n\nChoose Category";

							for (i = 1; i < 101; i++)
							{
								if (i < 100)
								{
									i1 = i + 1;
								}
								else
								{
									i1 = i;
								}
								if (listOfBooks[i].getCategory() != listOfBooks[i1].getCategory())
								{
									cout << "\n\n" << (k) << ":" << listOfBooks[i].getCategory();

									k++;
								}
							}

							for (i = 1; i < 101; i++)
							{
								if (i < 100)
								{
									i1 = i + 1;
								}
								else
								{
									i1 = i;
								}
								if (listOfDocs[i].getDocCategory() != listOfDocs[i1].getDocCategory())
								{
									cout << "\n\n" << (k) << ":" << listOfDocs[i].getDocCategory();

									k++;
								}
							}

							k = 1;

							cout << "\n\nYour Choice : ";

							cin >> Cchoice;

							switch (Cchoice)
							{
							case 1:
							{
								system("CLS");

								if (booksCountForTeacher < 10)
								{
									cout << "\nWelcome To Biology Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books Have Been Issued To This Teacher ";

									system("Pause");

									break;
								}

								for (i = 1; i < 101; i++)
								{
									if ("Biology" == listOfBooks[i].getCategory())
									{
										listOfBooks[i].bookMenu(listOfBooks, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Book's ISBN To Issue It : ";

								getline(cin, tempISBN);

								for (i = 1; i < 101; i++)
								{
									if (tempISBN == listOfBooks[i].getISBN())
									{
										if (listOfBooks[i].getIssueInfo() == "Issued To None")
										{

											cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (tLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForTeacher[tIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 90;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}
													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForTeacher[tIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForTeacher[tIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForTeacher[tIndexLoc[l]] = Date(day, month, year);
												}

												issuedBookLocationsForTeacher[tIndexLoc[l]] = i;

												listOfBooks[i].setIssueInfo("Issued To Id No.111");

												tBookLoc = i;

												booksCountForTeacher++;

												j++;

												l++;

												tLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForTeacher[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 90;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;
													
													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}
													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForTeacher[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForTeacher[j] = Date(tempDay, tempMonth, year);
													}
												}
												else
												{
													returnBookDateForTeacher[j] = Date(day, month, year);

												}

												issuedBookLocationsForTeacher[m] = i;

												listOfBooks[i].setIssueInfo("Issued To Id No.111");

												tBookLoc = i;

												booksCountForTeacher++;

												j++;

												m++;

												break;
											}
										}
										else
										{
											cout << "\n\nBook Is Already Issued Try Again With Another Book";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nBook Issued Successfully!";
								}
								else
								{
									cout << "\n\nBook Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;
							}

							case 2:
							{
								system("CLS");

								if (booksCountForTeacher < 10)
								{
									cout << "\nWelcome To Chemistry Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books Have Been Issued To This Teacher ";

									system("Pause");

									break;
								}

								for (i = 1; i < 101; i++)
								{
									if ("Chemistry" == listOfBooks[i].getCategory())
									{
										listOfBooks[i].bookMenu(listOfBooks, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Book's ISBN To Issue It : ";

								getline(cin, tempISBN);

								for (i = 1; i < 101; i++)
								{
									if (tempISBN == listOfBooks[i].getISBN())
									{
										if (listOfBooks[i].getIssueInfo() == "Issued To None")
										{

											cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (tLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForTeacher[tIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 90;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}
													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForTeacher[tIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForTeacher[tIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForTeacher[tIndexLoc[l]] = Date(day, month, year);

												}

												issuedBookLocationsForTeacher[tIndexLoc[l]] = i;

												listOfBooks[i].setIssueInfo("Issued To Id No.111");

												tBookLoc = i;

												booksCountForTeacher++;

												j++;

												l++;

												tLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForTeacher[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 90;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}
													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForTeacher[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForTeacher[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForTeacher[j] = Date(day, month, year);

												}

												issuedBookLocationsForTeacher[m] = i;

												listOfBooks[i].setIssueInfo("Issued To Id No.111");

												tBookLoc = i;

												booksCountForTeacher++;

												j++;

												m++;

												break;
											}
										}
										else
										{
											cout << "\n\nBook Is Already Issued Try Again With Another Book";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nBook Issued Successfully!";
								}
								else
								{
									cout << "\n\nBook Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;
							}

							case 3:
							{
								system("CLS");

								if (booksCountForTeacher < 10)
								{
									cout << "\nWelcome To Physics Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books Have Been Issued To This Teacher ";

									system("Pause");

									break;
								}

								for (i = 1; i < 101; i++)
								{
									if ("Physics" == listOfBooks[i].getCategory())
									{
										listOfBooks[i].bookMenu(listOfBooks, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Book's ISBN To Issue It : ";

								getline(cin, tempISBN);

								for (i = 1; i < 101; i++)
								{
									if (tempISBN == listOfBooks[i].getISBN())
									{
										if (listOfBooks[i].getIssueInfo() == "Issued To None")
										{

											cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (tLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForTeacher[tIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 90;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}
													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForTeacher[tIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForTeacher[tIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForTeacher[tIndexLoc[l]] = Date(day, month, year);

												}

												issuedBookLocationsForTeacher[tIndexLoc[l]] = i;

												listOfBooks[i].setIssueInfo("Issued To Id No.111");

												tBookLoc = i;

												booksCountForTeacher++;

												j++;

												l++;

												tLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForTeacher[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 90;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}
													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForTeacher[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForTeacher[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForTeacher[j] = Date(day, month, year);

												}

												issuedBookLocationsForTeacher[m] = i;

												listOfBooks[i].setIssueInfo("Issued To Id No.111");

												tBookLoc = i;

												booksCountForTeacher++;

												j++;

												m++;

												break;
											}
										}
										else
										{
											cout << "\n\nBook Is Already Issued Try Again With Another Book";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nBook Issued Successfully!";
								}
								else
								{
									cout << "\n\nBook Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;

							}
							case 4:
							{
								system("CLS");

								if (booksCountForTeacher < 10)
								{
									cout << "\nWelcome To English Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books Have Been Issued To This Teacher ";

									system("Pause");

									break;
								}

								for (i = 1; i < 101; i++)
								{
									if ("English" == listOfBooks[i].getCategory())
									{
										listOfBooks[i].bookMenu(listOfBooks, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Book's ISBN To Issue It : ";

								getline(cin, tempISBN);

								for (i = 1; i < 101; i++)
								{
									if (tempISBN == listOfBooks[i].getISBN())
									{
										if (listOfBooks[i].getIssueInfo() == "Issued To None")
										{

											cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (tLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForTeacher[tIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 90;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}
													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForTeacher[tIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForTeacher[tIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForTeacher[tIndexLoc[l]] = Date(day, month, year);

												}

												issuedBookLocationsForTeacher[tIndexLoc[l]] = i;

												listOfBooks[i].setIssueInfo("Issued To Id No.111");

												tBookLoc = i;

												booksCountForTeacher++;

												j++;

												l++;

												tLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForTeacher[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 90;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}
													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForTeacher[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForTeacher[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForTeacher[j] = Date(day, month, year);

												}

												issuedBookLocationsForTeacher[m] = i;

												listOfBooks[i].setIssueInfo("Issued To Id No.111");

												tBookLoc = i;

												booksCountForTeacher++;

												j++;

												m++;

												break;
											}
										}
										else
										{
											cout << "\n\nBook Is Already Issued Try Again With Another Book";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nBook Issued Successfully!";
								}
								else
								{
									cout << "\n\nBook Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;
							}
							case 5:
							{
								system("CLS");

								if (booksCountForTeacher < 10)
								{
									cout << "\nWelcome To Newspaper Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books Have Been Issued To This Teacher ";

									system("Pause");

									break;
								}

								for (i = 1; i < 101; i++)
								{
									if ("Newspaper" == listOfDocs[i].getDocCategory())
									{
										listOfDocs[i].docMenu(listOfDocs, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Newspaper's Library Code To Issue It : ";

								getline(cin, tempLC);

								for (int i = 1; i < 101; i++)
								{
									if (tempLC == listOfDocs[i].getLibraryCode())
									{
										if (listOfDocs[i].getStatus() == "Available")
										{

											cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (tLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForTeacher[tIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 90;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}
													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForTeacher[tIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForTeacher[tIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForTeacher[tIndexLoc[l]] = Date(day, month, year);

												}

												issuedDocLocationsForTeacher[tIndexLoc[l]] = i;

												listOfBooks[i].setStatusOfBook("Issued To Id No.111");

												tBookLoc = i;

												booksCountForTeacher++;

												j++;

												l++;

												tLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForTeacher[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 90;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}
													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForTeacher[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForTeacher[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForTeacher[j] = Date(day, month, year);

												}

												issuedDocLocationsForTeacher[m] = i;

												listOfDocs[i].setStatus("Issued To Id No.111");

												tBookLoc = i;

												booksCountForTeacher++;

												j++;

												m++;

												break;
											}
										}
										else
										{
											cout << "\n\nDocument Is Already Issued Try Again With Another Document";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nDocument Issued Successfully!";
								}
								else
								{
									cout << "\n\nDocument Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;
							}
							case 6:
							{
								system("CLS");

								if (booksCountForTeacher < 10)
								{
									cout << "\nWelcome To Magazine Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books Have Been Issued To This Teacher ";

									system("Pause");

									break;
								}

								for (i = 1; i < 101; i++)
								{
									if ("Magazine" == listOfDocs[i].getDocCategory())
									{
										listOfDocs[i].docMenu(listOfDocs, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Magazine's Library Code To Issue It : ";

								getline(cin, tempLC);

								for (int i = 1; i < 101; i++)
								{
									if (tempLC == listOfDocs[i].getLibraryCode())
									{
										if (listOfDocs[i].getStatus() == "Available")
										{

											cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (tLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForTeacher[tIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 90;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}
													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForTeacher[tIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForTeacher[tIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForTeacher[tIndexLoc[l]] = Date(day, month, year);

												}

												issuedDocLocationsForTeacher[tIndexLoc[l]] = i;

												listOfDocs[i].setStatus("Issued To Id No.111");

												tBookLoc = i;

												booksCountForTeacher++;

												j++;

												l++;

												tLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForTeacher[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 90;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}
													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForTeacher[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForTeacher[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForTeacher[j] = Date(day, month, year);

												}

												issuedDocLocationsForTeacher[m] = i;

												listOfDocs[i].setStatus("Issued To Id No.111");

												tBookLoc = i;

												booksCountForTeacher++;

												j++;

												m++;

												break;
											}
										}
										else
										{
											cout << "\n\nDocument Is Already Issued Try Again With Another Document";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nDocument Issued Successfully!";
								}
								else
								{
									cout << "\n\nDocument Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;
							}
							case 7:
							{
								system("CLS");

								if (booksCountForTeacher < 10)
								{
									cout << "\nWelcome To Journal Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books Have Been Issued To This Teacher ";

									system("Pause");

									break;
								}

								for (i = 1; i < 101; i++)
								{
									if ("Journal" == listOfDocs[i].getDocCategory())
									{
										listOfDocs[i].docMenu(listOfDocs, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Journal's Library Code To Issue It : ";

								getline(cin, tempLC);

								for (int i = 1; i < 101; i++)
								{
									if (tempLC == listOfDocs[i].getLibraryCode())
									{
										if (listOfDocs[i].getStatus() == "Available")
										{

											cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (sLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForTeacher[tIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 90;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}
													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForTeacher[tIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForTeacher[tIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForTeacher[tIndexLoc[l]] = Date(day, month, year);

												}

												issuedDocLocationsForTeacher[tIndexLoc[l]] = i;

												listOfDocs[i].setStatus("Issued To Id No.111");

												tBookLoc = i;

												booksCountForTeacher++;

												j++;

												l++;

												tLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForTeacher[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 90;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}
													if (tempDay > 30)
													{
														tempDay -= 30;

														tempMonth++;
													}

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForTeacher[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForTeacher[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForTeacher[j] = Date(day, month, year);

												}

												issuedDocLocationsForTeacher[m] = i;

												listOfDocs[i].setStatus("Issued To Id No.111");

												tBookLoc = i;

												booksCountForTeacher++;

												m++;

												j++;

												break;
											}
										}
										else
										{
											cout << "\n\nDocument Is Already Issued Try Again With Another Document";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nDocument Issued Successfully!";
								}
								else
								{
									cout << "\n\nDocument Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;
							}
							default:
							{
								cout << "\nInvalid Choice";

								system("Pause");
							}

							}
						}
						case 2:
						{
							seeIssuedBooksForTeacher(listOfBooks,listOfDocs);

							system("Pause");

							break;
						}

						case 3:
						{
							returnBooksForTeacher(tIndexLoc, tLoc,listOfBooks,listOfDocs);

							break;
						}

						case 4:
						{
							reIssueBooksForTeacher(listOfBooks,listOfDocs);

							break;
						}

						case 5:
						{
							executeSystem();
						}
						default:
						{
							cout << "\nInvalid Choice";

							system("Pause");
						}
						}
					}
				}
				else
				{
					cout << "\n\nTeachers's Code Not Correct Try Again!" << endl;
				}
			}
		}
		case 3:
		{
			while (1)
			{

				cin.ignore();

				system("CLS");

				cout << "\n\nEnter Staff Code : ";

				getline(cin, id);

				if (id == staffObj[0].getStaffId())
				{
					cout << "\n\nId Verified Login Successfull\n\n";

					cout << "Welcome " << staffObj[0].getStaffName();

					cout << "\n\nPlease Wait....";

					Sleep(1500);

					while (1)
					{

						staffMenu();

						cin >> smChoice;

						switch (smChoice)
						{
						case 1:
						{
							system("CLS");

							cout << "\n\nChoose Category";

							for (i = 1; i < 101; i++)
							{
								if (i < 100)
								{
									i1 = i + 1;
								}
								else
								{
									i1 = i;
								}
								if (listOfBooks[i].getCategory() != listOfBooks[i1].getCategory())
								{
									cout << "\n\n" << (k) << ":" << listOfBooks[i].getCategory();

									k++;
								}
							}

							for (i = 1; i < 101; i++)
							{
								if (i < 100)
								{
									i1 = i + 1;
								}
								else
								{
									i1 = i;
								}
								if (listOfDocs[i].getDocCategory() != listOfDocs[i1].getDocCategory())
								{
									cout << "\n\n" << (k) << ":" << listOfDocs[i].getDocCategory();

									k++;
								}
							}

							k = 1;

							cout << "\n\nYour Choice : ";

							cin >> Cchoice;

							switch (Cchoice)
							{
							case 1:
							{
								system("CLS");

								if (booksCountForStaff < 5)
								{
									cout << "\nWelcome To Biology Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books Have Been Issued To This Staff Member ";

									system("Pause");

									break;
								}

								for (i = 1; i < 101; i++)
								{
									if ("Biology" == listOfBooks[i].getCategory())
									{
										listOfBooks[i].bookMenu(listOfBooks, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Book's ISBN To Issue It : ";

								getline(cin, tempISBN);

								for (i = 1; i < 101; i++)
								{
									if (tempISBN == listOfBooks[i].getISBN())
									{
										if (listOfBooks[i].getIssueInfo() == "Issued To None")
										{
											cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (STLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStaff[STIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 21;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStaff[STIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStaff[STIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStaff[STIndexLoc[l]] = Date(day, month, year);

												}

												issuedBookLocationsForStaff[STIndexLoc[l]] = i;

												listOfBooks[i].setIssueInfo("Issued To Id No.0000");

												STBookLoc = i;

												booksCountForStaff++;

												j++;

												l++;

												STLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStaff[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 21;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStaff[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStaff[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStaff[j] = Date(day, month, year);

												}

												issuedBookLocationsForStaff[m] = i;

												listOfBooks[i].setIssueInfo("Issued To Id No.0000");

												STBookLoc = i;

												booksCountForStaff++;

												m++;

												j++;

												break;
											}
										}
										else
										{
											cout << "\n\nBook Is Already Issued Try Again With Another Book";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nBook Issued Successfully!";
								}
								else
								{
									cout << "\n\nBook Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;
							}

							case 2:
							{
								system("CLS");

								if (booksCountForStaff < 5)
								{
									cout << "\nWelcome To Chemistry Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books Have Been Issued To This Staff Member ";

									system("Pause");

									break;
								}

								for (i = 1; i < 101; i++)
								{
									if ("Chemistry" == listOfBooks[i].getCategory())
									{
										listOfBooks[i].bookMenu(listOfBooks, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Book's ISBN To Issue It : ";

								getline(cin, tempISBN);

								for (i = 1; i < 101; i++)
								{
									if (tempISBN == listOfBooks[i].getISBN())
									{
										if (listOfBooks[i].getIssueInfo() == "Issued To None")
										{

											cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (STLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStaff[STIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 21;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStaff[STIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStaff[STIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStaff[STIndexLoc[l]] = Date(day, month, year);

												}

												issuedBookLocationsForStaff[STIndexLoc[l]] = i;

												listOfBooks[i].setIssueInfo("Issued To Id No.0000");

												STBookLoc = i;

												booksCountForStaff++;

												j++;

												l++;

												STLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStaff[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 21;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStaff[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStaff[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStaff[j] = Date(day, month, year);

												}

												issuedBookLocationsForStaff[m] = i;

												listOfBooks[i].setIssueInfo("Issued To Id No.0000");

												STBookLoc = i;

												booksCountForStaff++;

												j++;

												m++;

												break;
											}
										}
										else
										{
											cout << "\n\nBook Is Already Issued Try Again With Another Book";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nBook Issued Successfully!";
								}
								else
								{
									cout << "\n\nBook Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;
							}

							case 3:
							{
								system("CLS");

								if (booksCountForStaff < 5)
								{
									cout << "\nWelcome To Physics Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books Have Been Issued To This Staff Member ";

									system("Pause");

									break;
								}

								for (i = 1; i < 101; i++)
								{
									if ("Physics" == listOfBooks[i].getCategory())
									{
										listOfBooks[i].bookMenu(listOfBooks, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Book's ISBN To Issue It : ";

								getline(cin, tempISBN);

								for (i = 1; i < 101; i++)
								{
									if (tempISBN == listOfBooks[i].getISBN())
									{
										if (listOfBooks[i].getIssueInfo() == "Issued To None")
										{

											cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (STLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStaff[STIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 21;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStaff[STIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStaff[STIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStaff[STIndexLoc[l]] = Date(day, month, year);

												}

												issuedBookLocationsForStaff[STIndexLoc[l]] = i;

												listOfBooks[i].setIssueInfo("Issued To Id No.12345");

												STBookLoc = i;

												booksCountForStaff++;

												j++;

												l++;

												STLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStaff[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 21;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStaff[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStaff[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStaff[j] = Date(day, month, year);

												}

												issuedBookLocationsForStaff[m++] = i;

												listOfBooks[i].setIssueInfo("Issued To Id No.0000");

												STBookLoc = i;

												booksCountForStaff++;

												j++;

												m++;

												break;
											}
										}
										else
										{
											cout << "\n\nBook Is Already Issued Try Again With Another Book";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nBook Issued Successfully!";
								}
								else
								{
									cout << "\n\nBook Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;

							}
							case 4:
							{
								system("CLS");

								if (booksCountForStaff < 5)
								{
									cout << "\nWelcome To English Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books Have Been Issued To This Staff Member ";

									system("Pause");

									break;
								}

								for (i = 1; i < 101; i++)
								{
									if ("English" == listOfBooks[i].getCategory())
									{
										listOfBooks[i].bookMenu(listOfBooks, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Book's ISBN To Issue It : ";

								getline(cin, tempISBN);

								for (i = 1; i < 101; i++)
								{
									if (tempISBN == listOfBooks[i].getISBN())
									{
										if (listOfBooks[i].getIssueInfo() == "Issued To None")
										{

											cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (STLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStaff[STIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 21;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStaff[STIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStaff[STIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStaff[STIndexLoc[l]] = Date(day, month, year);

												}

												issuedBookLocationsForStaff[STIndexLoc[l]] = i;

												listOfBooks[i].setIssueInfo("Issued To Id No.0000");

												STBookLoc = i;

												booksCountForStaff++;

												j++;

												l++;

												STLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStaff[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 21;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStaff[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStaff[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStaff[j] = Date(day, month, year);

												}

												issuedBookLocationsForStaff[m] = i;

												listOfBooks[i].setIssueInfo("Issued To Id No.0000");

												STBookLoc = i;

												booksCountForStaff++;

												j++;

												m++;

												break;
											}
										}
										else
										{
											cout << "\n\nBook Is Already Issued Try Again With Another Book";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nBook Issued Successfully!";
								}
								else
								{
									cout << "\n\nBook Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;
							}
							
							case 5:
							{
								system("CLS");

								if (booksCountForStaff < 5)
								{
									cout << "\nWelcome To Newspaper Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books Have Been Issued To This Staff Member ";

									system("Pause");

									break;
								}

								for (i = 1; i < 101; i++)
								{
									if ("Newspaper" == listOfDocs[i].getDocCategory())
									{
										listOfDocs[i].docMenu(listOfDocs, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Newspaper's Library Code To Issue It : ";

								getline(cin, tempLC);

								for (int i = 1; i < 101; i++)
								{
									if (tempLC == listOfDocs[i].getLibraryCode())
									{
										if (listOfDocs[i].getStatus() == "Available")
										{

											cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (STLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStaff[STIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 21;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStaff[STIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStaff[STIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStaff[STIndexLoc[l]] = Date(day, month, year);

												}

												issuedDocLocationsForStaff[STIndexLoc[l]] = i;

												listOfDocs[i].setStatus("Issued To Id No.0000");

												STBookLoc = i;

												booksCountForStaff++;

												j++;

												l++;

												STLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStaff[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 21;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStaff[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStaff[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStaff[j] = Date(day, month, year);

												}

												issuedDocLocationsForStaff[m] = i;

												listOfDocs[i].setStatus("Issued To Id No.0000");

												STBookLoc = i;

												booksCountForStaff++;

												j++;

												m++;

												break;
											}
										}
										else
										{
											cout << "\n\nBook Is Already Issued Try Again With Another Book";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nBook Issued Successfully!";
								}
								else
								{
									cout << "\n\nBook Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;
							}
							case 6:
							{
								system("CLS");

								if (booksCountForStaff < 5)
								{
									cout << "\nWelcome To Magazine Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number/Document of Books Have Been Issued To This Staff Member ";

									system("Pause");

									break;
								}

								for (i = 1; i < 101; i++)
								{
									if ("Magazine" == listOfDocs[i].getDocCategory())
									{
										listOfDocs[i].docMenu(listOfDocs, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Magazine's Library Code To Issue It : ";

								getline(cin, tempLC);

								for (int i = 1; i < 101; i++)
								{
									if (tempLC == listOfDocs[i].getLibraryCode())
									{
										if (listOfDocs[i].getStatus() == "Available")
										{

											cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (STLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStaff[STIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 21;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStaff[STIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStaff[STIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStaff[STIndexLoc[l]] = Date(day, month, year);

												}

												issuedDocLocationsForStaff[STIndexLoc[l]] = i;

												listOfDocs[i].setStatus("Issued To Id No.0000");

												STBookLoc = i;

												booksCountForStaff++;

												j++;

												l++;

												STLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStaff[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 21;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStaff[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStaff[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStaff[j] = Date(day, month, year);

												}

												issuedDocLocationsForStaff[m] = i;

												listOfDocs[i].setStatus("Issued To Id No.0000");

												STBookLoc = i;

												booksCountForStaff++;

												j++;

												m++;

												break;
											}
										}
										else
										{
											cout << "\n\nDocument Is Already Issued Try Again With Another Document";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nDocument Issued Successfully!";
								}
								else
								{
									cout << "\n\nDocument Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;
							}
							case 7:
							{
								system("CLS");

								if (booksCountForStaff < 5)
								{
									cout << "\nWelcome To Journal Section!";

									system("Pause");
								}
								else
								{
									cout << "\n\nMaximum Number of Books/Documents Have Been Issued To This Staff Member ";

									system("Pause");

									break;
								}

								for (i = 1; i < 101; i++)
								{
									if ("Journal" == listOfDocs[i].getDocCategory())
									{
										listOfDocs[i].docMenu(listOfDocs, i);
									}

									cout << endl;
								}

								cin.ignore();

								cout << "\n\nEnter Journal's Library Code To Issue It : ";

								getline(cin, tempLC);

								for (int i = 1; i < 101; i++)
								{
									if (tempLC == listOfDocs[i].getLibraryCode())
									{
										if (listOfDocs[i].getStatus() == "Available")
										{

											cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

											cin >> day >> month >> year;

											if (STLoc > 0)
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStaff[sIndexLoc[l]] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 21;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStaff[STIndexLoc[l]] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStaff[STIndexLoc[l]] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStaff[STIndexLoc[l]] = Date(day, month, year);

												}

												issuedDocLocationsForStaff[STIndexLoc[l]] = i;

												listOfDocs[i].setStatus("Issued To Id No.0000");

												STBookLoc = i;

												booksCountForStaff++;

												j++;

												l++;

												STLoc--;

												break;
											}
											else
											{
												if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
												{
													issuedBookDateForStaff[j] = Date(day, month, year);

													checkBook++;
												}

												else
												{
													cout << "\n\nDate Not Correct";

													system("Pause");

													break;
												}

												day = day + 21;

												if (day > 30)
												{
													tempDay = day - 30;

													tempMonth = month;

													tempMonth++;

													if (tempMonth > 12)
													{
														tempMonth = tempMonth - 12;

														tempYear = year;

														tempYear++;

														returnBookDateForStaff[j] = Date(tempDay, tempMonth, tempYear);
													}
													else
													{

														returnBookDateForStaff[j] = Date(tempDay, tempMonth, year);
													}
												}

												else
												{
													returnBookDateForStaff[j] = Date(day, month, year);

												}

												issuedDocLocationsForStaff[m] = i;

												listOfDocs[i].setStatus("Issued To Id No.0000");

												STBookLoc = i;

												booksCountForStaff++;

												j++;

												m++;

												break;
											}
										}
										else
										{
											cout << "\n\nDocument Is Already Issued Try Again With Another Document";

											system("Pause");
										}
									}
								}

								if (checkBook == 1)
								{
									cout << "\n\nDocument Issued Successfully!";
								}
								else
								{
									cout << "\n\nDocument Not Found!";
								}

								system("PAUSE");

								checkBook = 0;

								break;
							}
							default:
							{
								cout << "\nInvalid Choice";

								system("Pause");
							}

							}
							case 2:
							{
								seeIssuedBooksForStaff(listOfBooks,listOfDocs);
								
								system("Pause");
								
								break;
							}

							case 3:
							{
								returnBooksForStaff(STIndexLoc, STLoc,listOfBooks,listOfDocs);

								break;
							}

							case 4:
							{
								reIssueBooksForStaff(listOfBooks, listOfDocs);

								system("Pause");

								break;
							}

							case 5:
							{
								removeFine(fineForStudent,fineForTeacher);

								system("Pause");

								break;
							}
							case 6:
							{
								searchForBooks(listOfBooks,listOfDocs);
	
								system("Pause");

								break;
							}

							case 7:
							{
								enterNewBooks(listOfBooks,listOfDocs);

								system("Pause");

								break;
							}

							case 8:
							{
								executeSystem();
							}
							default:
							{
								cout << "\nInvalid Choice";

								system("Pause");
							}

						}

						}
					}
				}
				else
				{
					cout << "\n\nStaff's Code Not Correct Try Again!" << endl;
				}
			}

		case 4:
		{
			cout << "Exitting Now " << endl;

			system("Pause");

			exit(0);
		}
		default:
		{
			cout << "\nInvalid Choice";
			
			system("Pause");

		}
		}

		}
	}

void Book::bookMenu(Book* listOfBooks, int index)
{
	cout << "\n-------------------------------------------------------------------------------------------";
	cout << "\nNAME OF BOOK = " << listOfBooks[index].getBookName();
	cout << "\n\nAUTHOR NAME = " << listOfBooks[index].getAuthorName();
	cout << "\n\nYEAR OF PUBLICATION = " << listOfBooks[index].getYOP();
	cout << "\n\nLIBRARY CODE FOR BOOK = " << listOfBooks[index].getLCFB();
	cout << "\n\nISBN = " << listOfBooks[index].getISBN();
	cout << "\n\nCATEGORY = " << listOfBooks[index].getCategory();
	cout << "\n\nSTATUS OF BOOK = " << listOfBooks[index].getSOB();
	cout << "\n\nISSUE STATUS = " << listOfBooks[index].getIssueInfo();
	cout << "\n\nTOTAL NUMBER OF COPIES = " << listOfBooks[index].getNOC();
	cout << "\n\nCOPY NUMBER = " << listOfBooks[index].getCN();
	cout << "\n-------------------------------------------------------------------------------------------";
}

void Document::docMenu(Document* listOfDocs, int i)
{
	cout << "\n-------------------------------------------------------------------------------------------";
	cout <<"\n\nTitle For NewsPaper/Magazine/Journal : " << listOfDocs[i].getTitle();
	cout<<"\n\nLibrary Code For NewsPaper/Magazine/Journal : "<< listOfDocs[i].getLibraryCode();
	cout<<"\n\nStatus Of NewsPaper/Magazine/Journal : "<< listOfDocs[i].getStatus();
	cout<<"\n\nCategory For NewsPaper/Magazine/Journal : "<< listOfDocs[i].getDocCategory();
	cout<<"\n\nDate Of Publication For NewsPaper/Magazine/Journal : "<< listOfDocs[i].getDateOfPublication();
	cout << "\n-------------------------------------------------------------------------------------------";
}

void Student::seeIssuedBooksForStudent(Book* listOfBooks,Document* listOfDocs)
{
	system("CLS");

	int i=0,j=1;
	
	cout << "\n------------------------------------------------------------------------------";
	
	while (i < 3)
	{
		if (issuedBookLocationsForStudent[i] > 0)
		{
			cout << "\n\n" << (j) << ":Book Name : " << listOfBooks[issuedBookLocationsForStudent[i]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForStudent[i]].getCategory() << " || Issue Date : " << issuedBookDateForStudent[i].getDay() << "/" << issuedBookDateForStudent[i].getMonth() << "/" << issuedBookDateForStudent[i].getYear() << " || Return Date " << returnBookDateForStudent[i].getDay() << "/" << returnBookDateForStudent[i].getMonth() << "/" << returnBookDateForStudent[i].getYear();

			j++;

			i++;
		}
		else
		{
			cout << "\n\n" << (j) << ":Book Name : " << listOfDocs[issuedDocLocationsForStudent[i]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForStudent[i]].getDocCategory() << " || Issue Date : " << issuedBookDateForStudent[i].getDay() << "/" << issuedBookDateForStudent[i].getMonth() << "/" << issuedBookDateForStudent[i].getYear() << " || Return Date " << returnBookDateForStudent[i].getDay() << "/" << returnBookDateForStudent[i].getMonth() << "/" << returnBookDateForStudent[i].getYear();

			j++;

			i++;
		}
	}
	cout << "\n------------------------------------------------------------------------------";
}

void Student::returnBooksForStudent(int* sIndexLoc,int &sLoc,Book* listOfBooks,Document* listOfDocs)
{
	system("CLS");

	int i = 0, j = 1, Rchoice = 0, Dchoice = 0, index = 0;

	static int k=0;
	
	seeIssuedBooksForStudent(listOfBooks,listOfDocs);

	cout << "\n\nWhich Book Do You Want To Return : ";
	
	cin >> Rchoice;

	if (Rchoice == 1)
	{
		if (issuedBookLocationsForStudent[0] > 0)
		{

			cout << "\n\nAre You Sure You Want To Return This Book ? " << listOfBooks[issuedBookLocationsForStudent[0]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForStudent[0]].getCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Dchoice;

			if (listOfBooks[issuedBookLocationsForStudent[0]].getBookName() == "\0")
			{
				cout << "\n\nNo Book Found";

				system("Pause");
			}
			else
			{
				if (Dchoice == 1)
				{
					index = 0;
					fineCalculationForStudent(fineForStudent, returnBookDateForStudent, index);
					issuedBookLocationsForStudent[0] = 0;
					issuedBookDateForStudent[0].setDay(0);
					issuedBookDateForStudent[0].setMonth(0);
					issuedBookDateForStudent[0].setYear(0);
					returnBookDateForStudent[0].setDay(0);
					returnBookDateForStudent[0].setMonth(0);
					returnBookDateForStudent[0].setYear(0);
					booksCountForStudent--;
					sIndexLoc[k] = 0;
					sIssueBookLoc[k] = 0;
					sReturnBookLoc[k] = 0;
					sLoc++;
					k++;
					if (fineForStudent[0] > 0)
					{
						cout << "\nYou Have A Fine To Pay For The Book 1 of Rs." << fineForStudent[0];

						system("Pause");
					}
					else
					{
						cout << "\nNo Fine For You...";

						system("Pause");
					}

					listOfBooks[bookLoc].setIssueInfo("Issued To None");

					cout << "\n\nBook Returned Successfully\n";

					system("Pause");
				}
				else
				{
					cout << "\n\nBook Not Returned";

					system("Pause");
				}
			}
		}
		else
		{
			cout << "\n\nAre You Sure You Want To Return This Document ? " << listOfDocs[issuedDocLocationsForStudent[0]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForStudent[0]].getDocCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Dchoice;

			if (listOfDocs[issuedDocLocationsForStudent[0]].getTitle() == "\0")
			{
				cout << "\n\nNo Document Found";

				system("Pause");
			}
			else
			{
				if (Dchoice == 1)
				{
					index = 0;
					fineCalculationForStudent(fineForStudent, returnBookDateForStudent, index);
					issuedDocLocationsForStudent[0] = 0;
					issuedBookDateForStudent[0].setDay(0);
					issuedBookDateForStudent[0].setMonth(0);
					issuedBookDateForStudent[0].setYear(0);
					returnBookDateForStudent[0].setDay(0);
					returnBookDateForStudent[0].setMonth(0);
					returnBookDateForStudent[0].setYear(0);
					booksCountForStudent--;
					sIndexLoc[k] = 0;
					sIssueBookLoc[k] = 0;
					sReturnBookLoc[k] = 0;
					sLoc++;
					k++;
					if (fineForStudent[0] > 0)
					{
						cout << "\nYou Have A Fine To Pay For The Document 1 of Rs." << fineForStudent[0];

						system("Pause");
					}
					else
					{
						cout << "\nNo Fine For You...";

						system("Pause");
					}
					listOfDocs[bookLoc].setStatus("Issued To None");

					cout << "\n\nDocument Returned Successfully\n";

					system("Pause");
				}
				else
				{
					cout << "\n\nDocument Not Returned";

					system("Pause");
				}
			}
		}
	}
	else if (Rchoice == 2)
	{
		if (issuedBookLocationsForStudent[1] > 0)
		{
			cout << "\n\nAre You Sure You Want To Return This Book ? " << listOfBooks[issuedBookLocationsForStudent[1]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForStudent[1]].getCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Dchoice;

			if (listOfBooks[issuedBookLocationsForStudent[1]].getBookName() == "\0")
			{
				cout << "\n\nBook Not Found ";

				system("Pause");

			}
			else
			{

				if (Dchoice == 1)
				{
					index = 1;
					fineCalculationForStudent(fineForStudent, returnBookDateForStudent, index);
					issuedBookLocationsForStudent[1] = 0;
					issuedBookDateForStudent[1].setDay(0);
					issuedBookDateForStudent[1].setMonth(0);
					issuedBookDateForStudent[1].setYear(0);
					returnBookDateForStudent[1].setDay(0);
					returnBookDateForStudent[1].setMonth(0);
					returnBookDateForStudent[1].setYear(0);
					booksCountForStudent--;
					sIndexLoc[k] = 1;
					sIssueBookLoc[k] = 1;
					sReturnBookLoc[k] = 1;
					sLoc++;
					k++;
					if (fineForStudent[1] > 0)
					{
						cout << "\nYou Have A Fine To Pay For The Book 2 of Rs." << fineForStudent[1];

						system("Pause");
					}
					else
					{
						cout << "\nNo Fine For You...";

						system("Pause");
					}
					listOfBooks[bookLoc].setIssueInfo("Issued To None");

					cout << "\n\nBook Returned Successfully\n";

					system("Pause");
				}
				else
				{
					cout << "\n\nBook Not Returned";

					system("Pause");
				}
			}
		}
		else
		{
			cout << "\n\nAre You Sure You Want To Return This Document ? " << listOfDocs[issuedDocLocationsForStudent[1]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForStudent[1]].getDocCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Dchoice;

			if (listOfDocs[issuedDocLocationsForStudent[1]].getTitle() == "\0")
			{
				cout << "\n\nDocument Not Found ";

				system("Pause");

			}
			else
			{

				if (Dchoice == 1)
				{
					index = 1;
					fineCalculationForStudent(fineForStudent, returnBookDateForStudent, index);
					issuedDocLocationsForStudent[1] = 0;
					issuedBookDateForStudent[1].setDay(0);
					issuedBookDateForStudent[1].setMonth(0);
					issuedBookDateForStudent[1].setYear(0);
					returnBookDateForStudent[1].setDay(0);
					returnBookDateForStudent[1].setMonth(0);
					returnBookDateForStudent[1].setYear(0);
					booksCountForStudent--;
					sIndexLoc[k] = 1;
					sIssueBookLoc[k] = 1;
					sReturnBookLoc[k] = 1;
					sLoc++;
					k++;
					if (fineForStudent[1] > 0)
					{
						cout << "\nYou Have A Fine To Pay For The Document 2 of Rs." << fineForStudent[1];

						system("Pause");
					}
					else
					{
						cout << "\nNo Fine For You...";

						system("Pause");
					}

					listOfDocs[bookLoc].setStatus("Issued To None");

					cout << "\n\nDocument Returned Successfully\n";

					system("Pause");
				}
				else
				{
					cout << "\n\nDocument Not Returned";

					system("Pause");
				}
			}
		}
	}
	else if (Rchoice == 3)
	{
		if (issuedBookLocationsForStudent[2] > 0)
		{
			cout << "\n\nAre You Sure You Want To Return This Book ? " << listOfBooks[issuedBookLocationsForStudent[2]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForStudent[2]].getCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Dchoice;

			if (listOfBooks[issuedBookLocationsForStudent[2]].getBookName() == "\0")
			{
				cout << "\n\nBook Not Found";

				system("Pause");

			}
			else
			{

				if (Dchoice == 1)
				{
					index = 2;
					fineCalculationForStudent(fineForStudent, returnBookDateForStudent, index);
					issuedBookLocationsForStudent[2] = 0;
					issuedBookDateForStudent[2].setDay(0);
					issuedBookDateForStudent[2].setMonth(0);
					issuedBookDateForStudent[2].setYear(0);
					returnBookDateForStudent[2].setDay(0);
					returnBookDateForStudent[2].setMonth(0);
					returnBookDateForStudent[2].setYear(0);
					booksCountForStudent--;
					sIndexLoc[k] = 2;
					sIssueBookLoc[k] = 2;
					sReturnBookLoc[k] = 2;
					sLoc++;
					k++;
					if (fineForStudent[2] > 0)
					{
						cout << "\nYou Have A Fine To Pay For The Book 3 of Rs." << fineForStudent[2];

						system("Pause");
					}
					else
					{
						cout << "\nNo Fine For You...";

						system("Pause");
					}

					listOfBooks[bookLoc].setIssueInfo("Issued To None");

					cout << "\n\nBook Returned Successfully\n";
					
					system("Pause");
				}
				else
				{
					cout << "\n\nBook Not Returned";

					system("Pause");
				}
			}
		}
		else
		{
			cout << "\n\nAre You Sure You Want To Return This Document ? " << listOfDocs[issuedDocLocationsForStudent[2]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForStudent[2]].getDocCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Dchoice;

			if (listOfDocs[issuedDocLocationsForStudent[2]].getTitle() == "\0")
			{
				cout << "\n\nDocument Not Found ";

				system("Pause");

			}
			else
			{

				if (Dchoice == 1)
				{
					index = 2;
					fineCalculationForStudent(fineForStudent, returnBookDateForStudent, index);
					issuedDocLocationsForStudent[2] = 0;
					issuedBookDateForStudent[2].setDay(0);
					issuedBookDateForStudent[2].setMonth(0);
					issuedBookDateForStudent[2].setYear(0);
					returnBookDateForStudent[2].setDay(0);
					returnBookDateForStudent[2].setMonth(0);
					returnBookDateForStudent[2].setYear(0);
					booksCountForStudent--;
					sIndexLoc[k] = 2;
					sIssueBookLoc[k] = 2;
					sReturnBookLoc[k] = 2;
					sLoc++;
					k++;
					if (fineForStudent[2] > 0)
					{
						cout << "\nYou Have A Fine To Pay For The Document 3 of Rs." << fineForStudent[2];

						system("Pause");
					}
					else
					{
						cout << "\nNo Fine For You...";

						system("Pause");
					}

					listOfDocs[bookLoc].setStatus("Issued To None");

					cout << "\n\nDocument Returned Successfully\n";

					system("Pause");
				}
				else
				{
					cout << "\n\nDocument Not Returned";

					system("Pause");
				}
			}
		}
	}
	else
	{
		cout << "Invalid Choice Try Again";

		system("Pause");
	}
}

void Student::reIssueBooksForStudent(Book* listOfBooks, Document* listOfDocs)
{
	system("CLS");

	int i = 0, j = 1,Rchoice,day,month,year,tempDay,tempMonth,tempYear;

	seeIssuedBooksForStudent(listOfBooks,listOfDocs);

	cout << "\n\nWhich Book Do You Want To Re-Issue : ";

	cin >> Rchoice;

	if (Rchoice == 1)
	{
		if (issuedBookLocationsForStudent[0] > 0)
		{
			cout << "\n\nAre You Sure You Want To Re-Issue This Book ? " << listOfBooks[issuedBookLocationsForStudent[0]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForStudent[0]].getCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Rchoice;

			if (Rchoice == 1)
			{


				if (listOfBooks[issuedBookLocationsForStudent[0]].getBookName() == "\0")
				{
					cout << "\n\nBook Not Found ";

					system("Pause");

				}
				else
				{
					cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

					cin >> day >> month >> year;

					if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
					{

						issuedBookDateForStudent[0] = Date(day, month, year);
					}

					else
					{
						cout << "\n\nDate Not Correct";

						system("Pause");

					}

					day = day + 7;

					if (day > 30)
					{
						tempDay = day - 30;

						tempMonth = month;

						tempMonth++;

						if (tempMonth > 12)
						{
							tempMonth = tempMonth - 12;

							tempYear = year;

							tempYear++;

							returnBookDateForStudent[0] = Date(tempDay, tempMonth, tempYear);

							cout << "\n\nBook Re-Issued Successfully";

							system("Pause");
						}
						else
						{
							returnBookDateForStudent[0] = Date(tempDay, tempMonth, year);

							cout << "\n\nBook Re-Issued Successfully";

							system("Pause");
						}
					}

					else
					{
						returnBookDateForStudent[0] = Date(day, month, year);

						cout << "\n\nBook Re-Issued Successfully";

						system("Pause");
					}
				}
			}
			else
			{
				cout << "\n\nBook Not Re-issued";

				system("Pause");
			}
		}
		else
		{
			cout << "\n\nAre You Sure You Want To Re-Issue This Document ? " << listOfDocs[issuedDocLocationsForStudent[0]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForStudent[0]].getDocCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Rchoice;

			if (Rchoice == 1)
			{
				if (listOfDocs[issuedDocLocationsForStudent[0]].getTitle() == "\0")
				{
					cout << "\n\nDocument Not Found ";

					system("Pause");

				}
				else
				{
					cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

					cin >> day >> month >> year;

					if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
					{
						issuedBookDateForStudent[0] = Date(day, month, year);
					}

					else
					{
						cout << "\n\nDate Not Correct";

						system("Pause");

					}

					day = day + 7;

					if (day > 30)
					{
						tempDay = day - 30;

						tempMonth = month;

						tempMonth++;

						if (tempMonth > 12)
						{
							tempMonth = tempMonth - 12;

							tempYear = year;

							tempYear++;

							returnBookDateForStudent[0] = Date(tempDay, tempMonth, tempYear);

							cout << "\n\nDocument Re-Issued Successfully";

							system("Pause");
						}
						else
						{
							returnBookDateForStudent[0] = Date(tempDay, tempMonth, year);

							cout << "\n\nDocument Re-Issued Successfully";

							system("Pause");
						}
					}

					else
					{
						returnBookDateForStudent[0] = Date(day, month, year);

						cout << "\n\nDocument Re-Issued Successfully";

						system("Pause");
					}
				}
			}
			else
			{
				cout << "\n\nDocument Not Re-issued";

				system("Pause");
			}
		}
	}
	else if (Rchoice == 2)
	{
		if (issuedBookLocationsForStudent[1] > 0)
		{
			cout << "\n\nAre You Sure You Want To Re-Issue This Book ? " << listOfBooks[issuedBookLocationsForStudent[1]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForStudent[1]].getCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Rchoice;

			if (Rchoice == 1)
			{

				if (listOfBooks[issuedBookLocationsForStudent[1]].getBookName() == "\0")
				{
					cout << "\n\nBook Not Found ";

					system("Pause");

				}
				else
				{
					cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

					cin >> day >> month >> year;

					if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
					{

						issuedBookDateForStudent[1] = Date(day, month, year);
					}

					else
					{
						cout << "\n\nDate Not Correct";

						system("Pause");

					}

					day = day + 7;

					if (day > 30)
					{
						tempDay = day - 30;

						tempMonth = month;

						tempMonth++;

						if (tempMonth > 12)
						{
							tempMonth = tempMonth - 12;

							tempYear = year;

							tempYear++;

							returnBookDateForStudent[1] = Date(tempDay, tempMonth, tempYear);

							cout << "\n\nBook Re-Issued Successfully";

							system("Pause");
						}
						else
						{
							returnBookDateForStudent[1] = Date(tempDay, tempMonth, year);

							cout << "\n\nBook Re-Issued Successfully";

							system("Pause");
						}
					}

					else
					{
						returnBookDateForStudent[1] = Date(day, month, year);

						cout << "\n\nBook Re-Issued Successfully";

						system("Pause");
					}
				}
			}
			else
			{
				cout << "\n\nBook Not Re-issued";

				system("Pause");
			}
		}
		else
		{
			cout << "\n\nAre You Sure You Want To Re-Issue This Document ? " << listOfDocs[issuedDocLocationsForStudent[1]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForStudent[1]].getDocCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Rchoice;

			if (Rchoice == 1)
			{

				if (listOfDocs[issuedDocLocationsForStudent[1]].getTitle() == "\0")
				{
					cout << "\n\nDocument Not Found ";

					system("Pause");

				}
				else
				{
					cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

					cin >> day >> month >> year;

					if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
					{

						issuedBookDateForStudent[1] = Date(day, month, year);
					}

					else
					{
						cout << "\n\nDate Not Correct";

						system("Pause");

					}

					day = day + 7;

					if (day > 30)
					{
						tempDay = day - 30;

						tempMonth = month;

						tempMonth++;

						if (tempMonth > 12)
						{
							tempMonth = tempMonth - 12;

							tempYear = year;

							tempYear++;

							returnBookDateForStudent[1] = Date(tempDay, tempMonth, tempYear);

							cout << "\n\nDocument Re-Issued Successfully";

							system("Pause");
						}
						else
						{
							returnBookDateForStudent[1] = Date(tempDay, tempMonth, year);

							cout << "\n\nDocument Re-Issued Successfully";

							system("Pause");
						}
					}

					else
					{
						returnBookDateForStudent[1] = Date(day, month, year);

						cout << "\n\nDocument Re-Issued Successfully";

						system("Pause");
					}
				}
			}
			else
			{
				cout << "\n\nDocument Not Re-issued";

				system("Pause");
			}
		}
	}
	else if (Rchoice == 3)
	{
		if (issuedBookLocationsForStudent[2] > 0)
		{
			cout << "\n\nAre You Sure You Want To Re-Issue This Book ? " << listOfBooks[issuedBookLocationsForStudent[2]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForStudent[2]].getCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Rchoice;

			if (Rchoice == 1)
			{

				if (listOfBooks[issuedBookLocationsForStudent[2]].getBookName() == "\0")
				{
					cout << "\n\nBook Not Found ";

					system("Pause");

				}
				else
				{
					cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

					cin >> day >> month >> year;

					if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
					{

						issuedBookDateForStudent[2] = Date(day, month, year);
					}

					else
					{
						cout << "\n\nDate Not Correct";

						system("Pause");

					}

					day = day + 7;

					if (day > 30)
					{
						tempDay = day - 30;

						tempMonth = month;

						tempMonth++;

						if (tempMonth > 12)
						{
							tempMonth = tempMonth - 12;

							tempYear = year;

							tempYear++;

							returnBookDateForStudent[2] = Date(tempDay, tempMonth, tempYear);

							cout << "\n\nBook Re-Issued Successfully";

							system("Pause");
						}
						else
						{
							returnBookDateForStudent[2] = Date(tempDay, tempMonth, year);

							cout << "\n\nBook Re-Issued Successfully";

							system("Pause");
						}
					}

					else
					{
						returnBookDateForStudent[2] = Date(day, month, year);

						cout << "\n\nBook Re-Issued Successfully";

						system("Pause");
					}
				}
			}
			else
			{
				cout << "\n\nBook Not Re-issued";

				system("Pause");
			}
		}
		else
		{
			cout << "\n\nAre You Sure You Want To Re-Issue This Document ? " << listOfDocs[issuedDocLocationsForStudent[2]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForStudent[2]].getDocCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Rchoice;

			if (Rchoice == 1)
			{

				if (listOfDocs[issuedDocLocationsForStudent[2]].getTitle() == "\0")
				{
					cout << "\n\nDocument Not Found ";

					system("Pause");

				}
				else
				{
					cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

					cin >> day >> month >> year;

					if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
					{

						issuedBookDateForStudent[2] = Date(day, month, year);
					}

					else
					{
						cout << "\n\nDate Not Correct";

						system("Pause");

					}

					day = day + 7;

					if (day > 30)
					{
						tempDay = day - 30;

						tempMonth = month;

						tempMonth++;

						if (tempMonth > 12)
						{
							tempMonth = tempMonth - 12;

							tempYear = year;

							tempYear++;

							returnBookDateForStudent[2] = Date(tempDay, tempMonth, tempYear);

							cout << "\n\nDocument Re-Issued Successfully";

							system("Pause");
						}
						else
						{
							returnBookDateForStudent[2] = Date(tempDay, tempMonth, year);

							cout << "\n\nDocument Re-Issued Successfully";

							system("Pause");
						}
					}

					else
					{
						returnBookDateForStudent[2] = Date(day, month, year);

						cout << "\n\nDocument Re-Issued Successfully";

						system("Pause");
					}
				}
			}
			else
			{
				cout << "\n\nDocument Not Re-issued";

				system("Pause");
			}
		}
	}
	else
	{
	cout << "\n\nInvalid Choice Try Again";
	
	system("Pause");
	 
	}
}

void fineCalculationForStudent(int* fineForStudent, Date* returnBookDateForStudent,int &index)
{
	int day=0, month=0, year=0, tempDay=0, tempMonth=0, tempYear=0,temp=0;

	cout << "\nEnter Present Day Month And Year Respectively : ";
	
	cin >> day >> month >> year;

	if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
	{

		tempDay = returnBookDateForStudent[index].getDay();

		tempMonth = returnBookDateForStudent[index].getMonth();

		tempYear = returnBookDateForStudent[index].getYear();

		if (day > tempDay)
		{
			tempDay = day - tempDay;

			temp = tempDay;
		}
		else
		{
			tempDay = tempDay - day;
		}
		
		if (month > tempMonth)
		{
			tempMonth = month - tempMonth;
		}
		else
		{
			tempMonth = tempMonth - month;
		}

		if (year > tempYear)
		{
			tempYear = year - tempYear;
		}
		else
		{
			tempYear = tempYear - year;
		}
			
		if (tempMonth > 0)
		{
			temp = temp + (30 * tempMonth);
		}

		if (tempYear > 0)
		{
			temp = temp + (365 * tempYear);
		}

		temp = temp * 10;

		if (fineForStudent[index] > 0)
		{
			fineForStudent[index] = fineForStudent[index] + temp;
		}
		else
		{
			fineForStudent[index] = temp;
		}
		
	}
}

void Teacher::seeIssuedBooksForTeacher(Book* listOfBooks, Document* listOfDocs)
{
	system("CLS");

	int i = 0, j = 1;

	cout << "\n------------------------------------------------------------------------------";

	while (i < 10)
	{
		if (issuedBookLocationsForTeacher[i] > 0)
		{
			cout << "\n\n" << (j) << ":Book Name : " << listOfBooks[issuedBookLocationsForTeacher[i]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[i]].getCategory() << " || Issue Date : " << issuedBookDateForTeacher[i].getDay() << "/" << issuedBookDateForTeacher[i].getMonth() << "/" << issuedBookDateForTeacher[i].getYear() << " || Return Date " << returnBookDateForTeacher[i].getDay() << "/" << returnBookDateForTeacher[i].getMonth() << "/" << returnBookDateForTeacher[i].getYear();

			j++;

			i++;
		}
		else
		{
			cout << "\n\n" << (j) << ":Book Name : " << listOfDocs[issuedDocLocationsForTeacher[i]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[i]].getDocCategory() << " || Issue Date : " << issuedBookDateForTeacher[i].getDay() << "/" << issuedBookDateForTeacher[i].getMonth() << "/" << issuedBookDateForTeacher[i].getYear() << " || Return Date " << returnBookDateForTeacher[i].getDay() << "/" << returnBookDateForTeacher[i].getMonth() << "/" << returnBookDateForTeacher[i].getYear();

			j++;

			i++;
		}
	}
	cout << "\n------------------------------------------------------------------------------";
}

void Teacher::returnBooksForTeacher(int* tIndexLoc, int &tLoc,Book* listOfBooks, Document* listOfDocs)
{
	system("CLS");

	int i = 0, j = 1, Rchoice = 0, Dchoice = 0,index=0;

	static int k = 0;

	seeIssuedBooksForTeacher(listOfBooks, listOfDocs);

	cout << "\n\nWhich Book Do You Want To Return : ";

	cin >> Rchoice;

	if (Rchoice == 1)
	{
		if (issuedBookLocationsForTeacher[0] > 0)
		{
			cout << "\n\nAre You Sure You Want To Return This Book ? " << listOfBooks[issuedBookLocationsForTeacher[0]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[0]].getCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Dchoice;

			if (listOfBooks[issuedBookLocationsForTeacher[0]].getBookName() == "\0")
			{
				cout << "\n\nBook Not Found ";

				system("Pause");

			}
			else
			{

				if (Dchoice == 1)
				{
					index = 0;
					fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
					issuedBookLocationsForTeacher[0] = 0;
					issuedBookDateForTeacher[0].setDay(0);
					issuedBookDateForTeacher[0].setMonth(0);
					issuedBookDateForTeacher[0].setYear(0);
					returnBookDateForTeacher[0].setDay(0);
					returnBookDateForTeacher[0].setMonth(0);
					returnBookDateForTeacher[0].setYear(0);
					booksCountForTeacher--;
					tIndexLoc[k] = 0;
					tIssueBookLoc[k] = 0;
					tReturnBookLoc[k] = 0;
					tLoc++;
					k++;
					if (fineForTeacher[0] > 0)
					{
						cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[0];
					}
					else
					{
						cout << "\nNo Fine For You";
					}
					
					listOfBooks[tBookLoc].setIssueInfo("Issued To None");

					cout << "\n\nBook Returned Successfully\n";
					
					system("Pause");
				}
				else
				{
					cout << "\n\nBook Not Returned";

					system("Pause");
				}
			}
		}
		else
		{
			cout << "\n\nAre You Sure You Want To Return This Document ? " << listOfDocs[issuedDocLocationsForTeacher[0]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[0]].getDocCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Dchoice;

			if (listOfDocs[issuedDocLocationsForTeacher[0]].getTitle() == "\0")
			{
				cout << "\n\nDocument Not Found ";

				system("Pause");

			}
			else
			{

				if (Dchoice == 1)
				{
					index = 0;
					fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
					issuedDocLocationsForTeacher[0] = 0;
					issuedBookDateForTeacher[0].setDay(0);
					issuedBookDateForTeacher[0].setMonth(0);
					issuedBookDateForTeacher[0].setYear(0);
					returnBookDateForTeacher[0].setDay(0);
					returnBookDateForTeacher[0].setMonth(0);
					returnBookDateForTeacher[0].setYear(0);
					booksCountForTeacher--;
					tIndexLoc[k] = 0;
					tIssueBookLoc[k] = 0;
					tReturnBookLoc[k] = 0;
					tLoc++;
					k++;
					if (fineForTeacher[0] > 0)
					{
						cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[0];
					}
					else
					{
						cout << "\nNo Fine For You";
					}

					listOfDocs[tBookLoc].setStatus("Issued To None");

					cout << "\n\nDocument Returned Successfully\n";

					system("Pause");
				}
				else
				{
					cout << "\n\nDocument Not Returned";

					system("Pause");
				}
			}
		}
	}
	else if (Rchoice == 2)
	{
	if (issuedBookLocationsForTeacher[1] > 0)
	{
		cout << "\n\nAre You Sure You Want To Return This Book ? " << listOfBooks[issuedBookLocationsForTeacher[1]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[1]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfBooks[issuedBookLocationsForTeacher[1]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
				if (Dchoice == 1)
				{
					index = 1;
					fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
					issuedBookLocationsForTeacher[1] = 1;
					issuedBookDateForTeacher[1].setDay(0);
					issuedBookDateForTeacher[1].setMonth(0);
					issuedBookDateForTeacher[1].setYear(0);
					returnBookDateForTeacher[1].setDay(0);
					returnBookDateForTeacher[1].setMonth(0);
					returnBookDateForTeacher[1].setYear(0);
					booksCountForTeacher--;
					tIndexLoc[k] = 1;
					tIssueBookLoc[k] = 1;
					tReturnBookLoc[k] = 1;
					tLoc++;
					k++;
					if (fineForTeacher[1] > 0)
					{
						cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[1];
					}
					else
					{
						cout << "\nNo Fine For You";
					}

					listOfBooks[tBookLoc].setIssueInfo("Issued To None");

					cout << "\n\nBook Returned Successfully\n";

					system("Pause");
				}
				else
				{
					cout << "\n\nBook Not Returned";

					system("Pause");
				}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Return This Document ? " << listOfDocs[issuedDocLocationsForTeacher[1]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[1]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfDocs[issuedDocLocationsForTeacher[1]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{

			if (Dchoice == 1)
			{
				index = 1;
				fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
				issuedDocLocationsForTeacher[1] = 1;
				issuedBookDateForTeacher[1].setDay(0);
				issuedBookDateForTeacher[1].setMonth(0);
				issuedBookDateForTeacher[1].setYear(0);
				returnBookDateForTeacher[1].setDay(0);
				returnBookDateForTeacher[1].setMonth(0);
				returnBookDateForTeacher[1].setYear(0);
				booksCountForTeacher--;
				tIndexLoc[k] = 1;
				tIssueBookLoc[k] = 1;
				tReturnBookLoc[k] = 1;
				tLoc++;
				k++;
				if (fineForTeacher[1] > 0)
				{
					cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[1];
				}
				else
				{
					cout << "\nNo Fine For You";
				}

				listOfDocs[tBookLoc].setStatus("Issued To None");

				cout << "\n\nDocument Returned Successfully\n";

				system("Pause");
			}
			else
			{
				cout << "\n\nDocument Not Returned";

				system("Pause");
			}
		}
	}
	}
	else if (Rchoice == 3)
	{
	if (issuedBookLocationsForTeacher[2] > 0)
	{
		cout << "\n\nAre You Sure You Want To Return This Book ? " << listOfBooks[issuedBookLocationsForTeacher[2]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[2]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfBooks[issuedBookLocationsForTeacher[2]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
				if (Dchoice == 1)
				{
					index = 2;
					fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
					issuedBookLocationsForTeacher[2] = 2;
					issuedBookDateForTeacher[2].setDay(0);
					issuedBookDateForTeacher[2].setMonth(0);
					issuedBookDateForTeacher[2].setYear(0);
					returnBookDateForTeacher[2].setDay(0);
					returnBookDateForTeacher[2].setMonth(0);
					returnBookDateForTeacher[2].setYear(0);
					booksCountForTeacher--;
					tIndexLoc[k] = 2;
					tIssueBookLoc[k] = 2;
					tReturnBookLoc[k] = 2;
					tLoc++;
					k++;
					if (fineForTeacher[2] > 0)
					{
						cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[2];
					}
					else
					{
						cout << "\nNo Fine For You";
					}

					listOfBooks[tBookLoc].setIssueInfo("Issued To None");

					cout << "\n\nBook Returned Successfully\n";

					system("Pause");
				}
				else
				{
					cout << "\n\nBook Not Returned";

					system("Pause");
				}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Return This Document ? " << listOfDocs[issuedDocLocationsForTeacher[2]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[2]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfDocs[issuedDocLocationsForTeacher[2]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{

			if (Dchoice == 1)
			{
				index = 2;
				fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
				issuedDocLocationsForTeacher[2] = 2;
				issuedBookDateForTeacher[2].setDay(0);
				issuedBookDateForTeacher[2].setMonth(0);
				issuedBookDateForTeacher[2].setYear(0);
				returnBookDateForTeacher[2].setDay(0);
				returnBookDateForTeacher[2].setMonth(0);
				returnBookDateForTeacher[2].setYear(0);
				booksCountForTeacher--;
				tIndexLoc[k] = 2;
				tIssueBookLoc[k] = 2;
				tReturnBookLoc[k] = 2;
				tLoc++;
				k++;
				if (fineForTeacher[2] > 0)
				{
					cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[2];
				}
				else
				{
					cout << "\nNo Fine For You";
				}

				listOfDocs[tBookLoc].setStatus("Issued To None");

				cout << "\n\nDocument Returned Successfully\n";

				system("Pause");
			}
			else
			{
				cout << "\n\nDocument Not Returned";

				system("Pause");
			}
		}
	}
	}
	else if (Rchoice == 4)
	{
	if (issuedBookLocationsForTeacher[3] > 0)
	{
		cout << "\n\nAre You Sure You Want To Return This Book ? " << listOfBooks[issuedBookLocationsForTeacher[3]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[3]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfBooks[issuedBookLocationsForTeacher[3]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
				if (Dchoice == 1)
				{
					index = 3;
					fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
					issuedBookLocationsForTeacher[3] = 3;
					issuedBookDateForTeacher[3].setDay(0);
					issuedBookDateForTeacher[3].setMonth(0);
					issuedBookDateForTeacher[3].setYear(0);
					returnBookDateForTeacher[3].setDay(0);
					returnBookDateForTeacher[3].setMonth(0);
					returnBookDateForTeacher[3].setYear(0);
					booksCountForTeacher--;
					tIndexLoc[k] = 3;
					tIssueBookLoc[k] = 3;
					tReturnBookLoc[k] = 3;
					tLoc++;
					k++;
					if (fineForTeacher[3] > 0)
					{
						cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[3];
					}
					else
					{
						cout << "\nNo Fine For You";
					}

					listOfBooks[tBookLoc].setIssueInfo("Issued To None");

					cout << "\n\nBook Returned Successfully\n";

					system("Pause");
				}
				else
				{
					cout << "\n\nBook Not Returned";

					system("Pause");
				}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Return This Document ? " << listOfDocs[issuedDocLocationsForTeacher[3]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[3]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfDocs[issuedDocLocationsForTeacher[3]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{

			if (Dchoice == 1)
			{
				index = 3;
				fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
				issuedDocLocationsForTeacher[3] = 3;
				issuedBookDateForTeacher[3].setDay(0);
				issuedBookDateForTeacher[3].setMonth(0);
				issuedBookDateForTeacher[3].setYear(0);
				returnBookDateForTeacher[3].setDay(0);
				returnBookDateForTeacher[3].setMonth(0);
				returnBookDateForTeacher[3].setYear(0);
				booksCountForTeacher--;
				tIndexLoc[k] = 3;
				tIssueBookLoc[k] = 3;
				tReturnBookLoc[k] = 3;
				tLoc++;
				k++;
				if (fineForTeacher[3] > 0)
				{
					cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[3];
				}
				else
				{
					cout << "\nNo Fine For You";
				}

				listOfDocs[tBookLoc].setStatus("Issued To None");

				cout << "\n\nDocument Returned Successfully\n";

				system("Pause");
			}
			else
			{
				cout << "\n\nDocument Not Returned";

				system("Pause");
			}
		}
	}
	}
	else if (Rchoice == 5)
	{
	if (issuedBookLocationsForTeacher[4] > 0)
	{
		cout << "\n\nAre You Sure You Want To Return This Book ? " << listOfBooks[issuedBookLocationsForTeacher[4]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[4]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfBooks[issuedBookLocationsForTeacher[4]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
				if (Dchoice == 1)
				{
					index = 4;
					fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
					issuedBookLocationsForTeacher[4] = 4;
					issuedBookDateForTeacher[4].setDay(0);
					issuedBookDateForTeacher[4].setMonth(0);
					issuedBookDateForTeacher[4].setYear(0);
					returnBookDateForTeacher[4].setDay(0);
					returnBookDateForTeacher[4].setMonth(0);
					returnBookDateForTeacher[4].setYear(0);
					booksCountForTeacher--;
					tIndexLoc[k] = 4;
					tIssueBookLoc[k] = 4;
					tReturnBookLoc[k] = 4;
					tLoc++;
					k++;
					if (fineForTeacher[4] > 0)
					{
						cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[4];
					}
					else
					{
						cout << "\nNo Fine For You";
					}

					listOfBooks[tBookLoc].setIssueInfo("Issued To None");

					cout << "\n\nBook Returned Successfully\n";

					system("Pause");
				}
				else
				{
					cout << "\n\nBook Not Returned";

					system("Pause");
				}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Return This Document ? " << listOfDocs[issuedDocLocationsForTeacher[4]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[4]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfDocs[issuedDocLocationsForTeacher[4]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{

			if (Dchoice == 1)
			{
				index = 4;
				fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
				issuedDocLocationsForTeacher[4] = 4;
				issuedBookDateForTeacher[4].setDay(0);
				issuedBookDateForTeacher[4].setMonth(0);
				issuedBookDateForTeacher[4].setYear(0);
				returnBookDateForTeacher[4].setDay(0);
				returnBookDateForTeacher[4].setMonth(0);
				returnBookDateForTeacher[4].setYear(0);
				booksCountForTeacher--;
				tIndexLoc[k] = 4;
				tIssueBookLoc[k] = 4;
				tReturnBookLoc[k] = 4;
				tLoc++;
				k++;
				if (fineForTeacher[4] > 0)
				{
					cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[4];
				}
				else
				{
					cout << "\nNo Fine For You";
				}

				listOfDocs[tBookLoc].setStatus("Issued To None");

				cout << "\n\nDocument Returned Successfully\n";

				system("Pause");
			}
			else
			{
				cout << "\n\nDocument Not Returned";

				system("Pause");
			}
		}
	}
	}
	else if (Rchoice == 6)
	{
	if (issuedBookLocationsForTeacher[5] > 0)
	{
		cout << "\n\nAre You Sure You Want To Return This Book ? " << listOfBooks[issuedBookLocationsForTeacher[5]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[5]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfBooks[issuedBookLocationsForTeacher[5]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
				if (Dchoice == 1)
				{
					index = 5;
					fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
					issuedBookLocationsForTeacher[5] = 5;
					issuedBookDateForTeacher[5].setDay(0);
					issuedBookDateForTeacher[5].setMonth(0);
					issuedBookDateForTeacher[5].setYear(0);
					returnBookDateForTeacher[5].setDay(0);
					returnBookDateForTeacher[5].setMonth(0);
					returnBookDateForTeacher[5].setYear(0);
					booksCountForTeacher--;
					tIndexLoc[k] = 5;
					tIssueBookLoc[k] = 5;
					tReturnBookLoc[k] = 5;
					tLoc++;
					k++;
					if (fineForTeacher[5] > 0)
					{
						cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[5];
					}
					else
					{
						cout << "\nNo Fine For You";
					}

					listOfBooks[tBookLoc].setIssueInfo("Issued To None");

					cout << "\n\nBook Returned Successfully\n";

					system("Pause");
				}
				else
				{
					cout << "\n\nBook Not Returned";

					system("Pause");
				}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Return This Document ? " << listOfDocs[issuedDocLocationsForTeacher[5]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[5]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfDocs[issuedDocLocationsForTeacher[5]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{

			if (Dchoice == 1)
			{
				index = 5;
				fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
				issuedDocLocationsForTeacher[5] = 5;
				issuedBookDateForTeacher[5].setDay(0);
				issuedBookDateForTeacher[5].setMonth(0);
				issuedBookDateForTeacher[5].setYear(0);
				returnBookDateForTeacher[5].setDay(0);
				returnBookDateForTeacher[5].setMonth(0);
				returnBookDateForTeacher[5].setYear(0);
				booksCountForTeacher--;
				tIndexLoc[k] = 5;
				tIssueBookLoc[k] = 5;
				tReturnBookLoc[k] = 5;
				tLoc++;
				k++;
				if (fineForTeacher[5] > 0)
				{
					cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[5];
				}
				else
				{
					cout << "\nNo Fine For You";
				}

				listOfDocs[tBookLoc].setStatus("Issued To None");

				cout << "\n\nDocument Returned Successfully\n";

				system("Pause");
			}
			else
			{
				cout << "\n\nDocument Not Returned";

				system("Pause");
			}
		}
	}
	}
	else if (Rchoice == 7)
	{
	if (issuedBookLocationsForTeacher[6] > 0)
	{
		cout << "\n\nAre You Sure You Want To Return This Book ? " << listOfBooks[issuedBookLocationsForTeacher[6]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[6]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfBooks[issuedBookLocationsForTeacher[6]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
				if (Dchoice == 1)
				{
					index = 6;
					fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
					issuedBookLocationsForTeacher[6] = 6;
					issuedBookDateForTeacher[6].setDay(0);
					issuedBookDateForTeacher[6].setMonth(0);
					issuedBookDateForTeacher[6].setYear(0);
					returnBookDateForTeacher[6].setDay(0);
					returnBookDateForTeacher[6].setMonth(0);
					returnBookDateForTeacher[6].setYear(0);
					booksCountForTeacher--;
					tIndexLoc[k] = 6;
					tIssueBookLoc[k] = 6;
					tReturnBookLoc[k] = 6;
					tLoc++;
					k++;
					if (fineForTeacher[6] > 0)
					{
						cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[6];
					}
					else
					{
						cout << "\nNo Fine For You";
					}

					listOfBooks[tBookLoc].setIssueInfo("Issued To None");

					cout << "\n\nBook Returned Successfully\n";

					system("Pause");
				}
				else
				{
					cout << "\n\nBook Not Returned";

					system("Pause");
				}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Return This Document ? " << listOfDocs[issuedDocLocationsForTeacher[6]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[6]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfDocs[issuedDocLocationsForTeacher[6]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{

			if (Dchoice == 1)
			{
				index = 6;
				fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
				issuedDocLocationsForTeacher[6] = 6;
				issuedBookDateForTeacher[6].setDay(0);
				issuedBookDateForTeacher[6].setMonth(0);
				issuedBookDateForTeacher[6].setYear(0);
				returnBookDateForTeacher[6].setDay(0);
				returnBookDateForTeacher[6].setMonth(0);
				returnBookDateForTeacher[6].setYear(0);
				booksCountForTeacher--;
				tIndexLoc[k] = 6;
				tIssueBookLoc[k] = 6;
				tReturnBookLoc[k] = 6;
				tLoc++;
				k++;
				if (fineForTeacher[6] > 0)
				{
					cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[6];
				}
				else
				{
					cout << "\nNo Fine For You";
				}

				listOfDocs[tBookLoc].setStatus("Issued To None");

				cout << "\n\nDocument Returned Successfully\n";

				system("Pause");
			}
			else
			{
				cout << "\n\nDocument Not Returned";

				system("Pause");
			}
		}
	}
	}
	else if (Rchoice == 8)
	{
	if (issuedBookLocationsForTeacher[7] > 0)
	{
		cout << "\n\nAre You Sure You Want To Return This Book ? " << listOfBooks[issuedBookLocationsForTeacher[7]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[7]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfBooks[issuedBookLocationsForTeacher[7]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
				if (Dchoice == 1)
				{
					index = 7;
					fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
					issuedBookLocationsForTeacher[7] = 7;
					issuedBookDateForTeacher[7].setDay(0);
					issuedBookDateForTeacher[7].setMonth(0);
					issuedBookDateForTeacher[7].setYear(0);
					returnBookDateForTeacher[7].setDay(0);
					returnBookDateForTeacher[7].setMonth(0);
					returnBookDateForTeacher[7].setYear(0);
					booksCountForTeacher--;
					tIndexLoc[k] = 7;
					tIssueBookLoc[k] = 7;
					tReturnBookLoc[k] = 7;
					tLoc++;
					k++;
					if (fineForTeacher[7] > 0)
					{
						cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[7];
					}
					else
					{
						cout << "\nNo Fine For You";
					}

					listOfBooks[tBookLoc].setIssueInfo("Issued To None");

					cout << "\n\nBook Returned Successfully\n";

					system("Pause");
				}
				else
				{
					cout << "\n\nBook Not Returned";

					system("Pause");
				}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Return This Document ? " << listOfDocs[issuedDocLocationsForTeacher[7]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[7]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfDocs[issuedDocLocationsForTeacher[7]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{

			if (Dchoice == 1)
			{
				index = 7;
				fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
				issuedDocLocationsForTeacher[7] = 7;
				issuedBookDateForTeacher[7].setDay(0);
				issuedBookDateForTeacher[7].setMonth(0);
				issuedBookDateForTeacher[7].setYear(0);
				returnBookDateForTeacher[7].setDay(0);
				returnBookDateForTeacher[7].setMonth(0);
				returnBookDateForTeacher[7].setYear(0);
				booksCountForTeacher--;
				tIndexLoc[k] = 7;
				tIssueBookLoc[k] = 7;
				tReturnBookLoc[k] = 7;
				tLoc++;
				k++;
				if (fineForTeacher[7] > 0)
				{
					cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[7];
				}
				else
				{
					cout << "\nNo Fine For You";
				}

				listOfDocs[tBookLoc].setStatus("Issued To None");

				cout << "\n\nDocument Returned Successfully\n";

				system("Pause");
			}
			else
			{
				cout << "\n\nDocument Not Returned";

				system("Pause");
			}
		}
	}
	}
	else if (Rchoice == 9)
	{
	if (issuedBookLocationsForTeacher[8] > 0)
	{
		cout << "\n\nAre You Sure You Want To Return This Book ? " << listOfBooks[issuedBookLocationsForTeacher[8]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[8]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfBooks[issuedBookLocationsForTeacher[8]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
				if (Dchoice == 1)
				{
					index = 8;
					fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
					issuedBookLocationsForTeacher[8] = 8;
					issuedBookDateForTeacher[8].setDay(0);
					issuedBookDateForTeacher[8].setMonth(0);
					issuedBookDateForTeacher[8].setYear(0);
					returnBookDateForTeacher[8].setDay(0);
					returnBookDateForTeacher[8].setMonth(0);
					returnBookDateForTeacher[8].setYear(0);
					booksCountForTeacher--;
					tIndexLoc[k] = 8;
					tIssueBookLoc[k] = 8;
					tReturnBookLoc[k] = 8;
					tLoc++;
					k++;
					if (fineForTeacher[8] > 0)
					{
						cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[8];
					}
					else
					{
						cout << "\nNo Fine For You";
					}

					listOfBooks[tBookLoc].setIssueInfo("Issued To None");

					cout << "\n\nBook Returned Successfully\n";

					system("Pause");
				}
				else
				{
					cout << "\n\nBook Not Returned";

					system("Pause");
				}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Return This Document ? " << listOfDocs[issuedDocLocationsForTeacher[8]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[8]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfDocs[issuedDocLocationsForTeacher[8]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{

			if (Dchoice == 1)
			{
				index = 8;
				fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
				issuedDocLocationsForTeacher[8] = 8;
				issuedBookDateForTeacher[8].setDay(0);
				issuedBookDateForTeacher[8].setMonth(0);
				issuedBookDateForTeacher[8].setYear(0);
				returnBookDateForTeacher[8].setDay(0);
				returnBookDateForTeacher[8].setMonth(0);
				returnBookDateForTeacher[8].setYear(0);
				booksCountForTeacher--;
				tIndexLoc[k] = 8;
				tIssueBookLoc[k] = 8;
				tReturnBookLoc[k] = 8;
				tLoc++;
				k++;
				if (fineForTeacher[8] > 0)
				{
					cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[8];
				}
				else
				{
					cout << "\nNo Fine For You";
				}

				listOfDocs[tBookLoc].setStatus("Issued To None");

				cout << "\n\nDocument Returned Successfully\n";

				system("Pause");
			}
			else
			{
				cout << "\n\nDocument Not Returned";

				system("Pause");
			}
		}
	}
	}
	else if (Rchoice == 10)
	{
	if (issuedBookLocationsForTeacher[9] > 0)
	{
		cout << "\n\nAre You Sure You Want To Return This Book ? " << listOfBooks[issuedBookLocationsForTeacher[9]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[9]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfBooks[issuedBookLocationsForTeacher[9]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
				if (Dchoice == 1)
				{
					index = 9;
					fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
					issuedBookLocationsForTeacher[9] = 9;
					issuedBookDateForTeacher[9].setDay(0);
					issuedBookDateForTeacher[9].setMonth(0);
					issuedBookDateForTeacher[9].setYear(0);
					returnBookDateForTeacher[9].setDay(0);
					returnBookDateForTeacher[9].setMonth(0);
					returnBookDateForTeacher[9].setYear(0);
					booksCountForTeacher--;
					tIndexLoc[k] = 9;
					tIssueBookLoc[k] = 9;
					tReturnBookLoc[k] = 9;
					tLoc++;
					k++;
					if (fineForTeacher[9] > 0)
					{
						cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[9];
					}
					else
					{
						cout << "\nNo Fine For You";
					}

					listOfBooks[tBookLoc].setIssueInfo("Issued To None");

					cout << "\n\nBook Returned Successfully\n";

					system("Pause");
				}
				else
				{
					cout << "\n\nBook Not Returned";

					system("Pause");
				}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Return This Document ? " << listOfDocs[issuedDocLocationsForTeacher[9]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[9]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfDocs[issuedDocLocationsForTeacher[9]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{

			if (Dchoice == 1)
			{
				index = 9;
				fineCalculationForTeacher(fineForTeacher, returnBookDateForTeacher, index);
				issuedDocLocationsForTeacher[9] = 9;
				issuedBookDateForTeacher[9].setDay(0);
				issuedBookDateForTeacher[9].setMonth(0);
				issuedBookDateForTeacher[9].setYear(0);
				returnBookDateForTeacher[9].setDay(0);
				returnBookDateForTeacher[9].setMonth(0);
				returnBookDateForTeacher[9].setYear(0);
				booksCountForTeacher--;
				tIndexLoc[k] = 9;
				tIssueBookLoc[k] = 9;
				tReturnBookLoc[k] = 9;
				tLoc++;
				k++;
				if (fineForTeacher[9] > 0)
				{
					cout << "\nYou Have a Fine To Pay Of Rs. " << fineForTeacher[9];
				}
				else
				{
					cout << "\nNo Fine For You";
				}

				listOfDocs[tBookLoc].setStatus("Issued To None");

				cout << "\n\nDocument Returned Successfully\n";

				system("Pause");
			}
			else
			{
				cout << "\n\nDocument Not Returned";

				system("Pause");
			}
		}
	}
	}
	else
	{
		cout << "Invalid Choice Try Again";

		system("Pause");
	}
}

void Teacher::reIssueBooksForTeacher(Book* listOfBooks, Document* listOfDocs)
{
	system("CLS");

	int i = 0, j = 1, Rchoice, day, month, year, tempDay, tempMonth, tempYear;

	seeIssuedBooksForTeacher(listOfBooks,listOfDocs);

	cout << "\n\nWhich Book Do You Want To Re-Issue : ";

	cin >> Rchoice;

	if (Rchoice == 1)
	{
		if (issuedBookLocationsForTeacher[0] > 0)
		{
			cout << "\n\nAre You Sure You Want To Re-Issue This Book ? " << listOfBooks[issuedBookLocationsForTeacher[0]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[0]].getCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Rchoice;

			if (listOfBooks[issuedBookLocationsForTeacher[0]].getBookName() == "\0")
			{
				cout << "\n\nBook Not Found ";

				system("Pause");

			}
			else
			{
				cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

				cin >> day >> month >> year;

				if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
				{
					issuedBookDateForTeacher[0] = Date(day, month, year);
				}

				else
				{
					cout << "\n\nDate Not Correct";

					system("Pause");

				}

				day = day + 90;

				if (day > 30)
				{
					tempDay = day - 30;

					tempMonth = month;

					tempMonth++;

					if (tempDay > 30)
					{
						tempDay -= 30;

						tempMonth++;
					}
					if (tempDay > 30)
					{
						tempDay -= 30;

						tempMonth++;
					}

					if (tempMonth > 12)
					{
						tempMonth = tempMonth - 12;

						tempYear = year;

						tempYear++;

						returnBookDateForTeacher[0] = Date(tempDay, tempMonth, tempYear);

						cout << "\n\nBook Re-Issued Successfully";

						system("Pause");
					}
					else
					{
						returnBookDateForTeacher[0] = Date(tempDay, tempMonth, year);

						cout << "\n\nBook Re-Issued Successfully";

						system("Pause");
					}
				}

				else
				{
					returnBookDateForTeacher[0] = Date(day, month, year);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
			}
		}
		else
		{
			cout << "\n\nAre You Sure You Want To Re-Issue This Document? " << listOfDocs[issuedDocLocationsForTeacher[0]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[0]].getDocCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Rchoice;

			if (listOfDocs[issuedDocLocationsForTeacher[0]].getTitle() == "\0")
			{
				cout << "\n\nDocument Not Found ";

				system("Pause");

			}
			else
			{
				cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

				cin >> day >> month >> year;

				if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
				{
					issuedBookDateForTeacher[0] = Date(day, month, year);
				}

				else
				{
					cout << "\n\nDate Not Correct";

					system("Pause");

				}

				day = day + 90;

				if (day > 30)
				{
					tempDay = day - 30;

					tempMonth = month;

					tempMonth++;

					if (tempDay > 30)
					{
						tempDay -= 30;

						tempMonth++;
					}
					if (tempDay > 30)
					{
						tempDay -= 30;

						tempMonth++;
					}

					if (tempMonth > 12)
					{
						tempMonth = tempMonth - 12;

						tempYear = year;

						tempYear++;

						returnBookDateForTeacher[0] = Date(tempDay, tempMonth, tempYear);

						cout << "\n\nDocument Re-Issued Successfully";

						system("Pause");
					}
					else
					{
						returnBookDateForTeacher[0] = Date(tempDay, tempMonth, year);

						cout << "\n\nDocument Re-Issued Successfully";

						system("Pause");
					}
				}

				else
				{
					returnBookDateForTeacher[0] = Date(day, month, year);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
			}
		}
	}
	else if (Rchoice == 2)
	{
	if (issuedBookLocationsForTeacher[1] > 0)
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Book ? " << listOfBooks[issuedBookLocationsForTeacher[1]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[1]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfBooks[issuedBookLocationsForTeacher[1]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 1)
			{
				issuedBookDateForTeacher[1] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 90;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}
				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForTeacher[1] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForTeacher[1] = Date(tempDay, tempMonth, year);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForTeacher[1] = Date(day, month, year);

				cout << "\n\nBook Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Document? " << listOfDocs[issuedDocLocationsForTeacher[1]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[1]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfDocs[issuedDocLocationsForTeacher[1]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 1)
			{
				issuedBookDateForTeacher[1] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 90;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}
				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForTeacher[1] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForTeacher[1] = Date(tempDay, tempMonth, year);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForTeacher[1] = Date(day, month, year);

				cout << "\n\nDocument Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	}
	else if (Rchoice == 3)
	{
	if (issuedBookLocationsForTeacher[2] > 0)
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Book ? " << listOfBooks[issuedBookLocationsForTeacher[2]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[2]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfBooks[issuedBookLocationsForTeacher[2]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 1)
			{
				issuedBookDateForTeacher[2] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 90;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}
				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForTeacher[2] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForTeacher[2] = Date(tempDay, tempMonth, year);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForTeacher[2] = Date(day, month, year);

				cout << "\n\nBook Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Document? " << listOfDocs[issuedDocLocationsForTeacher[2]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[2]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfDocs[issuedDocLocationsForTeacher[2]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 1)
			{
				issuedBookDateForTeacher[2] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 90;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}
				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForTeacher[2] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForTeacher[2] = Date(tempDay, tempMonth, year);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForTeacher[2] = Date(day, month, year);

				cout << "\n\nDocument Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	}
	else if (Rchoice == 4)
	{
	if (issuedBookLocationsForTeacher[3] > 0)
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Book ? " << listOfBooks[issuedBookLocationsForTeacher[3]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[3]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfBooks[issuedBookLocationsForTeacher[3]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 1)
			{
				issuedBookDateForTeacher[3] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 90;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}
				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForTeacher[3] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForTeacher[3] = Date(tempDay, tempMonth, year);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForTeacher[3] = Date(day, month, year);

				cout << "\n\nBook Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Document? " << listOfDocs[issuedDocLocationsForTeacher[3]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[3]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfDocs[issuedDocLocationsForTeacher[3]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 1)
			{
				issuedBookDateForTeacher[3] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 90;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}
				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForTeacher[3] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForTeacher[3] = Date(tempDay, tempMonth, year);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForTeacher[3] = Date(day, month, year);

				cout << "\n\nDocument Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	}
	else if (Rchoice == 5)
	{
	if (issuedBookLocationsForTeacher[4] > 0)
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Book ? " << listOfBooks[issuedBookLocationsForTeacher[4]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[4]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfBooks[issuedBookLocationsForTeacher[4]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 1)
			{
				issuedBookDateForTeacher[4] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 90;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}
				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForTeacher[4] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForTeacher[4] = Date(tempDay, tempMonth, year);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForTeacher[4] = Date(day, month, year);

				cout << "\n\nBook Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Document? " << listOfDocs[issuedDocLocationsForTeacher[4]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[4]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfDocs[issuedDocLocationsForTeacher[4]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 1)
			{
				issuedBookDateForTeacher[4] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 90;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}
				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForTeacher[4] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForTeacher[4] = Date(tempDay, tempMonth, year);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForTeacher[4] = Date(day, month, year);

				cout << "\n\nDocument Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	}
	else if (Rchoice == 6)
	{
	if (issuedBookLocationsForTeacher[5] > 0)
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Book ? " << listOfBooks[issuedBookLocationsForTeacher[5]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[5]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfBooks[issuedBookLocationsForTeacher[5]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 1)
			{
				issuedBookDateForTeacher[5] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 90;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}
				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForTeacher[5] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForTeacher[5] = Date(tempDay, tempMonth, year);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForTeacher[5] = Date(day, month, year);

				cout << "\n\nBook Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Document? " << listOfDocs[issuedDocLocationsForTeacher[5]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[5]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfDocs[issuedDocLocationsForTeacher[5]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 1)
			{
				issuedBookDateForTeacher[5] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 90;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}
				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForTeacher[5] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForTeacher[5] = Date(tempDay, tempMonth, year);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForTeacher[5] = Date(day, month, year);

				cout << "\n\nDocument Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	}
	else if (Rchoice == 7)
	{
	if (issuedBookLocationsForTeacher[6] > 0)
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Book ? " << listOfBooks[issuedBookLocationsForTeacher[6]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[6]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfBooks[issuedBookLocationsForTeacher[6]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 1)
			{
				issuedBookDateForTeacher[6] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 90;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}
				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForTeacher[6] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForTeacher[6] = Date(tempDay, tempMonth, year);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForTeacher[6] = Date(day, month, year);

				cout << "\n\nBook Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Document? " << listOfDocs[issuedDocLocationsForTeacher[6]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[6]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfDocs[issuedDocLocationsForTeacher[6]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 1)
			{
				issuedBookDateForTeacher[6] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 90;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}
				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForTeacher[6] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForTeacher[6] = Date(tempDay, tempMonth, year);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForTeacher[6] = Date(day, month, year);

				cout << "\n\nDocument Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	}
	else if (Rchoice == 8)
	{
	if (issuedBookLocationsForTeacher[7] > 0)
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Book ? " << listOfBooks[issuedBookLocationsForTeacher[7]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[7]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfBooks[issuedBookLocationsForTeacher[7]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 1)
			{
				issuedBookDateForTeacher[7] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 90;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}
				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForTeacher[7] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForTeacher[7] = Date(tempDay, tempMonth, year);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForTeacher[7] = Date(day, month, year);

				cout << "\n\nBook Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Document? " << listOfDocs[issuedDocLocationsForTeacher[7]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[7]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfDocs[issuedDocLocationsForTeacher[7]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 1)
			{
				issuedBookDateForTeacher[7] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 90;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}
				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForTeacher[7] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForTeacher[7] = Date(tempDay, tempMonth, year);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForTeacher[7] = Date(day, month, year);

				cout << "\n\nDocument Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	}
	else if (Rchoice == 9)
	{
	if (issuedBookLocationsForTeacher[8] > 0)
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Book ? " << listOfBooks[issuedBookLocationsForTeacher[8]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[8]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfBooks[issuedBookLocationsForTeacher[8]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 1)
			{
				issuedBookDateForTeacher[8] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 90;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}
				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForTeacher[8] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForTeacher[8] = Date(tempDay, tempMonth, year);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForTeacher[8] = Date(day, month, year);

				cout << "\n\nBook Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Document? " << listOfDocs[issuedDocLocationsForTeacher[8]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[8]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfDocs[issuedDocLocationsForTeacher[8]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 1)
			{
				issuedBookDateForTeacher[8] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 90;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}
				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForTeacher[8] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForTeacher[8] = Date(tempDay, tempMonth, year);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForTeacher[8] = Date(day, month, year);

				cout << "\n\nDocument Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	}
	else if (Rchoice == 10)
	{
	if (issuedBookLocationsForTeacher[9] > 0)
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Book ? " << listOfBooks[issuedBookLocationsForTeacher[9]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForTeacher[9]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfBooks[issuedBookLocationsForTeacher[9]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 1)
			{
				issuedBookDateForTeacher[9] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 90;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}
				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForTeacher[9] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForTeacher[9] = Date(tempDay, tempMonth, year);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForTeacher[9] = Date(day, month, year);

				cout << "\n\nBook Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Document? " << listOfDocs[issuedDocLocationsForTeacher[9]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForTeacher[9]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfDocs[issuedDocLocationsForTeacher[9]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 1)
			{
				issuedBookDateForTeacher[9] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 90;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}
				if (tempDay > 30)
				{
					tempDay -= 30;

					tempMonth++;
				}

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForTeacher[9] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForTeacher[9] = Date(tempDay, tempMonth, year);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForTeacher[9] = Date(day, month, year);

				cout << "\n\nDocument Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	}
	else
	{
	
	cout << "\n\nInvalid Choice";
	
	system("Pause");
	
	}
}

void fineCalculationForTeacher(int* fineForTeacher, Date* returnBookDateForTeacher, int &index)
{
	int day = 0, month = 0, year = 0, tempDay = 0, tempMonth = 0, tempYear = 0, temp = 0;

	cout << "\nEnter Present Day Month And Year Respectively : ";

	cin >> day >> month >> year;

	if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
	{

		tempDay = returnBookDateForTeacher[index].getDay();

		tempMonth = returnBookDateForTeacher[index].getMonth();

		tempYear = returnBookDateForTeacher[index].getYear();

		if (day > tempDay)
		{
			tempDay = day - tempDay;

			temp = tempDay;
		}
		else
		{
			tempDay = 0;
		}

		if (month > tempMonth)
		{
			tempMonth = month - tempMonth;
		}
		else
		{
			tempMonth = 0;

			temp = 0;

		}

		if (year > tempYear)
		{
			tempYear = year - tempYear;
		}
		else
		{
			tempYear = 0;
		}

		if (tempMonth > 0)
		{
			temp = temp + (30 * tempMonth);
		}

		if (tempYear > 0)
		{
			temp = temp + (365 * tempYear);
		}

		temp = temp * 10;

		if (fineForTeacher[index] > 0)
		{
			fineForTeacher[index] = fineForTeacher[index] + temp;
		}
		else
		{
			fineForTeacher[index] = temp;
		}
	}
}

void Staff::seeIssuedBooksForStaff(Book* listOfBooks, Document* listOfDocs)
{
	system("CLS");

	int i = 0, j = 1;

	cout << "\n------------------------------------------------------------------------------";

	while (i < 5)
	{
		if (issuedBookLocationsForStaff[i] > 0)
		{
			cout << "\n\n" << (j) << ":Book Name : " << listOfBooks[issuedBookLocationsForStaff[i]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForStaff[i]].getCategory() << " || Issue Date : " << issuedBookDateForStaff[i].getDay() << "/" << issuedBookDateForStaff[i].getMonth() << "/" << issuedBookDateForStaff[i].getYear() << " || Return Date " << returnBookDateForStaff[i].getDay() << "/" << returnBookDateForStaff[i].getMonth() << "/" << returnBookDateForStaff[i].getYear();

			j++;

			i++;
		}
		else
		{
			cout << "\n\n" << (j) << ":Book Name : " << listOfDocs[issuedDocLocationsForStaff[i]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForStaff[i]].getDocCategory() << " || Issue Date : " << issuedBookDateForStaff[i].getDay() << "/" << issuedBookDateForStaff[i].getMonth() << "/" << issuedBookDateForStaff[i].getYear() << " || Return Date " << returnBookDateForStaff[i].getDay() << "/" << returnBookDateForStaff[i].getMonth() << "/" << returnBookDateForStaff[i].getYear();

			j++;

			i++;
		}
	}
	cout << "\n------------------------------------------------------------------------------";
}
void Staff::returnBooksForStaff(int* STIndexLoc, int &STLoc, Book* listOfBooks, Document* listOfDocs)
{

	system("CLS");

	int i = 0, j = 1, Rchoice = 0, Dchoice = 0;

	static int k = 0;

	seeIssuedBooksForStaff(listOfBooks, listOfDocs);

	cout << "\n\nWhich Book Do You Want To Return : ";

	cin >> Rchoice;

	if (Rchoice == 1)
	{
		if (issuedBookLocationsForStaff[0] > 0)
		{
			cout << "\n\nAre You Sure You Want To Return This Book ? " << listOfBooks[issuedBookLocationsForStaff[0]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForStaff[0]].getCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Dchoice;

			if (listOfBooks[issuedBookLocationsForStaff[0]].getBookName() == "\0")
			{
				cout << "\n\nBook Not Found";

				system("Pause");

			}
			else
			{

				if (Dchoice == 1)
				{
					issuedBookLocationsForStaff[0] = 0;
					issuedBookDateForStaff[0].setDay(0);
					issuedBookDateForStaff[0].setMonth(0);
					issuedBookDateForStaff[0].setYear(0);
					returnBookDateForStaff[0].setDay(0);
					returnBookDateForStaff[0].setMonth(0);
					returnBookDateForStaff[0].setYear(0);
					booksCountForStaff--;
					STIndexLoc[k] = 0;
					STIssueBookLoc[k] = 0;
					STReturnBookLoc[k] = 0;
					STLoc++;
					k++;
					listOfBooks[STBookLoc].setIssueInfo("Issued To None");
					cout << "\n\nBook Returned Successfully\n";
					system("Pause");
				}
				else
				{
					cout << "\n\nBook Not Returned";

					system("Pause");
				}
			}
		}
		else
		{
			cout << "\n\nAre You Sure You Want To Return This Document ? " << listOfDocs[issuedDocLocationsForStaff[0]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForStaff[0]].getDocCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Dchoice;

			if (listOfDocs[issuedDocLocationsForStaff[0]].getTitle() == "\0")
			{
				cout << "\n\nDocument Not Found";

				system("Pause");

			}
			else
			{

				if (Dchoice == 1)
				{
					issuedDocLocationsForStaff[0] = 0;
					issuedBookDateForStaff[0].setDay(0);
					issuedBookDateForStaff[0].setMonth(0);
					issuedBookDateForStaff[0].setYear(0);
					returnBookDateForStaff[0].setDay(0);
					returnBookDateForStaff[0].setMonth(0);
					returnBookDateForStaff[0].setYear(0);
					booksCountForStaff--;
					STIndexLoc[k] = 0;
					STIssueBookLoc[k] = 0;
					STReturnBookLoc[k] = 0;
					STLoc++;
					k++;
					listOfDocs[STBookLoc].setStatus("Issued To None");
					cout << "\n\nDocument Returned Successfully\n";
					system("Pause");
				}
				else
				{
					cout << "\n\nDocument Not Returned";

					system("Pause");
				}
			}
		}
	}
	else if (Rchoice == 2)
	{
		if (issuedBookLocationsForStaff[1] > 0)
		{
			cout << "\n\nAre You Sure You Want To Return This Book ? " << listOfBooks[issuedBookLocationsForStaff[1]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForStaff[1]].getCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Dchoice;

			if (listOfBooks[issuedBookLocationsForStaff[1]].getBookName() == "\0")
			{
				cout << "\n\nBook Not Found";

				system("Pause");

			}
			else
			{

				if (Dchoice == 1)
				{
					issuedBookLocationsForStaff[1] = 1;
					issuedBookDateForStaff[1].setDay(0);
					issuedBookDateForStaff[1].setMonth(0);
					issuedBookDateForStaff[1].setYear(0);
					returnBookDateForStaff[1].setDay(0);
					returnBookDateForStaff[1].setMonth(0);
					returnBookDateForStaff[1].setYear(0);
					booksCountForStaff--;
					STIndexLoc[k] = 1;
					STIssueBookLoc[k] = 1;
					STReturnBookLoc[k] = 1;
					STLoc++;
					k++;
					listOfBooks[STBookLoc].setIssueInfo("Issued To None");
					cout << "\n\nBook Returned Successfully\n";
					system("Pause");
				}
				else
				{
					cout << "\n\nBook Not Returned";

					system("Pause");
				}
			}
		}
		else
		{
			cout << "\n\nAre You Sure You Want To Return This Document ? " << listOfDocs[issuedDocLocationsForStaff[1]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForStaff[1]].getDocCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Dchoice;

			if (listOfDocs[issuedDocLocationsForStaff[1]].getTitle() == "\0")
			{
				cout << "\n\nDocument Not Found";

				system("Pause");

			}
			else
			{

				if (Dchoice == 1)
				{
					issuedDocLocationsForStaff[1] = 1;
					issuedBookDateForStaff[1].setDay(0);
					issuedBookDateForStaff[1].setMonth(0);
					issuedBookDateForStaff[1].setYear(0);
					returnBookDateForStaff[1].setDay(0);
					returnBookDateForStaff[1].setMonth(0);
					returnBookDateForStaff[1].setYear(0);
					booksCountForStaff--;
					STIndexLoc[k] = 1;
					STIssueBookLoc[k] = 1;
					STReturnBookLoc[k] = 1;
					STLoc++;
					k++;
					listOfDocs[STBookLoc].setStatus("Issued To None");
					cout << "\n\nDocument Returned Successfully\n";
					system("Pause");
				}
				else
				{
					cout << "\n\nDocument Not Returned";

					system("Pause");
				}
			}
		}
	}
	else if (Rchoice == 3)
	{
		if (issuedBookLocationsForStaff[2] > 0)
		{
			cout << "\n\nAre You Sure You Want To Return This Book ? " << listOfBooks[issuedBookLocationsForStaff[2]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForStaff[2]].getCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Dchoice;

			if (listOfBooks[issuedBookLocationsForStaff[2]].getBookName() == "\0")
			{
				cout << "\n\nBook Not Found";

				system("Pause");

			}
			else
			{

				if (Dchoice == 1)
				{
					issuedBookLocationsForStaff[2] = 2;
					issuedBookDateForStaff[2].setDay(0);
					issuedBookDateForStaff[2].setMonth(0);
					issuedBookDateForStaff[2].setYear(0);
					returnBookDateForStaff[2].setDay(0);
					returnBookDateForStaff[2].setMonth(0);
					returnBookDateForStaff[2].setYear(0);
					booksCountForStaff--;
					STIndexLoc[k] = 2;
					STIssueBookLoc[k] = 2;
					STReturnBookLoc[k] = 2;
					STLoc++;
					k++;
					listOfBooks[STBookLoc].setIssueInfo("Issued To None");
					cout << "\n\nBook Returned Successfully\n";
					system("Pause");
				}
				else
				{
					cout << "\n\nBook Not Returned";

					system("Pause");
				}
			}
		}
		else
		{
			cout << "\n\nAre You Sure You Want To Return This Document ? " << listOfDocs[issuedDocLocationsForStaff[2]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForStaff[2]].getDocCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Dchoice;

			if (listOfDocs[issuedDocLocationsForStaff[2]].getTitle() == "\0")
			{
				cout << "\n\nDocument Not Found";

				system("Pause");

			}
			else
			{

				if (Dchoice == 1)
				{
					issuedDocLocationsForStaff[2] = 2;
					issuedBookDateForStaff[2].setDay(0);
					issuedBookDateForStaff[2].setMonth(0);
					issuedBookDateForStaff[2].setYear(0);
					returnBookDateForStaff[2].setDay(0);
					returnBookDateForStaff[2].setMonth(0);
					returnBookDateForStaff[2].setYear(0);
					booksCountForStaff--;
					STIndexLoc[k] = 2;
					STIssueBookLoc[k] = 2;
					STReturnBookLoc[k] = 2;
					STLoc++;
					k++;
					listOfDocs[STBookLoc].setStatus("Issued To None");
					cout << "\n\nDocument Returned Successfully\n";
					system("Pause");
				}
				else
				{
					cout << "\n\nDocument Not Returned";

					system("Pause");
				}
			}
		}
	}
	else if (Rchoice == 4)
	{
		if (issuedBookLocationsForStaff[3] > 0)
		{
			cout << "\n\nAre You Sure You Want To Return This Book ? " << listOfBooks[issuedBookLocationsForStaff[3]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForStaff[3]].getCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Dchoice;

			if (listOfBooks[issuedBookLocationsForStaff[3]].getBookName() == "\0")
			{
				cout << "\n\nBook Not Found";

				system("Pause");

			}
			else
			{

				if (Dchoice == 1)
				{
					issuedBookLocationsForStaff[3] = 3;
					issuedBookDateForStaff[3].setDay(0);
					issuedBookDateForStaff[3].setMonth(0);
					issuedBookDateForStaff[3].setYear(0);
					returnBookDateForStaff[3].setDay(0);
					returnBookDateForStaff[3].setMonth(0);
					returnBookDateForStaff[3].setYear(0);
					booksCountForStaff--;
					STIndexLoc[k] = 3;
					STIssueBookLoc[k] = 3;
					STReturnBookLoc[k] = 3;
					STLoc++;
					k++;
					listOfBooks[STBookLoc].setIssueInfo("Issued To None");
					cout << "\n\nBook Returned Successfully\n";
					system("Pause");
				}
				else
				{
					cout << "\n\nBook Not Returned";

					system("Pause");
				}
			}
		}
		else
		{
			cout << "\n\nAre You Sure You Want To Return This Document ? " << listOfDocs[issuedDocLocationsForStaff[3]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForStaff[3]].getDocCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Dchoice;

			if (listOfDocs[issuedDocLocationsForStaff[3]].getTitle() == "\0")
			{
				cout << "\n\nDocument Not Found";

				system("Pause");

			}
			else
			{

				if (Dchoice == 1)
				{
					issuedDocLocationsForStaff[3] = 3;
					issuedBookDateForStaff[3].setDay(0);
					issuedBookDateForStaff[3].setMonth(0);
					issuedBookDateForStaff[3].setYear(0);
					returnBookDateForStaff[3].setDay(0);
					returnBookDateForStaff[3].setMonth(0);
					returnBookDateForStaff[3].setYear(0);
					booksCountForStaff--;
					STIndexLoc[k] = 3;
					STIssueBookLoc[k] = 3;
					STReturnBookLoc[k] = 3;
					STLoc++;
					k++;
					listOfDocs[STBookLoc].setStatus("Issued To None");
					cout << "\n\nDocument Returned Successfully\n";
					system("Pause");
				}
				else
				{
					cout << "\n\nDocument Not Returned";

					system("Pause");
				}
			}
		}
	}
	else if (Rchoice == 5)
	{
	if (issuedBookLocationsForStaff[4] > 0)
	{
		cout << "\n\nAre You Sure You Want To Return This Book ? " << listOfBooks[issuedBookLocationsForStaff[4]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForStaff[4]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfBooks[issuedBookLocationsForStaff[4]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found";

			system("Pause");

		}
		else
		{

			if (Dchoice == 4)
			{
				issuedBookLocationsForStaff[4] = 4;
				issuedBookDateForStaff[4].setDay(0);
				issuedBookDateForStaff[4].setMonth(0);
				issuedBookDateForStaff[4].setYear(0);
				returnBookDateForStaff[4].setDay(0);
				returnBookDateForStaff[4].setMonth(0);
				returnBookDateForStaff[4].setYear(0);
				booksCountForStaff--;
				STIndexLoc[k] = 4;
				STIssueBookLoc[k] = 4;
				STReturnBookLoc[k] = 4;
				STLoc++;
				k++;
				listOfBooks[STBookLoc].setIssueInfo("Issued To None");
				cout << "\n\nBook Returned Successfully\n";
				system("Pause");
			}
			else
			{
				cout << "\n\nBook Not Returned";

				system("Pause");
			}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Return This Document ? " << listOfDocs[issuedDocLocationsForStaff[4]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForStaff[4]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Dchoice;

		if (listOfDocs[issuedDocLocationsForStaff[4]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found";

			system("Pause");

		}
		else
		{

			if (Dchoice == 4)
			{
				issuedDocLocationsForStaff[4] = 4;
				issuedBookDateForStaff[4].setDay(0);
				issuedBookDateForStaff[4].setMonth(0);
				issuedBookDateForStaff[4].setYear(0);
				returnBookDateForStaff[4].setDay(0);
				returnBookDateForStaff[4].setMonth(0);
				returnBookDateForStaff[4].setYear(0);
				booksCountForStaff--;
				STIndexLoc[k] = 4;
				STIssueBookLoc[k] = 4;
				STReturnBookLoc[k] = 4;
				STLoc++;
				k++;
				listOfDocs[STBookLoc].setStatus("Issued To None");
				cout << "\n\nDocument Returned Successfully\n";
				system("Pause");
			}
			else
			{
				cout << "\n\nDocument Not Returned";

				system("Pause");
			}
		}
	}
	}
	else
	{
	cout << "Invalid Choice Try Again";

	system("Pause");
	}
}
void Staff::reIssueBooksForStaff(Book* listOfBooks, Document* listOfDocs)
{
	system("CLS");

	int i = 0, j = 1, Rchoice, day, month, year, tempDay, tempMonth, tempYear;

	seeIssuedBooksForStaff(listOfBooks,listOfDocs);

	cout << "\n\nWhich Book Do You Want To Re-Issue : ";

	cin >> Rchoice;

	if (Rchoice == 1)
	{
		if (issuedBookLocationsForStaff[0] > 0)
		{
			cout << "\n\nAre You Sure You Want To Re-Issue This Book ? " << listOfBooks[issuedBookLocationsForStaff[0]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForStaff[0]].getCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Rchoice;

			if (listOfBooks[issuedBookLocationsForStaff[0]].getBookName() == "\0")
			{
				cout << "\n\nBook Not Found ";

				system("Pause");

			}
			else
			{
				cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

				cin >> day >> month >> year;

				if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
				{
					issuedBookDateForStaff[0] = Date(day, month, year);
				}

				else
				{
					cout << "\n\nDate Not Correct";

					system("Pause");

				}

				day = day + 21;

				if (day > 30)
				{
					tempDay = day - 30;

					tempMonth = month;

					tempMonth++;

					if (tempMonth > 12)
					{
						tempMonth = tempMonth - 12;

						tempYear = year;

						tempYear++;

						returnBookDateForStaff[0] = Date(tempDay, tempMonth, tempYear);

						cout << "\n\nBook Re-Issued Successfully";

						system("Pause");
					}
					else
					{
						returnBookDateForStaff[0] = Date(tempDay, tempMonth, year);

						cout << "\n\nBook Re-Issued Successfully";

						system("Pause");
					}
				}

				else
				{
					returnBookDateForStaff[0] = Date(day, month, year);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
			}
		}
		else
		{
			cout << "\n\nAre You Sure You Want To Re-Issue This Document ? " << listOfDocs[issuedDocLocationsForStaff[0]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForStaff[0]].getDocCategory();

			cout << "\n\nPress 1 For Yes And 2 For No : ";

			cin >> Rchoice;

			if (listOfDocs[issuedDocLocationsForStaff[0]].getTitle() == "\0")
			{
				cout << "\n\nDocument Not Found ";

				system("Pause");

			}
			else
			{
				cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

				cin >> day >> month >> year;

				if (day > 0 && day <= 30 && month > 0 && month <= 12 && year > 0)
				{
					issuedBookDateForStaff[0] = Date(day, month, year);
				}

				else
				{
					cout << "\n\nDate Not Correct";

					system("Pause");

				}

				day = day + 21;

				if (day > 30)
				{
					tempDay = day - 30;

					tempMonth = month;

					tempMonth++;

					if (tempMonth > 12)
					{
						tempMonth = tempMonth - 12;

						tempYear = year;

						tempYear++;

						returnBookDateForStaff[0] = Date(tempDay, tempMonth, tempYear);

						cout << "\n\nDocument Re-Issued Successfully";

						system("Pause");
					}
					else
					{
						returnBookDateForStaff[0] = Date(tempDay, tempMonth, year);

						cout << "\n\nDocuemnt Re-Issued Successfully";

						system("Pause");
					}
				}

				else
				{
					returnBookDateForStaff[0] = Date(day, month, year);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
			}
		}
	}
	else if (Rchoice == 2)
	{	
	if (issuedBookLocationsForStaff[1] > 0)
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Book ? " << listOfBooks[issuedBookLocationsForStaff[1]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForStaff[1]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfBooks[issuedBookLocationsForStaff[1]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 1 && month <= 12 && year > 1)
			{
				issuedBookDateForStaff[1] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 21;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForStaff[1] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForStaff[1] = Date(tempDay, tempMonth, year);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForStaff[1] = Date(day, month, year);

				cout << "\n\nBook Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Document ? " << listOfDocs[issuedDocLocationsForStaff[1]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForStaff[1]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfDocs[issuedDocLocationsForStaff[1]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 1 && month <= 12 && year > 1)
			{
				issuedBookDateForStaff[1] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 21;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForStaff[1] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForStaff[1] = Date(tempDay, tempMonth, year);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForStaff[1] = Date(day, month, year);

				cout << "\n\nDocument Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	}
	else if (Rchoice == 3)
	{
	if (issuedBookLocationsForStaff[2] > 0)
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Book ? " << listOfBooks[issuedBookLocationsForStaff[2]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForStaff[2]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfBooks[issuedBookLocationsForStaff[2]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 1 && month <= 12 && year > 1)
			{
				issuedBookDateForStaff[2] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 21;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForStaff[2] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForStaff[2] = Date(tempDay, tempMonth, year);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForStaff[2] = Date(day, month, year);

				cout << "\n\nBook Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Document ? " << listOfDocs[issuedDocLocationsForStaff[2]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForStaff[2]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfDocs[issuedDocLocationsForStaff[2]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 1 && month <= 12 && year > 1)
			{
				issuedBookDateForStaff[2] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 21;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForStaff[2] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForStaff[2] = Date(tempDay, tempMonth, year);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForStaff[2] = Date(day, month, year);

				cout << "\n\nDocument Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	}
	else if (Rchoice == 4)
	{
	if (issuedBookLocationsForStaff[3] > 0)
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Book ? " << listOfBooks[issuedBookLocationsForStaff[3]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForStaff[3]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfBooks[issuedBookLocationsForStaff[3]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 1 && month <= 12 && year > 1)
			{
				issuedBookDateForStaff[3] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 21;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForStaff[3] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForStaff[3] = Date(tempDay, tempMonth, year);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForStaff[3] = Date(day, month, year);

				cout << "\n\nBook Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Document ? " << listOfDocs[issuedDocLocationsForStaff[3]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForStaff[3]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfDocs[issuedDocLocationsForStaff[3]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 1 && month <= 12 && year > 1)
			{
				issuedBookDateForStaff[3] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 21;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForStaff[3] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForStaff[3] = Date(tempDay, tempMonth, year);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForStaff[3] = Date(day, month, year);

				cout << "\n\nDocument Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	}
	else if (Rchoice == 5)
	{
	if (issuedBookLocationsForStaff[4] > 0)
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Book ? " << listOfBooks[issuedBookLocationsForStaff[4]].getBookName() << " || Category : " << listOfBooks[issuedBookLocationsForStaff[4]].getCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfBooks[issuedBookLocationsForStaff[4]].getBookName() == "\0")
		{
			cout << "\n\nBook Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Book Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 1 && month <= 12 && year > 1)
			{
				issuedBookDateForStaff[4] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 21;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForStaff[4] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForStaff[4] = Date(tempDay, tempMonth, year);

					cout << "\n\nBook Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForStaff[4] = Date(day, month, year);

				cout << "\n\nBook Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	else
	{
		cout << "\n\nAre You Sure You Want To Re-Issue This Document ? " << listOfDocs[issuedDocLocationsForStaff[4]].getTitle() << " || Category : " << listOfDocs[issuedDocLocationsForStaff[4]].getDocCategory();

		cout << "\n\nPress 1 For Yes And 2 For No : ";

		cin >> Rchoice;

		if (listOfDocs[issuedDocLocationsForStaff[4]].getTitle() == "\0")
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");

		}
		else
		{
			cout << "\n\nEnter Day Month And Year At Which the Document Is Issued Respectively : ";

			cin >> day >> month >> year;

			if (day > 0 && day <= 30 && month > 1 && month <= 12 && year > 1)
			{
				issuedBookDateForStaff[4] = Date(day, month, year);
			}

			else
			{
				cout << "\n\nDate Not Correct";

				system("Pause");

			}

			day = day + 21;

			if (day > 30)
			{
				tempDay = day - 30;

				tempMonth = month;

				tempMonth++;

				if (tempMonth > 12)
				{
					tempMonth = tempMonth - 12;

					tempYear = year;

					tempYear++;

					returnBookDateForStaff[4] = Date(tempDay, tempMonth, tempYear);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
				else
				{
					returnBookDateForStaff[4] = Date(tempDay, tempMonth, year);

					cout << "\n\nDocument Re-Issued Successfully";

					system("Pause");
				}
			}

			else
			{
				returnBookDateForStaff[4] = Date(day, month, year);

				cout << "\n\nDocument Re-Issued Successfully";

				system("Pause");
			}
		}
	}
	}
	else
	{
	cout << "\n\nInvalid Choice Try Again";

	system("Pause");

	}
}

void Staff::searchForBooks(Book* listOfBooks,Document* listOfDocs)
{
	system("CLS");

	string tempISBN,tempLC;

	int check = 0,sChoice=0;

	cout << "\n\nWhich thing You Want To Search ? ";
	
	cout << "\n\n1:Books ";

	cout << "\n\n2:Documents(Including Newspaper/Magazines/Journals)";

	cout << "\n\nYour Choice : ";

	cin >> sChoice;

	if (sChoice == 1)
	{
		cin.ignore();

		cout << "\n\nEnter Books ISBN To Search For It : ";

		getline(cin, tempISBN);

		for (int i = 1; i < 101; i++)
		{
			if (tempISBN == listOfBooks[i].getISBN())
			{
				check++;
				cout << "\n-------------------------------------------------------------------------------------------";
				cout << "\nNAME OF BOOK = " << listOfBooks[i].getBookName();
				cout << "\n\nAUTHOR NAME = " << listOfBooks[i].getAuthorName();
				cout << "\n\nYEAR OF PUBLICATION = " << listOfBooks[i].getYOP();
				cout << "\n\nLIBRARY CODE FOR BOOK = " << listOfBooks[i].getLCFB();
				cout << "\n\nISBN = " << listOfBooks[i].getISBN();
				cout << "\n\nCATEGORY = " << listOfBooks[i].getCategory();
				cout << "\n\nSTATUS OF BOOK = " << listOfBooks[i].getSOB();
				cout << "\n\nISSUE STATUS = " << listOfBooks[i].getIssueInfo();
				cout << "\n\nTOTAL NUMBER OF COPIES = " << listOfBooks[i].getNOC();
				cout << "\n\nCOPY NUMBER = " << listOfBooks[i].getCN();
				cout << "\n-------------------------------------------------------------------------------------------";
				break;
			}

		}
		if (check == 0)
		{
			cout << "\n\nBook Not Found ";

			system("Pause");
		}
	}
	else if (sChoice == 2)
	{
		cin.ignore();

		cout << "\n\nEnter Documents Library Code To Search For It : ";

		getline(cin, tempLC);

		for (int i = 1; i < 101; i++)
		{
			if (tempLC == listOfDocs[i].getLibraryCode())
			{
				check++;
				cout << "\n-------------------------------------------------------------------------------------------";
				cout << "\n\nTitle For NewsPaper/Magazine/Journal : " << listOfDocs[i].getTitle();
				cout << "\n\nLibrary Code For NewsPaper/Magazine/Journal : " << listOfDocs[i].getLibraryCode();
				cout << "\n\nStatus Of NewsPaper/Magazine/Journal : " << listOfDocs[i].getStatus();
				cout << "\n\nCategory For NewsPaper/Magazine/Journal : " << listOfDocs[i].getDocCategory();
				cout << "\n\nDate Of Publication For NewsPaper/Magazine/Journal : " << listOfDocs[i].getDateOfPublication();
				cout << "\n-------------------------------------------------------------------------------------------";
				break;
			}
		}
		if (check == 0)
		{
			cout << "\n\nDocument Not Found ";

			system("Pause");
		}
	}
}

void Staff::removeFine(int* fineForStudent, int* fineForTeacher)
{
	system("CLS");
	
	int Fchoice=0,i,remove;

	cout << "\n\nWhose Fines Do You Want To Display ? ";
	cout << "\n\n1:Student Fines ";
	cout << "\n\n2:Teacher Fines ";
	cout << "\n\nYour Choice";
	cin >> Fchoice;

	switch (Fchoice)
	{
	case 1:
	{
		for (i = 0; i < 3; i++)
		{
			cout << (i+1) << " : Fine For Book " << (i+1) << " : " << fineForStudent[i]<<endl;
		}
		cout << "\nSelect The Book Of Which To Fine The Fine Of : ";
		
		cin >> remove;
		
		if (remove == 1)
		{
			fineForStudent[remove - 1] = 0;

			cout << "\nFine Removed Successfully";
		}

		else if (remove == 2)
		{
			fineForStudent[remove - 1] = 0;

			cout << "\nFine Removed Successfully";

		}

		else if (remove == 3)
		{
			fineForStudent[remove - 1] = 0;

			cout << "\nFine Removed Successfully";
		}

		else
		{
			cout << "\nInvalid Choice";

			system("Pause");
		}

		break;
	}
	case 2:
	{
		for (i = 0; i < 10; i++)
		{
			cout << (i) << " : Fine For Book " << (i) << " : " << fineForTeacher[i]<<endl;
		}

		cout << "\nSelect The Book Of Which To Fine The Fine Of : ";

		cin >> remove;

		if (remove == 1)
		{
			fineForStudent[remove - 1] = 0;

			cout << "\nFine Removed Successfully";
		}
		
		else if (remove == 2)
		{
			fineForTeacher[remove - 1] = 0;

			cout << "\nFine Removed Successfully";

		}

		else if (remove == 3)
		{
			fineForTeacher[remove - 1] = 0;

			cout << "\nFine Removed Successfully";

		}

		else if (remove == 4)
		{
			fineForTeacher[remove - 1] = 0;

			cout << "\nFine Removed Successfully";

		}

		else if (remove == 5)
		{
			fineForTeacher[remove - 1] = 0;

			cout << "\nFine Removed Successfully";

		}

		else if (remove == 6)
		{
			fineForTeacher[remove - 1] = 0;

			cout << "\nFine Removed Successfully";

		}

		else if (remove == 7)
		{
			fineForTeacher[remove - 1] = 0;

			cout << "\nFine Removed Successfully";

		}

		else if (remove == 8)
		{
			fineForTeacher[remove - 1] = 0;

			cout << "\nFine Removed Successfully";

		}

		else if (remove == 9)
		{
			fineForTeacher[remove - 1] = 0;

			cout << "\nFine Removed Successfully";

		}

		else if (remove == 10)
		{
			fineForTeacher[remove - 1] = 0;

			cout << "\nFine Removed Successfully";

		}

		else
		{
			cout << "\nInvalid Choice";

			system("Pause");
		}

		break;
	}
	}
}

void Staff::enterNewBooks(Book* listOfBooks,Document* listOfDocs)
{
	system("CLS");

	int indexB,indexD, i,nbChoice;

	string bookName, authorName, yearOfPublication, libraryCodeForBook, ISBN, category, statusOfBook, issueInfo, numberOfCopies, copyNumber;
	
	string libraryCode, status, categoryDoc, title, dateOfPublication;

	cout << "\n\nWhich thing You Want To Add ? ";

	cout << "\n\n1:Books ";

	cout << "\n\n2:Documents(Including Newspaper/Magazines/Journals)";

	cout << "\n\nYour Choice : ";

	cin >> nbChoice;

	for (i = 1; i < 101; i++)
	{
		if (listOfBooks[i].getISBN() == "\0")
		{
			indexB = i;

			break;
		}
	}
	for (i = 1; i < 101; i++)
	{
		if (listOfDocs[i].getLibraryCode() == "\0")
		{
			indexD = i;

			break;
		}
	}

	cout << "\nNote:Please Do Not Enter Rough Spellings Enter The Word Using The Basic Technique Which is First Word Capital And Other Words Small Otherwise The System Will Not Be Able To Find It....Thanks\n";

	system("Pause");

	system("CLS");

	if (nbChoice == 1)
	{

		if (i < 101)
		{

			cin.ignore();

			cout << "\n\nEnter New Book's Details ";

			cout << "\n\nBook Name: ";

			getline(cin, bookName);

			cout << "\n\nAuthor Name : ";

			getline(cin, authorName);

			cout << "\n\nYear Of Publication : ";

			getline(cin, yearOfPublication);

			cout << "\n\nInternational Standard Book Number (ISBN) : ";

			getline(cin, ISBN);

			for (i = 1; i < 101; i++)
			{

				if (ISBN == listOfBooks[i].getISBN())
				{
					cout << "\nISBN Entered Is The Same As a Book Before In The Library Please Change It ";

					cout << "\nEnter New ISBN : ";

					getline(cin, ISBN);

					i = 1;
				}

			}

			cout << "\n\nCategory : ";

			getline(cin, category);

			cout << "\n\nStatus Of Book (Available or Unavailable) : ";

			getline(cin, statusOfBook);

			cout << "\n\nIssue Information : ";

			getline(cin, issueInfo);

			cout << "\n\nLibrary Code For Books : ";

			getline(cin, libraryCodeForBook);

			cout << "\n\nNumber Of Copies Of The Book : ";

			getline(cin, numberOfCopies);

			cout << "\n\nCopy Number Of The Book : ";

			getline(cin, copyNumber);

			listOfBooks[indexB].setBookName(bookName);

			listOfBooks[indexB].setAuthorName(authorName);

			listOfBooks[indexB].setYearOfPublication(yearOfPublication);

			listOfBooks[indexB].setISBN(ISBN);

			listOfBooks[indexB].setCategory(category);

			listOfBooks[indexB].setLibraryCodeForBook(libraryCodeForBook);

			listOfBooks[indexB].setStatusOfBook(statusOfBook);

			listOfBooks[indexB].setIssueInfo(issueInfo);

			listOfBooks[indexB].setNumberOfCopies(numberOfCopies);

			listOfBooks[indexB].setCopyNumber(copyNumber);

			cout << "\n\nNew Book Added Successfully";
		}
		else
		{
			cout << "\n\nBook Directory Full..Cannot Add More Books ";
		}
	}
	else
	{
		if (indexD < 101)
		{
			cin.ignore();

			cout << "\n\nEnter New Documents Details";

			cout << "\n\nNewspaper/Magazine/Journal's Name : ";

			getline(cin, title);

			cout << "\n\nNewspaper/Magazine/Journal's Library Code :";

			getline(cin, libraryCode);

			for (i = 1; i < 101; i++)
			{

				if (libraryCode == listOfDocs[i].getLibraryCode())
				{
					cout << "\nLibrary Code Entered Is The Same As a Document's Before In The Library Please Change It ";

					cout << "\nEnter New Library Code : ";

					getline(cin, libraryCode);

					i = 1;
				}

			}

			cout << "\n\nNewspaper/Magazine/Journal's Category : ";

			getline(cin, categoryDoc);

			cout << "\n\nNewspaper/Magazine/Journal's Status (Available Or Unavailable): ";

			getline(cin, status);

			cout << "\n\nNewspaper/Magazine/Journal's Date Of Publications";

			getline(cin, dateOfPublication);

			listOfDocs[indexD].setCategory(categoryDoc);

			listOfDocs[indexD].setDOP(dateOfPublication);

			listOfDocs[indexD].setStatus(status);

			listOfDocs[indexD].setLibraryCode(libraryCode);

			listOfDocs[indexD].setTitle(title);

			cout << "\n\nNew Newspaper/Magazine/Jounal Added Successfully!!";

		}
		else
		{
			cout << "\n\nDirectory Is Full Cannot Add More Documents ";

			system("Pause");
		}
	}
}
