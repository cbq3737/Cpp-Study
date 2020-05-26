#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;
int image[10][10] =
{
	0,0,0,0,0,0,0,0,0,0,
	0,1,1,1,5,5,5,0,0,0,
	0,0,1,1,5,5,5,0,0,0,
	0,0,1,1,5,5,5,0,0,0,
	0,0,1,1,1,1,1,0,0,0,
	1,1,1,1,1,1,1,0,0,0,
	1,1,0,0,6,6,6,0,0,0,
	0,0,0,0,6,6,6,6,6,0,
	0,0,0,0,6,6,6,6,6,0,
	0,0,0,0,0,0,0,0,0,0
};
void PrintImage()
{
	system("cls"); 
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
			cout << image[i][j] << "  ";
		cout << endl;
	}
	Sleep(300); //sleep은 1000/1초로 하므로 0.3초
}
void _Fill(int image[][10], int i, int j, int newColor, int oldColor)
{
	if (0 > i || i >= 10 || 0 > j || j >= 10)  //종료조건
	{
		return;
	}
	if (image[i][j] != oldColor)
	{
		return;
	}
	image[i][j] = newColor;//현재위치의 색상
	PrintImage();

	_Fill(image, i - 1, j, newColor, oldColor); //위
	_Fill(image, i, j + 1, newColor, oldColor); //오른쪽
	_Fill(image, i + 1, j, newColor, oldColor); //아래
	_Fill(image, i, j - 1, newColor, oldColor); //왼쪽
}
void Fill(int image[][10], int i, int j, int newColor)
{//이미지내용,색칠해야할위치(i , j), 색칠할값
	if (image[i][j] == newColor)
		return;
	_Fill(image, i, j, newColor, image[i][j]);//재귀함수로 동작시키기위한 함수
}
int main()
{
	int i, j;

	PrintImage();
	cout << "좌표(x,y) 입력: ";
	cin >> i >> j;

	Fill(image, i, j, 8);
	system("pause");
}


//#include <iostream>
//#include <cstdlib>
//#include <Windows.h>
//using namespace std;
//int image[10][10] =
//{
//	0,0,0,0,0,0,0,0,0,0,
//	0,1,1,1,5,5,5,0,0,0,
//	0,0,1,1,5,5,5,0,0,0,
//	0,0,1,1,5,5,5,0,0,0,
//	0,0,1,1,1,1,1,0,0,0,
//	1,1,1,1,1,1,1,0,0,0,
//	1,1,0,0,6,6,6,0,0,0,
//	0,0,0,0,6,6,6,6,6,0,
//	0,0,0,0,6,6,6,6,6,0,
//	0,0,0,0,0,0,0,0,0,0
//};
//void PrintImage()
//{
//	system("cls"); //
//	for (int i = 0; i < 10; ++i)
//	{
//		for (int j = 0; j < 10; ++j)
//			cout << image[i][j] << "  ";
//		cout << endl;
//	}
//	Sleep(300); //sleep은 1000/1초로 하므로 0.3초
//}
//void _Fill(int image[][10], int i, int j, int newColor, int oldColor)
//{
//	if (0 > i||i >= 10 || 0 > j || j >= 10)  //종료조건
//	{
//		return;
//	}
//	if (image[i][j] != oldColor)
//	{
//		return;
//	}
//	image[i][j] = newColor;//현재위치의 색상
//	PrintImage();
//
//	_Fill(image, i - 1, j, newColor, oldColor); //위
//	_Fill(image, i, j+1, newColor, oldColor); //오른쪽
//	_Fill(image, i+1, j, newColor, oldColor); //아래
//	_Fill(image, i, j-1, newColor, oldColor); //왼쪽
//}
//void Fill(int image[][10], int i, int j, int newColor)
//{//이미지내용,색칠해야할위치(i , j), 색칠할값
//	if (image[i][j] == newColor)
//		return;
//	_Fill(image, i, j, newColor, image[i][j]);//재귀함수로 동작시키기위한 함수
//}
//int main()
//{
//	Fill(image, 1, 2, 8);
//	system("pause");
//}

