#include <stdio.h>

int global = 66; //promenna plati ve vsech funkcich

void prazdna(void) {
	//nic
}

void vytiskni(int cislo) {
	//promena plati pouze v teto funkci
	printf(" %d", cislo);
	prazdna();
	//semka...2
	prazdna();
	printf("%d", cislo);
}

int main() {

	int cislo = 3;
	vytiskni(cislo);
	//tudle...1
	vytiskni(cislo);
}
