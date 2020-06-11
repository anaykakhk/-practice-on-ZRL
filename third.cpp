#include <iostream>

using namespace std;

struct book1

{

char name[25];

char genre[12];

int release;

size_t numberofpages;

double price;

bool availability;

};

struct book2

{

char genre[12];

bool availability;

char name[25];

double price;

int release;

size_t numberofpages;

};

#pragma pack(push,1)

struct book3

{

char name[25];

char genre[12];

int release;

size_t numberofpages;

double price;

bool availability;

};

#pragma pack(pop)

int main()

{

book1 set1;

cout

<< "set1: " << "\n"

<< (void*)set1.name << "\n"

<< (void*)set1.genre << "\n"

<< &set1.release << "\n"

<< &set1.numberofpages << "\n"

<< &set1.price << "\n"

<< &set1.availability << "\n"

<< sizeof(set1.name) + sizeof(set1.genre) + sizeof(set1.release) + sizeof(set1.numberofpages) + sizeof(set1.price) + sizeof(set1.availability) << "\n"

<< sizeof(set1) << "\n";

book2 set2;

cout

<< "set2: " << "\n"

<< (void*)set2.genre << "\n"

<< &set2.availability << "\n"

<< (void*)set2.name << "\n"

<< &set2.price << "\n"

<< &set2.release << "\n"

<< &set2.numberofpages << "\n"

<< sizeof(set2.name) + sizeof(set2.genre) + sizeof(set2.release) + sizeof(set2.numberofpages) + sizeof(set2.price) + sizeof(set2.availability) << "\n"

<< sizeof(set2) << "\n";

book3 set3;

cout

<< "set3: " << "\n"

<< (void*)set3.name << "\n"

<< (void*)set3.genre << "\n"

<< &set3.release << "\n"

<< &set3.numberofpages << "\n"

<< &set3.price << "\n"

<< &set3.availability << "\n"

<< sizeof(set3.name) + sizeof(set3.genre) + sizeof(set3.release) + sizeof(set3.numberofpages) + sizeof(set3.price) + sizeof(set3.availability) << "\n"

<< sizeof(set3) << "\n";

return 0;

}
