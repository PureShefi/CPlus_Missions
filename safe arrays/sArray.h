#pragma once

template<class T,int size>
class sArray
{
private:
	T arr[size];
public:
	sArray() {};
	~sArray() {};

	/* check out of range */
	void CheckOutOfRange(int index);
	/* index operators */
	T& operator[](int index);
	/* get pointer */
	operator T *() { return arr; };
};

template<class T, int size>
void sArray<T, size>::CheckOutOfRange(int index)
{
	if (index >= size)
		throw out_of_range("index to large");
	if (index < 0)
		throw out_of_range("index cant be smaller then 0");
}

template<class T, int size>
T& sArray<T, size>::operator[](int index)
{
	this->CheckOutOfRange(index);
	return arr[index];
}
/*
template<class T, int size>
inline sArray<T, size>::operator T*()
{
	return arr;
}*/

