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
	Sleep(300); //sleep�� 1000/1�ʷ� �ϹǷ� 0.3��
}
void _Fill(int image[][10], int i, int j, int newColor, int oldColor)
{
	if (0 > i || i >= 10 || 0 > j || j >= 10)  //��������
	{
		return;
	}
	if (image[i][j] != oldColor)
	{
		return;
	}
	image[i][j] = newColor;//������ġ�� ����
	PrintImage();

	_Fill(image, i - 1, j, newColor, oldColor); //��
	_Fill(image, i, j + 1, newColor, oldColor); //������
	_Fill(image, i + 1, j, newColor, oldColor); //�Ʒ�
	_Fill(image, i, j - 1, newColor, oldColor); //����
}
void Fill(int image[][10], int i, int j, int newColor)
{//�̹�������,��ĥ�ؾ�����ġ(i , j), ��ĥ�Ұ�
	if (image[i][j] == newColor)
		return;
	_Fill(image, i, j, newColor, image[i][j]);//����Լ��� ���۽�Ű������ �Լ�
}
int main()
{
	int i, j;

	PrintImage();
	cout << "��ǥ(x,y) �Է�: ";
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
//	Sleep(300); //sleep�� 1000/1�ʷ� �ϹǷ� 0.3��
//}
//void _Fill(int image[][10], int i, int j, int newColor, int oldColor)
//{
//	if (0 > i||i >= 10 || 0 > j || j >= 10)  //��������
//	{
//		return;
//	}
//	if (image[i][j] != oldColor)
//	{
//		return;
//	}
//	image[i][j] = newColor;//������ġ�� ����
//	PrintImage();
//
//	_Fill(image, i - 1, j, newColor, oldColor); //��
//	_Fill(image, i, j+1, newColor, oldColor); //������
//	_Fill(image, i+1, j, newColor, oldColor); //�Ʒ�
//	_Fill(image, i, j-1, newColor, oldColor); //����
//}
//void Fill(int image[][10], int i, int j, int newColor)
//{//�̹�������,��ĥ�ؾ�����ġ(i , j), ��ĥ�Ұ�
//	if (image[i][j] == newColor)
//		return;
//	_Fill(image, i, j, newColor, image[i][j]);//����Լ��� ���۽�Ű������ �Լ�
//}
//int main()
//{
//	Fill(image, 1, 2, 8);
//	system("pause");
//}

//#include <iostream> //����Լ��� ���� �׸��� ���� �����ϴ°�
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
//	Sleep(300); //0.3������
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


//#include <iostream> //����Լ��� ���� : �Ǻ���ġ����
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


//#include <iostream> //����Լ��� ���� : ���丮��  5! = 5x4x3x2x1
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


//#include <iostream> //����Լ��� ���� : ���丮��  5! = 5x4x3x2x1
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


//#include <iostream> //����Լ��� ���� : ���丮��  5! = 5x4x3x2x1
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


//#include <iostream>//����Լ� : �Լ��ȿ� �ڱ� �Լ��� ȣ���ϴ°�.
//#include <cstdlib>
//using namespace std;
//void Print(int n) //�ѹ������� ��ȣ���ϰ� �� �ٽ� �����ϴ°��� ������Ͷ�� �Ѵ�.
//{
//	for (int i = 0; i < 3 - n; ++i)
//	{
//		cout << " ";
//	}
//	cout << "+" << n << endl;  //����Լ����� �������� ���� �������� ����Լ��Ʒ��մ°��� ����
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

//#include <iostream>//����Լ� : �Լ��ȿ� �ڱ� �Լ��� ȣ���ϴ°�.
//#include <cstdlib>
//using namespace std;
//void Print(int n) //�ѹ������� ��ȣ���ϰ� �� �ٽ� �����ϴ°��� ������Ͷ�� �Ѵ�.
//{
//	for (int i = 0; i < 3 - n; ++i)
//	{
//		cout << " ";
//	}
//	cout << "+" << n << endl;  //����Լ����� �������� ���� �������� ����Լ��Ʒ��մ°��� ����
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

//#include <iostream>//����Լ� : �Լ��ȿ� �ڱ� �Լ��� ȣ���ϴ°�.
//#include <cstdlib>
//using namespace std;
//void Print(int n) //�ѹ������� ��ȣ���ϰ� �� �ٽ� �����ϴ°��� ������Ͷ�� �Ѵ�.
//{
//	for (int i = 0; i < 3 - n; ++i)
//	{
//		cout << " ";
//	}
//	cout << "+" << n << endl;  //����Լ����� �������� ���� �������� ����Լ��Ʒ��մ°��� ����
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

//#include <iostream>//����Լ� : �Լ��ȿ� �ڱ� �Լ��� ȣ���ϴ°�.
//#include <cstdlib>
//using namespace std; 
//void Print(int n) //�ѹ������� ��ȣ���ϰ� �� �ٽ� �����ϴ°��� ������Ͷ�� �Ѵ�.
//{
//	cout << "+" << n << endl;  //����Լ����� �������� ���� �������� ����Լ��Ʒ��մ°��� ����
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


//#include <iostream>//����Լ� : �Լ��ȿ� �ڱ� �Լ��� ȣ���ϴ°�.
//#include <cstdlib>
//using namespace std;
//void Print(int n)
//{
//	cout <<"+"<< n << endl;  //����Լ����� �������� ���� �������� ����Լ��Ʒ��մ°��� ����
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



//#include <iostream>//����Լ� : �Լ��ȿ� �ڱ� �Լ��� ȣ���ϴ°�.
//#include <cstdlib>
//using namespace std;
//void Print(int n)
//{
//	cout << n << endl;
//	if (n > 0) // ����Լ� �������� 
//	{
//		Print(n - 1); //����Լ�
//	}
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}
////������ ����Լ��� �ɷ��� �ΰ��� ���� �ʿ� 1, ����Լ� ��������(����Լ��� ȣ������ �ʴ� ����) 2.�� ���������� ���� �����ؾ��Ѵ�.�����ؾ��� �߻��ϸ� �ȵȴ�.


