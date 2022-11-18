#pragma once
#include "participant.h"
#include "listNode.h"
#include <stdbool.h>

// declaration/definition of List ADT

// PROG71985F22 - Nov 2022 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//

typedef struct ListADT
{
	PLISTNODE list;
}LIST, *PLIST;

LIST CreateList();
bool AddParticipantToList(PLIST, PARTICIPANT);
void RemoveParticipantFromList(PLIST, PARTICIPANT);

void Display(LIST);
int GetCurrentCountFromList(LIST);

void DisposeList(PLIST);


