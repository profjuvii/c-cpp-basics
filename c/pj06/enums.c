#include <stdio.h>


// define character classes using enum
enum character_classes{
    PALADIN,
    MAGE,
    HEALER,
    DRUID,
    NECROMANCER
};


struct player{
    enum character_classes class;
    char name[30];
    int hp;
};


int main(){
    struct player player = {
        .class = PALADIN,
        .name = "Aurora Faithguard",
        .hp = 100
    };

    // print player information
    printf("Name: %s\nClass: %d\nHP: %d\n", player.name, player.class, player.hp);

    // print memory addresses of player's attributes
    printf("Address of name:\t%p\n", &player.name);
    printf("Address of class:\t%p\n", &player.class);
    printf("Address of hp:\t\t%p\n", &player.hp);

    // print size of enum character_classes and struct player in bytes
    printf("Enumeration size in bytes: %lu\n", sizeof(enum character_classes));
    printf("Structure size in bytes: %lu\n", sizeof(struct player));

    // print size of PALADIN in bytes
    printf("%lu\n", sizeof(PALADIN));

    return 0;
}
