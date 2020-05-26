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
//	virtual ~Person(){} //부모는 반드시 붙혀야 한다.
//	virtual void Print()const = 0; //몸체를 갖을 필요가 없다.
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
//	Array<Person*> perarr;//Person의 주소 저장
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
//		cout << "[1]교수 정보 입력, [2] 학생 정보 입력";
//		string choose;
//		cin >> choose;
//		cout << "이름입력:";
//		string name;
//		cin >> name;
//		cout << "전화입력:";
//		string phone;
//		cin >> phone;
//
//		switch (choose[0])
//		{
//		case '1':
//		{
//			string Position;
//			cout << "직위 입력: ";
//			cin >> Position;
//			perarr.Add(new Professor(name, phone, Position));
//		}
//		case '2':
//		{
//			int grade;
//			cout << "학년 입력: ";
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
//		cout << "검색 이름 입력:";
//		cin >> name;
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//			if ((*perarr[i]).GetName() == name) // perarr는 주소고 GetName에 저장되어잇는값을 받음. 
//			{
//				cout << "[" << i << "]" << endl;
//				cout << *perarr[i] << endl;
//			}
//		}
//	}
//	void Remove()
//	{
//		string name;
//		cout << "삭제 이름 입력 :";
//		cin >> name;
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//			if ((*perarr[i]).GetName() == name)
//			{
//				delete perarr[i]; //가리키고잇는 동적메모리를 제거, 이게 없으면 메모리가 남아잇게 되버림.
//				perarr.Remove(i); //원소를 제거
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
//	Array<Person*> perarr;//Person의 주소 저장
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
//		cout << "이름입력:";
//		string name;
//		cin >> name;
//		cout << "전화입력:";
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
//		cout << "검색 이름 입력:";
//		cin >> name;
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//			if ((*perarr[i]).GetName() == name) // perarr는 주소고 GetName에 저장되어잇는값을 받음. 
//			{
//				cout << "[" << i << "]" << endl;
//				cout << *perarr[i] << endl;
//			}
//		}
//	}
//	void Remove()
//	{
//		string name;
//		cout << "삭제 이름 입력 :";
//		cin >> name;
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//
//			delete perarr[i]; //가리키고잇는 동적메모리를 제거, 이게 없으면 메모리가 남아잇게 되버림.
//			perarr.Remove(i); //원소를 제거
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
//	Array<Person*> perarr;//Person의 주소 저장
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
//		cout << "이름입력:";
//		string name;
//		cin >> name;
//		cout << "전화입력:";
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
//		cout << "검색 이름 입력:";
//		cin >> name;
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//			if ((*perarr[i]).GetName() == name) // perarr는 주소고 GetName에 저장되어잇는값을 받음. 
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
//	Array<Person*> perarr;//Person의 주소 저장
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
//		cout << "이름입력:";
//		string name;
//		cin >> name;
//		cout << "전화입력:";
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
//	const Array& operator=(const Array& arg)  //복사생성자와 복사대입연산자는 그냥 차라리 한번에 같이 만들어버려라
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
//	const string& GetName()const   //name,phone이 private으로 다른곳에서 가져다 못쓰기때문에 반환하는 방법으로 해주는것. 게터 
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
//	Array<Person*> perarr;//입력한 값을 Person형으로 저장하고 그값들을 Print로 보내주어 출력함, 템플릿을 person형 주소로 쓰겠다는말
//public:
//	void Add()
//	{
//		cout << "이름입력:";
//		string name;
//		cin >> name;
//		cout << "전화입력:"; 
//		string phone;
//		cin>> phone;
//		perarr.Add(new Person(name, phone)); //Array의 Add함수사용 
//	}
//	void Print()const
//	{
//		for (int i = 0; i <perarr.Size();++i)
//		{
//			(*perarr[i]).Print();  //Person의 주소이기때문 
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
//{ //Array를 힙에다가 생성한것.
//	Array<double>* parr = new Array<double>;//이렇게 만들면 힙객체가 된다.//Array<double> arr; 지금 메모리가 저장되는 영역은 스택이다.
//	Array<string>* psarr = new Array<string>(200);//Array<string> sarr;
//	(*psarr).Add("Hello!");//암묵적 형식번환
//	(*psarr).Add(string("ABC"));//명시적 형식변환
//	(*psarr).Add((string)"12345");//c스타일 형식변환
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
//	const T& operator[](int index)const //깊은복사를 하기위해서 일부로 템플릿을 참조로 보내는것.
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


//#include <iostream> //클래스템플릿
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



//#include <iostream> //클래스템플릿
//#include <cstdlib>
//#include <string>
//using namespace std;
//template <typename T>  //객체타입은 다 복사되지않기위해 &를 붙힌다.
//class Stack //스택 클래스 탬플릿
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



//#include <iostream> //클래스템플릿
//#include <cstdlib>
//#include <string>
//using namespace std;
//template <typename T>
//class Stack //스택 클래스 탬플릿
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


//#include <iostream> //클래스템플릿
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//template <typename T>
//class Stack //스택 클래스 탬플릿
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
//	Stack<double> st; //지정할수있으면 스택이아니다 .그래서 몇번째를 불러낸진못한다.
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



//#include <iostream> //클래스템플릿
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
//	Stack st; //지정할수있으면 스택이아니다 .그래서 몇번째를 불러낸진못한다.
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


//#include <iostream> //클래스템플릿
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
//	Stack st; //지정할수있으면 스택이아니다 .그래서 몇번째를 불러낸진못한다.
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


//#include <iostream>  //크게 중요하지안흥ㅁ 
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
//	//*GetData() = 10;//GetData역시 주소엿기때문에 값으로 만들어줌.
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
//	*GetData() = 10;//GetData역시 주소엿기때문에 값으로 만들어줌.
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
//	GetData() = 10;//참조는 보냇기때문에 data라는 전역변수에 10을 넣는다는 뜻
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
//	GetData() = 10;//이건말이안되는 코드임
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
//	int data = 50; //이데이터는 이 블록안에 유효하다.(scope)
//	cout << ::data << endl;//전역변수를 만들면 ::이라는 전역변수 표시를해줘야된다.
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
//	const char* GetString()const // s가 const메소드이기때문에 const는 const끼리 사용할수있음.의도적인게 아니라면 무조건 const를 붙혀라.
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
//		delete[] buf; //요것이 복사생성자와 차이점이다.
//		size = arg.size;
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//		return *this;
//	}
//};
//ostream& operator<<(ostream& o, const String& s)
//{
//	o << s.GetString();//게터를 만들어줌. s.c_str()이랑같은 의미
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
//	const char* GetString()const // s가 const메소드이기때문에 const는 const끼리 사용할수있음.의도적인게 아니라면 무조건 const를 붙혀라.
//	{
//		return buf;
//	}
//};
//ostream& operator<<(ostream& o, const String& s)
//{
//	o << s.GetString();//게터를 만들어줌. s.c_str()이랑같은 의미
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