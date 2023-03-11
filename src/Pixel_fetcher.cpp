#include <iostream>
using namespace std;

int Pixel_Fetcher() {
	int color = 0x12345678;

	int red = (color & 0xFF000000) >> 24;
	int green = (color & 0x00FF0000) >> 16;
	int blue = (color & 0x0000FF00) >> 8;


	cout << hex << red << endl;
	cout << hex << green << endl;
	cout << hex << blue << endl;


	return 0;
}