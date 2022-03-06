#include <iostream>
using namespace std;

void rules()
{
	system("cls");
	cout << endl
		 << "1.You can play only one quiz at a time." << endl;
	cout << "2.Each quiz have 15 questions." << endl;
	cout << "3.Each question have four options." << endl;
	cout << "4.Each right answer gives you 2 points." << endl;
	cout << "5.Wrong anwer gives you nothing." << endl;
	cout << "6.You can view the answer with the help of view answer option." << endl;
	cout << "7.If you view the answer you will get nothing for that question." << endl;
	cout << "8.After each quiz you see your marks." << endl;
}

void c_language()
{
	system("cls");
	int ans1, ans2, ans3, ans4, ans5, ans6, ans7, ans8, ans9, ans10, ans11, ans12, ans13, ans14, ans15;
	int count = 0;
	cout << endl
		 << "Q: Who is the father of C language??" << endl
		 << endl;
	cout << "1) Bjarne Stroustrop" << endl;
	cout << "2) James Gasling" << endl;
	cout << "3) Dennis Ritchie" << endl;
	cout << "4) Dr. E.F. Codd" << endl
		 << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans1;

	if (ans1 == 3)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans1 == 5)
	{
		cout << "\t\t\tDennis Ritchie" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: How many keyword's in C language?" << endl
		 << endl;
	cout << "1) 23" << endl;
	cout << "2) 32" << endl;
	cout << "3) 48" << endl;
	cout << "4) 255" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans2;

	if (ans2 == 2)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans2 == 5)
	{
		cout << "\t\t\t32" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: How many types of loop in C language?" << endl
		 << endl;
	cout << "1) One" << endl;
	cout << "2) Two" << endl;
	cout << "3) Four" << endl;
	cout << "4) Three" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans3;

	if (ans3 == 4)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans3 == 5)
	{
		cout << "\t\t\tThree" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: In C, we used for Input/Output:" << endl
		 << endl;
	cout << "1) cin & cout" << endl;
	cout << "2) scanf & printf" << endl;
	cout << "3) input & output" << endl;
	cout << "4) Both 1 & 2" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans4;

	if (ans4 == 2)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans4 == 5)
	{
		cout << "\t\t\tscanf & printf" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: What is the range of int data type?" << endl
		 << endl;
	cout << "1) -32768 TO +32767" << endl;
	cout << "2) 0 TO 255" << endl;
	cout << "3) -127 TO +128" << endl;
	cout << "4) None of the these" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans5;

	if (ans5 == 1)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans5 == 5)
	{
		cout << "\t\t\t-32768 TO 32767" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: In which year, C language was develop?" << endl
		 << endl;
	cout << "1) 1979" << endl;
	cout << "2) 1972" << endl;
	cout << "3) 1991" << endl;
	cout << "4) 1995" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans6;

	if (ans6 == 2)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans6 == 5)
	{
		cout << "\t\t\t1972" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: Which type of language is C?" << endl
		 << endl;
	cout << "1) Procedural oriented programming" << endl;
	cout << "2) Object oriented programming" << endl;
	cout << "3) Semi-object programming" << endl;
	cout << "4) None of the these" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans7;

	if (ans7 == 1)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans7 == 5)
	{
		cout << "\t\t\tProcedural oriented programming" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: The format indentifier '%c'  is used for:" << endl
		 << endl;
	cout << "1) int" << endl;
	cout << "2) double" << endl;
	cout << "3) float" << endl;
	cout << "4) char" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans8;

	if (ans8 == 4)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans8 == 5)
	{
		cout << "\t\t\tchar" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: Break statement is used for:" << endl
		 << endl;
	cout << "1) Quit a program" << endl;
	cout << "2) Quit the current itration" << endl;
	cout << "3) Both 1 & 2" << endl;
	cout << "4) None of the these" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans9;

	if (ans9 == 2)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans9 == 5)
	{
		cout << "\t\t\tQuit the current itration" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: float ar[15], What is the size of array ar?" << endl
		 << endl;
	cout << "1) 17" << endl;
	cout << "2) 64" << endl;
	cout << "3) 16" << endl;
	cout << "4) 60" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans10;

	if (ans10 == 4)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans10 == 5)
	{
		cout << "\t\t\t60" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: Which type of statement is 'break' in C language?" << endl
		 << endl;
	cout << "1) Conditional" << endl;
	cout << "2) Jump" << endl;
	cout << "3) Loop" << endl;
	cout << "4) All of above" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans11;

	if (ans11 == 2)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans11 == 5)
	{
		cout << "\t\t\tJump" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: Which pre-defined function is used for comparing two string?" << endl
		 << endl;
	cout << "1) strcpy()" << endl;
	cout << "2) strlen()" << endl;
	cout << "3) strcat()" << endl;
	cout << "4) strcmp()" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans12;

	if (ans12 == 4)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans12 == 5)
	{
		cout << "\t\t\tstrcmp()" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: Which standard library file printf & scanf are located?" << endl
		 << endl;
	cout << "1) stdio.h" << endl;
	cout << "2) string.h" << endl;
	cout << "3) math.h" << endl;
	cout << "4) conio.h" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans13;

	if (ans13 == 1)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans13 == 5)
	{
		cout << "\t\t\tstdio.h" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: Which of the following is the correct comment?" << endl
		 << endl;
	cout << "1) ** Comment **" << endl;
	cout << "2) */ Comment /*" << endl;
	cout << "3) /* Comment */" << endl;
	cout << "4) { Comment }" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans14;

	if (ans14 == 3)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans14 == 5)
	{
		cout << "\t\t\t/* COMMENT */" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: C language was invented in which laboratories?" << endl
		 << endl;
	cout << "1) AT&T Bell labs" << endl;
	cout << "2) Verizon labs" << endl;
	cout << "3) IBM labs" << endl;
	cout << "4) None of the these" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans15;

	if (ans15 == 1)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans15 == 5)
	{
		cout << "\t\t\tAT&T Bell labs" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	if (count <= 5)
		cout << "\t\t\t\t\tPoor performance need to imporve yourself." << endl
			 << endl;

	if (count >= 6 && count == 10)
		cout << "\t\t\t\t\tFair but you can improve." << endl
			 << endl;

	if (count >= 11 && count == 13)
		cout << "\t\t\t\t\tSuperb you are on the right track." << endl
			 << endl;

	if (count >= 14)
		cout << "\t\t\t\t\tAmazing you are master in C language." << endl
			 << endl;

	cout << "\t\t\t\t\tYou have gave " << count << " answers right." << endl
		 << endl;
	cout << "\t\t\t\t\tYour total marks is  " << count * 2 << endl
		 << endl;
}

