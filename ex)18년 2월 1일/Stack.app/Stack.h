#pragma once
struct Stack  //Ŭ������ ���Ǵ� ����� ����.�̰��� �����ڵ忡���� �˾ƾߵǰ� Ŭ���̾�Ʈ������ �˾ƾߵǱ⶧���� �װ� �˰����ټ��մ°��� ����ۿ� ����.
{
	int stack[10];
	int top = 0;
};
//�ñ״����� ��������
void Push(Stack& st, int data);  
int Pop(Stack& st);
void InitStack(Stack& st);
void UninitStack(Stack& st);