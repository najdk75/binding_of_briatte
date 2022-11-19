#ifndef ROOMFILE_H

#define ROOMFILE_H
#include "roomList.h"

void writeRoomFile(RoomList roomList, char *fichier);
RoomList * readRoomFile(char *fichier, char *monsterfile);
Room * readRoom(FILE *f, char *monsterfile);
void addRoomFile(Room room, char *fichier);
void removeRoomFileById(int id, char *fichier, char *monsterfile);
void removeRoomFileByIndex(int index, char *fichier, char *monsterfile);
void showRoomFileById(int id, char *fichier, char *monsterfile);
#endif // ROOMFILE_H