#include <iostream>
#include <cmath>



using namespace std;


int main() {
	int restart = 1;
	int choice1, choice2, choice3, choice4, choice5;
	void playgame();

	cout << "Play again? 1 = yes, 0 = no: ";
	cin >> restart;
	while (restart = 1) {
		playgame();
	}

	return 0;
}



void playgame() {
	int choice1, choice2, choice3, choice4, choice5, alive = 0;


		cout << endl << "You gaze upon the timeless father of the forest. What do you do?" << endl << "1: Flee" << endl << "2: Mock him" << endl;
		cin >> choice1;

		if (choice1 == 1) {
			cout << "You attempt to flee. The father of the forest flicks out his tongue; you attempt to resist, but begin to be pulled back towards t. You are violently consumed." << endl << endl;
			return;

		}
		else if (choice1 == 2) {
			cout << "You mock the father of the forest. He seems to have no reaction, but you notice a brief flicker in his eye; like perhaps he is on the verge of tears. What do you do?" << endl << "1: Insult him again" << endl << "2: Apologize" << endl;
		}

		cin >> choice2;

		if (choice2 == 1) {
			cout << "The father of the forest becomes enraged, his long appendages flailing with anger. The last thing you see is the creature's gaping maw before it all goes dark." << endl;
			return;
		}
		else if (choice2 == 2) {
			cout << "The father of the forest looks upon you, questioning the sincerity of your apology. You assure him that you mean it. The creature moves closer to you, and offers to protect you from other creatures in the forest for as long as you wish. You win!" << endl;
		}
		
}