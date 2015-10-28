#ifndef MAP
#define MAP

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define ROWS = 5
#define COLUMNS = 5;

class Map {
protected:
	int rows = 5;
	int columns = 2;
	string* grid = new string[50];

public:
	Map() {grid = new string[rows*columns]; };

	void createMap();
	void loadMap(char* filePath);
	void saveMap(char* filePath);
	void drawMap();

	~Map() { 
		delete[]grid; 
		cout << "Deleting map" << endl; 
	}
};

#endif
