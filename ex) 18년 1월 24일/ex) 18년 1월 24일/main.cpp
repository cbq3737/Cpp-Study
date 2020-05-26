//#include <iostream> 
//#include <cstdlib>
//#include <string>
//using namespace std;
//template <typename T>
//class Array
//{
//	T* buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap = 100)
//	{
//		capacity = cap;
//		buf = new T[cap];
//		size = 0;
//	}
//	Array(const Array& arg)
//	{
//		size = arg.size;
//		capacity = arg.capacity;
//		buf = new T[capacity];
//		for (int = 0; i < size; ++i)
//		{
//			buf[i] = arg.buf[i];
//		}
//	}
//	const Array& operator=(const Array& arg)
//	{
//		delete[] buf;
//		size = arg.size;
//		capacity = arg.capacity;
//		buf = new T[capacity];
//		for (int = 0; i < size; ++i)
//		{
//			buf[i] = arg.buf[i];
//		}
//		return *this;
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(const T& n)
//	{
//		buf[size++] = n;
//	}
//	int Size()const
//	{
//		return size;
//	}
//	const T& operator[](int index)const
//	{
//		return buf[index];
//	}
//	void Remove(int index)
//	{
//		for (int i = index; i < size - 1; ++i)
//		{
//			buf[i] = buf[i + 1];
//		}
//		--size;
//	}
//};
//class Person
//{
//protected:
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") :name(n), phone(p) {}
//	virtual ~Person(){} //�θ�� �ݵ�� ������ �Ѵ�.
//	virtual void Print()const = 0; //��ü�� ���� �ʿ䰡 ����.
//	const string& GetName()const
//	{
//		return name;
//	}
//	const string& GetPhone()const
//	{
//		return phone;
//	}
//};
//ostream& operator<<(ostream& out, const Person& per)
//{
//	per.Print();
//	return out;
//}
//class Professor : public Person
//{
//	string Position;
//public :
//	Professor(const string& n = "", const string& p = "", const string& pos = "") : Person(n, p), Position(pos) {}
//
//	void Print()const
//	{
//		cout << "name: " << name << "," << "phone: " << phone << "," << "Position:" << Position << endl;
//	}
//	const string& GetPosition()const
//	{
//		return Position;
//	}
//};
//class Student : public Person
//{
//	int grade;
//public : 
//	Student(const string& n="",const string& p="",int g=0):Person(n,p),grade(g){}
//	void Print()const
//	{
//		cout << "name: " << name << "," << "phone: " << phone << "," << "grade:" << grade << endl;
//	}
//	int GetGrade()const 
//	{
//		return grade;
//	}
//};
//class TelPhoneBook
//{
//	Array<Person*> perarr;//Person�� �ּ� ����
//public:
//	~TelPhoneBook()
//	{
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//			delete perarr[i];
//		}
//	}
//	void Add()
//	{
//		cout << "[1]���� ���� �Է�, [2] �л� ���� �Է�";
//		string choose;
//		cin >> choose;
//		cout << "�̸��Է�:";
//		string name;
//		cin >> name;
//		cout << "��ȭ�Է�:";
//		string phone;
//		cin >> phone;
//
//		switch (choose[0])
//		{
//		case '1':
//		{
//			string Position;
//			cout << "���� �Է�: ";
//			cin >> Position;
//			perarr.Add(new Professor(name, phone, Position));
//		}
//		case '2':
//		{
//			int grade;
//			cout << "�г� �Է�: ";
//			cin >> grade;
//			perarr.Add(new Student(name, phone, grade));
//		}
//		default:
//			break;
//	}
//}
//	void Print()const
//	{
//		for (int i = 0; i<perarr.Size(); ++i)
//		{
//			cout << *perarr[i] << endl;
//		}
//	}
//	void Search()const
//	{
//		string name;
//		cout << "�˻� �̸� �Է�:";
//		cin >> name;
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//			if ((*perarr[i]).GetName() == name) // perarr�� �ּҰ� GetName�� ����Ǿ��մ°��� ����. 
//			{
//				cout << "[" << i << "]" << endl;
//				cout << *perarr[i] << endl;
//			}
//		}
//	}
//	void Remove()
//	{
//		string name;
//		cout << "���� �̸� �Է� :";
//		cin >> name;
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//			if ((*perarr[i]).GetName() == name)
//			{
//				delete perarr[i]; //����Ű���մ� �����޸𸮸� ����, �̰� ������ �޸𸮰� �����հ� �ǹ���.
//				perarr.Remove(i); //���Ҹ� ����
//				break;
//			}
//		}
//	}
//};
//void main()
//{
//	TelPhoneBook tp;
//	tp.Add();
//	tp.Add();
//	tp.Add();
//	tp.Print();
//	tp.Search();
//	tp.Remove();
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//#include <string>
//using namespace std;
//template <typename T>
//class Array
//{
//	T* buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap = 100)
//	{
//		capacity = cap;
//		buf = new T[cap];
//		size = 0;
//	}
//	Array(const Array& arg)
//	{
//		size = arg.size;
//		capacity = arg.capacity;
//		buf = new T[capacity];
//		for (int = 0; i < size; ++i)
//		{
//			buf[i] = arg.buf[i];
//		}
//	}
//	const Array& operator=(const Array& arg)
//	{
//		delete[] buf;
//		size = arg.size;
//		capacity = arg.capacity;
//		buf = new T[capacity];
//		for (int = 0; i < size; ++i)
//		{
//			buf[i] = arg.buf[i];
//		}
//		return *this;
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(const T& n)
//	{
//		buf[size++] = n;
//	}
//	int Size()const
//	{
//		return size;
//	}
//	const T& operator[](int index)const
//	{
//		return buf[index];
//	}
//	void Remove(int index)
//	{
//		for (int i = index; i < size - 1; ++i)
//		{
//			buf[i] = buf[i + 1];
//		}
//		--size;
//	}
//};
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") :name(n), phone(p) {}
//	void Print()const
//	{
//		cout << "name: " << name << "," << "phone: " << phone << endl;
//	}
//	const string& GetName()const
//	{
//		return name;
//	}
//	const string& GetPhone()const
//	{
//		return phone;
//	}
//};
//ostream& operator<<(ostream& out, const Person& per)
//{
//	out << "name:" << per.GetName() << "," << "Phone: " << per.GetPhone();
//	return out;
//}
//class TelPhoneBook
//{
//	Array<Person*> perarr;//Person�� �ּ� ����
//public:
//	~TelPhoneBook()
//	{
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//			delete perarr[i];
//		}
//	}
//	void Add()
//	{
//		cout << "�̸��Է�:";
//		string name;
//		cin >> name;
//		cout << "��ȭ�Է�:";
//		string phone;
//		cin >> phone;
//		perarr.Add(new Person(name, phone));
//	}
//	void Print()const
//	{
//		for (int i = 0; i<perarr.Size(); ++i)
//		{
//			cout << *perarr[i] << endl;
//		}
//	}
//	void Search()const
//	{
//		string name;
//		cout << "�˻� �̸� �Է�:";
//		cin >> name;
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//			if ((*perarr[i]).GetName() == name) // perarr�� �ּҰ� GetName�� ����Ǿ��մ°��� ����. 
//			{
//				cout << "[" << i << "]" << endl;
//				cout << *perarr[i] << endl;
//			}
//		}
//	}
//	void Remove()
//	{
//		string name;
//		cout << "���� �̸� �Է� :";
//		cin >> name;
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//
//			delete perarr[i]; //����Ű���մ� �����޸𸮸� ����, �̰� ������ �޸𸮰� �����հ� �ǹ���.
//			perarr.Remove(i); //���Ҹ� ����
//			break;
//
//		}
//	}
//};
//void main()
//{
//	TelPhoneBook tp;
//	tp.Add();
//	tp.Add();
//	tp.Add();
//	tp.Print();
//	tp.Search();
//	tp.Remove();
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//#include <string>
//using namespace std;
//template <typename T>
//class Array
//{
//	T* buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap = 100)
//	{
//		capacity = cap;
//		buf = new T[cap];
//		size = 0;
//	}
//	Array(const Array& arg)
//	{
//		size = arg.size;
//		capacity = arg.capacity;
//		buf = new T[capacity];
//		for (int = 0; i < size; ++i)
//		{
//			buf[i] = arg.buf[i];
//		}
//	}
//	const Array& operator=(const Array& arg)
//	{
//		delete[] buf;
//		size = arg.size;
//		capacity = arg.capacity;
//		buf = new T[capacity];
//		for (int = 0; i < size; ++i)
//		{
//			buf[i] = arg.buf[i];
//		}
//		return *this;
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(const T& n)
//	{
//		buf[size++] = n;
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
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") :name(n), phone(p) {}
//	void Print()const
//	{
//		cout << "name: " << name << "," << "phone: " << phone << endl;
//	}
//	const string& GetName()const
//	{
//		return name;
//	}
//	const string& GetPhone()const
//	{
//		return phone;
//	}
//};
//ostream& operator<<(ostream& out, const Person& per)
//{
//	out << "name:" << per.GetName() << "," << "Phone: " << per.GetPhone();
//	return out;
//}
//class TelPhoneBook
//{
//	Array<Person*> perarr;//Person�� �ּ� ����
//public:
//	~TelPhoneBook()
//	{
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//			delete perarr[i];
//		}
//	}
//	void Add()
//	{
//		cout << "�̸��Է�:";
//		string name;
//		cin >> name;
//		cout << "��ȭ�Է�:";
//		string phone;
//		cin >> phone;
//		perarr.Add(new Person(name, phone));
//	}
//	void Print()const
//	{
//		for (int i = 0; i<perarr.Size(); ++i)
//		{
//			cout << *perarr[i] << endl;
//		}
//	}
//	void Search()const
//	{
//		string name;
//		cout << "�˻� �̸� �Է�:";
//		cin >> name;
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//			if ((*perarr[i]).GetName() == name) // perarr�� �ּҰ� GetName�� ����Ǿ��մ°��� ����. 
//			{
//				cout << "[" << i << "]" << endl;
//				cout << *perarr[i] << endl;
//			}
//		}
//	}
//	void Remove()
//	{
//	}
//};
//void main()
//{
//	TelPhoneBook tp;
//	tp.Add();
//	tp.Add();
//	tp.Add();
//	tp.Print();
//	tp.Search();
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//#include <string>
//using namespace std;
//template <typename T>
//class Array
//{
//	T* buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap = 100)
//	{
//		capacity = cap;
//		buf = new T[cap];
//		size = 0;
//	}
//	Array(const Array& arg)
//	{
//		size = arg.size;
//		capacity = arg.capacity;
//		buf = new T[capacity];
//		for (int = 0; i < size; ++i)
//		{
//			buf[i] = arg.buf[i];
//		}
//	}
//	const Array& operator=(const Array& arg)
//	{
//		delete[] buf;
//		size = arg.size;
//		capacity = arg.capacity;
//		buf = new T[capacity];
//		for (int = 0; i < size; ++i)
//		{
//			buf[i] = arg.buf[i];
//		}
//		return *this;
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(const T& n)
//	{
//		buf[size++] = n;
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
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") :name(n), phone(p) {}
//	void Print()const
//	{
//		cout << "name: " << name << "," << "phone: " << phone << endl;
//	}
//	const string& GetName()const
//	{
//		return name;
//	}
//	const string& GetPhone()const
//	{
//		return phone;
//	}
//};
//ostream& operator<<(ostream& out, const Person& per)
//{
//	out << "name:" << per.GetName() << "," << "Phone: " << per.GetPhone();
//	return out;
//}
//class TelPhoneBook
//{
//	Array<Person*> perarr;//Person�� �ּ� ����
//public:
//	~TelPhoneBook()
//	{
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//			delete perarr[i];
//		}
//	}
//	void Add()
//	{
//		cout << "�̸��Է�:";
//		string name;
//		cin >> name;
//		cout << "��ȭ�Է�:";
//		string phone;
//		cin >> phone;
//		perarr.Add(new Person(name, phone));
//	}
//	void Print()const
//	{
//		for (int i = 0;i<perarr.Size(); ++i)
//		{
//			cout << *perarr[i] << endl;
//		}
//	}
//	void Search()const
//	{
//	}
//	void Remove()
//	{
//	}
//};
//void main()
//{
//	TelPhoneBook tp;
//	tp.Add();
//	tp.Print();
//	system("pause");
//}



