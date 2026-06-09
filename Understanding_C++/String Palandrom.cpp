#include <iosystem>
#include <string>

bool isPalindrome(std ::string s) {
	int len = s.size();
	if (len == 0 || len == 1) return true;
	int L = 0;
	int R = len - 1;
	while (L < R) {
		while (L < R && !isalnum(s[L]))L++;
		while (L < R && !isalnum(s[R]))R--;
		if (tolower(s[L]) != tolower(s[R])) return false;
		L++;
	    R--;
	}
	return true;
}

int main()
{
	std ::string test;
	bool wannachange = false;
	std::string question;
	while (!wannachange)
	{
		std::cout << "Enter a string - ";
		std::cin >> test;
		std::cout << "Is the string Palendrom (0 = False, 1 = True) : " << isPalindrome(test)<<"\n";
		std::cout << "Want to get out of code - ";
		std::cin >> question;
		if (question == "yes") wannachange = true;
	}
}
