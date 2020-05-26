#pragma once
#include <iostream>
#include "IntArray.h"
using namespace std;
struct IntArray
{
	//int dArray[100]
	int* dArray; //이메모리의 개수를 고정시키면 안되기때문에 포인터로 해놓은것. 
	int size;
	int capacity;
}; 
void AddIntArray(IntArray& ia) //Add,Remove 원소가 변경되고 Print,Search는 원소가 변경되지않는다.
{
	cout << "정수입력: " << endl;
	int data;
	cin >> data;
	if (ia.size < ia.capacity)
	{
		ia.dArray[ia.size++] = data;
	}
}
void PrintIntArray(const IntArray& ia)
{
	int i;
	for (i = 0; i < ia.size; ++i)

		cout << "[" << i << "]" << ia.dArray[i] << endl;

}
void SearchArray(const IntArray& ia)
{
	cout << "검색 정수 입력:";
	int data;
	cin >> data;
	int i;
	for (i = 0; i < ia.size; ++i)
	{
		if (ia.dArray[i] == data)
		{
			cout << "검색정수:" << endl;
			cout << "[" << i << "]" << ia.dArray[i] << endl;
		}
	}
}
void RemoveIntArray(IntArray& ia)
{
	cout << "삭제정수:";
	int data;
	cin >> data;
	int i;
	for (i = 0; i < ia.size; ++i)
	{
		if (ia.dArray[i] == data)
		{
			for (int j = i; j < ia.size - 1; ++j)
			{
				ia.dArray[i] = ia.dArray[j + 1];
			}
			--ia.size;
			break;
		}

	}
}
void InitIntArray(IntArray& ia, int capacity) //내용이 변하기에 const를 붙히지 않음.
{
	ia.capacity = capacity;
	ia.dArray = new int[capacity];  //메모리의 개수는 클라이언트가 결정할수있다는것을 보여줌. 
	ia.size = 0;
}
void UninitIntArray(IntArray& ia)
{
	delete[] ia.dArray;
}
void Menu()
{
	cout << "1.정수 입력" << endl;
	cout << "2.정수 출력" << endl;
	cout << "3.정수 검색" << endl;
	cout << "4.정수 삭제" << endl;
	cout << "0.프로그램 종료" << endl;
}