//#include <iostream> 
//#include <cstdlib>
//#include <string>
//using namespace std;
//template <typename T>
//class Array
//{
//	T* buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap = 100)
//	{
//		capacity = cap;
//		buf = new T[cap];
//		size = 0;
//	}
//	Array(const Array& arg)
//	{
//		size = arg.size;
//		capacity = arg.capacity;
//		buf = new T[capacity];
//		for (int = 0; i < size; ++i)
//		{
//			buf[i] = arg.buf[i];
//		}
//	}
//	const Array& operator=(const Array& arg)  //��������ڿ� ������Կ����ڴ� �׳� ���� �ѹ��� ���� ����������
//	{
//		delete[] buf;
//		size = arg.size;
//		capacity = arg.capacity;
//		buf = new T[capacity];
//		for (int = 0; i < size; ++i)
//		{
//			buf[i] = arg.buf[i];
//		}
//		return *this;
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(const T& n)
//	{
//		buf[size++] = n;
//	}
//	int Size()
//	{
//		return size;
//	}
//	const T& operator[](int index)
//	{
//		return buf[index];
//	}
//};
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n="",const string& p=""):name(n),phone(p){}
//	void Print()const
//	{
//		cout << "name: " << name << "," << "phone: " << phone << endl;
//	}
//	const string& GetName()const   //name,phone�� private���� �ٸ������� ������ �����⶧���� ��ȯ�ϴ� ������� ���ִ°�. ���� 
//	{
//		return name;
//	}
//	const string& GetPhone()const
//	{
//		return phone;
//	}
//};
//class TelPhoneBook
//{
//	Array<Person*> perarr;//�Է��� ���� Person������ �����ϰ� �װ����� Print�� �����־� �����, ���ø��� person�� �ּҷ� ���ڴٴ¸�
//public:
//	void Add()
//	{
//		cout << "�̸��Է�:";
//		string name;
//		cin >> name;
//		cout << "��ȭ�Է�:"; 
//		string phone;
//		cin>> phone;
//		perarr.Add(new Person(name, phone)); //Array�� Add�Լ���� 
//	}
//	void Print()const
//	{
//		for (int i = 0; i <perarr.Size();++i)
//		{
//			(*perarr[i]).Print();  //Person�� �ּ��̱⶧�� 
//		}
//	}
//	void Search()const
//	{
//
//	}
//	void Remove()
//	{
//
//	}
//};
//void main()
//{ 
//	TelPhoneBook tp;
//	tp.Add();
//	tp.Print();
//	system("pause");
//}



