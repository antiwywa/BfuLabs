
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	uint16_t numberToBit = 0;
	cout << "Введите значение для обработки:\n";
	cin >> numberToBit;
	vector<int> numberInBits = {};
	while (numberToBit > 0)
	{
		if (numberToBit % 2 != 0)
			numberInBits.push_back(1);
		else
			numberInBits.push_back(0);
		numberToBit /= 2;
	}
	reverse(numberInBits.begin(), numberInBits.end());
	for (auto i = 0; i < numberInBits.size(); i++)
	{
		cout << numberInBits[i];
	}
}