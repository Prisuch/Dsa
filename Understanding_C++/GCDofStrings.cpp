#include<iosystem>
#include<string>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

string GCDofString(string str1, string str2)
{
	if (str1 + str2 != str2 + str1)
		return "";

	return str1.substr(0, gcd(str1.length(), str2.length()));
}


int main()
{
	string test;
	bool wannachange = false;
	string question;
	while (!wannachange)
	{
		string str1;
		string str2;
		cout << "Enter the first string- ";
		cin >> str1;
		cout << "Enter the second string - ";
		cin >> str2;
		cout << "The GCD amoung that string is " << GCDofString(str1,str2);
		cout << "Want to get out of code - ";
		cin >> question;
		if (question == "yes") wannachange = true;
	}
}
