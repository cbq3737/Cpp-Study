//#include <iostream> 
//#include <cstdlib> //���󵵉�
//using namespace std;
//struct Node
//{
//	int data;
//	Node* link;
//};
//template <typename T>
//void PrintNode(const T head) //const���� ��const�� �����¾ȉ�
//{
//	for (T p = head; p; p = p->link) 
//	{
//		cout << p->data << endl;
//	}
//}
//int main()
//{
//	Node* head;
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node n4 = { 40,NULL };
//	Node n5 = { 50,NULL };
//
//	n1.link = &n2; //n1�� ��ũ�� n2�ּҸ� ��´�.
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//	head = &n1;
//
//	PrintNode(head);
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//using namespace std;
//struct Node
//{
//	int data;
//	Node* link;
//};
//void PrintNode(const Node* head)//head�� ���尡���� �����ͺ���
//{
//	for (Node* p = (Node*)head; p; p = p->link) //���Ӱ� �������Ͽ� ������ ����
//	{
//		cout << p->data << endl; //�߿��� �ڵ�
//	}
//}
//int main()
//{
//	Node* head;
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node n4 = { 40,NULL };
//	Node n5 = { 50,NULL };
//
//	n1.link = &n2; //n1�� ��ũ�� n2�ּҸ� ��´�.
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//	head = &n1;
//
//	PrintNode(head);
//	system("pause");
//}



//#include <iostream> 
//#include <cstdlib> 
//using namespace std;
//struct Node
//{
//	int data;
//	Node* link;
//};
//void PrintNode(Node* head)
//{
//	for (Node* p = head; p; p = p->link)
//	{
//		cout << p->data << endl;
//	}
//}
//int main()
//{
//	Node* head;
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node n4 = { 40,NULL };
//	Node n5 = { 50,NULL };
//
//	n1.link = &n2; //n1�� ��ũ�� n2�ּҸ� ��´�.
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//	head = &n1;
//
//	PrintNode(head);
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//using namespace std;
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node* head;
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node n4 = { 40,NULL };
//	Node n5 = { 50,NULL };
//
//	n1.link = &n2; //n1�� ��ũ�� n2�ּҸ� ��´�.
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//	head = &n1;
//
//	//for (Node* p = head; p; p = p->link) //�Ʒ��� ������ ���� �ڵ� 
//	//{
//	//	cout << p->data << endl;
//	//}
//	Node* p = head; //p�� ù��° ����� �����ּ�, p=p->link;�������� �̵��ϴ� �ڵ�,�� �����ּҸ� �˷��ִ� �ڵ�
//	cout << p->data << endl; 
//	p = p->link;
//	cout << p->data << endl; 
//	p = p->link;
//	cout << p->data << endl;
//	p = p->link;
//	cout << p->data << endl;
//	p = p->link;
//	cout << p->data << endl;
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib> 
//using namespace std; 
//struct Node 
//{ 
//	int data; 
//	Node* link; 
//};
//int main() 
//{
//	Node* head; //head�� ���� ����� �ּ�
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node n4 = { 40,NULL };
//	Node n5 = { 50,NULL };
//
//	n1.link = &n2; //n1�� ��ũ�� n2�ּҸ� ��´�.
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//	head = &n1;
//
//	cout << head->data << endl; //10 = n1; ���ÿ� �ּҰ� �������
//	cout << head->link->data << endl; //n2�� �ּ�, n2�Ǹ�ũ�� �ƴ� �׳� n2�� �ּ���
//	cout << head->link->link->data << endl;
//	system("pause");
//}



