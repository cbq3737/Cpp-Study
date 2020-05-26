//이것을 하는이유는? 스택과 클라이언트로 분류를 하자
//함수의 구현,함수의 정의
#include "Stack.h"
void Push(Stack& st, int data) //즉 알고리즘을 표시해주는것
{
	st.stack[st.top++] = data;
}
int Pop(Stack& st)
{
	return st.stack[--st.top];
}
void InitStack(Stack& st)
{
	st.top = 0;
}
void UninitStack(Stack& st)
{
	st.top = 0;
}