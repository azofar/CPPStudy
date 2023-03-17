/*น้มุ 10988

#include <iostream>

using namespace std;

int main(void)
{
	string word;
	string reverseword = "";

	cin >> word;
	int N = word.length();

	for (int i = 0; i < N; i++)
	{
		reverseword[i] = word[(N - i - 1)];
	}
	if (reverseword == word) {
		cout << "1" << endl;
	}
	else {
		cout << "0" << endl;
	}

	return 0;
}
*/