#include<iosystem>
#iclude<string>
#include<vector>
using namespace std;

vector<vector<int>> Vector(){
	vector<vector<int>> FullBox;
	int lenth;
	cout << "Enter the number of length - ";
	cin >> lenth;
	int looplenth;
	cout << "Enter the loop length - ";
	cin >> looplenth;
	for (int i = 0; i < looplenth; i++) {
		vector<int> box;
		for (int j = 0; j < lenth; j++) {
			int tempnum = 0;
			cout << "Enter the num you want to add";
			cin >> tempnum;
			box.insert(box.begin() + j, tempnum);
		}
		FullBox.insert(FullBox.begin() + i,box);
	}
	return FullBox;
}

vector<int> getRow(vector<vector<int>> vec)
{
	vector<int> res;
	int bigveclen = vec.size();
	int smallveclen = vec[0].size();
	int left = 0, right = smallveclen - 1, up = 0, down = bigveclen - 1;
	while (bigveclen * smallveclen > res.size()) {
		for (int j = left; j <= right &&  res.size() < smallveclen * bigveclen; j++) {
			res.push_back(vec[up][j]);
		}
		for (int i = up+1; i <= down-1 && res.size() < smallveclen * bigveclen; i++) {
			res.push_back(vec[i][right]);
		}
		for (int j = right; j >= left && res.size() < smallveclen * bigveclen; j--) {
			res.push_back(vec[down][j]);
		}
		for (int i = down - 1; i >= up + 1 && res.size() < smallveclen * bigveclen; i--) {
			res.push_back(vec[i][left]);
		}left++; right--; up++; down--;
	}
	return res;
}


int main()
{
	bool wannachange = false;
	string question;
	while (!wannachange)
	{
		int numRows;
		vector<vector<int>> vec = Vector();
		for(int i : getRow(vec)){
          cout << i;
		}
		cout << "Want to get out of code - ";
		cin >> question;
		if (question == "yes") wannachange = true;
	}
};
