#ifndef MONSTERLIST_H

#define MONSTERLIST_H
#include "monster.h"

typedef struct MonsterList {
    Monster **list;
    int size;
    int capacity;
} MonsterList;

MonsterList * newMonsterList(void);
void freeMonsterList(MonsterList *monsterList);
int addMonsterList(Monster *monster, MonsterList *monsterList);
int removeMonsterList(Monster *monster, MonsterList *monsterList);
int removeMonsterListByName(char *name, MonsterList *monsterList);
int removeMonsterListByIndex(int index, MonsterList *monsterList);
void showMonsterList(MonsterList monsterList);
void printMonsterList(MonsterList monsterList, FILE *f);

#endif // MONSTERLIST_H