#include "Stack.h"//""�� �������丮���� ���ڴٴ� �ǹ��̴� �׷��� <>�� �Ȼ���Ѵ�.
//#include <Stack.h>�� ������Ʈ - �Ӽ� - ���Ե��丮 - ���߰� - ������Ʈ�̸��� �߰����ָ� <>�� �����ϴ�.
#include "Stack.h"//�ι����൵ �����ص� ū �����̾���.
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	Stack st; //0���� �ʱ�ȭ�ϴ°� ���̾ȵȴ�.				  
	Stack ost;

	InitStack(st);
	Push(st, 10);
	Push(st, 20);

	InitStack(ost);
	Push(ost, 30);

	cout << Pop(st) << endl;
	cout << Pop(st) << endl;
	cout << Pop(ost) << endl;

	UninitStack(st);//����������
	UninitStack(ost);
	system("pause");
}