//#include <iostream> //���Ḯ��Ʈ , ���������� ����� ������ ����
//#include <cstdlib> //�����͸� �޸𸮻� ǥ���ϴ� ����� 1. �� 2. ����
//using namespace std; //�����͸� �޸𸮻� ��ġ�ϴ� ����� 1. ���� 2. �񿬼�
//struct Node //C��� ��Ÿ��
//{ //ũ��� 8����Ʈ
//	int data; //����� �����Ͱ� 
//	Node* link; //���� ����� ��ġ�� �����ϰ��ֱ⶧����   
//};
//int main() //�ѹ������θ� ����Ǿ��ִ� ���� : ���Ͽ��Ḯ��Ʈ , ���ҵ��� �����ϴµ� ��������� �����(���μ��� �˰��ִ�): ���߿��Ḯ��Ʈ
//{
//	Node* head;
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node n4 = { 40,NULL };
//	Node n5 = { 50,NULL };
//
//	n1.link = &n2; //n1�� ��ũ�� n2�ּҸ� ��´�.
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//	head = &n1;
//
//	cout << sizeof(Node) << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <queue>
//#include <deque>
//#include <list>
//#include <vector>
//using namespace std;
//template <typename T,typename Cont =deque<T>>
//class Queue
//{
//	Cont _cont;
//public:
//	//stub�ڵ� , �����⸸ ���ܳ����� 
//	void push(const T& data)
//	{
//		_cont.push_back(data);
//	}
//	const T& front()const //T�������� ��ȯ
//	{
//		return _cont.front();
//	}
//	void pop()
//	{
//		_cont.pop_front();
//	}
//};
//int main()
//{
//	//Queue<int,list<int>> q; //����Ʈ�� ����.
//	//Queue<int> q;
//	//Queue<int, vector<int>>q; �ȴ�
//	q.push(10);
//	q.push(20);
//	q.push(30);
//
//	cout << q.front() << endl;
//	q.pop();
//	cout << q.front() << endl;
//	q.pop();
//	cout << q.front() << endl;
//	q.pop();
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib> 
//#include <queue>
//#include <deque>
//using namespace std;
//template <typename T>
//class Queue
//{
//	deque<T> _cont;
//	public:
//	//stub�ڵ� , �����⸸ ���ܳ����� 
//	void push(const T& data)
//	{
//		_cont.push_back(data);
//	}
//	const T& front()const //T�������� ��ȯ
//	{
//		return _cont.front();
//	}
//	void pop()
//	{
//		_cont.pop_front();
//	}
//};
//int main()
//{
//	Queue<int> q;
//	q.push(10);
//	q.push(20);
//	q.push(30);
//
//	cout << q.front() << endl;
//	q.pop();
//	cout << q.front() << endl;
//	q.pop();
//	cout << q.front() << endl;
//	q.pop();
//	system("pause");
//}


//#include <iostream> //����ť 
//#include <cstdlib> 
//#include <queue> 
//using namespace std;
//template <typename T>
//class Queue
//{
//	T* que;
//	int capacity; //�޸��� ����
//	int front, rear;
//	Queue(const Queue&);
//	const Queue& operator=(const Queue&);
//public:
//	Queue(int cap = 1000) :front(0), rear(0)
//	{
//		que = new T[capacity = cap];
//	}
//	~Queue()
//	{
//		delete[] que;
//	}
//	void push(const T& data)
//	{
//		if ((rear + 1) % capacity == front)//�������¸� üũ
//		{
//			return;
//		}
//		que[rear = (rear + 1) % capacity] = data; //���Ƿ� M�� 5�� ���Ѱ�.
//	}
//	const T& pop()
//	{
//		if (front != rear)//����մ� ���� üũ
//		{
//			return que[front = (front + 1) % capacity];
//		}
//		throw "empty queue!"; //�ƴϸ� �ƽ����� �����ش�  return 0xFFFFF;
//	}
//};
//int main()
//{
//	Queue<int> q;
//	q.push(10);
//	q.push(20);
//	q.push(30);
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//	q.push(10);
//	q.push(20);
//	q.push(30);
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//
//	system("pause");
//}


