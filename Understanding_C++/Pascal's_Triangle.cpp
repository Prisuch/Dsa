#include<iosystem>
#include<string>
#include<vector>
using namespace std;


vector<vector<int>> generate(int numRows) {
	{
		vector<vector<int>> FullBox = {};
		for (int i = 0; i < numRows; i++)
		{
			vector<int> Box(i+1,1);
			for (int j = 1; j < i; j++)
			{
				Box[j] = FullBox[i - 1][j - 1] + FullBox[i - 1][j];
			}
			FullBox.push_back(Box);
		}
		return FullBox;
	}
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
			for(vector<int> i : generate(numRows))
			{
				cout << "\n";
			   for(int j : i)
			   {
				   cout << j ;
			   }
			}
			cout << endl;
			cout << "Want to get out of code - ";
			cin >> question;
			if (question == "yes") wannachange = true;
		}
	}
