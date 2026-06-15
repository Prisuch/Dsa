#include<iosystem>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int numRows) {
        	vector<vector<int>> FullBox(numRows, vector<int>(numRows, 0));
	int tempnum = 1;
	int left = 0, right = numRows - 1, up = 0, down = numRows -1;
	while (tempnum <= numRows*numRows){
		for (int i = left; i <= right && tempnum <= numRows * numRows; i++) {
			FullBox[up][i]=tempnum ++;
		}
		for (int j = up + 1; j <= down - 1 && tempnum <= numRows * numRows; j++) {
			FullBox[j][right] = tempnum++;
		}
		for (int i = right; i >=left && tempnum <= numRows * numRows; i--) {
			FullBox[down][i] = tempnum++;
		}
		for (int j = down - 1; j >= up + 1 && tempnum <= numRows * numRows; j--) {
			FullBox[j][left] = tempnum++;
		}left++; up++; right--; down--;
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
		cout << "Enter the num of rows -";
		cin >> numRows;
		for(vector<int> i : Vector(numRows)){
			for (int j : i) {
				cout << j;
			}
			cout << endl;
		}
		cout << "Want to get out of code - ";
		cin >> question;
		if (question == "yes") wannachange = true;
	}
};
