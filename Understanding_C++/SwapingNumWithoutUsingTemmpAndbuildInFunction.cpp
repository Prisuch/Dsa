#include <iospace>

void swap(int& a, int& b) {
	a = a + b;
	b = a - b;
	a = a - b;
	std::cout << a << b;
}

int main()
{
	std string test;
	bool wannachange = false;
	std::string question;
	while (!wannachange)
	{
		int firstnum;
		int secnum;
		std::cout << "Enter first num- ";
		std::cin >> firstnum;
		std::cout << "Enter second num- ";
		std::cin >> secnum;
		swap(firstnum,secnum);
		std::cout << "Want to get out of code - ";
		std::cin >> question;
		if (question == "yes") wannachange = true;
	}
}
