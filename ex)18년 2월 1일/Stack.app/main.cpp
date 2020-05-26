#include "Stack.h"//""은 지정디렉토리에서 쓰겠다는 의미이다 그래서 <>을 안사용한다.
//#include <Stack.h>는 프로젝트 - 속성 - 포함디렉토리 - 줄추가 - 프로젝트이름을 추가해주면 <>도 가능하다.
#include "Stack.h"//두번해줘도 실행해도 큰 변함이없음.
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	Stack st; //0으로 초기화하는건 말이안된다.				  
	Stack ost;

	InitStack(st);
	Push(st, 10);
	Push(st, 20);

	InitStack(ost);
	Push(ost, 30);

	cout << Pop(st) << endl;
	cout << Pop(st) << endl;
	cout << Pop(ost) << endl;

	UninitStack(st);//마무리하자
	UninitStack(ost);
	system("pause");
}