//#include <iostream> //재귀함수의 예제 그림판 색상 변경하는것
//#include <cstdlib>
//#include <windows.h>
//using namespace std;
//int image[10][10] = 
//{ 
//0,0,0,0,0,0,0,0,0,0,
//0,1,1,1,5,5,5,0,0,0,
//0,0,1,1,5,5,5,0,0, 
//0,0,1,1,5,5,5,0,0,
//0,0,1,1,1,1,1,0,0,
//1,1,1,1,1,1,1,0,0,0,
//1,1,1,1,1,1,1,0,0,0,
//1,1,0,0,6,6,6,0,0,0,
//0,0,0,0,6,6,6,0,0,0,
//0,0,0,0,0,0,0,0,0,0 
//};
//void PrintImage()
//{
//	system("cls");
//	for (int i = 0; i < 10; ++i)
//	{
//		for (int j = 0; j < 10; ++j)
//		{
//			cout << image[i][j] << "";
//		}
//		cout << endl;
//	}
//	Sleep(300); //0.3초정도
//}
//int main()
//{
//	PrintImage();
//	PrintImage();
//	PrintImage();
//	PrintImage();
//	PrintImage();
//	PrintImage();
//	system("pause");
//}


//#include <iostream> //재귀함수의 응용 : 피보나치수열
//#include <cstdlib>
//using namespace std;
//int Fibonacci(int n)
//{
//	if (n == 1)
//	{
//		return 2;
//	}
//	else if(n==2)
//	{
//		return 3;
//	}
//	else
//	{
//		return Fibonacci(n - 1) + Fibonacci(n-2);
//	}
//}
//int main()
//{
//	cout << Fibonacci(5) << endl;
//	system("pause");
//}


//#include <iostream> //재귀함수의 응용 : 팩토리얼  5! = 5x4x3x2x1
//#include <cstdlib>
//using namespace std;
//int Factorial(int n)
//{
//	
//		
//		return n==1?1:Factorial(n-1)*n;
//	
//}
//int main()
//{
//	cout << Factorial(5) << endl;
//	system("pause");
//}


//#include <iostream> //재귀함수의 응용 : 팩토리얼  5! = 5x4x3x2x1
//#include <cstdlib>
//using namespace std;
//int Factorial(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		int fac = Factorial(n - 1);
//		return fac * n;
//	}
//}
//int main()
//{
//	cout << Factorial(5) << endl;
//	system("pause");
//}


//#include <iostream> //재귀함수의 응용 : 팩토리얼  5! = 5x4x3x2x1
//#include <cstdlib>
//using namespace std;
//int Factorial(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return Factorial(n - 1)*n;
//	}
//}
//int main()
//{
//	cout << Factorial(5) << endl;
//	system("pause");
//}


//#include <iostream>//재귀함수 : 함수안에 자기 함수를 호출하는것.
//#include <cstdlib>
//using namespace std;
//void Print(int n) //한방향으로 쭉호출하고 쭉 다시 종료하는것을 선형재귀라고 한다.
//{
//	for (int i = 0; i < 3 - n; ++i)
//	{
//		cout << " ";
//	}
//	cout << "+" << n << endl;  //재귀함수보다 위에것이 먼저 실행한후 재귀함수아래잇는것이 실행
//	if (n > 0)
//	{
//		Print(n - 1);
//		Print(n - 2);
//		Print(n - 3);
//
//	}
//	for (int i = 0; i < 3 - n; ++i)
//	{
//		cout << " ";
//	}
//	cout << "-" << n << endl;
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}

//#include <iostream>//재귀함수 : 함수안에 자기 함수를 호출하는것.
//#include <cstdlib>
//using namespace std;
//void Print(int n) //한방향으로 쭉호출하고 쭉 다시 종료하는것을 선형재귀라고 한다.
//{
//	for (int i = 0; i < 3 - n; ++i)
//	{
//		cout << " ";
//	}
//	cout << "+" << n << endl;  //재귀함수보다 위에것이 먼저 실행한후 재귀함수아래잇는것이 실행
//	if (n > 0)
//	{
//		Print(n - 1);
//		Print(n - 1);
//		Print(n - 1);
//
//	}
//	for (int i = 0; i < 3 - n; ++i)
//	{
//		cout << " ";
//	}
//	cout << "-" << n << endl;
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}

