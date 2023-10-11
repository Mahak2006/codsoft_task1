#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class A
{
	public:
		A()
		{
	int num, guess, tries = 0;
	srand(time(0)); 
	num = rand() % 100 + 1; 
	cout << "Guess My Number Game\n\n";

	do
	{
		cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You win ! " << tries << " guesses!\n";
	} while (guess != num);
}
};
int main()
{
	A obj;
	return 0;
}

