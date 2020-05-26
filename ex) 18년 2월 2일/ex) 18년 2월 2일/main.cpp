//#include <iostream> 
//#include <cstdlib> //몰라도됌
//using namespace std;
//struct Node
//{
//	int data;
//	Node* link;
//};
//template <typename T>
//void PrintNode(const T head) //const형을 비const형 참조는안됌
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
//	n1.link = &n2; //n1에 링크에 n2주소를 담는다.
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
//void PrintNode(const Node* head)//head는 리드가능한 포인터변수
//{
//	for (Node* p = (Node*)head; p; p = p->link) //새롭게 쓰기위하여 저렇게 써줌
//	{
//		cout << p->data << endl; //중요한 코드
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
//	n1.link = &n2; //n1에 링크에 n2주소를 담는다.
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
//	n1.link = &n2; //n1에 링크에 n2주소를 담는다.
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
//	n1.link = &n2; //n1에 링크에 n2주소를 담는다.
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//	head = &n1;
//
//	//for (Node* p = head; p; p = p->link) //아래를 간략히 적은 코드 
//	//{
//	//	cout << p->data << endl;
//	//}
//	Node* p = head; //p는 첫번째 노드의 시작주소, p=p->link;다음노드로 이동하는 코드,즉 다음주소를 알려주는 코드
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
//	Node* head; //head는 시작 노드의 주소
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node n4 = { 40,NULL };
//	Node n5 = { 50,NULL };
//
//	n1.link = &n2; //n1에 링크에 n2주소를 담는다.
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//	head = &n1;
//
//	cout << head->data << endl; //10 = n1; 스택에 주소가 만들어짐
//	cout << head->link->data << endl; //n2의 주소, n2의링크가 아님 그냥 n2의 주소임
//	cout << head->link->link->data << endl;
//	system("pause");
//}



//#include <iostream> //연결리스트 , 순차적으로 연결된 노드들의 집합
//#include <cstdlib> //데이터를 메모리상에 표현하는 방법은 1. 값 2. 참조
//using namespace std; //데이터를 메모리상에 배치하는 방법은 1. 연속 2. 비연속
//struct Node //C언어 스타일
//{ //크기는 8바이트
//	int data; //노드의 데이터값 
//	Node* link; //다음 노드의 위치를 포함하고있기때문에   
//};
//int main() //한방향으로만 연결되어있는 형태 : 단일연결리스트 , 원소들을 연결하는데 양방향으로 연결된(서로서로 알고있는): 이중연결리스트
//{
//	Node* head;
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node n4 = { 40,NULL };
//	Node n5 = { 50,NULL };
//
//	n1.link = &n2; //n1에 링크에 n2주소를 담는다.
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
//	//stub코드 , 껍데기만 남겨놓는일 
//	void push(const T& data)
//	{
//		_cont.push_back(data);
//	}
//	const T& front()const //T형참조를 반환
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
//	//Queue<int,list<int>> q; //리스트로 쓴것.
//	//Queue<int> q;
//	//Queue<int, vector<int>>q; 안댐
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
//	//stub코드 , 껍데기만 남겨놓는일 
//	void push(const T& data)
//	{
//		_cont.push_back(data);
//	}
//	const T& front()const //T형참조를 반환
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


//#include <iostream> //원형큐 
//#include <cstdlib> 
//#include <queue> 
//using namespace std;
//template <typename T>
//class Queue
//{
//	T* que;
//	int capacity; //메모리의 개수
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
//		if ((rear + 1) % capacity == front)//꽉찬상태를 체크
//		{
//			return;
//		}
//		que[rear = (rear + 1) % capacity] = data; //임의로 M을 5로 정한것.
//	}
//	const T& pop()
//	{
//		if (front != rear)//비어잇는 상태 체크
//		{
//			return que[front = (front + 1) % capacity];
//		}
//		throw "empty queue!"; //아니면 맥스값을 던져준다  return 0xFFFFF;
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


