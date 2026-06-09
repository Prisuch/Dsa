#include <string>
#include <iosystem>
#include <stdexcept>

bool Armstrongnum(int num)
{
	std::string indexnum = std::to_string(num);
	int len = indexnum.length();
	int totalsum = 0;
	for (int i = 0; i < len; i++)
	{
		int tempnum = 0;
		int singledig = indexnum[i] - '0';
		tempnum = std::pow(singledig, len);
		totalsum += tempnum;
	}
	if (totalsum == num)return true;
	return false;
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
		std::cout << "Is the number armstrong (0 = False, 1 = True)" << Armstrongnum(num);
		std::cout << "Want to get out of code - ";
		std::cin >> question;
		if (question == "yes") wannachange = true;
	}
}
