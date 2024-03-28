#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	typedef struct pokemon{
        int attack;
        int speed;
        char type[20];
    }pokemon		;
    typedef struct legendaryPokemon{
        pokemon p1;
        char special_ability[30];
    }legendaryPokemon;
    pokemon pikachu={100,200,"electric"};
    pokemon charizard={200,150,"Fire"};
    legendaryPokemon mewtwo;
    mewtwo.p1.attack=130;
    mewtwo.p1.speed=300;
    strcpy(mewtwo.p1.type,"psychic");
    strcpy(mewtwo.special_ability,"pressure");
    printf("%d\n",pikachu.speed);
    printf("%s\n",charizard.type);
    printf("%s\n",mewtwo.p1.type);
	return 0;
}