#include <iostream> 
#include <cstdlib> 
#include <vector>
using namespace std;
class IteratorVector//이것은 벡터의 것이다. 
{
public:
	int operator*()const { return 0; }
};
template <typename T>
class Vector 
{
public:
	typedef IteratorVector Iterator; //벡터에서만 사용하려고
public:
	Vector(int n) {}
	Iterator begin() 
	{
		return Iterator(); //그냥 클래스이름 말한것.
	}
};
int main()
{
	Vector<int> v(3);
	Vector<int>::Iterator iter = v.begin();
	cout << *iter << endl;
	system("pause");
}


//#include <iostream> 
//#include <cstdlib> 
//#include <vector>
//using namespace std;
//template <typename T>
//class Vector //Vector안에 새로운 형식인 Iterator, 이렇게 형식안에 형식이있는것을 중첩형식이라고 부른다.
//{
//public:
//	class Iterator //새로운 형식을 정의한것.얘는 이 Iterator은 Vector만의 것이다.
//	{
//	public:
//		int operator*()const { return 0; }
//	}; 
//public:
//	Vector(int n) {}
//	Iterator begin()  //Vector형 begin이라고 말하는것랑 똑같은것.
//	{
//		return Iterator(); //그냥 클래스이름 말한것.
//	}
//};
//int main()
//{
//	Vector<int> v(3); 
//	Vector<int>::Iterator iter = v.begin();
//	cout << *iter << endl;
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib> 
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<int> v(3); //0을 3개를 가진다. 즉 사이즈가 3개
//	vector<int>::iterator iter = v.begin();
//	cout << *iter << endl;
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib> 
//#include <stack>
//#include <vector>
//#include <deque>
//#include <list>
//using namespace std;
//template <typename T = int,typename Cont=deque<T>>
//class Stack
//{
//	Cont cont; //컨테이너 타입
//public:
//	//벡터는 자동적으로 메로리를 늘려주기에 동적인터페이스없어도됌.
//	void push(const T& data) //벡터의 마지막을 표시해주는 back을 이용한다.
//	{
//		cont.push_back(data);  //push_back을 전달밖에 한게 없다. delegate: 위임한다.
//	}
//	void pop()
//	{
//		cont.pop_back();
//	}
//	const T& top()const //원소를 참조
//	{
//		return cont.back();
//	}
//};
//int main()
//{
//	//Stack<int> st; //지금 아무것도 지정하지않았기때문에 사용하면 deque를 사용
//	Stack<int, list<int>> st; //list도 사용할수있다.이때 Stack을 어뎁터라고 부른다. 직접 구현한게 아니라 이렇게 list를 가져다가 인터페이스만 변환한다.
//	st.push(10);
//	st.push(20);
//
//	cout << st.top() << endl;
//	st.pop();
//	cout << st.top() << endl;
//	st.pop();
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <stack>
//#include <vector>
//using namespace std;
//template <typename T = int> 
//class Stack
//{
//	vector<T> cont; 
//public:
//	//벡터는 자동적으로 메로리를 늘려주기에 동적인터페이스없어도됌.
//	void push(const T& data) //벡터의 마지막을 표시해주는 back을 이용한다.
//	{
//		cont.push_back(data);  //push_back을 전달밖에 한게 없다. delegate: 위임한다.
//	}
//	void pop()
//	{
//		cont.pop_back();
//	}
//	const T& top()const //원소를 참조
//	{
//		return cont.back();
//	}
//};
//int main()
//{
//	Stack<int> st;
//
//	st.push(10);
//	st.push(20);
//
//	cout << st.top() << endl;
//	st.pop();
//	cout << st.top() << endl;
//	st.pop();
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib> 
//#include <stack>
//#include <vector>
//using namespace std;
//template <typename T = int> //stl처럼 pop과 top을 분류했음.
//class Stack
//{
//T* stack;
//int _top ;
//Stack(const Stack&);
//const Stack& operator=(const Stack&);
//public:
//	Stack(int t = 0) :_top(t)
//	{
//		int cap = 100;
//		stack = new T[cap];
//	}
//	~Stack()
//	{
//		delete[] stack;
//		
//	}
//	void push(const T& data)
//	{
//		stack[_top++] = data;
//	}
//	void pop() 
//	{
//		--_top;
//	}
//
//	const T& top()const //원소를 참조
//	{
//		return stack[_top-1]; //저장될위치를 가르키기때문에 top-1이다.
//	}
//};
//int main()
//{
//	Stack<int> st;
//
//	st.push(10);
//	st.push(20);
//
//	cout << st.top() << endl;
//	st.pop();
//	cout << st.top() << endl;
//	st.pop();
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <stack>
//#include <vector>
//using namespace std;//우리가만든 스택도 컨테이너 어뎁터로 만들수있다는걸 보여주는것.
//
//int main()
//{
//	stack<int,vector<int>> st; //,를 찍어보면 스택은 디큐를 사용해서 구현이 되있었던 것. 그래서 우리가 직접 vector를 넣어준다. 그래서 얘가 어뎁터라고 하는것이다. 즉 stack의 인터페이스를 호환되도록 바꿔준것.
//
//	st.push(10);
//	st.push(20);
//
//	cout << st.top() << endl; 
//	st.pop(); 
//	cout << st.top() << endl;
//
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <stack> //스택도 컨테이너이다.어뎁터라고 부른다. 두개의 호환되지않는것을 호환되게해주는것.
//using namespace std;//우리가만든 스택도 컨테이너 어뎁터로 만들수있다는걸 보여주는것.
//
//int main()
//{
//	stack<int> st; //매개변수를 자동화시키는것.
//
//	st.push(10);
//	st.push(20);
//
//	cout << st.top() << endl; //top은 제일 위에있는 원소에대한 참조이다.제거하기위해선 pop을 쓴다.
//	st.pop(); //제거해줌. 제거를 안해주면 위에있는 20만 두번 나온다.
//	cout << st.top() << endl;
//
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib> 
//#include <stack> //스택도 컨테이너이다.어뎁터라고 부른다. 두개의 호환되지않는것을 호환되게해주는것.
//using namespace std;//우리가만든 스택도 컨테이너 어뎁터로 만들수있다는걸 보여주는것.
//
//int main()
//{
//	stack<int> st; //매개변수를 자동화시키는것.
//
//	st.push(10);
//	st.push(20);
//
//	cout << st.top() << endl; //top은 제일 위에있는 원소에대한 참조이다.제거하기위해선 pop을 쓴다.
//	st.pop(); //제거해줌. 제거를 안해주면 위에있는 20만 두번 나온다.
//	cout << st.top() << endl;
//
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//using namespace std;
//template <typename T=int> //매개변수를 지정해주는것.
//class Stack
//{
//	T* stack;
//	int top ;
//	Stack(const Stack&);
//	const Stack& operator=(const Stack&);
//public:
//	Stack(int t = 0) :top(t)
//	{
//		int cap = 100;
//		stack = new T[cap];
//	}
//	~Stack()
//	{
//		delete[] stack;
//	}
//	void Push(const T& data)
//	{
//		stack[top++] = data;
//	}
//	const T& Pop() 
//	{
//		return stack[--top];
//	}
//};
//int main()
//{
//	Stack<> st; //매개변수를 자동화시키는것.
//
//	st.Push(10);
//	st.Push(20);
//
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//using namespace std;
//template <typename T> //T는 템플릿의 매개변수
//class Stack
//{
//	T* stack; 
//	int top ;
//	Stack(const Stack&); 
//	const Stack& operator=(const Stack&); 
//public:
//	Stack(int t = 0) :top(t)
//	{
//		int cap = 100;
//		stack = new T[cap];
//	}
//	~Stack()
//	{
//		delete[] stack;
//	}
//	void Push(const T& data)//복사와 변경되지않도록 , 버릇처럼 하는것이 좋음
//	{
//		stack[top++] = data;
//	}
//	const T& Pop() //복사안되도록 또 변경되지않도록
//	{
//		return stack[--top];
//	}
//};
//int main()
//{
//	Stack<int> st;
//	//Stack<double> st2 = st; //클래스가 두개가된것. 전혀 다른 코드이므로 말이안됨.
//
//
//	st.Push(10);
//	st.Push(20);
//
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//using namespace std;
//class Stack
//{
//	//int stack[10]; //메모리갯수가 정해져있음. 정적배열, 정적이라는건 컴파일하는시간이랑 관련성을 갖는다. ,동적이란 단어는 실행시간과 밀접한 관계를 갖는다.
//	int* stack; //동적으로 만듬
//	int top ;
//	Stack(const Stack&); //즉 복사를 하지못한다 라는뜻 , 스택같은경우는 참조가있는데 복사가되면안되니까 . 근데 클래스내부에선 할수있는데 몸체가 없기에 못하게한다.
//	const Stack& operator=(const Stack&); //즉 복사를 막는것.
//public:
//	Stack(int t = 0) :top(t)
//	{
//		int cap = 100;
//		stack = new int[cap];
//	}
//	~Stack()
//	{
//		delete[] stack;
//		top = 0;
//	}
//	void Push(int data)
//	{
//		stack[top++] = data;
//	}
//	int Pop()
//	{
//		return stack[--top];
//	}
//};
//int main()
//{
//	Stack st;
//	///Stack st2;
//	//Stack st2 = st;  즉 복사가 안되고 오류가 뜬다.
//	//st2 = st;
//	st.Push(10);
//	st.Push(20);
//	
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//	
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//using namespace std;
//class Stack
//{
//	int stack[10];
//	int top;
//public:
//	Stack(int t = 0) :top(t){}
//	~Stack()
//	{
//		top = 0;
//	}
//	void Push(int data)
//	{
//		stack[top++] = data;
//	}
//	int Pop()
//	{
//		return stack[--top];
//	}
//};
//int main()
//{
//	Stack st;
//	Stack ost;
//	
//	st.Push(10);
//	st.Push(20);
//	ost.Push(30);
//
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//	cout << ost.Pop() << endl;
//
//	system("pause");
//}


