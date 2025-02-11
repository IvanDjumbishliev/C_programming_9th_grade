#ifndef SCHOOLROOM_H_
#define SCHOOLROOM_H_

#include "person.h"

struct SchoolRoom {
    struct Person peopleInRoom[50];
    char roomLetter;
    int roomNumber;
    struct Person teacher;
};

#endif