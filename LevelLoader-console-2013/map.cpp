#include "map.h"

void Map::createMap() {
	cout << "Height of map: ";
	cin >> rows;

	cout << "Width of map: ";
	cin >> columns;

	grid = new string[rows*columns];
}

void Map::saveMap(char* filePath) {
	ofstream file;
	file.open(filePath);
	file << "abaaa\nabada\nabbba\nacaba\naaaaa";
	file.close();
}

void Map::loadMap(char* filePath) {
	string line;
	ifstream myfile(filePath);
	if (myfile.is_open()){
		int i = 0;
		while (getline(myfile, line) && i<(rows*columns)){
			grid[i] = line;
			cout << line << endl;
			i++;
		}
		myfile.close();
	}
	else cout << "Unable to open file";
}

void Map::drawMap(){
	char ID;
	int wall = 0, corridor = 0, door = 0, ironDoor = 0, enemySpawn = 0;
	int xPos = 0;
	int yPos = 0;

	for (int x = 0; x < rows; x++){
		xPos = 0;
		for (int y = 0; y < columns; y++){
			ID = grid[x].at(y);
			
			switch (ID){
			case 'a':
				wall++;
				cout << "Wall tile added - (" << xPos << ", " << yPos << ")" << endl;
				break;
			case 'b':
				cout << "Corridor tile added - (" << xPos << ", " << yPos << ")" << endl;
				corridor++;
				break;

			case 'c':
				cout << "Door tile added - (" << xPos << ", " << yPos << ")" << endl;
				door++;
				break;

			case 'd':
				cout << "IronDoor tile added - (" << xPos << ", " << yPos << ")" << endl;
				ironDoor++;
				break;
			}
			xPos += 32;
		}
		yPos += 32;
	}
	cout << endl << (wall + corridor + door + ironDoor) << " tiles added." << endl;

	cout << grid[0] << endl;
}