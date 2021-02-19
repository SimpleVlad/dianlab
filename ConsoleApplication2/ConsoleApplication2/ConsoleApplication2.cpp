// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once
#include "Exhibition.h"
#include "Table1.h"
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstdio>
#include <string.h>
#include <cstdlib>
using namespace std;


void Find() {
	Table Obj = new plant;
	Obj = init(Obj);
	input(Obj);
	int i = find(Obj);
	cout << "Number:" << i << endl;
}
void del() {

	Table Obj = new plant;
	Obj = init(Obj);
	input(Obj);
	cout << remove(Obj) << endl;

}
void Clear() {
	clear();
}
void add() {
	Table Obj = new plant;
	Obj = init(Obj);
	input(Obj);
	insert(Obj);
}
void replacement() {
	cout << "Change" << endl;
	Table ObjO = new plant;
	ObjO = init(ObjO);
	input(ObjO);
	cout << "Change" << endl;
	Table Obj = new plant;
	Obj = init(Obj);
	input(Obj);
	replace(ObjO, Obj);
	cout << "Changed" << endl;

}






void MainMenu() {
	setlocale(LC_ALL, "Russian");
	int comand;
	do {
		cout << endl;
		cout << "" << endl;
		cout << "======================" << endl;
		cout << " ffff " << endl;
		cout << "======================" << endl;
		cout << "-1- add" << endl;
		cout << "-2- del" << endl;
		cout << "-3- sort" << endl;
		cout << "-4- show" << endl;
		cout << "-5- clear" << endl;
		cout << "-6- find" << endl;
		cout << "-7- chande" << endl;
		cout << "======================" << endl;
		cout << "Choose comand : ";
		cin >> comand;

		switch (comand) {
		case 1:
			add();
			break;
		case 2:
			del();
			break;
		case 3:
			sort();
			break;
		case 4:
			Output();
			break;
		case 5:
			Clear();
			break;
		case 6:
			Find();
			break;
		case 7:
			replacement();
			break;
		default:
			cout << endl << "Error" << endl;
			break;
		}
	} while (comand != 8);
}
int main()
{
	Init();
	setlocale(LC_ALL, "Russian");
	MainMenu();
	return 0;
}
