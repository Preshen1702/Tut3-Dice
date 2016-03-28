#include <iostream>
using namespace std;
class Dice
{
private:
	int res;
public:
	int sum;

	Dice()
	{
	}

	Dice(int newR)
	{
		res = newR;
		sum = 0;
	}

	int Roll()
	{
		res = rand() % 6 + 1;
		sum = sum + res;
		return res;
	}
};
float average(Dice obj, int rolls);
float average(int arr[], int arraylength);

int main()
{
	int temp = 0;
	int rolls = 0;

	char choice = 'a';

	Dice OBJ;

	while (choice != 'z')
	{
		cout << "========Menu========" << endl;
		cout << "Enter number to roll" << endl;
		cout << "Z to stop" << endl;
		cout << "====================" << endl;
		cin >> choice;
		rolls++;
		temp = OBJ.Roll();
		cout << "Number Rolled: " << rolls << " " << temp << endl;
		cout << " Sum of dice rolled: " << OBJ.sum << endl;
		cout << "Average of dice rolled: " << average(OBJ, rolls) << endl;

	}
	return 0;
}
float average(Dice ob, int rolls)
{
	float avg = (float)ob.sum / (float)rolls;
	return avg;
}

