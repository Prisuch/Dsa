#include<iosystem>
#include<string>
#include<vector>
using namespace std;

vector<vector<int>> getRow(int rowIndex)
{
	vector<vector<int>> Fullbox;
	int tempnum = 1;
	for (int i = 0; i < rowIndex; i++) {
		vector<int> res;
		for (int j = i; j >= 0; j--) {
			res.push_back(tempnum);
			tempnum++;
		}
		Fullbox.push_back(res);
	}
	return Fullbox;
}


int main()
{
	bool wannachange = false;
	string question;
	while (!wannachange)
	{
		int numRows;
		cout << "TELL ME how long you want the loop to be - ";
		cin >> numRows;
		for (vector<int> j : getRow(numRows))
		{
			for(int i : j)
              cout << i;

			cout << endl;
		}
		cout << "Want to get out of code - ";
		cin >> question;
		if (question == "yes") wannachange = true;
	}
};