//#include <iostream>//����Լ� : �Լ��ȿ� �ڱ� �Լ��� ȣ���ϴ°�.
//#include <cstdlib>
//using namespace std;
//void Print(int n)
//{
//	cout << n << endl;
//	Print(n); //����Լ�
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}


//#include <iostream>//����Լ� : �Լ��ȿ� �ڱ� �Լ��� ȣ���ϴ°�.
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


//#include <iostream>//���߿��Ḯ��Ʈ���� �ڵ�
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
//	class Iterator //Iterator�� Node�� ������ �����߸� �Ѵ�.
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
//		Node* operator&() //����� �ּҹ�ȯ �ణ ���� ����
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
//	void Remove(Iterator iter) //��带 ����Ű�� ���� �����ϴ°�.
//	{
//		Node* pp = (&iter)->prev; //iter.ptr �̰��� ����� �ּ�
//		Node* np = (&iter)->next;
//		pp->next = np;
//		np->prev = pp;
//		delete &iter;
//
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next); //���� ����� ������ ��������.
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
//	//ITerator�� ����
//	for (List<int>::Iterator iter = lt.Begin(); iter != lt.End(); ++iter)
//	{
//		if (*iter == 30)
//		{
//			lt.Remove(iter);
//			break;
//		}
//	}
//	for (List<int>::Iterator iter = lt.Begin(); iter != lt.End(); ++iter) //÷���� ������ ���� iter Iterator�� �������
//	{
//		cout << *iter << endl;
//	}
//	system("pause");
//}


//#include <iostream>//���߿��Ḯ��Ʈ���� �ڵ�
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
//	class Iterator //Iterator�� Node�� ������ �����߸� �Ѵ�.
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
//		Node* operator&() //����� �ּҹ�ȯ �ణ ���� ����
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
//	void Remove(Iterator iter) //��带 ����Ű�� ���� �����ϴ°�.
//	{
//		Node* pp = (&iter)->prev; //iter.ptr �̰��� ����� �ּ�
//		Node* np = (&iter)->next;
//		pp->next = np;
//		np->prev = pp;
//		delete &iter;
//
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next); //���� ����� ������ ��������.
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
//	//ITerator�� ����
//	for (List::Iterator iter = lt.Begin(); iter != lt.End(); ++iter)
//	{
//		if (*iter == 30)
//		{
//			lt.Remove(iter);
//			break;
//		}
//	}
//	for (List::Iterator iter = lt.Begin(); iter != lt.End(); ++iter) //÷���� ������ ���� iter Iterator�� �������
//	{
//		cout << *iter << endl;
//	}
//	system("pause");
//}