void c2_language()
{
	system("cls");
	int ans1, ans2, ans3, ans4, ans5, ans6, ans7, ans8, ans9, ans10, ans11, ans12, ans13, ans14, ans15;
	int count = 0;
	cout << endl
		 << " Q: Who is the developer of C++?" << endl
		 << endl;
	cout << "1) Bjarne Stroustrup" << endl;
	cout << "2) James Gosling" << endl;
	cout << "3) Dennis Ritchie" << endl;
	cout << "4) Charles Babbage" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans1;

	if (ans1 == 1)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans1 == 5)
	{
		cout << "\t\t\tBjarne Stroustrup" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: In which lab C++ was developed?" << endl
		 << endl;
	cout << "1) Bell lab" << endl;
	cout << "2) ANSI" << endl;
	cout << "3) SDL" << endl;
	cout << "4) IBM" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans2;

	if (ans2 == 1)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans2 == 5)
	{
		cout << "\t\t\tBell Lab" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: In which year C++ was developed?" << endl
		 << endl;
	cout << "1) 1972" << endl;
	cout << "2) 1979" << endl;
	cout << "3) 1983" << endl;
	cout << "4) 1995" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans3;

	if (ans3 == 2)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans3 == 5)
	{
		cout << "\t\t\t1979" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: What was the name of C++ earlier?" << endl
		 << endl;
	cout << "1) CPP" << endl;
	cout << "2) C++" << endl;
	cout << "3) C with classes" << endl;
	cout << "4) None of the these" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans4;

	if (ans4 == 3)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans4 == 5)
	{
		cout << "C with classes" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: C++ is a ___________________ language." << endl
		 << endl;
	cout << "1) Semi-object oriented programming" << endl;
	cout << "2) Object oriented programming" << endl;
	cout << "3) Procedural oriented programming" << endl;
	cout << "4) None of the these" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans5;

	if (ans5 == 2)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans5 == 5)
	{
		cout << "\t\t\tObject oriented programming" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: Which of the following is a subscript operator?" << endl
		 << endl;
	cout << "1) *" << endl;
	cout << "2) {}" << endl;
	cout << "3) []" << endl;
	cout << "4) ()" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans6;

	if (ans6 == 3)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans6 == 5)
	{
		cout << "\t\t\t[]" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: Which of the following is not a member of the class?" << endl
		 << endl;
	cout << "1) Static Function" << endl;
	cout << "2) Virtual Function" << endl;
	cout << "3) Const Function" << endl;
	cout << "4) Friend Function" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans7;

	if (ans7 == 4)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans7 == 5)
	{
		cout << "\t\t\tFriend Function" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: How many types of constructors are there in c++?" << endl
		 << endl;
	cout << "1) 2" << endl;
	cout << "2) 3" << endl;
	cout << "3) 1" << endl;
	cout << "4) 4" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans8;

	if (ans8 == 4)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans8 == 5)
	{
		cout << "\t\t\t4" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: Which of the following is a valid class declaration?" << endl
		 << endl;
	cout << "1) class A { int x; };" << endl;
	cout << "2) public class A { }" << endl;
	cout << "3) class B" << endl;
	cout << "4) None of the these" << endl;
	cout << "\t\t\t5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans9;

	if (ans9 == 2)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans9 == 5)
	{
		cout << "class A { int x; };" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: Data members & member function of a class are by default?" << endl
		 << endl;
	cout << "1) protected " << endl;
	cout << "2) public" << endl;
	cout << "3) private" << endl;
	cout << "4) Both 2 & 3" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans10;

	if (ans10 == 3)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans10 == 5)
	{
		cout << "private" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: Base class and derived class relation come under" << endl
		 << endl;
	cout << "1) Inheritance" << endl;
	cout << "2) Polymorphism" << endl;
	cout << "3) Encapsulation" << endl;
	cout << "4) Abstraction" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans11;

	if (ans11 == 1)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans11 == 5)
	{
		cout << "\t\t\tInheritance" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: What is the syntax of inheritance of class?" << endl
		 << endl;
	cout << "1) class name" << endl;
	cout << "2) class name:access specifier" << endl;
	cout << "3) class name:access specifier class name" << endl;
	cout << "4) None of the these" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans12;

	if (ans12 == 3)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans12 == 5)
	{
		cout << "\t\t\t class name:access specifier class name" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: How many types of inheritance are there in c++?" << endl
		 << endl;
	cout << "1) Three" << endl;
	cout << "2) Four" << endl;
	cout << "3) Two" << endl;
	cout << "4) Five" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans13;

	if (ans13 == 4)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans13 == 5)
	{
		cout << "\t\t\tFive" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: How many types of polymorphism in C++?" << endl
		 << endl;
	cout << "1) Two" << endl;
	cout << "2) Three" << endl;
	cout << "3) Four" << endl;
	cout << "4) None of the these" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans14;

	if (ans14 == 1)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans14 == 5)
	{
		cout << "Two" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: A class that contains at least one pure virtual function" << endl
		 << endl;
	cout << "1) Virtual Class" << endl;
	cout << "2) Friend Class" << endl;
	cout << "3) Abstract Class" << endl;
	cout << "4) Base Class" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans15;

	if (ans15 == 3)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans15 == 5)
	{
		cout << "\t\t\tAbstract Class" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	if (count <= 5)
		cout << "\t\t\t\t\tPoor performance need to imporve yourself." << endl
			 << endl;

	if (count >= 6 && count == 10)
		cout << "\t\t\t\t\tFair but you can improve." << endl
			 << endl;

	if (count >= 11 && count == 13)
		cout << "\t\t\t\t\tSuperb you are on the right track." << endl
			 << endl;

	if (count >= 14)
		cout << "\t\t\t\t\tAmazing you are master in C language." << endl
			 << endl;

	cout << "\t\t\t\t\tYou have gave " << count << " answers right." << endl
		 << endl;
	cout << "\t\t\t\t\tYour total marks is  " << count * 2 << endl
		 << endl;
}