//#include <iostream> 
//#include <cstdlib>
//#include <string>
//using namespace std;
//template <typename T>
//class Array
//{
//	T* buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap = 100)
//	{
//		capacity = cap;
//		buf = new T[cap];
//		size = 0;
//	}
//	Array(const Array& arg)
//	{
//		size = arg.size;
//		capacity = arg.capacity;
//		buf = new T[capacity];
//		for (int = 0; i < size; ++i)
	//		{
	//			buf[i] = arg.buf[i];
	//		}
//	}
//	const Array& operator=(const Array& arg)
//	{
//		delete[] buf;
//		size = arg.size;
//		capacity = arg.capacity;
//		buf = new T[capacity];
//		for (int = 0; i < size; ++i)
//		{
//			buf[i] = arg.buf[i];
//		}
//		return *this;
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(const T& n)
//	{
//		buf[size++] = n;
//	}
//	int Size()
//	{
//		return size;
//	}
//	const T& operator[](int index)
//	{
//		return buf[index];
//	}
//};
//void main()
//{ //Array�� �����ٰ� �����Ѱ�.
//	Array<double>* parr = new Array<double>;//�̷��� ����� ����ü�� �ȴ�.//Array<double> arr; ���� �޸𸮰� ����Ǵ� ������ �����̴�.
//	Array<string>* psarr = new Array<string>(200);//Array<string> sarr;
//	(*psarr).Add("Hello!");//�Ϲ��� ���Ĺ�ȯ
//	(*psarr).Add(string("ABC"));//����� ���ĺ�ȯ
//	(*psarr).Add((string)"12345");//c��Ÿ�� ���ĺ�ȯ
//	
//	(*parr).Add(10.1);
//	(*parr).Add(20.5);
//	(*parr).Add(30.21);
//	
//	for (int i = 0; i < (*parr).Size(); ++i)
//	{
//		cout << (*parr)[i]<<":" << (*psarr).operator[](i)<< endl;
//	}
//
//	delete parr;
//	delete psarr;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//#include <string>
//using namespace std;
//template <typename T>
//class Array
//{
//	T* buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap = 100)
//	{
//		capacity = cap;
//		buf = new T[cap];
//		size = 0;
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(const T& n)
//	{
//		buf[size++] = n;
//	}
//	int Size()
//	{
//		return size;
//	}
//	const T& operator[](int index)const //�������縦 �ϱ����ؼ� �Ϻη� ���ø��� ������ �����°�.
//	{
//		return buf[index];
//	}
//};
//void main()
//{
//	Array<double> arr;
//	arr.Add(10.1);
//	arr.Add(20.5);
//	arr.Add(30.21);
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		cout << arr[i] << endl;
//	}
//	system("pause");
//}