//#include <iostream>//재귀함수 : 함수안에 자기 함수를 호출하는것.
//#include <cstdlib>
//using namespace std;
//void Print(int n) //한방향으로 쭉호출하고 쭉 다시 종료하는것을 선형재귀라고 한다.
//{
//	for (int i = 0; i < 3 - n; ++i)
//	{
//		cout << " ";
//	}
//	cout << "+" << n << endl;  //재귀함수보다 위에것이 먼저 실행한후 재귀함수아래잇는것이 실행
//	if (n > 0)
//	{
//		Print(n - 1);
//		Print(n - 1);
//	}
//	for (int i = 0; i < 3 - n; ++i)
//	{
//		cout << " ";
//	}
//	cout << "-" << n << endl;
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}

//#include <iostream>//재귀함수 : 함수안에 자기 함수를 호출하는것.
//#include <cstdlib>
//using namespace std; 
//void Print(int n) //한방향으로 쭉호출하고 쭉 다시 종료하는것을 선형재귀라고 한다.
//{
//	cout << "+" << n << endl;  //재귀함수보다 위에것이 먼저 실행한후 재귀함수아래잇는것이 실행
//	if (n > 0)
//	{
//		Print(n - 1);
//		Print(n - 1);
//	}
//	cout << "-" << n << endl;
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}


//#include <iostream>//재귀함수 : 함수안에 자기 함수를 호출하는것.
//#include <cstdlib>
//using namespace std;
//void Print(int n)
//{
//	cout <<"+"<< n << endl;  //재귀함수보다 위에것이 먼저 실행한후 재귀함수아래잇는것이 실행
//	if (n > 0) 
//	{
//		Print(n - 1); 
//	}
//	cout << "-" << n << endl;
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}



//#include <iostream>//재귀함수 : 함수안에 자기 함수를 호출하는것.
//#include <cstdlib>
//using namespace std;
//void Print(int n)
//{
//	cout << n << endl;
//	if (n > 0) // 재귀함수 종료조건 
//	{
//		Print(n - 1); //재귀함수
//	}
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}
////완전한 재귀함수가 될려면 두가지 조건 필요 1, 재귀함수 종료조건(재귀함수를 호출하지 않는 조건) 2.이 종료조건의 값이 수렴해야한다.종료해야지 발산하면 안된다.


//#include <iostream>//재귀함수 : 함수안에 자기 함수를 호출하는것.
//#include <cstdlib>
//using namespace std;
//void Print(int n)
//{
//	cout << n << endl;
//	Print(n); //재귀함수
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}


//#include <iostream>//재귀함수 : 함수안에 자기 함수를 호출하는것.
//#include <cstdlib>
//using namespace std;
//void Print(int n)
//{
//	cout << n << endl;
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}


//#include <iostream>//이중연결리스트관련 코드
//#include <cstdlib>
//using namespace std;
//
//template <typename T>
//class  List
//{
//	struct Node
//	{
//		T data;
//		Node* prev;
//		Node* next;
//		Node(const T& data) : data(data), prev(0), next(0) {}
//	};
//	Node* head;
//	Node* tail;
//public:
//	class Iterator //Iterator는 Node의 정보를 가져야만 한다.
//	{
//		Node* ptr;
//	public:
//		Iterator(Node* p) :ptr(p) {}
//		bool operator !=(Iterator arg)
//		{
//			return ptr != arg.ptr;
//		}
//		Iterator operator++()
//		{
//			ptr = ptr->next;
//			return *this;
//		}
//		T operator*()
//		{
//			return ptr->data;
//		}
//		Node* operator&() //노드의 주소반환 약간 게터 느낌
//		{
//			return ptr;
//		}
//	};
//public:
//	List()
//	{
//		head = new Node(T());
//		tail = new Node(T());
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//
//	void AddNext(const T& data)
//	{
//		Node* ptail = tail->prev;
//		Node* p = new Node(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(const T& data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = new Node(data);
//		head->next = p;
//		p->prev = head;
//		p->next = nhead;
//		nhead->prev = p;
//	}
//	void Remove(Iterator iter) //노드를 가르키는 놈을 제거하는것.
//	{
//		Node* pp = (&iter)->prev; //iter.ptr 이것이 노드의 주소
//		Node* np = (&iter)->next;
//		pp->next = np;
//		np->prev = pp;
//		delete &iter;
//
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next); //실제 노드의 정보를 가져야함.
//	}
//	Iterator End()
//	{
//		return Iterator(tail);
//	}
//};
//int main()
//{
//	List<int> lt;
//
//	lt.AddNext(10);
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//	//ITerator로 만듬
//	for (List<int>::Iterator iter = lt.Begin(); iter != lt.End(); ++iter)
//	{
//		if (*iter == 30)
//		{
//			lt.Remove(iter);
//			break;
//		}
//	}
//	for (List<int>::Iterator iter = lt.Begin(); iter != lt.End(); ++iter) //첨부터 끝까지 보는 iter Iterator를 만들어줌
//	{
//		cout << *iter << endl;
//	}
//	system("pause");
//}