//#include <iostream> //원형큐 
//#include <cstdlib> 
//#include <queue> 
//using namespace std;
//class Queue
//{
//	int* que;
//	int capacity; //메모리의 개수
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
//		if ((rear + 1) % capacity == front)//꽉찬상태를 체크
//		{
//			return;
//		}
//		que[rear = (rear + 1) % capacity] = data; //임의로 M을 5로 정한것.
//	}
//	int pop()
//	{
//		if (front != rear)//비어잇는 상태 체크
//		{
//			return que[front = (front + 1) % capacity];
//		}
//		throw "empty queue!"; //아니면 맥스값을 던져준다  return 0xFFFFF;
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


//#include <iostream> //원형큐 
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
//		if ((rear + 1) % 5 == front)//꽉찬상태를 체크
//		{
//		return;
//		}
//		que[rear=(rear+1)%5] = data; //임의로 M을 5로 정한것.
//	}
//	int pop() 
//	{
//		if (front != rear)//비어잇는 상태 체크
//		{
//			return que[front = (front + 1) % 5];
//		}
//		throw "empty queue!"; //아니면 맥스값을 던져준다  return 0xFFFFF;
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
//#include <cstdlib> //앞에있는 원소 front 저장되어있는 곳을 알려주는 rear
//#include <queue> // k=(k+1)%M M이 5 일시 k를 0,1,2,3,4를 계속 반복시키는 코드이다. 이건 if((M-1)==k)){k=0} else ++k;랑같은것이다. 
//using namespace std;  //rear = (rear+1)%5 는 rear는 절때 5가될수없다. 즉 원형큐처럼 순환시킬수잇다.
//class Queue
//{//rear와 front가 같은상태면 그 원소는 비어잇는것이다. 원형큐에서는 메모리개수가 M개일때 꽉찬상태는 M-1개이다.
//	int que[5];
//	int front, rear;
//public:
//	Queue() :front(0), rear(0) {}
//	void push(int data)
//	{
//		que[rear++] = data;
//	}
//	int pop() //원소 반환
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
//#include <cstdlib> //앞에있는 원소 front 저장되어있는 곳을 알려주는 rear
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
//	int pop() //원소 반환
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
//#include <queue>  //저장 enqueue 빼오기 dequeue
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
//		T* ptr; //T형의 주소 ,iter
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
//	Vector() :buf(0), size(0), capacity(0) //buf는 정수가 아니라 주소 0이다.NULL대신에 0을 넣는것이다.
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
//			if (capacity == 0) //꽉찻는데 0일 경우는 맨처음값,아무것도 없을때
//			{
//				buf = new int[capacity = 1];
//			}
//			else
//			{
//				T* tbuf = new T[capacity *= 2]; //새로운 메모리의크기를 전의 메모리를 두배로 만든다.
//				for (int i = 0; i < size; ++i)
//				{
//					tbuf[i] = buf[i]; 
//				}
//				delete[] buf; 
//				buf = tbuf; //tbuf를 buf로 이름을 바꿔준것.
//
//			}
//		}
//		buf[size++] = data; //데이터를 넣어준다.
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
//	Iterator begin() //Iterator는 복사되도록 함.
//	{
//		return Iterator(buf); //Iterator객체가 가르키고 있는 Vector객체의 주소값을 알려주기위해 buf를 넘겨준다.
//	}
//	Iterator end()
//	{
//		return Iterator(buf+size);  //size=0이면 첫번째 주소 1이면 두번째 주소
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
//		cout << *iter << endl; //iter는 원소가 가르키고있는 반환형에 따라 형식이 다르다.
//	}
//
//	system("pause");
//}


//#include <iostream> //벡터로 바꾸기
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
//		bool operator!=(Iterator arg)const //인수로 end를 받은것.
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
//	Vector() :buf(0), size(0), capacity(0) //buf는 정수가 아니라 주소 0이다.NULL대신에 0을 넣는것이다.
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
//				T* tbuf = new T[capacity *= 2]; //전의 메모리를 두배로 만든다.
//				for (int i = 0; i < size; ++i)
//				{
//					tbuf[i] = buf[i]; //그대로 다시 가져오겠다.
//				}
//				delete[] buf; //기존메모리 제거
//				buf = tbuf; //buf가 tbuf가 된것.
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
//	Iterator begin() //Iterator는 복사되도록 함.
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
//	for (Vector<int>::Iterator iter = arr.begin(); iter != arr.end(); ++iter) //아예 Iterator도 새롭게 우리가 만들어줘야한다.
//	{
//		cout << *iter << endl; //iter는 원소가 가르키고있는 반환형에 따라 형식이 다르다.
//	}
//
//	system("pause");
//}


