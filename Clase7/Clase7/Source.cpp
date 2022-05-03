//Find factorial of any number.
//
//Check a enter number is Prime number or not.
//
//Calculate Area of Square.
//
//Convert days to years, monthsand weeks.
//
//Program to find string length.
//
//Compare two strings using strcmpand print if they're equals.



//"**1 factorial of any number"
// 
//#include<iostream>
//using namespace std;
//int main()
//{
//    int num, i, fact = 1;
//    cout << "enter the number: ";
//    cin >> num;
//    for (i = num; i >= 1; i--)
//        fact = fact * i;
//    cout << "\nfactorial = " << fact;
//    cout << endl;
//    return 0;
//}

//"en el ciclo for i es igual al numero ingresado siempre y cuando sea mayor o igual a 1"

//"2 Check a enter number is prime or not"
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int num1, ctr = 0;
//    cout << "\n\n check whether a number is prime or not:\n";
//    cout << "--------------------------------------------\n";
//    cout << " input a number to check prime or not: ";
//    cin >> num1;
//    for (int a = 1; a <= num1; a++)
//    {
//        if (num1 % a == 0)
//        {
//            ctr++;
//        }
//    }
//    if (ctr == 2)
//    {
//        cout << " the entered number is a prime number. \n";
//    }
//    else {
//        cout << " the number you entered is not a prime number. \n";
//    }
//}

//"3 Calculate area of a square"

//#include <iostream>
//using namespace std;
//
//int main() //function main begins program execution
//{
//	int square_area, square_side;
//
//	cout << "Enter the side of square:";
//	cin >> square_side;
//
//	square_area = square_side * square_side;
//
//	cout << "Area of Square: " << square_area << endl;
//	return 0;
//} 

//"4 Convert days to years months and weeks"

//#include<iostream>
//
//using namespace std;
//int main()
//{
//	int tot, days, weeks, months, years;
//	cout << "Enter Total Number of Days: ";
//	cin >> tot;
//	years = tot / 365;
//	months = (tot % 365) / 30;
//	weeks = ((tot % 365) % 30) / 7;
//	days = ((tot % 365) % 30) % 7;
//
//	cout << "\nYears: " << years << endl;
//	cout << "Months: " << months << endl;
//	cout << "Weeks: " << weeks << endl;
//	cout << "Days: " << days << endl;
//	cout << endl;
//	return 0;
//}

//"5 Program to find string length"

//#include <iostream>
//#include <cstring>
//using namespace std;
//int main() {
//	char charr[50];
//	cout << "Enter total text: ";
//	cin.getline (charr, 500, '\n');
//	int length = strlen(charr);
//	cout << "the length of the character array is " << length;
//	return 0;
//}


//"6 Compare two strings using strcmpand print if they're equals"

//#include <iostream> 
//using namespace std;
//void compare(string s1, string s2)
//{
//    if (s1 != s2)
//        cout << "Not equal";
//
//    else
//        cout << "Equal";
//}
//int main()
//{
//    char s1[] = ""; 
//    cout << "Enter string 1 here: ";
//    cin.getline (s1, 500, '\n');
//
//    char s2[] = "";
//    cout << "Enter string 2 here: ";
//    cin.getline(s2, 500, '\n');
//
//    compare(s1, s2);
//    return 0;
//}