//#include <iostream>//이중연결리스트관련 코드
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//	Node(int data) : data(data), prev(0), next(0) {}
//};
//class  List
//{
//	Node* head;
//	Node* tail;
//public:
//	class Iterator //Iterator는 Node의 정보를 가져야만 한다.
//	{
//		Node* ptr;
//	public:
//		Iterator(Node* p) :ptr(p) {}
//		bool operator !=(Iterator arg)
//		{
//			return ptr != arg.ptr;
//		}
//		Iterator operator++()
//		{
//			ptr = ptr->next;
//			return *this;
//		}
//		int operator*()
//		{
//			return ptr->data;
//		}
//		Node* operator&() //노드의 주소반환 약간 게터 느낌
//		{
//			return ptr;
//		}
//	};
//public:
//	List()
//	{
//		head = new Node(0);
//		tail = new Node(0);
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//
//	void AddNext(int data)
//	{
//		Node* ptail = tail->prev;
//		Node* p = new Node(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = new Node(data);
//		head->next = p;
//		p->prev = head;
//		p->next = nhead;
//		nhead->prev = p;
//	}
//	void Remove(Iterator iter) //노드를 가르키는 놈을 제거하는것.
//	{
//		Node* pp = (&iter)->prev; //iter.ptr 이것이 노드의 주소
//		Node* np = (&iter)->next;
//		pp->next = np;
//		np->prev = pp;
//		delete &iter;
//
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next); //실제 노드의 정보를 가져야함.
//	}
//	Iterator End()
//	{
//		return Iterator(tail);
//	}
//};
//int main()
//{
//	List lt;
//
//	lt.AddNext(10);
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//	//ITerator로 만듬
//	for (List::Iterator iter = lt.Begin(); iter != lt.End(); ++iter)
//	{
//		if (*iter == 30)
//		{
//			lt.Remove(iter);
//			break;
//		}
//	}
//	for (List::Iterator iter = lt.Begin(); iter != lt.End(); ++iter) //첨부터 끝까지 보는 iter Iterator를 만들어줌
//	{
//		cout << *iter << endl;
//	}
//	system("pause");
//}

//#include <iostream>//이중연결리스트관련 코드
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//	Node(int data) : data(data), prev(0), next(0) {}
//};
//class  List
//{
//	Node* head;
//	Node* tail;
//public:
//	class Iterator //Iterator는 Node의 정보를 가져야만 한다.
//	{
//		Node* ptr;
//	public:
//		Iterator(Node* p) :ptr(p) {}
//		bool operator !=(Iterator arg)
//		{
//			return ptr != arg.ptr;
//		}
//		Iterator operator++()
//		{
//			ptr = ptr->next;
//			return *this;
//		}
//		int operator*()
//		{
//			return ptr->data;
//		}
//		Node* operator&() //노드의 주소반환 약간 게터 느낌
//		{
//			return ptr;
//		}
//	};
//public:
//	List()
//	{
//		head = new Node(0);
//		tail = new Node(0);
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//
//	void AddNext(int data)
//	{
//		Node* ptail = tail->prev;
//		Node* p = new Node(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = new Node(data);
//		head->next = p;
//		p->prev = head;
//		p->next = nhead;
//		nhead->prev = p;
//	}
//	void Remove(Iterator iter) //노드를 가르키는 놈을 제거하는것.
//	{
//		Node* pp = (&iter)->prev; //iter.ptr 이것이 노드의 주소
//		Node* np = (&iter)->next;
//		pp->next = np;
//		np->prev = pp;
//		delete &iter;
//		
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next); //실제 노드의 정보를 가져야함.
//	}
//	Iterator End()
//	{
//		return Iterator(tail);
//	}
//};
//int main()
//{
//	List lt;
//
//	lt.AddNext(10);
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//	//ITerator로 만듬
//	for (List::Iterator iter = lt.Begin(); iter != lt.End(); ++iter)
//	{
//	if (*iter == 30)
//	{
//	lt.Remove(iter);
//	break;
//	}
//	}
//	for (List::Iterator iter = lt.Begin(); iter != lt.End(); ++iter) //첨부터 끝까지 보는 iter Iterator를 만들어줌
//	{
//		cout << *iter << endl;
//	}
//	system("pause");
//}