//#include <iostream> //����ť 
//#include <cstdlib> 
//#include <queue> 
//using namespace std;
//class Queue
//{
//	int* que;
//	int capacity; //�޸��� ����
//	int front, rear;
//	Queue(const Queue&);
//	const Queue& operator=(const Queue&);
//public:
//	Queue(int cap =1000) :front(0), rear(0) 
//	{
//		que = new int[capacity=cap];
//	}
//	~Queue()
//	{
//		delete[] que;
//	}
//	void push(int data)
//	{
//		if ((rear + 1) % capacity == front)//�������¸� üũ
//		{
//			return;
//		}
//		que[rear = (rear + 1) % capacity] = data; //���Ƿ� M�� 5�� ���Ѱ�.
//	}
//	int pop()
//	{
//		if (front != rear)//����մ� ���� üũ
//		{
//			return que[front = (front + 1) % capacity];
//		}
//		throw "empty queue!"; //�ƴϸ� �ƽ����� �����ش�  return 0xFFFFF;
//	}
//};
//int main()
//{
//	Queue q;
//	q.push(10);
//	q.push(20);
//	q.push(30);
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//	q.push(10);
//	q.push(20);
//	q.push(30);
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//
//	system("pause");
//}


//#include <iostream> //����ť 
//#include <cstdlib> 
//#include <queue> 
//using namespace std;
//class Queue
//{
//	int que[5];
//	int front, rear;
//public:
//	Queue() :front(0), rear(0) {}
//	void push(int data)
//	{
//		if ((rear + 1) % 5 == front)//�������¸� üũ
//		{
//		return;
//		}
//		que[rear=(rear+1)%5] = data; //���Ƿ� M�� 5�� ���Ѱ�.
//	}
//	int pop() 
//	{
//		if (front != rear)//����մ� ���� üũ
//		{
//			return que[front = (front + 1) % 5];
//		}
//		throw "empty queue!"; //�ƴϸ� �ƽ����� �����ش�  return 0xFFFFF;
//	}
//};
//int main()
//{
//	Queue q;
//	q.push(10);
//	q.push(20);
//	q.push(30);
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//	q.push(10);
//	q.push(20);
//	q.push(30);
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> //�տ��ִ� ���� front ����Ǿ��ִ� ���� �˷��ִ� rear
//#include <queue> // k=(k+1)%M M�� 5 �Ͻ� k�� 0,1,2,3,4�� ��� �ݺ���Ű�� �ڵ��̴�. �̰� if((M-1)==k)){k=0} else ++k;���������̴�. 
//using namespace std;  //rear = (rear+1)%5 �� rear�� ���� 5���ɼ�����. �� ����ťó�� ��ȯ��ų���մ�.
//class Queue
//{//rear�� front�� �������¸� �� ���Ҵ� ����մ°��̴�. ����ť������ �޸𸮰����� M���϶� �������´� M-1���̴�.
//	int que[5];
//	int front, rear;
//public:
//	Queue() :front(0), rear(0) {}
//	void push(int data)
//	{
//		que[rear++] = data;
//	}
//	int pop() //���� ��ȯ
//	{
//		return que[front++];
//	}
//};
//int main() 
//{
//	Queue q;
//	q.push(10);
//	q.push(20);
//	q.push(30);
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//	q.push(10);
//	q.push(20);
//	q.push(30);
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> //�տ��ִ� ���� front ����Ǿ��ִ� ���� �˷��ִ� rear
//#include <queue> 
//using namespace std;
//class Queue
//{
//	int que[10];
//	int front, rear;
//public:
//	Queue() :front(0), rear(0) {}
//	void push(int data)
//	{
//		que[rear++] = data;
//	}
//	int pop() //���� ��ȯ
//	{
//		return que[front++];
//	}
//};
//int main()
//{
//	Queue q;
//	q.push(10);
//	q.push(20);
//	q.push(30);
//
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//	cout << q.pop() << endl;
//	
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> //FIFO 
//#include <queue>  //���� enqueue ������ dequeue
//using namespace std;
//
//int main()
//{
//	queue<int> q;
//	q.push(10);
//	q.push(20);
//	q.push(30);
//
//	cout << q.front()<<endl;
//	q.pop();
//	cout << q.front()<<endl;
//	q.pop();
//	cout << q.front()<<endl;
//	q.pop();
//	
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//#include <string>
//using namespace std;
//template <typename T>
//class Vector
//{
//	T* buf;
//	int size;
//	int capacity;
//	Vector(const Vector&);
//	const Vector& operator=(const Vector& arg);
//public:
//	class Iterator
//	{
//		T* ptr; //T���� �ּ� ,iter
//	public:
//		Iterator(T* p) :ptr(p) {}   //,ptr= begin();
//		bool operator!=(Iterator arg)const 
//		{
//			return ptr != arg.ptr; //begin = end
//		}
//		Iterator operator++()
//		{
//			++ptr;    //++iter
//			return *this;
//		}
//		T operator*()
//		{
//			return *ptr;  //*iter
//		}
//	};
//public:
//	Vector() :buf(0), size(0), capacity(0) //buf�� ������ �ƴ϶� �ּ� 0�̴�.NULL��ſ� 0�� �ִ°��̴�.
//	{}
//	~Vector()
//	{
//		if (buf != NULL)
//		{
//			delete[] buf;
//		}
//	}
//	void push_back(const T& data)
//	{
//
//		if (size == capacity)
//		{
//			if (capacity == 0) //�����µ� 0�� ���� ��ó����,�ƹ��͵� ������
//			{
//				buf = new int[capacity = 1];
//			}
//			else
//			{
//				T* tbuf = new T[capacity *= 2]; //���ο� �޸���ũ�⸦ ���� �޸𸮸� �ι�� �����.
//				for (int i = 0; i < size; ++i)
//				{
//					tbuf[i] = buf[i]; 
//				}
//				delete[] buf; 
//				buf = tbuf; //tbuf�� buf�� �̸��� �ٲ��ذ�.
//
//			}
//		}
//		buf[size++] = data; //�����͸� �־��ش�.
//	}
//	int Size()const
//	{
//		return size;
//	}
//	const T& operator[](int index)const
//	{
//		return buf[index];
//	}
//	T& operator[](int index)
//	{
//		return buf[index];
//	}
//	Iterator begin() //Iterator�� ����ǵ��� ��.
//	{
//		return Iterator(buf); //Iterator��ü�� ����Ű�� �ִ� Vector��ü�� �ּҰ��� �˷��ֱ����� buf�� �Ѱ��ش�.
//	}
//	Iterator end()
//	{
//		return Iterator(buf+size);  //size=0�̸� ù��° �ּ� 1�̸� �ι�° �ּ�
//	}
//};
//
//int main()
//{
//	Vector<int> arr;
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//
//	for (Vector<int>::Iterator iter = arr.begin(); iter != arr.end(); ++iter)
//	{
//		cout << *iter << endl; //iter�� ���Ұ� ����Ű���ִ� ��ȯ���� ���� ������ �ٸ���.
//	}
//
//	system("pause");
//}


