#include "Vector_.h"



Vector_::Vector_()
{
	this->size = 0;
	this->arr = nullptr;
}

Vector_::Vector_(int size, int val)
{
	this->size = size;
	this->arr = new int[this->size];
	for (size_t i = 0; i < (this-> size); i++)
		this->arr[i] = val;
}

Vector_::Vector_(const Vector_ & obj)
{
	this->size = obj.size;
	if (size == 0)
		this->arr = nullptr;
	else {
		this->arr = new int[this->size];
		for (int i = 0; i < this->size; i++)
			this->arr[i] = obj.arr[i];
	}
}

void Vector_::push_back(int num)
{
	if (this->size == 0) {
		this->arr = new int[1];
		this->arr[0] = num;
         this->size++;
		 return;
	}
	int *tmp = new int [this->size + 1];

	for (int i = 0; i < this->size + 1; i++)
		tmp[i] = this->arr[i];
	tmp[this->size + 1] = num;
	delete[]this->arr;
	this->arr = tmp;
	this->size++;

}

void Vector_::print()
{
	for (size_t i = 0; i < this->size; i++)
	{
		cout << this->arr[i]<< " ";
	}
}


Vector_::~Vector_()
{
	if (this->arr != nullptr) {
		delete[] this->arr;
		this->size = 0;
	}

}
