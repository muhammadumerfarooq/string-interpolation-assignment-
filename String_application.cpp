// String_application.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include<iostream>
#include<string>

#include<cstring>
using namespace std;
string reversestring(char ctr[100]) // mehtod fro rever string 
{
	//string temp;
	char temp[100];
	int i = 0;
	for (int j = 0; j<100; j++)
	{
		temp[j] = '\0';
	}
	while (ctr[i] != '\0') // goes from top to bottom and count no of characters
	{
		i++;
	}
	//ctr = "My name is John and I am 20 years old.";

	i--;
	int j = 0;
	while (i >= 0)  // reverse the array string into temporaray array
	{
		temp[j] = ctr[i];
		i--;
		j++;
	}
	return temp;  //return array 
}
 string inverseString(char ctr[100])
{

	 char temp[100];
	 int i = 0;
	 i = 0;
	 
	 cout << endl;
	 i = 0;
	 for (int j = 0; j<100; j++)
	 {
		 temp[j] = '\0';
	 }
	 

	 while (ctr[i] != '\0')                //compare each character in string with small and capital alphabets and convert samll to capital and capital to samll
	 {
		 int val = ctr[i];
		 if (val >= 65 && val <= 90)
		 {
			 val = val + 32;
		 }
		 else if (val >= 97 && val <= 122)
		 {
			 val = val - 32;
		 }

		 temp[i] = val;

		 i++;
	 }
	return temp;
}
 string ToUppercase(char ctr[100])
 {
	 char temp[100];
	 for (int j = 0; j<100; j++)
	 {
		 temp[j] = '\0';
	 }
	 int i = 0;
	 while (ctr[i] != '\0')  // check exah character with small alphabets ascii code and convert smll to capital by adding  32
	 {
		 int val = ctr[i];
		 if (val >= 97 && val <= 122)
		 {
			 val = val - 32;
		 }

		 temp[i] = val;
		 i++;

	 }
	 return temp;
 }
 string JumbleString(char ctr[100])
 {
	 char temp[100];
	 for (int j = 0; j<100; j++)
	 {
		 temp[j] = '\0';
	 }
	 int i = 0;
	 while (ctr[i] != '\0')  // i have jumble the string in two parts first part jumble the string with half the string with each other 
	 {
		 // othr part jumble string with other half
		 
		 while (ctr[i] != ' ' && ctr[i] != '\0')
		 {
			 int j = 0;
			 int k = i;
			 while (ctr[k] != ' ' && ctr[k] != '\0')   // count total no of charaters 
			 {
				 j++;
				 k++;
			 }
			 int mid = j;
			 j = j + i;
			 int l = j;
			 k = i;
			 while ((j - (mid / 2))>i)   // jumble string with first half to left hand side characters
			 {
				 char ch = ctr[(j - (mid / 2))];
				 ctr[j - (mid / 2)] = ctr[k];
				 ctr[k] = ch;
				 k++;

				 mid++;
			 }
			 j = l;
			 k = j - 1;
			 while ((j - (mid / 2))>i)  // jumble the string of other half with right handside chracters
			 {
				 char ch = ctr[j - (mid / 2)];
				 ctr[j - (mid / 2)] = ctr[k];
				 ctr[k] = ch;
				 k--;

				 mid--;
			 }

			 j = l;

			 i = i + j;
			 //	cout << "i " << i << endl;
		 }
		 //	cout << " yes " << endl;
		 //	if (ctr[i]==' ')
		 //	cout << i << endl;
		 i++;
	 }
	 //i = 0;
	 int m = 0;
	 while (ctr[m] != '\0')   // copy jumble string in temporary array and return 
	 {
		 //cout<<"ue"<<endl;
		 //			cout << ctr[i] << " ";
		 temp[m] = ctr[m];    
		 m++;
	 }
	 return temp;
 }
 void countwords(char ctr[100])
 {
	 char temp[100];
	 int count = 0;
	 for (int j = 0; j<100; j++)
	 {
		 temp[j] = '\0';
	 }
	 int i = 0;
	 while (ctr[i] != '\0')
	 {

		 int j = i;
		 while (ctr[j] != ' ' && ctr[j] != '\0')   //count total words from moving top to till character '\0' not appears
		 {

			 j++;
		 }
		 //cout << " j = " << j << endl;
		 if (j >= i)
		 {
			 count++;
			 //	cout << count << endl;
			 i = j;
		 }
		 i++;
	 }
	 cout << "total words are " << count << endl;

 }
 void countconsonants(char ctr[100])
 {
	 char temp[100];
	 int count = 0;
	 for (int j = 0; j<100; j++)
	 {
		 temp[j] = '\0';
	 }
	 int i = 0;
	 while (ctr[i] != '\0') // count cosonantes by comparing it with the ascii vlaues of consannts
	 {
		 int val = ctr[i];
		 //cout << val <<" "<< ctr[i] << endl; 
		 if ((val != 65 && val != 97 && val != 69 && val != 101 && val != 73 && val != 105 && val != 79 && val != 111 && val != 85 && val != 117 && ((val>65 && val <= 90) || (val>97 && val <= 122))))
		 {
			 ///	cout << "yes" << endl;
			 count++;
			 //	cout << count << endl;
		 }

		 i++;
	 }
	 cout << " total no of consonant " << count << endl;

 }
 
int main()
{


	char ctr[100];
	for (int j = 0; j<100; j++)
	{
		ctr[j] = '\0';
	}

	string temp;
	int choice;
	while(true){   // menu code it simple and easy ti understand
	cout << " ----------------------------------------" << endl;
	cout << " 	1) Inverse String " << endl;
	cout << " 	2) Reverse String " << endl;
	cout << " 	3) To Uppercase " << endl;
	cout << " 	4) Jumble String  " << endl;
	cout << " 	5) Count Number Words " << endl;
	cout << " 	6) Count Consonants " << endl;
	cout << " 	7) Enter a Different String " << endl;
	cout << " 	8) Print the String " << endl;
	cout << " 	9) Quit " << endl;
	cout << "enter Choice " << endl;
	cin >> choice;

	if (choice == 1)
	{
		//	string s = temp.ToString();
		temp = inverseString(ctr);
	
	}
	else if (choice == 2)
	{
		temp = reversestring(ctr);
		int i = 0;
		while (temp[i] != '\0')
		{
			ctr[i] = temp[i];
			i++;
		}
	}
	else if (choice == 3)
	{
		temp = ToUppercase(ctr);
		int i = 0;
		while (temp[i] != '\0')
		{
			ctr[i] = temp[i];
			i++;
		}
	}
	else if (choice == 4)
	{
		temp = JumbleString(ctr);
		int i = 0;
		while (temp[i] != '\0')
		{
			ctr[i] = temp[i];
			i++;
		}

	}
	else if (choice == 5)
	{
		countwords(ctr);
	}
	else if (choice == 6)
	{
		countconsonants(ctr);
	}
	else if (choice == 7)
	{
		cout << " Enter String " << endl;
		cin.ignore();
		for (int j = 0; j < 100; j++)
		{
			ctr[j] = '\0';
		}

		cin.getline(ctr, 100);
		temp = "";
		int i = 0;
		while (ctr[i] != '\0')
		{
			 temp= temp+ctr[i];
			i++;
		}

	}
	else if (choice == 8) {
		int i = 0;
		while (temp[i] != '\0')
		{

			cout << temp[i];
			i++;

		}
		cout << endl;
	}
	else if (choice == 9)
		break;
	
	}

	cout << endl;
	char ch;
	cin >> ch;
}