//#include <iostream> //���ͷ� �ٲٱ�
//#include <cstdlib>
//#include <string>
//using namespace std;
//template <typename T>
//class Vector
//{
//	T* buf;
//	int size;
//	int capacity;
//	Vector(const Vector&);
//	const Vector& operator=(const Vector& arg);
//public:
//	class Iterator
//	{
//	public: 
//		bool operator!=(Iterator arg)const //�μ��� end�� ������.
//		{
//			return false;
//		}
//		Iterator operator++()
//		{
//			return Iterator();
//		}
//		T operator*()
//		{
//			return T();
//		}
//	};
//public:
//	Vector() :buf(0), size(0), capacity(0) //buf�� ������ �ƴ϶� �ּ� 0�̴�.NULL��ſ� 0�� �ִ°��̴�.
//	{}
//	~Vector()
//	{
//		if (buf != NULL)
//		{
//			delete[] buf;
//		}
//	}
//	void push_back(const T& data)
//	{
//
//		if (size == capacity)
//		{
//			if (capacity == 0)
//			{
//				buf = new int[capacity = 1]; 
//			}
//			else 
//			{
//				T* tbuf = new T[capacity *= 2]; //���� �޸𸮸� �ι�� �����.
//				for (int i = 0; i < size; ++i)
//				{
//					tbuf[i] = buf[i]; //�״�� �ٽ� �������ڴ�.
//				}
//				delete[] buf; //�����޸� ����
//				buf = tbuf; //buf�� tbuf�� �Ȱ�.
//
//			}
//		}
//		buf[size++] = data;
//	}
//	int Size()const
//	{
//		return size;
//	}
//	const T& operator[](int index)const
//	{
//		return buf[index];
//	}
//	T& operator[](int index)
//	{
//		return buf[index];
//	}
//	Iterator begin() //Iterator�� ����ǵ��� ��.
//	{
//		return Iterator();
//	}
//	Iterator end()
//	{
//		return Iterator();
//	}
//};
//
//int main()
//{
//	Vector<int> arr;
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//
//	for (Vector<int>::Iterator iter = arr.begin(); iter != arr.end(); ++iter) //�ƿ� Iterator�� ���Ӱ� �츮�� ���������Ѵ�.
//	{
//		cout << *iter << endl; //iter�� ���Ұ� ����Ű���ִ� ��ȯ���� ���� ������ �ٸ���.
//	}
//
//	system("pause");
//}


