#include <iosystem>
#include <vector>

std :: vector<int> CreatingArr()
{
	int loop = 0;
	std::cout << "Enter the amount you want to loop the num- ";
    std::cin >> loop;
	std::vector<int> arr(loop);
	for (int i = 0; i < loop; i++) {
		int tempnum = 0;
		std::cout << "Enter " << i  << " digit- ";
		std::cin >> tempnum;
		arr[i] = tempnum;
	}
	return arr;
}

std :: vector<int> minAnd2ndMin(std :: vector<int>& arr) {
	int IlowestValue = arr[0];
	int IIlowestValue = INT_MAX;

	std::vector<int> lowerval(2);
	for( int i : arr)
	{
		if (i < IlowestValue) {
			IIlowestValue = IlowestValue;
			IlowestValue = i;
		}
		else if (i < IIlowestValue and IlowestValue != i) IIlowestValue = i;
	}
	
	if (INT_MAX == IIlowestValue) return { -1 };
	lowerval[0] = IlowestValue,
	lowerval[1] = IIlowestValue;
	return lowerval;
}

int main()
{
	std ::string test;
	bool wannachange = false;
	std::string question;
	while (!wannachange)
	{
		std::vector<int> arr =  CreatingArr();
		//std::cin >> test;
		//std::cout << "Is the string Palendrom (0 = False, 1 = True) : " << minAnd2ndMin(arr)<<"\n";
		std::vector<int> lowerval = minAnd2ndMin(arr);
		for (int I : lowerval)std::cout << I <<"\n";
		std::cout << "Want to get out of code - ";
		std::cin >> question;
		if (question == "yes") wannachange = true;
	}
}
