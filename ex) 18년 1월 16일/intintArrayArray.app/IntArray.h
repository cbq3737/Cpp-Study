#pragma once
struct IntArray
{
	//int dArray[100]
	int* dArray; //�̸޸��� ������ ������Ű�� �ȵǱ⶧���� �����ͷ� �س�����. 
	int size;
	int capacity;
};
void AddIntArray(IntArray& ia); //Add,Remove ���Ұ� ����ǰ� Print,Search�� ���Ұ� ��������ʴ´�.
void PrintIntArray(const IntArray& ia);
void SearchArray(const IntArray& ia);
void RemoveIntArray(IntArray& ia);
void InitIntArray(IntArray& ia, int capacity = 100); //������ ���ϱ⿡ const�� ������ ����.
void UninitIntArray(IntArray& ia);