//#include <iostream>//이중연결리스트관련 코드
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//	Node(int data) : data(data), prev(0), next(0) {}
//};
//class  List
//{
//	Node* head;
//	Node* tail;
//public:
//	class Iterator //Iterator는 Node의 정보를 가져야만 한다.
//	{
//		Node* ptr;
//	public:
//		Iterator(Node* p) :ptr(p) {}
//		bool operator !=(Iterator arg)
//		{
//			return ptr != arg.ptr;
//		}
//		Iterator operator++()
//		{
//			ptr = ptr->next;
//			return *this;
//		}
//		int operator*()
//		{
//			return ptr ->data;
//		}
//	};
//public:
//	List()
//	{
//		head = new Node(0);
//		tail = new Node(0);
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//
//	void AddNext(int data)
//	{
//		Node* ptail = tail->prev;
//		Node* p = new Node(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = new Node(data);
//		head->next = p;
//		p->prev = head;
//		p->next = nhead;
//		nhead->prev = p;
//	}
//	void Remove(Node* p)
//	{
//		Node* pp = p->prev;
//		Node* np = p->next;
//		pp->next = np;
//		np->prev = pp;
//		delete p;
//		p = np; //이렇게 해야 혹시나 클라이언트에서 break를 빼먹더라도 문제가 되지않음
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next); //실제 노드의 정보를 가져야함.
//	}
//	Iterator End()
//	{
//		return Iterator(tail);
//	}
//};
//int main()
//{
//	List lt;
//
//	lt.AddNext(10);
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//	//ITerator로 만듬
//	/*for (List::Iterator iter = lt.Begin(); iter != lt.End(); ++iter)
//	{
//		if (*iter == 30)
//		{
//			lt.Remove(iter);
//			break;
//		}
//	}*/
//	for (List::Iterator iter = lt.Begin(); iter != lt.End(); ++iter) //첨부터 끝까지 보는 iter Iterator를 만들어줌
//	{
//		cout << *iter << endl;
//	}
//	system("pause");
//}


//#include <iostream>//이중연결리스트관련 코드
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//	Node(int data) : data(data), prev(0), next(0) {}
//};
//class  List
//{
//	Node* head;
//	Node* tail;
//public:
//	List()
//	{
//		head = new Node(0);
//		tail = new Node(0);
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//
//	void AddNext(int data)
//	{
//		Node* ptail = tail->prev;
//		Node* p = new Node(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = new Node(data);
//		head->next = p;
//		p->prev = head;
//		p->next = nhead;
//		nhead->prev = p;
//	}
//	void Remove(Node* p)
//	{
//		Node* pp = p->prev;
//		Node* np = p->next;
//		pp->next = np;
//		np->prev = pp;
//		delete p;
//		p = np; //이렇게 해야 혹시나 클라이언트에서 break를 빼먹더라도 문제가 되지않음
//	}
//	Node* GetHead()
//	{
//		return head->next;
//	}
//	bool HasNext(Node* p)
//	{
//		return p != tail; //아니면 이동가능하다 
//	}
//	void Next(Node*& p) //Node형 포인터나 T&랑 똑같은 거임 그냥 형식앞에쓰고 다음 참조쓴것뿐.
//	{
//		p = p->next;
//	}
//	int GetItem(Node* p)
//	{
//		return p->data;
//	}
//};
//int main()
//{
//	List lt;
//
//	lt.AddNext(10);
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//
//	for (Node* p = lt.GetHead(); lt.HasNext(p);/*다음 원소가 있니*/ lt.Next(p))  //다음으로 이동해줄래
//	{
//		if (lt.GetItem(p) == 30)
//		{
//			lt.Remove(p);
//			break;
//		}
//	}
//	for (Node* p = lt.GetHead(); lt.HasNext(p);/*다음 원소가 있니*/ lt.Next(p))  //다음으로 이동해줄래
//	{
//		cout << lt.GetItem(p) << endl;;
//	}
//	system("pause");
//}

