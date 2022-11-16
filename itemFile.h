#ifndef ITEMFILE_H

#define ITEMFILE_H
#include "itemList.h"

void writeItemFile(ItemList itemList, char *fwd);
void addItemFile(Item *item, char *fwd);
void removeItemFile(Item *item, char *fwd);
void removeItemFileByName(char *name, char *fwd);
void removeItemFileByIndex(int index, char *fwd);
ItemList * readItemFile(char *fwd);


#endif // ITEMFILE_H