//#include <iostream> //함수들을 클래스안으로 넣은것. 
//#include <cstdlib> //c스타일을 c++스타일로 바꾼것.
//using namespace std;
//class Stack 
//{
//	int stack[10]; 
//	int top ;
//public:
//		void Push(int data)
//		{
//			stack[top++] = data;
//		}
//		int Pop()
//		{
//			return stack[--top];
//		}
//		void InitStack()
//		{
//			top = 0;
//		}
//		void UninitStack()
//		{
//			top = 0;
//		}
//};
//
//int main() 
//{
//	Stack st; 	  
//	Stack ost; 
//	
//	st.InitStack();//함수와 상태변수가 분류되어있었기때문에 인수를 넘기지않는다.
//	st.Push(10); 
//	st.Push(20);
//	
//	ost.InitStack();
//	ost.Push(30);
//
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//	cout << ost.Pop() << endl;
//
//	st.UninitStack();
//	ost.UninitStack();
//	system("pause");
//}


//#include <iostream> //c스타일
//#include <cstdlib>
//using namespace std;
//struct Stack 
//{
//	int stack[10]; 
//	int top = 0;
//};
//void Push(Stack& st, int data) 
//{
//	st.stack[st.top++] = data;
//}
//int Pop(Stack& st)
//{
//	return st.stack[--st.top];
//}
//void InitStack(Stack& st)//무조건 상태를 변경하기에 &를 사용하고 const는 안된다.
//{
//	st.top = 0;
//}
//void UninitStack(Stack& st)//무조건 상태를 변경하기에 &를 사용하고 const는 안된다.
//{
//	st.top = 0;
//}
//int main() 
//{
//	Stack st; //0으로 초기화하는건 말이안된다.				  
//	Stack ost; 
//	
//	InitStack(st);
//	Push(st, 10); 
//	Push(st, 20);
//	
//	InitStack(ost);
//	Push(ost, 30);
//
//	cout << Pop(st) << endl;
//	cout << Pop(st) << endl;
//	cout << Pop(ost) << endl;
//
//	UninitStack(st);//마무리하자
//	UninitStack(ost);
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//struct Stack //추상화없이는 절대로 클래스를 정의할수없다.
//{
//	//c스타일에서는 함수와 데이터는 묶을수없지만 데이터끼리는 묶을수있다.
//	int stack[10]; //이둘은 항상 같이다니기에 둘을 묶어서 Stack이라고 정의해준것뿐. 
//	int top = 0;
//};
//void Push(Stack& st, int data) //Stack st만 쓰면 복사가 되버림.독립적인 메모리면 안된다. 그래서 참조를 넣음
//{ 
//	st.stack[st.top++] = data;
//}
//int Pop(Stack& st) 
//{
//	return st.stack[--st.top];
//}
//int main() //스택은 상태끼리는 묶을수있다.
//{
//	Stack st = { 0 }; //int stack[10]; int top = 0; 
//	//일단 우선적으로 0으로 초기화만 한것임.
//	Stack ost ={ 0 };//int ostack[10]; int otop = 0;
//
//	Push(st, 10); //stack과 top이 st이기때문에 
//	Push(st, 20);
//	Push(ost, 30);
//
//	cout << Pop(st) << endl;
//	cout << Pop(st) << endl;
//	cout << Pop(ost) << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;//전역변수는 마땅히 둘만한 곳이 없다.자바나 c#은 전역변수가 없다.독립적인기능구조를 만들기위해 전역변수를 사용하면안된다.
//
//void Push(int* stack,int& top,int data)//데이터표현방법 두가지 1.값보관 2. 위치보관(참조) 위치를 가르켜서 동인한 메모리로 사용할수있다.
//{ //stack은 정수형주소가 날라오면 정수형 포인트로 받아야됌.스택은 무조건 포인터로 받아야함.
//	stack[top++] = data; 
//}
//int Pop(int* stack,int& top) //값을 꺼내어 출력을 한다.
//{
//	return stack[--top];
//}
//int main() //스택
//{
//	int stack[10]; //여기랑 위에 함수 인수랑 같은것임.
//	int top = 0; //참조이기때문에 위에 바뀌면 여기도 바뀐다. 바로가기랑 같은 의미
//
//	Push(stack, top, 10); //stack에 top이가르키는 위치에 10을 넣어라
//	Push(stack, top, 20);
//	Push(stack, top, 30);
//
//	cout << Pop(stack, top) << endl;
//	cout << Pop(stack, top) << endl;
//	cout << Pop(stack, top) << endl;
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//
//int stack[10];
//int top = 0;
//void Push(int data)
//{
//	stack[top++] = data; //스택에 탑에위치에 데이터를 넣어라
//}
//int Pop()
//{
//	return stack[--top]; //탑을 감소시킨후 원소의 값을 반환하자
//}
//int main() //스택
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	cout << Pop() << endl;
//	cout << Pop() << endl;
//	cout << Pop() << endl;
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//
//int stack[10];
//int top = 0;
//void Push(int data)
//{
//}
//int Pop()
//{
//	return 0;
//}
//int main() //스택
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	cout << Pop() << endl;
//	cout << Pop() << endl;
//	cout << Pop() << endl;
//	system("pause");
//}


//#include <iostream> //자료구조는 개념적인것이 많이 강하다.많은 언어로 표현이 된다.
//#include <cstdlib>
//using namespace std;
//
//int stack[10];
//int top=0;//위치를 구현하기위함.
//void Push(int data)//보관할때,보관:Push, 꺼내기:pop 즉 스택의 인터페이스라고 부른다.
//{
//}
//int Pop()
//{
//	return 0;
//}
//int main() //스택
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	cout << Pop() << endl;
//	cout << Pop() << endl;
//	cout << Pop() << endl;
//	system("pause");
//}