//#include <iostream> //Ŭ�������ø�
//#include <cstdlib>
//#include <string>
//using namespace std;
//template <typename T>  
//class Array 
//{
//	int* buf;
//	int size;
//	int capacity;
//public :
//	Array(int cap=100)
//	{
//		capacity = cap;
//		buf = new int[cap];
//		size = 0;
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(int n)
//	{
//		buf[size++] = n;
//	}
//	int Size()
//	{
//		return size;
//	}
//	int operator[](int index)const
//	{
//		return buf[index];
//	}
//};
//void main()
//{
//	Array<double> arr;
//	arr.Add(10.1);
//	arr.Add(20.5);
//	arr.Add(30.21);
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		cout << arr[i] << endl;
//	}
//	system("pause");
//}



//#include <iostream> //Ŭ�������ø�
//#include <cstdlib>
//#include <string>
//using namespace std;
//template <typename T>  //��üŸ���� �� ��������ʱ����� &�� ������.
//class Stack //���� Ŭ���� ���ø�
//{
//	T stack[5];
//	int top;
//public:
//	Stack() :top(0) {}
//	void Push(const T& data)
//	{
//		stack[top++] = data;
//	}
//	T& pop()
//	{
//		return stack[--top];
//	}
//};
//
//
//void main()
//{
//	Stack<string> st;
//	st.Push("ABC");
//	st.Push("HELLO");
//	st.Push("12323");
//
//	cout << st.pop() << endl;
//	cout << st.pop() << endl;
//	cout << st.pop() << endl;
//
//	system("pause");
//}



