
#include "stdafx.h"

#include <cstdlib>
#include<iostream>
#include<string>
#include <cassert>
#include<cstring>
using namespace std;
int case1(char subject[100])
{
	int i = 0;
	int totalwords = 0;
	int capital = 0;
	while (subject[i] != '\0')
	{
		bool vari = true;
		bool check = false;
		while (subject[i] != ' ' && subject[i] != '\0')
		{
		
			int val = subject[i];
			if (val >= 65 && val <= 90)
			{
		//		cout << subject[i] << endl;
			}
			else if (val>=97 && val<=122)
			{
				check = true;
				//break;
			}
		//	cout << subject[i] << endl;
			i++;
			vari = false;
		}
		totalwords++;
		//cout << check << endl;

		if (check == false && vari==false)
		{
		//	cout << "i = "<<i << endl;
			capital++;
		//	return 30;
		}
		cout << endl;
		check = false;

		i++;
	}
	//cout << totalwords << " " << capital << endl;
	if (((capital * 100) / totalwords) >= 90)
	return 30;

	return 0;
}
int case2(char subject[100])
{
	int i = 0;
	while (subject[i] != '\0')
	{

		int count = 0;
		while (subject[i] != ' '&& subject[i] != '\0')
		{
			int val = subject[i];
			if (val != 65 && val != 97 && val != 69 && val != 101 && val != 73 && val != 105 && val != 79 && val != 111 && val != 85 && val != 117 && ((val > 65 && val <= 90) || (val > 97 && val <= 122)))
			{
				if (subject[i + 1] != ' '&& subject[i + 1] != '\0')
				{
					val = subject[i+1];
					if (val != 65 && val != 97 && val != 69 && val != 101 && val != 73 && val != 105 && val != 79 && val != 111 && val != 85 && val != 117 && ((val > 65 && val <= 90) || (val > 97 && val <= 122)))
					{
						if (subject[i + 2] != ' '&& subject[i + 2] != '\0')
						{
							val = subject[i+2];
							if (val != 65 && val != 97 && val != 69 && val != 101 && val != 73 && val != 105 && val != 79 && val != 111 && val != 85 && val != 117 && ((val > 65 && val <= 90) || (val > 97 && val <= 122)))
							{
							//	cout << subject[i] << subject[i + 1] << subject[i + 2] << endl;
								return 40;

							}

						}
					}

				}
				count++;
			}
			
			i++;
		}
		i++;
	}
	return 0;
}
int case3(char subject[100])
{
	int i = 0;
	while (subject[i] != '\0')
	{
		while (subject[i] != ' ' && subject[i] != '\0')
		{
			if (subject[i]=='!')
			{
				if (subject[i+1] != ' ' && subject[i+1] != '\0' && subject[i+1] == '!')
				{
					if (subject[i + 2] != ' ' && subject[i + 2] != '\0' && subject[i+2] == '!')
					{
						return 20;
					}
				}
			}
			i++;
		}
		i++;
	}
	return 0;
}
int case4(char body[100])
{
	int i = 0;
	int totalwords = 0;
	int capital = 0;
	while (body[i] != '\0')
	{
		bool vari = true;
		bool check = false;
		while (body[i] != ' ' && body[i] != '\0')
		{

			int val = body[i];
			if (val >= 65 && val <= 90)
			{
				//		cout << subject[i] << endl;
			}
			else if (val >= 97 && val <= 122)
			{
				check = true;
				//break;
			}
			//	cout << subject[i] << endl;
			i++;
			vari = false;
		}
		totalwords++;
		//cout << check << endl;

		if (check == false && vari == false)
		{
			//	cout << "i = "<<i << endl;
			capital++;
			//	return 30;
		}
		//cout << endl;
		check = false;

		i++;
	}
	//cout << totalwords << " " << capital << endl;
	if (((capital * 100) / totalwords) >= 50)
		return 40;

	return 0;
}
int case5(char body[100])
{
	int i = 0;
	int count = 0;
	while (body[i] != '\0')
	{
		string str = "";
		while (body[i] != '\0' && body[i] != ' ')
		{
			int val = body[i];
			if (val >= 65 && val <= 90)
			{
				char ch = (val + 32);
				str = str + ch;

			}
			else if (val >= 97 && val <= 122)

			{
				str = str + body[i];
			}
			
			i++;
		}if (str == "buy" || str == "cheap" || str == "click" || str == "diploma" || str == "enlarge" || str == "free" || str == "lonely" || str == "money" || str == "now" || str == "offer" || str == "only" || str == "pills" || str == "sex")
		{

			cout << str << endl;

			count = count + 5;
		}
			
			
		i++;
			
			
			
			
			
			
			

	}
	return count;
}
string  getFirstWord(char words[100])
{
	int i = 0;
	while (words[i] != '\0')
	{
		string str = "";
		while (words[i] != ' ' && words[i] != '\0')
		{
			int val = words[i];
			if ((val>=65 && val<=90) || (val>=97 && val<=122))
			{
				str = str + words[i];

            }
			i++;
		}
		return str;
		i++;
	}
	return "";
}
void testfirstword()
{
	// This writes "Hello"
	cout << getFirstWord("!!Hello, Fred") << endl;

	// This writes "greetings 9"
	string msg = "greetings, mom, how are you?";
	char mesage[100];
	for (int i = 0; i < 100; i++)
	{
		mesage[i] = '\0';
	}
	for (int i = 0; i < msg.length(); i++)
		mesage[i] = msg[i];
	string result = getFirstWord(mesage);
	cout << result << " " << result.size() << endl;

	// This writes "0"
	string s = getFirstWord(" $@#%!!");
	cout << s.size() << endl;
}
string getLastWord(char mesage[100])
{

	int i = 0;
	while (mesage[i] != '\0')
	{
		string str = "";
		while (mesage[i] != ' ' && mesage[i] != '\0')
		{

			int val = mesage[i];
			if ((val >= 65 && val <= 90) || (val >= 97 && val <= 122))
			{
				str = str + mesage[i];

			}
			i++;
		}
		i++;
		if(mesage[i]=='\0')
		return str;
		
	}
	return "";


}
string extractWord(char(&mesage)[100])
{
	
	string returnstr = "";
	int k = 0;
	while (mesage[k]!='\0')
	{
		returnstr = returnstr + mesage[k];
		k++;
	}
	int i = 0;
	while (mesage[i] != '\0')
	{
		int j = i;
		string str = "";
		while (mesage[i] != ' ' && mesage[i] != '\0')
		{


			int val = mesage[i];
			if ((val >= 65 && val <= 90) || (val >= 97 && val <= 122))
			{
				str = str + mesage[i];

			}
			i++;
		}
		returnstr.substr(0, returnstr.find(str));
		i++;
//		if (mesage[i] == '\0')
		char strr[100];
		int m = i;
		int a = 0;
		for (int b = 0; b < 100; b++)
			strr[b] = '\0';
		while (mesage[m] != '\0')
		{
			strr[a] = mesage[m];
			m++;
			a++;
		}
		a = 0;
		for (int b = 0; b < 100; b++)
			mesage[b] = '\0';

		while (strr[a] != '\0')
		{
			mesage[a] = strr[a];
			a++;
		}
			return str;

	}
	return "";

}
void test()
{
	string s = "***AMAZING!*** Do it, now!!";
	char mesage[100];
	for (int i = 0; i < 100; i++)
		mesage[i] = '\0';
	for (int i = 0; i < s.length(); i++)
	{
		mesage[i] = s[i];
	}
	string w = extractWord(mesage);
	// This writes "AMAZING" and "!*** Do it, now!!"
	s = "Do it, now!!";

	cout << w << " " << s << endl;
	for (int i = 0; i < 100; i++)
		mesage[i] = '\0';

	for (int i = 0; i < s.length(); i++)
	{
		mesage[i] = s[i];
	}
	w = extractWord(mesage);
	// This writes "Do" and " it, now!!" (space before "it")
	s = "it, now!!";

	cout << w << " " << s << endl;
	for (int i = 0; i < 100; i++)
		mesage[i] = '\0';

	for (int i = 0; i < s.length(); i++)
	{
		mesage[i] = s[i];
	}
 w = extractWord(mesage);	
 // This writes "it" and ", now!!"
	s = "now!!";

	cout << w << " " << s << endl;
	for (int i = 0; i < 100; i++)
		mesage[i] = '\0';

	for (int i = 0; i < s.length(); i++)
	{
		mesage[i] = s[i];
	}
	w = extractWord(mesage);
	s = "!!";

	// This writes "now" and "!!"
	cout << w << " " << s << endl;
	s = "";
	for (int i = 0; i < 100; i++)
		mesage[i] = '\0';

	for (int i = 0; i < s.length(); i++)
	{
		mesage[i] = s[i];
	}
	w = extractWord(mesage);
	// This writes "" and "" (both empty strings)
	cout << w << " " << s << endl;
}
bool isUppercase(char mesage[100])
{
	int i = 0;
	while (mesage[i] != '\0')
	{
		string str = "";
		while (mesage[i] != ' ' && mesage[i] != '\0')
		{
			int val = mesage[i];
			if ((val >= 65 && val <= 90))
			{

			}
			else if ((val >= 97 && val <= 122))
				return false;
			i++;
		}
		i++;

	}
	return true;

}
string makeUppercase(char mesage[100])
{
	string str = "";
	int i = 0;
	while (mesage[i] != '\0')
	{
	
		while (mesage[i] != ' ' && mesage[i] != '\0')
		{
			int val = mesage[i];
			if ((val >= 65 && val <= 90))
			{
				str = str + mesage[i];
			}
			else if ((val >= 97 && val <= 122))
			{

				val = val + 32;
				char ch = val;
				str = str + ch;
			}
			str = str + mesage[i];
			i++;
		}
		i++;

	}
	return str;
}
bool hasMultipleExclamations(char mesage[100])
{
	string str = "";
	int i = 0;
	while (mesage[i] != '\0')
	{

		while (mesage[i] != ' ' && mesage[i] != '\0')
		{
			int val = mesage[i];
			if (mesage[i] == '!')
			{
				if (mesage[i + 1] != ' '&& mesage[i + 1] != '\0')
				{
					if (mesage[i+1] == '!')
					{
						if (mesage[i + 2] != ' '&& mesage[i + 2] != '\0')
						{
							if (mesage[i+2] == '!')
							{
								return true;
							}
						}
					}
				}
		
			}

			i++;
		}
		i++;

	}
	return false;

}
bool isGibberishWord(char mesage[100])
{
	//if (val != 65 && val != 97 && val != 69 && val != 101 && val != 73 && val != 105 && val != 79 && val != 111 && val != 85 && val != 117 && ((val>65 && val <= 90) || (val>97 && val <= 122)))
	//{

	string str = "";
	int i = 0;
	while (mesage[i] != '\0')
	{

		while (mesage[i] != ' ' && mesage[i] != '\0')
		{
			int val = mesage[i];
			if (val == 65 || val ==  97 || val == 69 || val == 101 || val == 73 || val == 105 || val == 79 || val == 111 || val == 85 || val ==  117 || ((val>65 || val <= 90) || (val>97 || val <= 122)))
			{
			
				if (mesage[i + 1] != ' '&& mesage[i + 1] != '\0')
					val = mesage[i + 1];
				{
					if (val == 65 || val == 97 || val == 69 || val == 101 || val == 73 || val == 105 || val == 79 || val == 111 || val == 85 || val == 117 || ((val>65 || val <= 90) || (val>97 || val <= 122)))
					{
				
						if (mesage[i + 2] != ' '&& mesage[i + 2] != '\0')
						{
							val = mesage[i + 2];
							if (val == 65 || val == 97 || val == 69 || val == 101 || val == 73 || val == 105 || val == 79 || val == 111 || val == 85 || val == 117 || ((val>65 || val <= 90) || (val>97 || val <= 122)))
							{
								return true;
							}
						}
					}
				}

			}

			i++;
		}
		i++;

	}
	return false;

}
void doUnitTests()
{
	string s;
	for (;;)
	{
		cerr << "Enter text: ";
		getline(cin, s);
		char mesage[100];
		for (int i = 0; i < 100; i++)
			mesage[i] = '\0';

		for (int i = 0; i < s.length(); i++)
		{
			mesage[i] = s[i];
		}
		if (s == "quit")
			break;
		cerr << "isUppercase returns ";
		if (isUppercase(mesage))
			cerr << "true" << endl;
		else
			cerr << "false" << endl;
		cerr << "getFirstWord returns ";
		cerr << getFirstWord(mesage) << endl;
		for (int i = 0; i < 100; i++)
			mesage[i] = '\0';
		s = "hello there";
		for (int i = 0; i < s.length(); i++)
		{
			mesage[i] = s[i];
		}
		cout << getFirstWord(mesage) << " hi " << endl;
		assert(getFirstWord(mesage) == "hello");
		for (int i = 0; i < 100; i++)
			mesage[i] = '\0';
		s = "WOW!!";
		for (int i = 0; i < s.length(); i++)
		{
			mesage[i] = s[i];
		}
		
		assert(isUppercase("WOW!!"));
	
		for (int i = 0; i < 100; i++)
			mesage[i] = '\0';
		s = "WOW!!";
		for (int i = 0; i < s.length(); i++)
		{
			mesage[i] = s[i];
		}
		assert(!isUppercase("WoW!!"));
		for (int i = 0; i < 100; i++)
			mesage[i] = '\0';
		s = "***hello there";
		for (int i = 0; i < s.length(); i++)
		{
			mesage[i] = s[i];
		}
		assert(getFirstWord(mesage) == "hello");

		for (int i = 0; i < 100; i++)
			mesage[i] = '\0';
		s = "***hello there";
		for (int i = 0; i < s.length(); i++)
		{
			mesage[i] = s[i];
		}
		
		assert(extractWord(mesage) == "hello");
		 string str(mesage);
			assert( str == "there");
			assert(extractWord(mesage) == "there");
			string str1(mesage);
			assert(str1 == "");
			assert(extractWord(mesage) == "");
			string str2(mesage);

			assert(str2 == "");
		
			cerr << "All tests succeeded" << endl;
	}
}
string extractme(char (&mesage)[100])
{
	mesage[0] = 'h';
		return "";
}
int main()
{
	//char array[100];
	//array[0] = '4';
	//extractme(array);
	//cout << array[0] << endl;
	while (true) {
		cout << "press 1 for Mail Code " << endl;
		cout << "press 2 for String Code" << endl;
		cout << "press 3 for Quit" << endl;

		int choice;
		cin >> choice;
		if (choice == 1) {

			char subject[100];
			string body;
			string mailbody = "";
			char s[100];
			while (true) {
				mailbody = "";
				for (int i = 0; i < 100; i++)
					subject[i] = '\0';
				cout << "Enter the subject line of the email:" << endl;
				cin.ignore();
				cin.getline(subject, 100);
				
				cout << "Enter the body of the email.  Press Enter on an empty line to finish. " << endl;
				

				getline(cin, body);
				if (body.empty())
				{
					break;
				}
				int i = 0;
				while (body[i] != '\0')
				{
					mailbody = mailbody + body[i];
					i++;
				}


				char mailofbody[100];
				for (int i = 0; i < 100; i++)
					mailofbody[i] = '\0';

				for (int i = 0; i < mailbody.length(); i++)
				{
					mailofbody[i] = mailbody[i];
				}
				cout << " -------------- Running All Mail Cases (Spam Rules)" << endl;
				int spam = 0;
				int spammesage = 0;
				int legmesage = 0;
				spam = case1(subject);
				if (spam == 0)
				{
					legmesage++;
				}
				else
				{
					spammesage++;
				}
				cout << " After Case 1 Spam is " << spam << endl;
				int val = case2(subject);
				if (val == 0)
				{
					legmesage++;
				}
				else
				{
					spammesage++;
				}
				spam = spam + val;

				cout << " After Case 2 Spam is " << val << endl;
				val = case3(subject);
				if (val == 0)
				{
					legmesage++;
				}
				else
				{
					spammesage++;
				}
				spam = spam + val;

				cout << " After Case 3 Spam is " << val << endl;

				val = case4(mailofbody);
				if (val == 0)
				{
					legmesage++;
				}
				else
				{
					spammesage++;
				}
				spam = spam + val;

				cout << " After Case 4 Spam is " << val << endl;

				val = case5(mailofbody);
				if (val == 0)
				{
					legmesage++;
				}
				else
				{
					spammesage++;
				}
				spam = spam + val;

				cout << " After Case 5 Spam is " << val << endl;
			
				if (spam == 0)
				{
					cout << "This email is classified as legitimate, because its spam score is 0." << endl;
					cout << " Would you like to classify another email(y or n)" << endl;
					char ch;
					cin >> ch;
					if (ch == 'n')
					{
						cout << endl;
						cout << "Number of spam messages: " << spammesage << endl;
						cout << "Number of legitimate messages :" << legmesage << endl;
						break;
					}


				}
				else
				{
					cout << "This email is classified as spam, because its spam score is " << spam << endl;
					cout << " Would you like to classify another email(y or n)" << endl;
					char ch;
					cin >> ch;
					if (ch == 'n')
					{
						cout << endl;
						cout << "Number of spam messages: " << spammesage << endl;
						cout << "Number of legitimate messages :" << legmesage << endl;
						break;
					}
				}
			}
			//This email is classified as legitimate, because its spam score is 0.
				//	Would you like to classify another email(y or n) ? n
		}
		if (choice == 2) {
			doUnitTests();
		}
		if (choice == 3)
		{
			break;
		}
	}
	char ch;
	cin >> ch;
}