void java_language()
{
	system("cls");
	int ans1, ans2, ans3, ans4, ans5, ans6, ans7, ans8, ans9, ans10, ans11, ans12, ans13, ans14, ans15;
	int count = 0;
	cout << endl
		 << "Q: Who is the developer of Java?" << endl
		 << endl;
	cout << "1) Bjarne Stroustrup" << endl;
	cout << "2) James Gosling" << endl;
	cout << "3) Dennis Ritchie" << endl;
	cout << "4) Dr. E.F Codd" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans1;

	if (ans1 == 2)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans1 == 5)
	{
		cout << "\t\t\tJames Gosling" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: What is the first name of Java?" << endl
		 << endl;
	cout << "1) Java" << endl;
	cout << "2) Javax" << endl;
	cout << "3) Class and Java" << endl;
	cout << "4) Oak" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans2;

	if (ans2 == 4)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans2 == 5)
	{
		cout << "\t\t\tOak" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: In which year java was developed?" << endl
		 << endl;
	cout << "1) 1991" << endl;
	cout << "2) 1972" << endl;
	cout << "3) 1979" << endl;
	cout << "4) 1995" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans3;

	if (ans3 == 1)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans3 == 5)
	{
		cout << "\t\t\t1991" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: What is the extension of Java code files?" << endl
		 << endl;
	cout << "1) .gt" << endl;
	cout << "2) .oak" << endl;
	cout << "3) .java" << endl;
	cout << "4) .exe" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans4;

	if (ans4 == 3)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans4 == 5)
	{
		cout << "\t\t\t.java" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: Java was developed by ________________." << endl
		 << endl;
	cout << "1) Sun Microsystems" << endl;
	cout << "2) Oracle" << endl;
	cout << "3) Microsoft" << endl;
	cout << "4) ANSI" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans5;

	if (ans5 == 1)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans5 == 5)
	{
		cout << "\t\t\tSun Microsystems" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: In Java, JDK stands for ______________________." << endl
		 << endl;
	cout << "1) Java Design Kit" << endl;
	cout << "2) Java Developer Kit" << endl;
	cout << "3) Java Development Kit" << endl;
	cout << "4) None of the these" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans6;

	if (ans6 == 3)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans6 == 5)
	{
		cout << "\t\t\tJava Development Kit" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: In Java, What we used for input & output." << endl
		 << endl;
	cout << "1) cin & cout" << endl;
	cout << "2) System.out.print & System.in" << endl;
	cout << "3) print & input" << endl;
	cout << "4) printf & scanf" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans7;

	if (ans7 == 2)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans7 == 5)
	{
		cout << "\t\t\tSystem.out.print & System.in" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: In Java, System class is defined in." << endl
		 << endl;
	cout << "1) java.util package" << endl;
	cout << "2) java.io package" << endl;
	cout << "3) java.lang package" << endl;
	cout << "4) None of the these	" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans8;

	if (ans8 == 3)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans8 == 5)
	{
		cout << "\t\t\tjava.lang package" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: Which keyword is used to create a class in Java?" << endl
		 << endl;
	cout << "1) class()" << endl;
	cout << "2) Myclass" << endl;
	cout << "3) className" << endl;
	cout << "4) class" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans9;

	if (ans9 == 4)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans9 == 5)
	{
		cout << "\t\t\tclass" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: Which of the following is not a java feature?" << endl
		 << endl;
	cout << "1) Dynamic" << endl;
	cout << "2) Architecture Neutral" << endl;
	cout << "3) Use of pointers" << endl;
	cout << "4) Object Orienter" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans10;

	if (ans10 == 3)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans10 == 5)
	{
		cout << "\t\t\tUse of pointer" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: _______ is used to find and fix bugs in java programs." << endl
		 << endl;
	cout << "1) JVM" << endl;
	cout << "2) JRE" << endl;
	cout << "3) JDK" << endl;
	cout << "4) JDB" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans11;

	if (ans11 == 4)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans11 == 5)
	{
		cout << "\t\t\tJDB" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: Which of the following is a Java reserved word?" << endl
		 << endl;
	cout << "1) While" << endl;
	cout << "2) this" << endl;
	cout << "3) Class" << endl;
	cout << "4) external" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans12;

	if (ans12 == 2)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans12 == 5)
	{
		cout << "\t\t\tthis" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: Which keyword is used for accessing the features of the package?" << endl
		 << endl;
	cout << "1) package" << endl;
	cout << "2) extends" << endl;
	cout << "3) import" << endl;
	cout << "4) export" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans13;

	if (ans13 == 3)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans13 == 5)
	{
		cout << "\t\t\timport" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: Which type of language is Java?" << endl
		 << endl;
	cout << "1) Platform Dependent" << endl;
	cout << "2) Sequence Dependent" << endl;
	cout << "3) Platform Independent" << endl;
	cout << "4) None of these" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans14;

	if (ans14 == 3)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans14 == 5)
	{
		cout << "\t\t\tPlatform Independent" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	cout << "Q: Which Component is used to compile, debug and execute the java programs?" << endl
		 << endl;
	cout << "1) JRE" << endl;
	cout << "2) JIT" << endl;
	cout << "3) JDK" << endl;
	cout << "4) JVM" << endl;
	cout << "\t\t\tEnter 5 to view the answer" << endl
		 << endl;
	cout << "Enter your option = ";
	cin >> ans15;

	if (ans15 == 3)
	{
		cout << "\t\t\tRight answer" << endl
			 << endl;
		count++;
	}
	else if (ans15 == 5)
	{
		cout << "\t\t\tJDK" << endl
			 << endl;
	}
	else
		cout << "\t\t\tWrong answer" << endl
			 << endl;

	if (count <= 5)
		cout << "\t\t\t\t\tPoor performance need to imporve yourself." << endl
			 << endl;

	if (count >= 6 && count == 10)
		cout << "\t\t\t\t\tFair but you can improve." << endl
			 << endl;

	if (count >= 11 && count == 13)
		cout << "\t\t\t\t\tSuperb you are on the right track." << endl
			 << endl;

	if (count >= 14)
		cout << "\t\t\t\t\tAmazing you are master in C language." << endl
			 << endl;

	cout << "\t\t\t\t\tYou have gave " << count << " answers right." << endl
		 << endl;
	cout << "\t\t\t\t\tYour total marks is  " << count * 2 << endl
		 << endl;
}

int main()
{
	int ch;
	do
	{

		cout << endl
			 << endl
			 << "\t\t\t\t\t|````````````````````````````````````|" << endl;
		cout << "\t\t\t\t\t|--------- PROGRAMING QUIZ ----------|" << endl;
		cout << "\t\t\t\t\t|____________________________________|" << endl
			 << endl
			 << endl;

		cout << "\t\t\t\t\t\tPress 1: For Rules " << endl;
		cout << "\t\t\t\t\t\tPress 2: For C " << endl;
		cout << "\t\t\t\t\t\tPress 3: For C++ " << endl;
		cout << "\t\t\t\t\t\tPress 4: For Java " << endl;
		cout << "\t\t\t\t\t\tPress 5: For Exit " << endl;
		cout << "\t\t\t\t\t\tEnter your choice = ";
		cin >> ch;

		switch (ch)
		{
		case 1:
			rules();
			break;

		case 2:
			c_language();

			break;

		case 3:
			c2_language();
			break;

		case 4:
			java_language();
			break;

		case 5:
			exit(0);
			break;

		default:
			cout << "\t\t\t\t\t\tEnter correct choice" << endl;
		}

	} while (ch != 5);

	return 0;
}