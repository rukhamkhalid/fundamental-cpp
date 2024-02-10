#include <iostream>
#include <string>
using namespace std;

class Player {
private:
	string playerName;

public:
	void inputName() {
		cout << "Enter player name: ";
		getline(cin, playerName);
	}

	void showName() {
		cout << "Player name: " << playerName << endl;
	}
};

int main() {
	Player player;
	player.inputName();
	player.showName();
	return 0;
}