//#include <iostream> //���ͷ� �ٲٱ�
//#include <cstdlib>
//using namespace std;
//template <typename T>
//class Vector
//{
//	T* buf;
//	int size;
//	int capacity;
//	Vector(const Vector&);
//	const Vector& operator=(const Vector& arg);
//public:
//	Vector() :buf(0), size(0), capacity(0) //buf�� ������ �ƴ϶� �ּ� 0�̴�.NULL��ſ� 0�� �ִ°��̴�.
//	{}
//	~Vector()
//	{
//		if (buf != NULL)
//		{
//			delete[] buf;
//		}
//	}
//	void push_back(const T& data)
//	{
//		
//		if(size == capacity) //�޸� ������ �뷮�� ������ �������
//		{
//			if (capacity == 0) //�뷮�� ���� �Ѵ� 0�� �� �ƹ��͵� �������
//			{
//				buf = new int[capacity = 1]; //�޸𸮸� �Ѱ� �����ض�
//			}
//			else //�޸𸮸� �ø��°� ���̾ȵǰ� ���ο� �޸𸮸� �������Ѵ�.
//			{
//				T* tbuf = new T[capacity *= 2]; //���� �޸𸮸� �ι�� �����.
//				for (int i = 0; i < size; ++i)
//				{
//					tbuf[i] = buf[i]; //�״�� �ٽ� �������ڴ�.
//				}
//				delete[] buf; //�����޸� ����
//				buf = tbuf; //buf�� tbuf�� �Ȱ�.
//				
//			}
//			buf[size++] = data;
//		}
//	}
//	int Size()const
//	{
//		return size;
//	}
//	const T& operator[](int index)const
//	{
//		return buf[index];
//	}
//};
//
//int main()
//{
//	Vector<int> arr;
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		cout << arr[i] << endl;
//	}
//
//	system("pause");
//}


