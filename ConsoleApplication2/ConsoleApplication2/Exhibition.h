#pragma once
#include <fstream>
#pragma warning(disable : 4996)
struct plant {
	char* plant_name;
	char id[10];
	char clas[20];
	int fat, carb, prot;
};

typedef plant* Table;



Table init(Table ob);
Table copy(Table ob);
void dispose(Table ob);
int cmp(Table ob1, Table ob2);
int input(Table ob);
void output(Table ob);
int equal(Table ob1, Table ob2);