//#include <iostream>//이중연결리스트관련 코드
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//	Node(int data) : data(data), prev(0), next(0) {}
//};
//class  List
//{
//	Node* head;
//	Node* tail;
//public:
//	List()
//	{
//		head = new Node(0);
//		tail = new Node(0);
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//
//	void AddNext(int data)
//	{
//		Node* ptail = tail->prev;
//		Node* p = new Node(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = new Node(data);
//		head->next = p;
//		p->prev = head;
//		p->next = nhead;
//		nhead->prev = p;
//	}
//	Node* GetHead()
//	{
//		return head->next;
//	}
//	bool HasNext(Node* p)
//	{
//		return p != tail; //아니면 이동가능하다 
//	}
//	void Next(Node*& p) //Node형 포인터나 T&랑 똑같은 거임 그냥 형식앞에쓰고 다음 참조쓴것뿐.
//	{
//		p = p->next;
//	}
//	int GetItem(Node* p)
//	{
//		return p ->data;
//	}
//};
//int main()
//{
//	List lt;
//
//	lt.AddNext(10);
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//
//	for (Node* p = lt.GetHead(); lt.HasNext(p);/*다음 원소가 있니*/ lt.Next(p))  //다음으로 이동해줄래
//	{
//		cout << lt.GetItem(p) << endl;
//	}
//
//	system("pause");
//}


//#include <iostream>//이중연결리스트관련 코드
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//	Node(int data) : data(data), prev(0), next(0) {}
//};
//class  List
//{
//	Node* head;
//	Node* tail;
//public:
//	List() 
//	{
//		head = new Node(0);
//		tail = new Node(0);
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//	
//	void AddNext(int data)
//	{
//		Node* ptail = tail->prev;
//		Node* p = new Node(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = new Node(data);
//		head->next = p;
//		p->prev = head;
//		p->next = nhead;
//		nhead->prev = p;
//	}
//};
//int main()
//{
//	List lt;
//
//	lt.AddNext(10); 
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//
//	Node* p=lt.GetHead(); //첫번쨰 헤드 원소를 가리키는 Node형 위치를 줘라
//	lt.Next() = p; //p가 업데이트
//	lt.HasNext(p); //끝인지 판단할수있으면
//	lt.GetItem(p); //p가 가르키고있는 위치에 원소의 데이터를 반환해줌. 
//	system("pause");
//}

//#include <iostream>//이중연결리스트관련 코드
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//	Node(int data) : data(data), prev(0), next(0) {}
//};
//class  List
//{
//	Node* head;
//	Node* tail;
//public:
//	List() //InitList
//	{
//		head = new Node(0);
//		tail = new Node(0);
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//	void PrintNext()
//	{
//		Node* p = head->next;
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev;
//		while (p != head)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//
//	void AddNext(int data)
//	{
//		Node* ptail = tail->prev;
//		Node* p = new Node(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = new Node(data);
//		head->next = p;
//		p->prev = head;
//		p->next = nhead;
//		nhead->prev = p;
//	}
//};
//int main()
//{
//	List lt;
//
//	lt.AddNext(10); //List것이라는것을 알기에 굳이 안붙힘
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//
//	lt.PrintNext();
//	lt.PrintPrev();
//	system("pause");
//}

//#include <iostream>//이중연결리스트관련 코드
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//};
//class  List
//{
//	Node* head;
//	Node* tail;
//	Node* AllocNode(int data) 
//	{
//		Node* p = new Node;
//		p->data = data;
//		p->prev = p->next = NULL;
//		return p;
//	}
//public:
//	List() //InitList
//	{
//		head = AllocNode(0);
//		tail = AllocNode(0);
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//	void PrintNextList()
//	{
//		Node* p = head->next;
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrevList()
//	{
//		Node* p = tail->prev;
//		while (p != head)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	
//	void AddNextList(int data)
//	{
//		Node* ptail = tail->prev;
//		Node* p = AllocNode(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrevList(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = AllocNode(data);
//		head->next = p;
//		p->prev = head;
//		p->next = nhead;
//		nhead->prev = p;
//	}	
//};
//int main()
//{
//	List lt;
//
//	lt.AddNextList(10);
//	lt.AddNextList(20);
//	lt.AddNextList(30);
//	lt.AddNextList(40);
//	lt.AddNextList(50);
//
//	lt.AddPrevList(100);
//
//	lt.PrintNextList();
//	lt.PrintPrevList();
//	system("pause");
//}

