#include <iostream> 
#include <cstdlib> 
#include <vector>
using namespace std;
class IteratorVector//�̰��� ������ ���̴�. 
{
public:
	int operator*()const { return 0; }
};
template <typename T>
class Vector 
{
public:
	typedef IteratorVector Iterator; //���Ϳ����� ����Ϸ���
public:
	Vector(int n) {}
	Iterator begin() 
	{
		return Iterator(); //�׳� Ŭ�����̸� ���Ѱ�.
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
//class Vector //Vector�ȿ� ���ο� ������ Iterator, �̷��� ���ľȿ� �������ִ°��� ��ø�����̶�� �θ���.
//{
//public:
//	class Iterator //���ο� ������ �����Ѱ�.��� �� Iterator�� Vector���� ���̴�.
//	{
//	public:
//		int operator*()const { return 0; }
//	}; 
//public:
//	Vector(int n) {}
//	Iterator begin()  //Vector�� begin�̶�� ���ϴ°Ͷ� �Ȱ�����.
//	{
//		return Iterator(); //�׳� Ŭ�����̸� ���Ѱ�.
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
//	vector<int> v(3); //0�� 3���� ������. �� ����� 3��
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
//	Cont cont; //�����̳� Ÿ��
//public:
//	//���ʹ� �ڵ������� �޷θ��� �÷��ֱ⿡ �����������̽������.
//	void push(const T& data) //������ �������� ǥ�����ִ� back�� �̿��Ѵ�.
//	{
//		cont.push_back(data);  //push_back�� ���޹ۿ� �Ѱ� ����. delegate: �����Ѵ�.
//	}
//	void pop()
//	{
//		cont.pop_back();
//	}
//	const T& top()const //���Ҹ� ����
//	{
//		return cont.back();
//	}
//};
//int main()
//{
//	//Stack<int> st; //���� �ƹ��͵� ���������ʾұ⶧���� ����ϸ� deque�� ���
//	Stack<int, list<int>> st; //list�� ����Ҽ��ִ�.�̶� Stack�� ��Ͷ�� �θ���. ���� �����Ѱ� �ƴ϶� �̷��� list�� �����ٰ� �������̽��� ��ȯ�Ѵ�.
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
//	//���ʹ� �ڵ������� �޷θ��� �÷��ֱ⿡ �����������̽������.
//	void push(const T& data) //������ �������� ǥ�����ִ� back�� �̿��Ѵ�.
//	{
//		cont.push_back(data);  //push_back�� ���޹ۿ� �Ѱ� ����. delegate: �����Ѵ�.
//	}
//	void pop()
//	{
//		cont.pop_back();
//	}
//	const T& top()const //���Ҹ� ����
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
//template <typename T = int> //stló�� pop�� top�� �з�����.
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
//	const T& top()const //���Ҹ� ����
//	{
//		return stack[_top-1]; //�������ġ�� ����Ű�⶧���� top-1�̴�.
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
//using namespace std;//�츮������ ���õ� �����̳� ��ͷ� ������ִٴ°� �����ִ°�.
//
//int main()
//{
//	stack<int,vector<int>> st; //,�� ���� ������ ��ť�� ����ؼ� ������ ���־��� ��. �׷��� �츮�� ���� vector�� �־��ش�. �׷��� �갡 ��Ͷ�� �ϴ°��̴�. �� stack�� �������̽��� ȣȯ�ǵ��� �ٲ��ذ�.
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
//#include <stack> //���õ� �����̳��̴�.��Ͷ�� �θ���. �ΰ��� ȣȯ�����ʴ°��� ȣȯ�ǰ����ִ°�.
//using namespace std;//�츮������ ���õ� �����̳� ��ͷ� ������ִٴ°� �����ִ°�.
//
//int main()
//{
//	stack<int> st; //�Ű������� �ڵ�ȭ��Ű�°�.
//
//	st.push(10);
//	st.push(20);
//
//	cout << st.top() << endl; //top�� ���� �����ִ� ���ҿ����� �����̴�.�����ϱ����ؼ� pop�� ����.
//	st.pop(); //��������. ���Ÿ� �����ָ� �����ִ� 20�� �ι� ���´�.
//	cout << st.top() << endl;
//
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib> 
//#include <stack> //���õ� �����̳��̴�.��Ͷ�� �θ���. �ΰ��� ȣȯ�����ʴ°��� ȣȯ�ǰ����ִ°�.
//using namespace std;//�츮������ ���õ� �����̳� ��ͷ� ������ִٴ°� �����ִ°�.
//
//int main()
//{
//	stack<int> st; //�Ű������� �ڵ�ȭ��Ű�°�.
//
//	st.push(10);
//	st.push(20);
//
//	cout << st.top() << endl; //top�� ���� �����ִ� ���ҿ����� �����̴�.�����ϱ����ؼ� pop�� ����.
//	st.pop(); //��������. ���Ÿ� �����ָ� �����ִ� 20�� �ι� ���´�.
//	cout << st.top() << endl;
//
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//using namespace std;
//template <typename T=int> //�Ű������� �������ִ°�.
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
//	Stack<> st; //�Ű������� �ڵ�ȭ��Ű�°�.
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
//template <typename T> //T�� ���ø��� �Ű�����
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
//	void Push(const T& data)//����� ��������ʵ��� , ����ó�� �ϴ°��� ����
//	{
//		stack[top++] = data;
//	}
//	const T& Pop() //����ȵǵ��� �� ��������ʵ���
//	{
//		return stack[--top];
//	}
//};
//int main()
//{
//	Stack<int> st;
//	//Stack<double> st2 = st; //Ŭ������ �ΰ����Ȱ�. ���� �ٸ� �ڵ��̹Ƿ� ���̾ȵ�.
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
//	//int stack[10]; //�޸𸮰����� ����������. �����迭, �����̶�°� �������ϴ½ð��̶� ���ü��� ���´�. ,�����̶� �ܾ�� ����ð��� ������ ���踦 ���´�.
//	int* stack; //�������� ����
//	int top ;
//	Stack(const Stack&); //�� ���縦 �������Ѵ� ��¶� , ���ð������� �������ִµ� ���簡�Ǹ�ȵǴϱ� . �ٵ� Ŭ�������ο��� �Ҽ��ִµ� ��ü�� ���⿡ ���ϰ��Ѵ�.
//	const Stack& operator=(const Stack&); //�� ���縦 ���°�.
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
//	//Stack st2 = st;  �� ���簡 �ȵǰ� ������ ���.
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


//#include <iostream> //�Լ����� Ŭ���������� ������. 
//#include <cstdlib> //c��Ÿ���� c++��Ÿ�Ϸ� �ٲ۰�.
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
//	st.InitStack();//�Լ��� ���º����� �з��Ǿ��־��⶧���� �μ��� �ѱ����ʴ´�.
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


//#include <iostream> //c��Ÿ��
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
//void InitStack(Stack& st)//������ ���¸� �����ϱ⿡ &�� ����ϰ� const�� �ȵȴ�.
//{
//	st.top = 0;
//}
//void UninitStack(Stack& st)//������ ���¸� �����ϱ⿡ &�� ����ϰ� const�� �ȵȴ�.
//{
//	st.top = 0;
//}
//int main() 
//{
//	Stack st; //0���� �ʱ�ȭ�ϴ°� ���̾ȵȴ�.				  
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
//	UninitStack(st);//����������
//	UninitStack(ost);
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//struct Stack //�߻�ȭ���̴� ����� Ŭ������ �����Ҽ�����.
//{
//	//c��Ÿ�Ͽ����� �Լ��� �����ʹ� ������������ �����ͳ����� �������ִ�.
//	int stack[10]; //�̵��� �׻� ���̴ٴϱ⿡ ���� ��� Stack�̶�� �������ذͻ�. 
//	int top = 0;
//};
//void Push(Stack& st, int data) //Stack st�� ���� ���簡 �ǹ���.�������� �޸𸮸� �ȵȴ�. �׷��� ������ ����
//{ 
//	st.stack[st.top++] = data;
//}
//int Pop(Stack& st) 
//{
//	return st.stack[--st.top];
//}
//int main() //������ ���³����� �������ִ�.
//{
//	Stack st = { 0 }; //int stack[10]; int top = 0; 
//	//�ϴ� �켱������ 0���� �ʱ�ȭ�� �Ѱ���.
//	Stack ost ={ 0 };//int ostack[10]; int otop = 0;
//
//	Push(st, 10); //stack�� top�� st�̱⶧���� 
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
//using namespace std;//���������� ������ �Ѹ��� ���� ����.�ڹٳ� c#�� ���������� ����.�������α�ɱ����� ��������� ���������� ����ϸ�ȵȴ�.
//
//void Push(int* stack,int& top,int data)//������ǥ����� �ΰ��� 1.������ 2. ��ġ����(����) ��ġ�� �����Ѽ� ������ �޸𸮷� ����Ҽ��ִ�.
//{ //stack�� �������ּҰ� ������� ������ ����Ʈ�� �޾ƾ߉�.������ ������ �����ͷ� �޾ƾ���.
//	stack[top++] = data; 
//}
//int Pop(int* stack,int& top) //���� ������ ����� �Ѵ�.
//{
//	return stack[--top];
//}
//int main() //����
//{
//	int stack[10]; //����� ���� �Լ� �μ��� ��������.
//	int top = 0; //�����̱⶧���� ���� �ٲ�� ���⵵ �ٲ��. �ٷΰ���� ���� �ǹ�
//
//	Push(stack, top, 10); //stack�� top�̰���Ű�� ��ġ�� 10�� �־��
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
//	stack[top++] = data; //���ÿ� ž����ġ�� �����͸� �־��
//}
//int Pop()
//{
//	return stack[--top]; //ž�� ���ҽ�Ų�� ������ ���� ��ȯ����
//}
//int main() //����
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
//int main() //����
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


//#include <iostream> //�ڷᱸ���� �������ΰ��� ���� ���ϴ�.���� ���� ǥ���� �ȴ�.
//#include <cstdlib>
//using namespace std;
//
//int stack[10];
//int top=0;//��ġ�� �����ϱ�����.
//void Push(int data)//�����Ҷ�,����:Push, ������:pop �� ������ �������̽���� �θ���.
//{
//}
//int Pop()
//{
//	return 0;
//}
//int main() //����
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