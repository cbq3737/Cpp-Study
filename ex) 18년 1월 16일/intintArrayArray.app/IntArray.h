#pragma once
struct IntArray
{
	//int dArray[100]
	int* dArray; //이메모리의 개수를 고정시키면 안되기때문에 포인터로 해놓은것. 
	int size;
	int capacity;
};
void AddIntArray(IntArray& ia); //Add,Remove 원소가 변경되고 Print,Search는 원소가 변경되지않는다.
void PrintIntArray(const IntArray& ia);
void SearchArray(const IntArray& ia);
void RemoveIntArray(IntArray& ia);
void InitIntArray(IntArray& ia, int capacity = 100); //내용이 변하기에 const를 붙히지 않음.
void UninitIntArray(IntArray& ia);
