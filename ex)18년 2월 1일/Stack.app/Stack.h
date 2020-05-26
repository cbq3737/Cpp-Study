#pragma once
struct Stack  //클래스의 정의는 헤더에 들어간다.이것을 서비스코드에서도 알아야되고 클라이언트에서도 알아야되기때문에 그걸 알게해줄수잇는것은 헤더밖에 없다.
{
	int stack[10];
	int top = 0;
};
//시그니쳐의 선언정보
void Push(Stack& st, int data);  
int Pop(Stack& st);
void InitStack(Stack& st);
void UninitStack(Stack& st);