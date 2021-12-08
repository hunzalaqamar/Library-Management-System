//this is the Library Management System Header File Which Contains all the class declarations and function declarations

#include <string>

using namespace std;

class Date
{
private:
	int day, month, year;
public:
	Date();

	Date(int newDay, int newMonth, int newYear);
	
	int getDay();
	
	int getMonth();
	
	int getYear();

	void setDay(int newDay);

	void setMonth(int newMonth);

	void setYear(int newYear);
};
class Book
{
private:

	string bookName;

	string authorName;

	string yearOfPublication;

	string libraryCodeForBook;

	string ISBN;

	string category;

	string statusOfBook;

	string issueInfo;

	string numberOfCopies;

	string copyNumber;

public:

	Book();

	Book(string newBookName, string newAuthorName, string newYearOfPublication, string newLibraryCodeForBook, string newISBN, string newCategory, string newStatusOfBook, string newIssueInfo, string newNumberOfCopies, string newCopyNumber);

	string getBookName();

	string getAuthorName();

	string getYOP();

	string getLCFB();

	string getISBN();

	string getCategory();

	string getSOB();

	string getIssueInfo();

	string getNOC();

	string getCN();

	void setBookName(string newBookName);

	void setAuthorName(string newAuthorName);

	void setYearOfPublication(string newYearOfPublication);

	void setLibraryCodeForBook(string newLibraryCodeForBook);

	void setISBN(string newISBN);

	void setCategory(string newCategory);

	void setStatusOfBook(string newStatusOfBook);

	void setIssueInfo(string newIssueInfo);

	void setNumberOfCopies(string newNumberOfCopies);
	 
	void setCopyNumber(string newCopyNumber);

	void bookMenu(Book* listOfBooks, int index);

};

class Document
{
protected:
	string libraryCode;
	
	string status; 
	
	string category; 
	
	string title;
	
	string dateOfPublication;
public:
	Document();

	Document(string title1, string dateOfPublication1, string libraryCode1, string status1, string category1);
	
	void setTitle(string title1);

	void setDOP(string dateOfPublication);
	
	void setLibraryCode(string libraryCode1);
	
	void setStatus(string status1);
	
	void setCategory(string category1);
	
	string getLibraryCode();
	
	string getStatus();
	
	string getDocCategory();

	string getDateOfPublication();

	string getTitle();

	void docMenu(Document* listOfDocs, int i);
	
};
class Student
{
protected:

	string studentId;

	string studentName;

	Date issuedBookDateForStudent[3];

	Date returnBookDateForStudent[3];

	int sIndexLoc[3], sIssueBookLoc[3], sReturnBookLoc[3], issuedBookLocationsForStudent[3], issuedDocLocationsForStudent[3], sLoc = 0, bookLoc = 0, booksCountForStudent, fineForStudent[3];

public:

	Student();

	Student(string newStudentId);

	string getStudentId();

	string getStudentName();

	void setStudentId(string newStudentId);

	void setStudentName(string newStudentId);

	void seeIssuedBooksForStudent(Book* listOfBooks, Document* listOfDocs);

	void returnBooksForStudent(int* indexLoc,int &sLoc,Book* listOfBooks, Document* listOfDocs);

	void reIssueBooksForStudent(Book* listOfBooks, Document* listOfDocs);
};

class Teacher
{
protected:

	string teacherId;

	string teacherName;

	Date issuedBookDateForTeacher[10];

	Date returnBookDateForTeacher[10];

	int tIndexLoc[10], tIssueBookLoc[10], tReturnBookLoc[10], tLoc = 0, tBookLoc = 0, issuedBookLocationsForTeacher[10], issuedDocLocationsForTeacher[10], booksCountForTeacher, fineForTeacher[10];

public:

	Teacher();

	Teacher(string newTeacherId);

	string getTeacherId();

	string getTeacherName();

	void setTeacherId(string newTeacherId);

	void setTeacherName(string newTeacherName);

	void seeIssuedBooksForTeacher(Book* listOfBooks, Document* listOfDocs);

	void returnBooksForTeacher(int* tIndexLoc, int &tLoc,Book* listOfBooks, Document* listOfDocs);

	void reIssueBooksForTeacher(Book* listOfBooks, Document* listOfDocs);

};

class Staff
{
protected:

	string staffId;

	string staffName;

	Date issuedBookDateForStaff[5];

	Date returnBookDateForStaff[5];

	int STIndexLoc[5], STIssueBookLoc[5], STReturnBookLoc[5], STLoc = 0, STBookLoc = 0, issuedBookLocationsForStaff[5], issuedDocLocationsForStaff[5], booksCountForStaff;

public:

	Staff();

	Staff(string newStaffId);

	string getStaffId();

	string getStaffName();

	void setStaffId(string newStaffId);

	void setStaffName(string newStaffName);

	void seeIssuedBooksForStaff(Book* listOfBooks, Document* listOfDocs);

	void returnBooksForStaff(int* STIndexLoc, int &STLoc,Book* listOfBooks, Document* listOfDocs);

	void reIssueBooksForStaff(Book* listOfBooks, Document* listOfDocs);

	void searchForBooks(Book* listOfBooks, Document* listOfDocs);

	void removeFine(int* fineForStudent, int* fineForTeacher);

	void enterNewBooks(Book* listOfBooks, Document* listOfDocs);

};
class DirectoryUser
{
protected:
	Student studentObj[10];

	Teacher teacherObj[10];

	Staff staffObj[10];
};

class DirectoryDocuments:public DirectoryUser,public Student,public Teacher,public Staff
{
protected:
	Book listOfBooks[101];

	Document listOfDocs[101];

public:
	void bookDetails();

	void docDetails();

	void executeSystem();

};
