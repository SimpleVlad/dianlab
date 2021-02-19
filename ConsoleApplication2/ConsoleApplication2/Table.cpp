#pragma once
#include "pch.h"
#include "Table1.h"
#include "Exhibition.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>

using namespace std;

const int MAX = 100;
int p;
Table m[MAX];
Table cur;

int Input(Table Obj)
{
	int count;
	for (count = 0; count < lenght() && input(Obj); count++) insert(copy(Obj));
	return count;
}
Table begin()
{
	return *m;
}
Table end()
{
	if (p != 0)
		return m[p - 1];
	else return *m;
}
int lenght()
{
	return p;
}
void Init()
{
	for (int i = 0; i < MAX; i++) {
		m[i] = new plant;
	}
	cur = *m;
}
void inf()
{
	cout<< " | " << "Plant's name" << " | " << "Plants id" << " | " << "Plant's class" << "| " << "Energy cost" << endl;
}
void Output()
{
	inf();
	for (int i = 0; i < p; i++) {
		output(m[i]);
	}
}
Table insert(Table Obj)
{
	*cur = *Obj;
	p++;
	cur = m[p];
	return cur;
}
int find(Table Obj)
{
	for (int i = 0; i < p; i++) {
		if (equal(m[i], Obj) == 0)
		{
			return i;
		}
	}
	return -1;
}
int remove(Table Obj)
{
	int i = 0;
	int j = 0;
	int z = 0;
	for (i = 0; i < lenght(); i++)
		if (equal(m[i], Obj) != 0) {
			m[j++] = m[i];
		}
		else {
			dispose(m[i]);
			z++;
		}
	p -= z;
	return z;
}
int RemoveI(int i) {
	if (i >= 0) {
		if (i == p) {
			p--;
			dispose(m[i]);
			if (i != 0)
			{
				i--;
				cur = m[i];
			}
		}
		else {
			p--;
			dispose(m[i]);
			for (int j = i + 1; j < lenght(); j++) {
				m[j - 1] = m[j];
			}
		}
		return 0;
	}
	return -1;
}
void sort() {
	int o = p;
	for (int i = 0; i < o; i++) {
		for (int h = (i + 1); h < o ; h++) {
			if (cmp(m[i], m[h]) > 0) {
				Table v = m[i];
				m[i] = m[h];
				m[h] = v;
			}
		}
	}
}
void clear() {
	for (int i = 0; i < p; i++) {
		dispose(m[i]);
		cur = begin();
	}
	p = 0;
}
int replace(Table Old, Table New) {
	int i = 0;
	int j = 0;
	int Z = 0;
	for (i = 0; i < lenght(); i++)
		if (equal(m[i], Old) == 0)
		{
			m[i] = New;
			Z++;
		}
	return Z;
}