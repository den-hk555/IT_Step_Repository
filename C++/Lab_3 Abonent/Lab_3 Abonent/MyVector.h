#pragma once

class MyVector
{
	int* arr;
	size_t size;
	size_t capacity;

public:

	MyVector() : capacity(32), size(0)
	{
		arr = new int[32];
	}

	MyVector(int* newArr, size_t newSize, size_t newCapacity) :
		arr(newArr), size(newSize), capacity(2)
	{}

	MyVector(const MyVector &newArray) :
		size(newArray.size), capacity(newArray.capacity) 
	{
		arr = new int[capacity];
		for (size_t i = 0; i < newArray.size; ++i)
		{
			arr[i] = newArray.arr[i];
		}
	}

	MyVector(MyVector&& newArray) : arr(newArray.arr), size(newArray.size),
		capacity(newArray.capacity)
	{
		newArray.arr = nullptr;
		newArray.size = newArray.capacity = 0;
	}

	int* getArr() const;
	size_t get_size() const;
	size_t get_capacity() const;

	void setArr(int*);
	void setSize(const size_t);
	void setCapacity(const size_t);

	bool empty()
	{
		return capacity;
	}
	
	int* push_back(int);
	int pop_back();
	int& at(size_t);

	~MyVector()
	{
		delete[]arr;
	}
};