#include<iostream>
#include<cstring>
#include<string>
#include<cstdlib>
#include<iomanip>

using namespace std;


int main(){


	/*
	// converting string character array into integer
	char temp[10] = "29";
	int num = atoi(temp);
	int results = num * 2;
	cout << "Ans is: " << results << endl;

	// convert string into array of characters using c_str then display

	string temp1 = "120";
	double price = atof(temp1.c_str());
	double results1 = price * 0.9;

	cout << "Price, after a 10% discount is" << results1 << endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	*/

	string line;
	string names[30]; // give it a size
	int test1[6];
	int test2[6];

	// names
	cout << "Enter data: " << endl;
	getline(cin, line);
	int x = 0;
	int pos = 0;
	pos = line.find(" ");
	names[x] = line.substr(0, pos);
	line = line.erase(0, pos + 1);

	// test1
	pos = line.find(" ");
	test1[x] = atoi(line.substr(0, pos).c_str());
	line = line.erase(0, pos + 1);

		// test2
	test2[x] = atoi(line.substr(0, line.length()).c_str());
	//x++;

	cout << "Name   Test1  Test2 \n" << endl;
	cout << names[0] << " " << test1[0] << "     " << test2[0] << endl;

	
	system("pause");
	return 0;
}


