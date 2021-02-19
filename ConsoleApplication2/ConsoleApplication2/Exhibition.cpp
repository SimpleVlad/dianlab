#pragma once
#include "pch.h"
#include "Exhibition.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
using namespace std;

Table init(Table tmp) {
	tmp->plant_name = 0;

	tmp->id[0] = '\0';
	tmp->clas[0] = '\0';
	tmp->prot = 0; 
	tmp->carb = 0;
	tmp->fat = 0;
	return tmp;
}
Table copy(Table in)
{
	Table tmp = new plant;
	tmp = init(tmp);
	tmp->plant_name = new char[strlen(in->plant_name) + 1];
	strcpy(tmp->id, in->id);
	strcpy(tmp->clas, in->clas);

	tmp->fat = in->fat;
	tmp->prot = in->prot;
	tmp->carb = in->carb;
	return tmp;
}
void dispose(Table tmp)
{
	if (tmp)
	{
		delete[] tmp->plant_name;
		delete tmp;
	}
}

int input(Table buf)
{
	if (cin.eof())
	{
		return 0;
	}
	char buffer[256];

	cout << "Enter plant's name: " << endl;
	cin.ignore();
	cin.getline(buffer, 250, '\n');
	buf->plant_name = new char[strlen(buffer) + 1];
	strcpy(buf->plant_name, buffer);
	cout << "ID number on store" << endl;
	cin.getline(buf->id, 19);
	cout << "Enter plant's class" << endl;
	cin.getline(buf->clas, 19);
	cout << "Enter fats, prot, carbs" << endl;
	cin >> buf->fat >> buf->prot >> buf->carb;
}

void output(Table tmp)
{
	cout << " | " << tmp->plant_name << " | " << tmp->id << " | " << tmp->clas << " | " << tmp->fat << " | " << tmp->prot << " | " << tmp->carb << " | "  << endl;
}

int cmp(Table first, Table second)
{
	int x;
	if ((x = strcmp(first->plant_name, second->plant_name)) != 0)
	{
		return x;
	}
	else
	{
		return 0;
	}
}
int equal(Table First, Table second) {

	int q1 = strcmp(First->plant_name, second->plant_name);
	int q2 = strcmp(First->id, second->id);
	int q3 = strcmp(First->clas, second->clas);
	int q4 = 0;
	int q5 = 0;
	int q6 = 0;
	if (First->fat != second->fat) {
		q4 = 1;
	}
	if (First->prot == second->prot) {
		q5 = 1;
	}
	if (First->carb == second->carb) {
		q6 = 1;
	}
	return q1 || q2 || q3 || q4 || q5 || q6;
}
