#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{

	cout << "\t \t \t \t Welcome to NUMBER GUESSING GAME!"<< endl;
	cout<<endl;
	cout<<endl;
	cout<<"THIS GAME IS FOR LITTLE FUN OF YOURS"<<endl;
	cout<<"HAVE FUN"<<endl;
	
	cout << "You have to guess a number between 1 and 50. You'll have limited choices based on the level you choose. Good Luck!"<< endl;
    cout<<endl;
    cout<<endl;
	while (true) {
		cout << "\nEnter the difficulty level: \n";
		cout << "1:- 1 for easy!"<<endl;
		cout << "2:- 2 for medium!"<<endl;
		cout << "3:- for difficult!"<<endl;
		cout << "0:- 0 for ending the game!" << endl;

		
		int level;
		cout << "Enter the number based on your level choice: ";
		cin >>level;

		
		srand(time(0));
		int secretNumber = 1 + (rand() % 100);
		int playerChoice;

		// Easy Level
		if(level == 1) {
			cout << "\nYou have 10 choices for finding the secret number between 1 and 100.";
			int choicesLeft = 10;
			for (int i = 1; i <= 10; i++) {

				cout << "\n\nEnter the number: ";
				cin >> playerChoice;

				if (playerChoice == secretNumber) {
					cout << "Well played! You won, "  << playerChoice  << " is the secret number" << endl;
					cout << "\t\t\t Thanks for playing...."<< endl;
					cout << "Play the game again with us!!\n\n"<< endl;
					break;
				}
				else {
					cout << "Nope, " << playerChoice
						<< " is not the right number\n";
					if (playerChoice > secretNumber) {
						cout << "The secret number is low than the number you have chosen"<< endl;
						cout<<endl;
					}
					else {
						cout << "The secret number is high than the number you have chosen"<< endl;
						cout<<endl;
					}
					choicesLeft--;
					cout<< " CHOICES LEFT FOR RIGHT GUESS :- "<<choicesLeft<< endl;
					cout<<endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the secret number, it was "<< secretNumber<< ", You lose!!\n\n";
						cout << "Play the game again to win!!!\n\n";
						cout<<endl;
					}
				}
			}
		}

		// Medium Level
		else if (level == 2) {
			cout << "\nYou have 8 choices for finding the secret number between 1 and 100.";
			int choicesLeft = 8;
			for (int i = 1; i <= 8; i++) {
				cout << "\n\nEnter the number: ";
				cin >> playerChoice;

				
				if (playerChoice == secretNumber) {
					cout << "Well played! You won, "<< playerChoice	<< " is the secret number" << endl;
					cout << "\t\t\t Thanks for playing...."<< endl;
					cout << "Play the game again with us!!\n\n"<< endl;
					break;
				}
				else {
					cout << "Nope, " << playerChoice<< " is not the right number\n";
					if (playerChoice > secretNumber) {
						cout << "The secret number is low than the number you have chosen"<< endl;
						cout<<endl;
					}
					else {
						cout << "The secret number is high than the number you have chosen" << endl;
					}
					choicesLeft--;
					cout << " CHOICES LEFT FOR RIGHT GUESS:- "<<choicesLeft<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the secret number, it was "<< secretNumber<< ", You lose!!\n\n";
						cout << "Play the game again to win!!!\n\n";
					}
				}
			}
		}
		// Hard level
		else if (level == 3) {
			cout << "\nYou have 5 choices for finding the secret number between 1 and 100.";
			int choicesLeft = 5;
			for (int i = 1; i <= 5; i++) {


				cout << "\n\nEnter the number: ";
				cin >> playerChoice;

			
				if (playerChoice == secretNumber) {
					cout << "Well played! You won, "<< playerChoice<< " is the secret number" << endl;
					cout << "\t\t\t Thanks for playing...."<< endl;
					cout << "Play the game again with us!!\n\n"<< endl;
					break;
				}
				else {
					cout << "Nope, " << playerChoice<< " is not the right number\n";
					if (playerChoice > secretNumber) {
						cout << "The secret number is low than the number you have chosen"<< endl;
					}
					else {
						cout << "The secret number is high than the number you have chosen"<< endl;
					}
					choicesLeft--;
					cout << "  CHOICES LEFT FOR RIGHT GUESS:-  CHOICES LEFT FOR RIGHT GUESS:-  "<<choicesLeft <<endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the secret number, it was "<< secretNumber<< ", You lose!!\n\n";
						cout << "Play the game again to win!!!\n\n";
					}
				}
			}
		}
		//if player want to end game
		else if (level == 0) {
		    cout<<"YOU CHOSE TO END THE GAME"<<endl;
		    cout<<"HAVE A GOOD DAY"<<endl;
			exit(0);
		}
		else {
			cout << "Wrong choice, ENTER VALID CHOICE TO PLAY THE GAME! (0,1,2,3)"<< endl;
			cout<<endl;
		}
	}
	return 0;
}

