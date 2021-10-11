#include <iostream>
#include <ctime>
#include <cstdlib>

int getRandomNumber()
{
	srand(time(0));
	int max = 100, min = 0;
	return static_cast<int>(rand() % (max - min + 1) + min);
}
int game()
{
	std::cout << " Lets Go " << std::endl;
	int compRandomNumber = getRandomNumber();
	for (int count = 0; count < 7; count++)
	{
		int playernumber;
		while (true)
		{
			std::cin >> playernumber; std::cin.ignore(32767, '\n');
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(32767, '\n');
				std::cout << "please input correct number  ";
			}
			else break;
		}

		if (playernumber == compRandomNumber) { std::cout << " Correct! You win!  "; return 1; }
		else if (playernumber < compRandomNumber) std::cout << "Your guess is too low ";
		else  std::cout << "Your guess is too high.  ";

	}  std::cout << " \n Sorry, you lose. The correct number was  " << compRandomNumber << std::endl; return 0;
}
bool tryAgain()
{
	std::cout << " Would you like to play again (y/n)?" << std::endl;
	char key;
	std::cin >> key; std::cin.ignore(32767, '\n');
	if (key == 'y') { std::cout << "ok Lets play Again " << std::endl; return 1; }
	else if (key == 'n') { std::cout << "Thank you for playing."; return 0; }
	else tryAgain();
}

int main()
{
	std::cout << "Welcome to Hi-Lo" << std::endl;
	std::cout << "Let's play a game. I'm thinking of a number. You have 7 tries to guess what it is." << std::endl;
	game();
	while(true)
	{
		if (tryAgain() == 1) game();
		else break;
	}

	return 0;
}