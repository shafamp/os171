/*
 * Name : Shafa Maharani Pradinar
 * NPM  : 1606955031
 * Class : SI Ekstensi 2016
 * Comment : Latihan Work02 OS
*/

#define LOOP 3

#include <stdio.h>

void main() {
	int input = 6;
	int xx, yy = 0;
	for (xx = 0; xx<LOOP; xx++){
		yy = yy+input;
	}
	printf("%d times %d equals %d\n", input, LOOP, yy);
}