//#include <iostream> //벡터로 바꾸기
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
//	Vector() :buf(0), size(0), capacity(0) //buf는 정수가 아니라 주소 0이다.NULL대신에 0을 넣는것이다.
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
//		if(size == capacity) //메모리 갯수와 용량이 같을때 꽉찰경우
//		{
//			if (capacity == 0) //용량과 개수 둘다 0임 즉 아무것도 없을경우
//			{
//				buf = new int[capacity = 1]; //메모리를 한개 생성해라
//			}
//			else //메모리를 늘리는건 말이안되고 새로운 메모리를 만들어야한다.
//			{
//				T* tbuf = new T[capacity *= 2]; //전의 메모리를 두배로 만든다.
//				for (int i = 0; i < size; ++i)
//				{
//					tbuf[i] = buf[i]; //그대로 다시 가져오겠다.
//				}
//				delete[] buf; //기존메모리 제거
//				buf = tbuf; //buf가 tbuf가 된것.
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


//#include <iostream> //벡터로 바꾸기
//#include <cstdlib>
//using namespace std;
//template <typename T>
//class Vector
//{
//	T* buf;
//	int size;
//	int capacity;
//	Vector(const Vector&);  //그냥 단지 다른 사용자들이 복사를 불가능하도록 만들게 사전에 막아주는것.
//	const Vector& operator=(const Vector& arg);
//public:
//	Vector() :buf(0), size(0), capacity(0) //buf는 정수가 아니라 주소 0이다.NULL대신에 0을 넣는것이다.
//	{}
//	~Vector()
//	{
//		if (buf != NULL) //buf안에 어떤게 있어야지 메모리를 지우지 아무것도 없으면 지울 필요가없다.
//		{
//			delete[] buf;
//		}
//	}
//	void push_back(const T& data)
//	{
//		if (size < capacity)  //size는 메모리의 개수 , capacity는 메모리의 전체용량, 즉 이건 개수보다 용량이 많이 남는다는얘기 
//		{
//			buf[size++] = data; //그러면 원소를 추가할수있음.
//		}
//		else //size와 capacity가 같아졋다는 상황
//		{
//			if (capacity == 0)
//			{
//				buf = new int[capacity=1]; //메모리를 한개 생성해라
//				buf[size++] = data;
//			}
//			else //이미 메모리용량이 0이아니기때문에 새로운 메모리를 만들어야한다.
//			{
//				T* tbuf = new T[capacity *= 2]; //전의 메모리를 두배로 만든다. 전에 배웠을땐 1.5배증가인데 그냥 2배로 한것. tbuf는 임시메모리로 그냥 만들어준것.
//				for (int i = 0; i < size; ++i)
//				{
//					tbuf[i] = buf[i]; //그대로 다시 가져오겠다.
//				}
//				delete[] buf; //기존메모리 제거
//				buf = tbuf; //buf가 tbuf가 된것.
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
//class Array//연속하게 만드는 방법 1. 정적 배열([100]) 2. 동적 배열(*)
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
//void PrintArray(const Array<int>& arr) //&const는 &붙혓으니까 수정할것이 아니기에 붙힘
//{
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		cout << arr[i] << endl; //arr은 const객체이므로 
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
//class Array//연속하게 만드는 방법 1. 정적 배열([100]) 2. 동적 배열(*)
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
//  T& operator[](int index) //얜 그냥 바뀔수있다고 보여준것.
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
//class Array//연속하게 만드는 방법 1. 정적 배열([100]) 2. 동적 배열(*)
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
//class Array//연속하게 만드는 방법 1. 정적 배열([100]) 2. 동적 배열(*)
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