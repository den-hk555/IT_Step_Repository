#include "MyVector.h"
#include <vector>
#include <iostream>

int* MyVector::getArr() const { return arr; }

size_t MyVector::get_size() const { return size; }

size_t MyVector::get_capacity() const { return capacity; }

void MyVector::setArr(int* newArr) { arr = newArr; }

void MyVector::setSize(size_t newSize) { size = newSize; }

void MyVector::setCapacity(size_t newCapacity) { capacity = newCapacity; }

int* MyVector::push_back(int element)
{
	if (size < capacity)
	{
		arr[size++] = element;
		return arr;
	}
	else
	{
		capacity *= 2;
		int* newArr = new int[capacity];
		int* newArray = newArr;
		for (int* array = arr; array < arr + size; ++array, ++newArray)
		{
			*newArray = *array;
		}
		int* deletArray = arr;
		arr = newArr;
		newArray = nullptr;
		delete[] deletArray;
		arr[size++] = element;
		return arr;
	}
}

int MyVector::pop_back()
{
	return arr[--size];
}

int& MyVector::at(size_t index)
{
	return arr[index];
}

MyVector& MyVector::operator = (const MyVector& obj)   // Копирующее присваивание
{ 
	if (this == &obj)
	{ 
		return *this;
	}
	size = obj.size;
	delete[] arr;
	arr = new int[size];
	for (size_t i = 0; i < size; ++i)
	{ 
		arr[i] = obj.arr[i];
	}
	return *this;
}


MyVector& MyVector::operator = (MyVector&& obj)      // Перемещающее присваивание
{
	if (this == &obj)
	{
		return *this;
	}
	size = obj.size;
	delete[]arr;
	arr = obj.arr;
	obj.size = 0;
	obj.arr = nullptr;
	return *this;
}

double &MyVector::operator[ ](int index)   // оператор [] для доступа к элементу вектора по индексу
{
	if (index < 0 || index > 1)
	{ 
		std::cout << "Error" << std::endl;
		exit(1);
	}
	if (index == 0)
	{
		return x_;
	}
	else
	{ 
		return y_;
	}
}

bool MyVector::operator > (const MyVector newArr)   // перегруженный >
{
	return arr > newArr.arr;
};

bool MyVector::operator < (const MyVector newArr)   // перегруженный <
{
	return !(*this > newArr);
};

bool MyVector::operator == (const MyVector newArr)  // перегруженный ==
{
	if (this == &newArr) { return true; }
	return arr == newArr.arr;
};

bool MyVector::operator != (const MyVector newArr)  // перегруженный !=
{
	return !(*this == newArr);
};


MyVector operator + (MyVector& a, MyVector& b) // оператор + - сложение двух векторов
{
	MyVector tmp;
	tmp.setArr(a.getArr() + b.getArr()); //????
	return tmp;
}

std::ostream& operator << (std::ostream& os, MyVector& arr) // оператор << печаити вектора
{ 
	os << arr.getArr();
	return os;
}

