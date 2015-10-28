#include "map.h"

int main() {
	Map map;

	map.createMap();
	cout << endl;


	map.saveMap("sampleMap.txt");
	map.loadMap("sampleMap.txt");

	cout << endl;
	map.drawMap();

	cin.get();
	return 0;
}