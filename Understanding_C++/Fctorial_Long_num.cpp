 multiply(int& multiplier, int& size, std::vector<int>& arr)
{
	int carry = 0;
	for (int i = 0; i < size; i++)
	{
		int result = arr[i] * multiplier;
		result = result + carry;
		arr[i] = result % 10;
		carry = result / 10;
	}
	while (carry > 0) {
		arr[size] = carry % 10;
		size++;
		carry = carry / 10;
	}
}

std::vector<int>  Factorial(int num)
{
	std::vector<int> arr(10000,0);
	arr[0] = 1;
	int size = 1;
	for (int multiplier = 2; multiplier <= num; multiplier++)
	{
		multiply(multiplier, size, arr);
	}
	std::vector<int> result;
	for (int i = size - 1; i >= 0; i--)
	{
		result.push_back(arr[i]);
	}
	return result;
}

int main()
{
	int num;
	bool wannachange = false;
	std::string question;
	while (!wannachange)
	{
		std::cout << "Enter a number - ";
		std::cin >> num;
		for (int i : Factorial(num))
		{
			std::cout << i;
		}
		std::cout << "Want to get out of code - ";
		std::cin >> question;
		if (question == "yes") wannachange = true;
	}
}
