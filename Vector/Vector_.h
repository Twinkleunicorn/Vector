#pragma once
#include<iostream>
using namespace std;

class Vector_
{
	int size;
	int *arr;
public:
	Vector_();
	Vector_(int size, int val = 0);
	Vector_(const Vector_&obj);
	void push_back(int num);
	void print();
	~Vector_();
};

