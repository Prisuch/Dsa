#using <iosystem>
#using <string>
using namespace std;

bool isPerfectSquare(int n)
{
	int sqrednum = sqrt(n); 
	if (sqrednum*sqrednum == n || (sqrednum + 1) * (sqrednum + 1) == n) return true;
	return false;
}


int main()
{
	string test;
	bool wannachange = false;
	string question;
	while (!wannachange)
	{
		int firstnum;
		cout << "Enter num- ";
		cin >> firstnum;
		cout << "Is the num a perfect squared num = The answer is (0 = False, 1 = True)" << isPerfectSquare(firstnum);
		cout << "Want to get out of code - ";
		cin >> question;
		if (question == "yes") wannachange = true;
	}
}