//#include <iostream>//���߿��Ḯ��Ʈ���� �ڵ�
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
//	class Iterator //Iterator�� Node�� ������ �����߸� �Ѵ�.
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
//		Node* operator&() //����� �ּҹ�ȯ �ణ ���� ����
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
//	void Remove(Iterator iter) //��带 ����Ű�� ���� �����ϴ°�.
//	{
//		Node* pp = (&iter)->prev; //iter.ptr �̰��� ����� �ּ�
//		Node* np = (&iter)->next;
//		pp->next = np;
//		np->prev = pp;
//		delete &iter;
//		
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next); //���� ����� ������ ��������.
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
//	//ITerator�� ����
//	for (List::Iterator iter = lt.Begin(); iter != lt.End(); ++iter)
//	{
//	if (*iter == 30)
//	{
//	lt.Remove(iter);
//	break;
//	}
//	}
//	for (List::Iterator iter = lt.Begin(); iter != lt.End(); ++iter) //÷���� ������ ���� iter Iterator�� �������
//	{
//		cout << *iter << endl;
//	}
//	system("pause");
//}


//#include <iostream>//���߿��Ḯ��Ʈ���� �ڵ�
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
//	class Iterator //Iterator�� Node�� ������ �����߸� �Ѵ�.
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
//		p = np; //�̷��� �ؾ� Ȥ�ó� Ŭ���̾�Ʈ���� break�� ���Դ��� ������ ��������
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next); //���� ����� ������ ��������.
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
//	//ITerator�� ����
//	/*for (List::Iterator iter = lt.Begin(); iter != lt.End(); ++iter)
//	{
//		if (*iter == 30)
//		{
//			lt.Remove(iter);
//			break;
//		}
//	}*/
//	for (List::Iterator iter = lt.Begin(); iter != lt.End(); ++iter) //÷���� ������ ���� iter Iterator�� �������
//	{
//		cout << *iter << endl;
//	}
//	system("pause");
//}


//#include <iostream>//���߿��Ḯ��Ʈ���� �ڵ�
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
//		p = np; //�̷��� �ؾ� Ȥ�ó� Ŭ���̾�Ʈ���� break�� ���Դ��� ������ ��������
//	}
//	Node* GetHead()
//	{
//		return head->next;
//	}
//	bool HasNext(Node* p)
//	{
//		return p != tail; //�ƴϸ� �̵������ϴ� 
//	}
//	void Next(Node*& p) //Node�� �����ͳ� T&�� �Ȱ��� ���� �׳� ���ľտ����� ���� �������ͻ�.
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
//	for (Node* p = lt.GetHead(); lt.HasNext(p);/*���� ���Ұ� �ִ�*/ lt.Next(p))  //�������� �̵����ٷ�
//	{
//		if (lt.GetItem(p) == 30)
//		{
//			lt.Remove(p);
//			break;
//		}
//	}
//	for (Node* p = lt.GetHead(); lt.HasNext(p);/*���� ���Ұ� �ִ�*/ lt.Next(p))  //�������� �̵����ٷ�
//	{
//		cout << lt.GetItem(p) << endl;;
//	}
//	system("pause");
//}

//#include <iostream>//���߿��Ḯ��Ʈ���� �ڵ�
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
//		return p != tail; //�ƴϸ� �̵������ϴ� 
//	}
//	void Next(Node*& p) //Node�� �����ͳ� T&�� �Ȱ��� ���� �׳� ���ľտ����� ���� �������ͻ�.
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
//	for (Node* p = lt.GetHead(); lt.HasNext(p);/*���� ���Ұ� �ִ�*/ lt.Next(p))  //�������� �̵����ٷ�
//	{
//		cout << lt.GetItem(p) << endl;
//	}
//
//	system("pause");
//}


//#include <iostream>//���߿��Ḯ��Ʈ���� �ڵ�
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
//	Node* p=lt.GetHead(); //ù���� ��� ���Ҹ� ����Ű�� Node�� ��ġ�� ���
//	lt.Next() = p; //p�� ������Ʈ
//	lt.HasNext(p); //������ �Ǵ��Ҽ�������
//	lt.GetItem(p); //p�� ����Ű���ִ� ��ġ�� ������ �����͸� ��ȯ����. 
//	system("pause");
//}

//#include <iostream>//���߿��Ḯ��Ʈ���� �ڵ�
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
//	lt.AddNext(10); //List���̶�°��� �˱⿡ ���� �Ⱥ���
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

//#include <iostream>//���߿��Ḯ��Ʈ���� �ڵ�
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

//#include <iostream>//���߿��Ḯ��Ʈ���� �ڵ�
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

//#include <iostream>//���߿��Ḯ��Ʈ���� �ڵ�
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
//{//head�� tail�� ���������ʰ� �޸��߰��ϴ��ڵ�
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
//	UninitList(lt);//��µ��� �޸𸮰� �������°��̹Ƿ� ��µǴ°��� ����
//	system("pause");
//}