//#include <iostream> //���ͷ� �ٲٱ�
//#include <cstdlib>
//using namespace std;
//template <typename T>
//class Vector
//{
//	T* buf;
//	int size;
//	int capacity;
//	Vector(const Vector&);  //�׳� ���� �ٸ� ����ڵ��� ���縦 �Ұ����ϵ��� ����� ������ �����ִ°�.
//	const Vector& operator=(const Vector& arg);
//public:
//	Vector() :buf(0), size(0), capacity(0) //buf�� ������ �ƴ϶� �ּ� 0�̴�.NULL��ſ� 0�� �ִ°��̴�.
//	{}
//	~Vector()
//	{
//		if (buf != NULL) //buf�ȿ� ��� �־���� �޸𸮸� ������ �ƹ��͵� ������ ���� �ʿ䰡����.
//		{
//			delete[] buf;
//		}
//	}
//	void push_back(const T& data)
//	{
//		if (size < capacity)  //size�� �޸��� ���� , capacity�� �޸��� ��ü�뷮, �� �̰� �������� �뷮�� ���� ���´ٴ¾�� 
//		{
//			buf[size++] = data; //�׷��� ���Ҹ� �߰��Ҽ�����.
//		}
//		else //size�� capacity�� ���Ơ��ٴ� ��Ȳ
//		{
//			if (capacity == 0)
//			{
//				buf = new int[capacity=1]; //�޸𸮸� �Ѱ� �����ض�
//				buf[size++] = data;
//			}
//			else //�̹� �޸𸮿뷮�� 0�̾ƴϱ⶧���� ���ο� �޸𸮸� �������Ѵ�.
//			{
//				T* tbuf = new T[capacity *= 2]; //���� �޸𸮸� �ι�� �����. ���� ������� 1.5�������ε� �׳� 2��� �Ѱ�. tbuf�� �ӽø޸𸮷� �׳� ������ذ�.
//				for (int i = 0; i < size; ++i)
//				{
//					tbuf[i] = buf[i]; //�״�� �ٽ� �������ڴ�.
//				}
//				delete[] buf; //�����޸� ����
//				buf = tbuf; //buf�� tbuf�� �Ȱ�.
//				buf[size++] = data;
//			}
//		}
//	}
//	int Size()const
//	{
//		return size;
//	}
//	const T& operator[](int index)const
//	{
//		return buf[index];
//	}
//};
//
//int main()
//{
//	Vector<int> arr;
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//	
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		cout << arr[i] << endl;
//	}
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T>
//class Array//�����ϰ� ����� ��� 1. ���� �迭([100]) 2. ���� �迭(*)
//{
//	T* buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap = 100) : size(0)
//	{
//		buf = new T[cap];
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void push_back(const T& data)
//	{
//		buf[size++] = data;
//	}
//	int Size()const
//	{
//		return size;
//	}
//	const T& operator[](int index)const
//	{
//		return buf[index];
//	}
//
//};
//void PrintArray(const Array<int>& arr) //&const�� &�������ϱ� �����Ұ��� �ƴϱ⿡ ����
//{
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		cout << arr[i] << endl; //arr�� const��ü�̹Ƿ� 
//	}
//}
//
//int main()
//{
//	Array<int> arr;
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//	  
//	PrintArray(arr);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T> 
//class Array//�����ϰ� ����� ��� 1. ���� �迭([100]) 2. ���� �迭(*)
//{
//	T* buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap = 100) : size(0)
//	{
//		buf = new T[cap];
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void push_back(const T& data)
//	{
//		buf[size++] = data;
//	}
//	int Size()const
//	{
//		return size;
//	}
//	const T& operator[](int index)const
//	{
//		return buf[index];
//	}
//  T& operator[](int index) //�� �׳� �ٲ���ִٰ� �����ذ�.
//	{
//		return buf[index];
//	}
//};
//
//int main()
//{
//	Array<int> arr(10);
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//
//  arr[1]=200;
//
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		cout << arr[i] << endl;
//	}
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T> 
//class Array//�����ϰ� ����� ��� 1. ���� �迭([100]) 2. ���� �迭(*)
//{
//	T* buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap = 100) : size(0),capacity(cap)
//	{
//		buf = new T[cap];
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void push_back(const T& data)
//	{
//		buf[size++] = data;
//	}
//	int Size()const
//	{
//		return size;
//	}
//	T& operator[](int index)const
//	{
//		return buf[index];
//	}
//};
//
//int main()
//{
//	Array<int> arr(10);
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//
//
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		cout << arr[i] << endl;
//	}
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std; 
//class Array//�����ϰ� ����� ��� 1. ���� �迭([100]) 2. ���� �迭(*)
//{
//	int* buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap = 100): size(0)
//	{
//		buf = new int[cap];
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void push_back(int data)
//	{
//		buf[size++] = data;
//	}
//	int Size()const
//	{
//		return size;
//	}
//	int operator[](int index)const
//	{
//		return buf[index];
//	}
//};
//
//int main()
//{
//	Array arr;
//	arr.push_back(10);
//	arr.push_back(20);
//	arr.push_back(30);
//
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		cout << arr[i] << endl;
//	}
//	system("pause");
//}