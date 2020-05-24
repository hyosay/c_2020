#include <stdio.h>
#include <string.h>

struct employee {
	char name[10];
	int year;
	int pay;
};

void main() {
	int i;
	struct employee Lee[4] = {
		{'a',202, 4200 },
		{'b',2020, 5200 },
		{'c',220, 2200 },
		{'d',20, 3300 }
	};

	for (i = 0; i < 4; i++) {
		printf("\n 이름 : %s", Lee[i].name);
		printf("\n 입사 : %d", Lee[i].year);
		printf("\n 연봉 : %d\n", Lee[i].pay);
	}
	getchar();
}

