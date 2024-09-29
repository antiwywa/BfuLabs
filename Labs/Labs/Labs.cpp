#include <iostream>
#include <vector>
using namespace std;

vector<int> NumberToBit(uint16_t numberToBit)
{
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

	return numberInBits;
}

vector<int> IndexToNewBit(int index, int newBit, vector<int> numberInBits)
{
	numberInBits[index] = newBit;

	return numberInBits;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	uint16_t numberToBit = 0;
	cout << "Введите значение для обработки:\n";
	cin >> numberToBit;
	auto numberInBits = NumberToBit(numberToBit);
	for (int i = 0;i < numberInBits.size(); i++)
		cout << numberInBits[i];
	int index, newBit = 0;
	cout << "Введите индекс для изменения бита числа:\n";
	cin >> index;
	cout << "Введите значение нового бита:\n";
	cin >> newBit;
	numberInBits = IndexToNewBit(index, newBit, numberInBits);
	for (int i = 0;i < numberInBits.size(); i++)
		cout << numberInBits[i];


	return 0;
}