//#include <iostream>//이중연결리스트관련 코드
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//};
//class  List
//{
//	Node* head;
//	Node* tail;
//public:
//	void PrintNextList()
//	{
//		Node* p = head->next;
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrevList()
//	{
//		Node* p = tail->prev;
//		while (p != head)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	Node* AllocNode(int data)
//	{
//		Node* p = new Node;
//		p->data = data;
//		p->prev = p->next = NULL;
//		return p;
//	}
//	void AddNextList( int data)
//	{
//		Node* ptail = tail->prev;
//		Node* p = AllocNode(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrevList( int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = AllocNode(data);
//		head->next = p;
//		p->prev = head;
//		p->next = nhead;
//		nhead->prev = p;
//	}
//	void InitList()
//	{
//		head = AllocNode(0);
//		tail = AllocNode(0);
//		head->next = tail;
//		tail->prev = head;
//	}
//	void UninitList()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//};
//int main()
//{
//	List lt;
//
//	lt.InitList();
//	lt.AddNextList(10);
//	lt.AddNextList(20);
//	lt.AddNextList(30);
//	lt.AddNextList(40);
//	lt.AddNextList(50);
//
//	lt.AddPrevList(100);
//
//	lt.PrintNextList();
//	lt.PrintPrevList();
//	lt.UninitList();
//	system("pause");
//}

//#include <iostream>//이중연결리스트관련 코드
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//};
//struct List
//{
//	Node* head;
//	Node* tail;
//};
//void PrintNextList(List& lt)
//{
//	Node* p = lt.head->next;
//	while (p != lt.tail)
//	{
//		cout << p->data << " ";
//		p = p->next;
//	}
//	cout << endl;
//}
//void PrintPrevList(List& lt)
//{
//	Node* p = lt.tail->prev;
//	while (p != lt.head)
//	{
//		cout << p->data << " ";
//		p = p->prev;
//	}
//	cout << endl;
//}
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->prev = p->next = NULL;
//	return p;
//}
//void AddNextList(List& lt, int data)
//{
//	Node* ptail = lt.tail->prev;
//	Node* p = AllocNode(data);
//	ptail->next = p;
//	p->prev = ptail;
//	p->next = lt.tail;
//	lt.tail->prev = p;
//}
//void AddPrevList(List& lt, int data)
//{
//	Node* nhead = lt.head->next;
//
//	Node* p = AllocNode(data);
//	lt.head->next = p;
//	p->prev = lt.head;
//	p->next = nhead;
//	nhead->prev = p;
//}
//void InitList(List& lt)
//{
//	lt.head = AllocNode(0);
//	lt.tail = AllocNode(0);
//	lt.head->next = lt.tail;
//	lt.tail->prev = lt.head;
//}
//void UninitList(List& lt)
//{
//	Node* p = lt.tail;
//	while (p != NULL)
//	{
//		Node* pp = p->prev;
//		delete p;
//		p = pp;
//	}
//	//Node* p = lt.head;
//	//while (p!=NULL)
//	//{
//	//	Node* np = p->next;
//	//	delete p;
//	//	p = np;
//	//}
//}
//int main()
//{//head와 tail를 변경하지않고 메모리추가하는코드
//	List lt;
//
//	InitList(lt);
//	AddNextList(lt, 10);
//	AddNextList(lt, 20);
//	AddNextList(lt, 30);
//	AddNextList(lt, 40);
//	AddNextList(lt, 50);
//
//	AddPrevList(lt, 100);
//
//	PrintNextList(lt);
//	PrintPrevList(lt);
//	UninitList(lt);//출력된후 메모리가 지워지는것이므로 출력되는것이 맞음
//	system("pause");
//}
