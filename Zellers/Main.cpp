#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
using namespace std;
int origyear;
string origmonth;
void FindDay(int m, int q, int year,string month);
int CheckLeapYear(int year);
int main() {
	int qq, mm, yyear;
	string day, month;
	cout << "Please Enter Desired Month:";
	cin >> month;

	cout << "Please Enter Desired Day:";
	cin >> qq;

	cout << "Please Enter Desired Year:";
	cin >> yyear;
	origyear = yyear;

	if (month == "January") {
		mm = 13;
		yyear = yyear - 1;
	}
	else if (month == "February") {
		mm = 14;
		yyear = yyear - 1;
	}
	else if (month == "March") {
		mm = 1;
	}
	else if (month == "April") {
		mm = 2;
	}
	else if (month == "May") {
		mm = 3;
	}
	else if (month == "June") {
		mm = 4;
	}
	else if (month == "July") {
		mm = 5;
	}
	else if (month == "August") {
		mm = 6;
	}
	else if (month == "September") {
		mm = 7;
	}
	else if (month == "October") {
		mm = 8;
	}
	else if (month == "Novermber") {
		mm = 9;
	}
	else if (month == "December") {
		mm = 10;
	}
	FindDay(mm,qq,yyear,month);
}

void FindDay(int m, int q, int year,string month)
{
	string day,base,blank;
	int h,first,c,count,limit,leap,left,i;

	h = (q + 5 + ((26 * (m + 1)) / 10) + ((5 * (year % 100)) / 4) + ((21 * (year / 100)) / 4)) % 7;
	cout << h << endl;
	if (h == 0) {
		day = "Saturday";
	}
	else if (h == 1) {
		day = "Sunday";
	}
	else if (h == 2) {
		day = "Monday";
	}
	else if (h == 3) {
		day = "Tuesday";
	}
	else if (h == 4) {
		day = "Wednesday";
	}
	else if (h == 5) {
		day = "Thursday";
	}
	else if (h == 6) {
		day = "Friday";
	}
	cout << month << " " << q << ", " << origyear << " was a " << day << endl;
	first =  (1 + 5 + ((26 * (m + 1)) / 10) + ((5 * (year % 100)) / 4) + ((21 * (year / 100)) / 4)) % 7;
	cout << " " << endl;
	cout << "     Sunday          Monday         Tuesday         Wednesday       Thursday         Friday         Saturday   " << endl;
	if (m == 14) {
		leap = CheckLeapYear(origyear);
		if (leap == 1) {
			limit = 29;
		}
		else if (leap == 0){
			limit = 28;
		}
	}
	else if ((m % 2) == 0) {
		limit = 30;
	}
	else if ((m % 2) != 0) {
		limit = 31;
	}
	//////////////Sunday///////////Monday//////////Tuesday/////////Wednesday/////////Thursday////////Friday////////Saturday/////
	base = "-----------------------------------------------------------------------------------------------------------------";
	//blank = "|               |                |                |                |               |              |              |";
	blank = "|               |               |               |               |               |               |               |";
	cout << base << endl;

	if (first == 0) {
		cout << "|               |               |               |               |               |               | 1             |" << endl;
		cout << blank << endl;
		cout << blank << endl;
		cout << blank << endl;
		cout << base << endl;
		cout << "| 2             | 3             | 4             | 5             | 6             | 7             | 8             |" << endl;
		cout << blank << endl;
		cout << blank << endl;
		cout << blank << endl;
		cout << base << endl;
		cout << "| 9             | 10            | 11            | 12            | 13            | 14            | 15            |" << endl;
		cout << blank << endl;
		cout << blank << endl;
		cout << blank << endl;
		cout << base << endl;
		c = 15;
		count = 0;
		do {
			c += 1;
			count += 1;
			if (count < 7){
				cout << "| " << c << "            ";
			}
			else if (count == 7) {
				cout << "| " << c << "            |" << endl;
				cout << blank << endl;
				cout << blank << endl;
				cout << blank << endl;
				cout << base << endl;
				count = 0;
			}
		} while (c < limit);

	}
else if (first == 1) {
	cout << "| 1             | 2             | 3             | 4             | 5             | 6             | 7             |" << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << base << endl;
	cout << "| 8             | 9             | 10            | 11            | 12            | 13            | 14            |" << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << base << endl;
	c = 14;
	count = 0;
	do {
		c += 1;
		count += 1;
		if (count < 7){
			cout << "| " << c << "            ";
		}
		else if (count == 7) {
			cout << "| " << c << "            |" << endl;
			cout << blank << endl;
			cout << blank << endl;
			cout << blank << endl;
			cout << base << endl;
			count = 0;
		}
	} while (c < limit);
}

else if (first == 2) {
	cout << "|               | 1             | 2             | 3             | 4             | 5             | 6             |" << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout <<blank << endl;
	cout << base << endl;
	cout << "| 7             | 8             | 9             | 10            | 11            | 12            | 13            |" << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << base << endl;
	c = 13;
	count = 0;
	do {
		c += 1;
		count += 1;
		if (count < 7) {
			cout << "| " << c << "            ";
		}
		else if (count == 7) {
			cout << "| " << c << "            |" << endl;
			cout << blank << endl;
			cout << blank << endl;
			cout << blank << endl;
			cout << base << endl;
			count = 0;
		}
	} while (c < limit);
}

else if (first == 3) {
	cout << "|               |               | 1             | 2             | 3             | 4             | 5             |" << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << base << endl;
	cout << "| 6             | 7             | 8             | 9             | 10            | 11            | 12            |" << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << base << endl;
	c = 12;
	count = 0;
	do {
		c += 1;
		count += 1;
		if (count < 7) {
			cout << "| " << c << "            ";
		}
		else if (count == 7) {
			cout << "| " << c << "            |" << endl;
			cout << blank << endl;
			cout << blank << endl;
			cout << blank << endl;
			cout << base << endl;
			count = 0;
		}
	} while (c < limit);

}

else if (first == 4) {
	cout << "|               |               |               | 1             | 2             | 3             | 4             |" << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << base << endl;
	cout << "| 5             | 6             | 7             | 8             | 9             | 10            | 11            |" << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << base << endl;
	c = 11;
	count = 0;
	do {
		c += 1;
		count += 1;
		if (count < 7) {
			cout << "| " << c << "            ";
		}
		else if (count == 7) {
			cout << "| " << c << "            |" << endl;
			cout << blank << endl;
			cout << blank << endl;
			cout << blank << endl;
			cout << base << endl;
			count = 0;
		}
	} while (c < limit);
}

else if (first == 5) {
	cout << "|               |               |               |               | 1             | 2             | 3             |" << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << base << endl;
	cout << "| 4             | 5             | 6             | 7             | 8             | 9             | 10            |" << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << base << endl;
	c = 10;
	count = 0;
	do {
		c += 1;
		count += 1;
		if (count < 7) {
			cout << "| " << c << "            ";
		}
		else if (count == 7) {
			cout << "| " << c << "            |" << endl;
			cout << blank << endl;
			cout << blank << endl;
			cout << blank << endl;
			cout << base << endl;
			count = 0;
		}
	} while (c < limit);

}

else if (first == 6) {
	cout << "|               |               |               |               |               | 1             | 2             |" << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << base << endl;
	cout << "| 3             | 4             | 5             | 6             |  7            | 8             | 9             |" << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << base << endl;
	cout << "| 10            | 11            | 12            | 13            |  14           | 15            | 16            |" << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << blank << endl;
	cout << base << endl;
	c = 16;
	count = 0;
	do {
		c += 1;
		count += 1;
		if (count < 7) {
			cout << "| " << c << "            ";
		}
		else if (count == 7) {
			cout << "| " << c << "            |" << endl;
			cout << blank << endl;
			cout << blank << endl;
			cout << blank << endl;
			cout << base << endl;
			count = 0;
		}
	} while (c < limit);
}
left = 7 - count;
//cout << left << endl;
for (i = 1; i <= left; i++) {
	cout << "|               ";
}
cout << "|"<< endl;
cout << blank << endl;
cout << blank << endl;
cout << blank << endl;
cout << base << endl;
	system("pause");

	main();
}

int CheckLeapYear(int year) {
	int leap;
	leap = 0;
	if (year % 100 == 0) {
		if (year % 400 == 0) {
			leap = 1;
		}
		else {
			leap = 0;
		}
	}
	else if (year % 4 == 0) {
		leap = 1;
	}
	return leap;
}
