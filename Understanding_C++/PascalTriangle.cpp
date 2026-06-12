#include<iosystem>
#include<string>
#include<vector>
using namespace std;

vector<int> getRow(int rowIndex)
{
	vector<int> res(rowIndex+1, 1);
	for (int i = 1; i < rowIndex; i++)
	{
		for (int j = i; j > 0; j--)
		{
			res[j] += res[j - 1];
		}
	}
	return res;
};


int main()
{
	bool wannachange = false;
	string question;
	while (!wannachange)
	{
		int numRows;
		cout << "TELL ME how long you want the loop to be - ";
		cin >> numRows;
		for (int j : getRow(numRows))
		{
			cout << j;
		}
		cout << "Want to get out of code - ";
		cin >> question;
		if (question == "yes") wannachange = true;
	}
};