//#include <iostream> //Ŭ�������ø�
//#include <cstdlib>
//#include <string>
//using namespace std;
//template <typename T>
//class Stack //���� Ŭ���� ���ø�
//{
//	T stack[5];
//	int top;
//public:
//	Stack() :top(0) {}
//	void Push(T data)
//	{
//		stack[top++] = data;
//	}
//	T pop()
//	{
//		return stack[--top];
//	}
//};
//
//
//void main()
//{
//	Stack<string> st; 
//	st.Push("ABC");
//	st.Push("HELLO");
//	st.Push("ASDSA");
//
//	cout << st.pop() << endl;
//	cout << st.pop() << endl;
//	cout << st.pop() << endl;
//
//	system("pause");
//}


//#include <iostream> //Ŭ�������ø�
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//template <typename T>
//class Stack //���� Ŭ���� ���ø�
//{
//	T stack[5];
//	int top;
//public:
//	Stack() :top(0) {}
//	void Push(T data)
//	{
//		stack[top++] = data;
//	}
//	T pop()
//	{
//		return stack[--top];
//	}
//};
//
//
//void main()
//{
//	Stack<double> st; //�����Ҽ������� �����̾ƴϴ� .�׷��� ���°�� �ҷ��������Ѵ�.
//	st.Push(10.23);
//	st.Push(20.145);
//	st.Push(30.12342);
//
//	cout << st.pop() << endl;
//	cout << st.pop() << endl;
//	cout << st.pop() << endl;
//
//	system("pause");
//}



//#include <iostream> //Ŭ�������ø�
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class Stack
//{
//	double stack[5];
//	int top;
//public:
//	Stack() :top(0) {}
//	void Push(double data)
//	{
//		stack[top++] = data;
//	}
//	double pop()
//	{
//		return stack[--top];
//	}
//};
//
//
//void main()
//{
//	Stack st; //�����Ҽ������� �����̾ƴϴ� .�׷��� ���°�� �ҷ��������Ѵ�.
//	st.Push(10.23);
//	st.Push(20.145);
//	st.Push(30.12342);
//
//	cout << st.pop() << endl;
//	cout << st.pop() << endl;
//	cout << st.pop() << endl;
//
//	system("pause");
//}


