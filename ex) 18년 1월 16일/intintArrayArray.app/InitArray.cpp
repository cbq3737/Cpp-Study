#pragma once
#include <iostream>
#include "IntArray.h"
using namespace std;
struct IntArray
{
	//int dArray[100]
	int* dArray; //�̸޸��� ������ ������Ű�� �ȵǱ⶧���� �����ͷ� �س�����. 
	int size;
	int capacity;
}; 
void AddIntArray(IntArray& ia) //Add,Remove ���Ұ� ����ǰ� Print,Search�� ���Ұ� ��������ʴ´�.
{
	cout << "�����Է�: " << endl;
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
	cout << "�˻� ���� �Է�:";
	int data;
	cin >> data;
	int i;
	for (i = 0; i < ia.size; ++i)
	{
		if (ia.dArray[i] == data)
		{
			cout << "�˻�����:" << endl;
			cout << "[" << i << "]" << ia.dArray[i] << endl;
		}
	}
}
void RemoveIntArray(IntArray& ia)
{
	cout << "��������:";
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
void InitIntArray(IntArray& ia, int capacity) //������ ���ϱ⿡ const�� ������ ����.
{
	ia.capacity = capacity;
	ia.dArray = new int[capacity];  //�޸��� ������ Ŭ���̾�Ʈ�� �����Ҽ��ִٴ°��� ������. 
	ia.size = 0;
}
void UninitIntArray(IntArray& ia)
{
	delete[] ia.dArray;
}
void Menu()
{
	cout << "1.���� �Է�" << endl;
	cout << "2.���� ���" << endl;
	cout << "3.���� �˻�" << endl;
	cout << "4.���� ����" << endl;
	cout << "0.���α׷� ����" << endl;
}