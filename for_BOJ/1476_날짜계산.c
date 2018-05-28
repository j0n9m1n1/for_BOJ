#include <stdio.h>

int main(void) {
	/*
	1 ¡Â E ¡Â 15, 
	1 ¡Â S ¡Â 28, 
	1 ¡Â M ¡Â 19
	*/
	int E = 1, S = 1, M = 1;
	int Ei = 1, Si = 1, Mi = 1;
	int year = 1;

	scanf("%d %d %d", &Ei, &Si, &Mi);

	while (1) {

		if (E != Ei || S != Si || M != Mi) {
			E++; S++; M++; year++;
			if (E > 15)
				E = 1;
			if (S > 28)
				S = 1;
			if (M > 19)
				M = 1;
			//printf("E: %d S: %d M: %d Y: %d\n", E, S, M, year);
		}
		else
			break;
		
	}
	printf("%d", year);
}