//#include <iostream> //Ŭ�������ø�
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class Stack
//{
//	int stack[5];
//	int top;
//public:
//	Stack():top(0){}
//	void Push(int data)
//	{
//		stack[top++] = data;
//	}
//	int pop()
//	{
//		return stack[--top];
//	}
//};
//	
//
//void main()
//{
//	Stack st; //�����Ҽ������� �����̾ƴϴ� .�׷��� ���°�� �ҷ��������Ѵ�.
//		st.Push(10);
//		st.Push(20);
//		st.Push(30);
//
//		cout << st.pop() << endl;
//		cout << st.pop() << endl;
//		cout << st.pop() << endl;
//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//int data = 0;
//const int* GetData()
//{
//	return &::data;
//}
//
//void main()
//{
//	//*GetData() = 10;
//	cout << *GetData() << endl;
//	cout << ::data << endl;
//	system("pause");
//}


//#include <iostream>  //ũ�� �߿��������櫓 
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//int data = 0;
//const int* GetData()
//{
//	return &::data;
//}
//
//void main()
//{
//	//*GetData() = 10;//GetData���� �ּҿ��⶧���� ������ �������.
//	cout << *GetData() << endl;
//	cout << ::data << endl;
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//int data = 0;
//int* GetData()
//{
//	return &::data;
//}
//
//void main()
//{
//	*GetData() = 10;//GetData���� �ּҿ��⶧���� ������ �������.
//	cout << ::data << endl;
//	system("pause");
//}

//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//int data = 0;
//int& GetData()
//{
//	return ::data;
//}
//
//void main()
//{
//	GetData() = 10;//������ �����⶧���� data��� ���������� 10�� �ִ´ٴ� ��
//	cout << ::data << endl;
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//int data = 0;
//int GetData()
//{
//	return ::data;
//}
//
//void main()
//{
//	GetData() = 10;//�̰Ǹ��̾ȵǴ� �ڵ���
//	cout << ::data << endl;
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//int data = 0;
//
//void main()
//{
//	int data = 50; //�̵����ʹ� �� ��Ͼȿ� ��ȿ�ϴ�.(scope)
//	cout << ::data << endl;//���������� ����� ::�̶�� �������� ǥ�ø�����ߵȴ�.
//	cout << data << endl;
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String
//{
//	char* buf;
//	int size;
//public:
//	String(const char* s = "")
//	{
//		size = strlen(s);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, s);
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* GetString()const // s�� const�޼ҵ��̱⶧���� const�� const���� ����Ҽ�����.�ǵ����ΰ� �ƴ϶�� ������ const�� ������.
//	{
//		return buf;
//	}
//	String(const String& arg)
//	{
//		size = arg.size;
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//	}
//	const String& operator=(const String& arg)
//	{
//		delete[] buf; //����� ��������ڿ� �������̴�.
//		size = arg.size;
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//		return *this;
//	}
//};
//ostream& operator<<(ostream& o, const String& s)
//{
//	o << s.GetString();//���͸� �������. s.c_str()�̶����� �ǹ�
//	return o;
//}
//void main()
//{
//	String s1("Hello");//String s1 = "Hello"
//	String s2("ABC");
//	cout << s1 <<":"<<s2<< endl;//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String
//{
//	char* buf;
//	int size;
//public:
//	String(const char* s = "")
//	{
//		size = strlen(s);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, s);
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* GetString()const // s�� const�޼ҵ��̱⶧���� const�� const���� ����Ҽ�����.�ǵ����ΰ� �ƴ϶�� ������ const�� ������.
//	{
//		return buf;
//	}
//};
//ostream& operator<<(ostream& o, const String& s)
//{
//	o << s.GetString();//���͸� �������. s.c_str()�̶����� �ǹ�
//	return o;
//}
//void main()
//{
//	String s1("Hello");//String s1 = "Hello"
//	cout << s1 << endl;//operator<<(s1).operator<<(endl);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//class String
//{
//	char* buf;
//	int size;
//public :
//	String(const char* s="")
//	{
//		size = strlen(s);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, s);
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//
//};
//ostream& operator<<(ostream& o,const String& s)
//{
//	return o;
//}
//void main()
//{
//	String s1("Hello");//String s1 = "Hello"
//	cout << s1 << endl;//operator<<(s1).operator<<(endl);
//	system("pause");
//}