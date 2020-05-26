//#include <iostream> 
//#include <cstdlib> 
//#include <cstring> 
//#include <string>
//using namespace std;
//class String
//{
//	char* buf;
//public:
//	String(const char* s = " ") //explicit로 인해서 암묵적으로 못한다.
//	{
//		buf = new char[strlen(s) + 1];
//		strcpy_s(buf, strlen(s) + 1, s);
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//		const char* GetString()const
//	{
//		return buf;
//	}
//};
//ostream& operator<<(ostream& o, const String& s)
//{
//	o << s.GetString();
//		return o;
//}
//void PrintString(const string& s) 
//{
//	cout << s << endl;
//}
//void PrintString(const String& s)
//{
//	cout << s << endl;
//}
//int main()
//{
//	const char* s = "Hello!";
//	const char arr[] = "Hello~";
//	const string str = "Hello~";
//	const String str2 = "Hello!!"; //사용자 정의 타입
//
//	PrintString(string(s));//string 객체로 만들어서 호출 //char*  하지만 string타입이다 왜냐하면 형식변환 될꺼니깐
//	PrintString(string(arr));   //char*타입,
//	PrintString(str);   //string형타입
//	PrintString(str2);   //위에 세개는 같은형식의 함수 , 하지만 아래하나만 전혀다른 형식의 함수
//	system("pause");  
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <cstring> 
//#include <string>
//using namespace std;
//void PrintString(const string& s) //s가 string 객체인데 복사되면 안되기에 &을 붙히고 
//{
//	cout << s << endl;
//}
//int main()
//{
//	const char* s = "Hello!";
//	const char arr[] = "Hello~";
//	const string str = "Hello~";
//
//	cout << s << endl;
//	cout << arr << endl;
//
//	PrintString(s);//string 객체로 만들어서 호출 //char*
//	PrintString(arr);   //char*타입
//	PrintString(str);   //string형타입
//	system("pause");
//}



//#include <iostream> 
//#include <cstdlib> 
//#include <cstring> 
//#include <string>
//using namespace std;
//void PrintString(const string& s) //s가 string 객체인데 복사되면 안되기에 &을 붙히고 
//{
//		cout << s << endl;
//	}
//int main()
//{
//	const char* s = "Hello!";
//	const char arr[] = "Hello~";
//
//	cout << s << endl;
//	cout << arr << endl;
//
//	PrintString(string(s));//string 객체로 만들어서 호출
//	PrintString(string(arr));
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <cstring> 
//#include <string>
//using namespace std;
//void PrintString(const string s)//string 형을 바꿔도 결과는 동일 
//{
//	for (int i = 0; s[i]; ++i)
//	{
//		cout << s[i] << endl;
//	}
//}
//int main()
//{
//	const char* s = "Hello!";
//	const char arr[] = "Hello~";
//
//	cout << s << endl;
//	cout << arr << endl;
//
//	PrintString(s);
//	PrintString(arr);
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <cstring>
//using namespace std;
//void PrintString(const char* s) //일일이 하나씩 출력하고싶을때
//{
//	for (int i = 0; s[i]; ++i)
//	{
//		cout << s[i] << endl;
//	}
//}
//int main()
//{
//	const char* s = "Hello!";
//	const char arr[] = "Hello~";
//
//	cout << s << endl;
//	cout << arr << endl;
//
//	PrintString(s);
//	PrintString(arr);
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <cstring>
//using namespace std;
//void PrintString(const char* s)
//{
//	cout << s << endl;
//}
//int main()
//{
//	const char* s = "Hello!";
//	const char arr[] = "Hello~";
//
//	cout << s << endl;
//	cout << arr << endl;
//
//	PrintString(s);
//	PrintString(arr);
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <vector> 
//#include <algorithm>
//#include <functional> //greater<int>()를 사용하기 위해서 사용됨.
//using namespace std;
//template <typename T>
//struct Greater //x는 내림차순 y는 오름차순
//{
//	bool operator()(const T& a, const T& b)const
//	{
//		if (a.GetX() > b.GetX())
//		{
//			return true;
//		}
//		else if (a.GetX() < b.GetX())
//		{
//			return false;
//		}
//		return a.GetY() < b.GetY();
//	}
//};
//class Point
//{
//	int x, y;
//public :
//	explicit Point(int x = 0 , int y = 0) : x(x), y(y) {}
//	int GetX()const
//	{
//		return x;
//	}
//	int GetY()const
//	{
//		return y;
//	}
//	};
//int main()
//{
//	vector<Point> v;
//	for (int i = 0; i < 100; ++i)
//	{
//		v.push_back(Point (rand() %100,rand()%100));
//	}
//	sort(v.begin(), v.end(), Greater<Point>()); 
//	//v.end(), less <int>()); //a<b면 less 즉 오름차순 , a>b면 greater 즉 내림차순 이다
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//	{
//		cout <<(*iter).GetX() << "," << (*iter).GetY() << " ";
//	}
//	cout << endl;
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib> 
//#include <vector> 
//#include <algorithm>
//#include <functional> //greater<int>()를 사용하기 위해서 사용됨.
//using namespace std;
//template <typename T>
//struct Greater //10단위는 크기비교가 차이가 안나도록 하기
//{
//	bool operator()(const T& a, const T& b)const
//	{
//		return a/10 > b/10;
//		//return a/100 <b/100 는 100의단위를 판단할때 사용
//	}
//};
//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 1000; ++i)
//	{
//		v.push_back(rand() % 10000);
//	}
//	sort(v.begin(), v.end(), Greater<int>()); //내림차순정렬
//	//sort(v.begin(), v.end(), less <int>()); //a<b면 less 즉 오름차순 , a>b면 greater 즉 내림차순 이다
//
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <vector> 
//#include <algorithm>
//#include <functional> //greater<int>()를 사용하기 위해서 사용됨.
//using namespace std;
//bool cmp(const int a, const int b)
//{
//	return a > b;
//}
//struct Pred //이거는 객체형으로 하는것.
//{
//	bool operator()(int a, int b)const
//	{
//		return a > b;
//	}
//};
//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 1000; ++i)
//	{
//		v.push_back(rand() % 10000);
//	}
//	//sort(v.begin(), v.end(), greater<int>()); //내림차순정렬
//	sort(v.begin(), v.end(), less <int>()); //a<b면 less 즉 오름차순 , a>b면 greater 즉 내림차순 이다
//
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <vector> 
//#include <algorithm>
//using namespace std;
//bool cmp(const int a, const int b)
//{
//	return a > b;
//}
//struct Pred //이거는 객체형으로 하는것.
//{
//	bool operator()(int a, int b)const
//	{
//		return a > b;
//	}
//};
//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 1000; ++i)
//	{
//		v.push_back(rand() % 10000);
//	}
//	sort(v.begin(), v.end(),Pred()); //내림차순정렬
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib> 
//#include <vector> 
//#include <algorithm>
//using namespace std;
//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 1000; ++i)
//	{
//		v.push_back(rand() % 10000);
//	}
//	sort(v.begin(), v.end()); //정렬
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib> 
//#include <set> 
//#include <algorithm>
//using namespace std;
//template <typename T>
//struct PrintF
//{
//	void operator()(const T& n)const
//	{
//		cout << n << " ";
//	}
//};
//void Print(int n)
//{
//	cout << n << endl;
//}
//template <typename Iter, typename F>
//void For_each(Iter siter, Iter eiter, F fun)
//{
//	cout << typeid(Iter).name();
//	for (; siter != eiter; ++siter)
//	{
//		fun(*siter);   //siter는 모든원소에 대해서 라는뜻, *siter는 정수를 의미한다.fun(*siter)은 기능을 수행하라라는 뜻
//	}
//}
//int main()
//{
//	set<int> v;
//	v.insert(10);
//	v.insert(20);
//	v.insert(30);
//	v.insert(40);
//	v.insert(50);
//
//	//For_each(v.begin(), v.end(), PrintF<int>());
//	For_each(v.begin(), v.end(), Print);
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib> 
//#include <list> 
//#include <algorithm>
//using namespace std;
//template <typename T>
//struct PrintF
//{
//	void operator()(const T& n)const
//	{
//		cout << n << " ";
//	}
//};
//void Print(int n)
//{
//	cout << n <<endl;
//}
//template <typename Iter, typename F>
//void For_each(Iter siter, Iter eiter, F fun)
//{
//	cout << typeid(Iter).name() << ',' << typeid(F).name() << endl;
//		for (; siter != eiter; ++siter)
//		{
//			fun(*siter);   //siter는 모든원소에 대해서 라는뜻, *siter는 정수를 의미한다.fun(*siter)은 기능을 수행하라라는 뜻
//		}
//}
//int main()
//{
//	list<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	//For_each(v.begin(), v.end(), PrintF<int>());
//	For_each(v.begin(), v.end(), Print);
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib> 
//#include <vector> 
//#include <algorithm>
//using namespace std;
//template <typename T>
//struct PrintF
//{
//	void operator()(const T& n)const
//	{
//		cout << n << " ";
//	}
//};
//void Print(int n)
//{
//	cout << n <<" ";
//}
//template <typename Iter, typename F>
//void For_each(Iter siter, Iter eiter, F fun)
//{
//	cout << typeid(Iter).name()
//		for (; siter != eiter; ++siter)
//		{
//			fun(*siter);   //siter는 모든원소에 대해서 라는뜻, *siter는 정수를 의미한다.fun(*siter)은 기능을 수행하라라는 뜻
//		}
//}
//int main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	//For_each(v.begin(), v.end(), PrintF<int>());
//	For_each(v.begin(), v.end(), Print);
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib> 
//#include <vector> 
//#include <algorithm>
//using namespace std;
//template <typename T>
//struct PrintF
//{
//	void operator()(const T& n)const
//	{
//		cout << n << " ";
//	}
//};
//template <typename Iter, typename F>
//void For_each(Iter siter, Iter eiter, F fun)
//{
//	cout << typeid(Iter).name() << "," << typeid(F).name()<<endl;
//	for (; siter != eiter; ++siter)
//	{
//		fun(*siter);   //siter는 모든원소에 대해서 라는뜻, *siter는 정수를 의미한다.fun(*siter)은 기능을 수행하라라는 뜻
//	}
//}
//int main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	For_each(v.begin(), v.end(), PrintF<int>());
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <vector> 
//#include <algorithm>
//using namespace std;
//template <typename T>
//struct PrintF
//{
//	void operator()(const T& n)const
//	{
//		cout << n << " ";
//	}
//};
//template <typename Iter, typename F>
//void For_each(Iter siter,Iter eiter, F fun)
//{
//	for (; siter != eiter; ++siter)
//	{
//	fun(*siter);   //siter는 모든원소에 대해서 라는뜻, *siter는 정수를 의미한다.fun(*siter)은 기능을 수행하라라는 뜻
//	}
//}
//int main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	For_each(v.begin(), v.end(), PrintF<int>());
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <vector> 
//#include <algorithm>
//using namespace std;
//template <typename T>
//struct PrintF
//{
//	void operator()(int n)const
//	{
//	cout << n << " ";
//	}
//};
//int main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	for_each(v.begin(), v.end(), PrintF<int>());
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib> 
//#include <vector> 
//#include <algorithm>
//void Print(int n)
//{
//	cout << n << " ";
//}
//using namespace std;
//int main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	for_each(v.begin(), v.end(),Print);
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib> 
//#include <typeinfo> 
//using namespace std;
//class Parent
//{
//public:
//	virtual ~Parent() {}
//	virtual void Message() const = 0;
//};
//class Child1 : public Parent
//{
//	int child1;
//public:
//	Child1() :child1(100) {}
//	virtual void Message()const
//	{
//		cout << "Child1 MSG" << endl;
//	}
//	void PrintChild1()const
//	{
//		cout << "int :" << child1 << endl;
//	}
//};
//class Child2 :public Parent
//{
//public:
//	virtual void Message()const
//	{
//		cout << "Child2 MSG" << endl;
//	}
//};
//int main()
//{
//	Parent* p = new Child1;
//	p->Message();
//	delete p;
//
//	Parent* parr[5] = { new Child1, new Child2, new Child1, new Child2 };
//	for (int i = 0; i < 5; ++i)
//	{
//		cout << typeid(*parr[i]).name() << endl;
//	}
//	for (int i = 0; i < 5; ++i)
//	{
//		delete parr[i];
//	}
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib> 
//#include <typeinfo> 
//using namespace std;
//class Parent
//{
//public:
//	virtual ~Parent() {}
//	virtual void Message() const = 0;
//};
//class Child1 : public Parent
//{
//	int child1;
//public:
//	Child1() :child1(100) {}
//	virtual void Message()const
//	{
//		cout << "Childe1 MSG" << endl;
//	}
//	void PrintChild1()const
//	{
//		cout << "int :" << child1 << endl;
//	}
//};
//class Child2 :public Parent
//{
//public:
//	virtual void Message()const
//	{
//		cout << "Childe2 MSG" << endl;
//	}
//};
//int main()
//{
//	Parent* parr[5] = { new Child1, new Child2, new Child1, new Child2 };
//	for (int i = 0; i < 5; ++i)
//	{
//		(*parr[i]).Message();
//		if(typeid(Child1)==typeid(*parr[i]))
//		((Child1*)parr[i])->PrintChild1();
//	}
//	for (int i = 0; i < 5; ++i)
//	{
//		delete parr[i];
//	}
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <typeinfo> 
//using namespace std;
//class Parent
//{
//public:
//	virtual ~Parent() {}
//	virtual void Message() const = 0;
//};
//class Child1 : public Parent
//{
//	int child1;
//public:
//	Child1():child1(100){}
//	virtual void Message()const
//	{
//		cout << "Childe1 MSG" << endl;
//	}
//	void PrintChild()const
//	{
//		cout << "int :" << child1 << endl;
//	}
//};
//class Child2 :public Parent
//{
//public:
//	virtual void Message()const
//	{
//		cout << "Childe2 MSG" << endl;
//	}
//};
//int main()
//{
//	Parent* p = new Child1;
//	(*p).Message();
//	delete p;
//
//	Parent* parr[5] = { new Child1, new Child2, new Child1, new Child2 };
//	for (int i = 0; i < 5; ++i)
//	{
//		(*parr[i]).Message();
//	}
//	for (int i = 0; i < 5; ++i)
//	{
//		delete parr[i];
//	}
//	system("pause");
//}


//#include <iostream> //아래가 어떻게 쓰이는지 보이는 준비단계
//#include <cstdlib> 
//#include <typeinfo> 
//using namespace std;
//class Parent
//{
//public : 
//	virtual ~Parent() {}
//	virtual void Message() const = 0;
//};
//class Child1 : public Parent
//{
//public :
//	virtual void Message()const
//	{
//		cout << "Childe1 MSG" << endl;
//	}
//};
//class Child2 :public Parent
//{
//public:
//	virtual void Message()const
//	{
//		cout << "Childe2 MSG" << endl;
//	}
//};
//int main()
//{
//	Parent* p = new Child1;
//	(*p).Message();
//	delete p;
//
//	Parent* parr[5] = { new Child1, new Child2, new Child1, new Child2 };
//	for (int i = 0; i < 5; ++i)
//	{
//		(*parr[i]).Message();
//	}
//	for (int i = 0; i < 5; ++i)
//	{
//		delete parr[i];
//	}
//
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <typeinfo> 
//using namespace std;
//int main()
//{
//	const type_info& ti = typeid(int); //typeinfo객체는 복사할수없고 변경할수없다. 그래서 반드시const객체여야만한다.
//	
//	cout << ti.name() << endl;
//	if (ti == typeid(int))
//	{
//		cout << "true" << endl;
//	}
//	else
//	{
//		cout << "false" << endl;
//	}
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib> 
//using namespace std;
//int main()
//{
//	cout << typeid(int).name() << endl;//typeid는 연산자
//	cout << typeid(double).name() << endl;
//	cout << typeid(int*).name() << endl;
//	cout << typeid(double*).name() << endl;
////int의 타입객체인데 거기에 name이라는 메소드로 이름을 물어본것
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <string>
//#include <exception>
//using namespace std;
//class ExF1 :public exception //exception소문자
//{
//	string msg;
//public:
//	ExF1(const char* s) : msg(s) {}
//	const char* what() const //what()약속되어있는 메소드들이 소문자다
//	{
//		return msg.c_str();
//	}
//};
//class ExF2 :public exception
//{
//	string msg;
//public:
//	ExF2(const char* s) : msg(s) {}
//	const char* what() const
//	{
//		return msg.c_str();
//	}
//};
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	throw ExF1("fuction1 예외발생");
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//	throw ExF2("fuction2 예외발생");
//}
//int main()
//{
//	try //독립적인코드는 try문제 떨어져있어야하고 종속은 같이 붙어있어야한다.
//	{
//		function1(10);
//		function2(20);
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl; //what메소드는 구현되어 있어야한다.
//	}
//	catch (...) 
//	{
//		cout << "예외" << endl;
//	}
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <string>
//using namespace std;
//class Exception
//{
//public:
//	virtual const char* What()const = 0;
//};
//class ExF1 :public Exception
//{
//	string msg;
//public:
//	ExF1(const char* s) : msg(s) {}
//	const char* What() const
//	{
//		return msg.c_str();
//	}
//};
//class ExF2 :public Exception
//{
//	string msg;
//public:
//	ExF2(const char* s) : msg(s) {}
//	const char* What() const
//	{
//		return msg.c_str();
//	}
//};
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	throw ExF1("fuction1 예외발생");  
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//	throw ExF2("fuction2 예외발생");
//}
//int main()
//{
//	try
//	{
//		function1(10);
//		function2(20);
//	}
//	catch (const Exception& e)
//	{
//		cout << e.What() << endl;
//	}
//	catch (...) //혹시나 처리하지못한애들이있으면 두리뭉실하게 다 처리하라는뜻
//	{
//		cout << "예외" << endl;
//	}
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <string>
//using namespace std;
//class ExF1
//{
//	string msg;
//public:
//	ExF1(const char* s) : msg(s) {}
//	const char* What() const
//	{
//		return msg.c_str();
//	}
//	};
//class ExF2
//{
//	string msg;
//public:
//	ExF2(const char* s) : msg(s) {}
//	const char* What() const
//	{
//		return msg.c_str();
//	}
//	};
//	void function1(int n)
//	{
//		cout << "function1 : " << n << endl;
//		//throw ExF1("fuction1 예외발생");  
//	}
//	void function2(int n)
//	{
//		cout << "function2 : " << n << endl;
//		throw ExF2("fuction2 예외발생");
//	}
//	int main()
//	{  
//		try 
//		{
//			function1(10);
//			function2(20); 
//		}
//		catch (const ExF1& e)
//		{
//			cout << e.What() << endl;
//		}
//		catch (const ExF2& e)
//		{
//			cout << e.What() << endl;
//		}
//		catch (...) //혹시나 처리하지못한애들이있으면 두리뭉실하게 다 처리하라는뜻
//		{
//			cout << "예외" << endl;
//		}
//		system("pause");
//	}


//#include <iostream> 
//#include <cstdlib> 
//#include <string>
//using namespace std;
//class ExF1
//{
//	string msg;
//public:
//	ExF1(const char* s) : msg(s) {}
//	const char* what() const
//	{
//		return msg.c_str(); 
//};
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	throw ExF1("fuction1 예외발생");  //클라이언트에게 객체로 만들어서 예외처리 알아서 하라고 보내준건.
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//int main()
//{  //function1과 2가 종속적이다. 1이 성공하지않으면 절대로 2를 실행하면 안되고 실행도 안된다. 즉 앞쪽에서 예외가 발생하면 더 이상 실행하면 안된다.
//	try //혹시 예외가 발생하면 나한테 알려줄래?라는뜻, 일단 해봐라 라는 뜻
//	{
//		function1(10);
//		function2(20);
//	}
//	catch (const ExF1& e)//f1객체가 던져지면 잡아라
//	{//여기서 아래까지 처리 코드, Exf1이 예외라는것을 보고나서 처리를한다.
//		cout << e.what() << endl;
//	}
//	catch (...)
//	{
//		cout << "예외" << endl;
//	}
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <string>
//using namespace std;
//class ExF1
//{
//	string msg;
//public:
//	ExF1(const char* s): msg(s){}
//	const char* what() const
//	{
//		return msg.c_str(); //이름은 상관이없다.
//	}
//};
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	throw ExF1("fuction1 예외발생");  //예외가발생하면 모든정보를 ExF1에 기록한다.
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//int main()
//{  //function1과 2가 종속적이다. 1이 성공하지않으면 절대로 2를 실행하면 안되고 실행도 안된다. 즉 앞쪽에서 예외가 발생하면 더 이상 실행하면 안된다.
//	try
//	{
//		function1(10);  
//		function2(20);
//	}
//	catch (const char* ex)
//	{
//		cout << ex << endl;
//	}
//	catch (...)//계층적 예외 잡기 , ...이 다잡는다는 뜻
//	{
//		cout << "예외" << endl;
//	}
//	system("pause");
//}


//#include <iostream> //c++에서 제공하는 적정한 예외 처리
//#include <cstdlib> //적정한 처리를 만드는것이 예외처리
//using namespace std;
////server:클래스 예외 (throw) , client : try{} catch{}
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	////////기존에는 항상 오류값을 던졌음.
//	throw "function1을 수행!,예외상황 발생!";//예외 객체를 던진다., 다른문자는 문자열을못던지지만 c++만 가능,function1을 실행하다가 os가 오류뜸
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//int main()
//{  //function1과 2가 종속적이다. 1이 성공하지않으면 절대로 2를 실행하면 안되고 실행도 안된다. 즉 앞쪽에서 예외가 발생하면 더 이상 실행하면 안된다.
//	try 
//	{
//		function1(10);  //같은 블록안에 앞에서 예외가발생하면 다음문장은(function2) 실행이되지않는다.
//		function2(20);
//	}
//	catch (const char* ex)//문자열이 던져지고있음
//	{
//		cout << ex << "어떤 예외 발생!";
//	}
//	system("pause");
//}


//#include <iostream> //c++에서 제공하는 적정한 예외 처리
//#include <cstdlib> //적정한 처리를 만드는것이 예외처리
//using namespace std;
////server:클래스 예외 (throw) , client : try{} catch{}
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	////////기존에는 항상 오류값을 던졌음.
//	throw "function1을 수행!,예외상황 발생!";//예외 객체를 던진다., 다른문자는 문자열을못던지지만 c++만 가능,function1을 실행하다가 os가 오류뜸
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//int main()
//{
//	try // 
//	{
//		function1(10); 
//	}
//	catch (const char* ex)//문자열이 던져지고있음
//	{
//		cout <<ex<< "어떤 예외 발생!";
//	}
//	function2(20);
//
//	system("pause");
//}


//#include <iostream> //c++에서 제공하는 적정한 예외 처리
//#include <cstdlib> //적정한 처리를 만드는것이 예외처리
//using namespace std;
////server:클래스 예외 (throw) , client : try{} catch{}
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	////////기존에는 항상 오류값을 던졌음.
//	throw "function1을 수행!,예외상황 발생!";//예외 객체를 던진다., 다른문자는 문자열을못던지지만 c++만 가능,function1을 실행하다가 os가 오류뜸
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//int main()
//{
//try //예외가발생하면 여기서 잡음 
//{
//		function1(10); //function1을 실행하다가...라는 뜻임
//	}
//catch (...)//예외를 잡겠다 라는뜻 , 안에 ...도 같이쓰는 방법임
//{
//	cout << "어떤 예외 발생!";
//}
//function2(20);
//
//	system("pause");
//}


//#include <iostream> //c++에서 제공하는 적정한 예외 처리
//#include <cstdlib> //적정한 처리를 만드는것이 예외처리
//using namespace std;
////server:클래스 예외 (throw) , client : try{} catch{}
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	////////기존에는 항상 오류값을 던졌음.
//	throw "function1을 수행!,예외상황 발생!";//예외 객체를 던진다., 다른문자는 문자열을못던지지만 c++만 가능,function1을 실행하다가 os가 오류뜸
//	}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//int main()
//{
//	function1(10);
//	function2(20);
//	system("pause");
//}

//#include <iostream> //c++에서 제공하는 적정한 예외 처리
//#include <cstdlib> //적정한 처리를 만드는것이 예외처리
//using namespace std;
////server:클래스 예외 (throw) , client : try{} catch{}
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//int main()
//{
//	function1(10);
//	function2(20);
//	system("pause");
//}
///////////////////////////////////////////////////////////
//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm> //sort를 갖고있음.
//using namespace std;
//bool cmp(const int* a, const  int* b)
//{
//	if (*a < *b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//struct pred //클래스형 객체를 함수가능하도록 보낼수도있음.
//{
//	bool operator()(const int* a, const int* b)
//	{
//		return *a < *b; //내림차순은 부등호만 바뀌면됨.
//	}
//};
//int main()
//{
//	vector<int*> v;
//	v.push_back(new int(10));
//	v.push_back(new int(20));
//	v.push_back(new int(50));
//	v.push_back(new int(40));
//	v.push_back(new int(30));
//	cout << pred()(new int(10), new int(20)) << endl; //bool형식을 반환
//	cout << pred()(new int(50), new int(20)) << endl;
//	//predicate에 pred()를 넣어도 되고 cmp를 넣어도된다.
//	sort(v.begin(), v.end(), pred()); //원소를 정렬하는데 필요한 조건자(predicate)가 필요하다.즉 조건을 판단하는자 
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		cout << *v[i] << " ";
//	}
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		delete v[i];
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm> //sort를 갖고있음.
//using namespace std;
//bool cmp(const int* a,const  int* b)
//{
//	if (*a < *b)
//	{
//		return true;
//	}
//	else 
//	{
//		return false;
//	}
//}
//struct pred //클래스형 객체를 함수가능하도록 보낼수도있음.
//{
//	bool operator()(const int* a, const int* b)
//	{
//		return *a < *b;
//	}
//};
//int main()
//{
//	vector<int*> v;
//	v.push_back(new int(10));
//	v.push_back(new int(20));
//	v.push_back(new int(50));
//	v.push_back(new int(40));
//	v.push_back(new int(30));
//	cout << pred()(new int(10),new int (20)) << endl; //bool형식을 반환
//	cout << pred()(new int(50), new int(20)) << endl;
//	//predicate에 pred()를 넣어도 되고 cmp를 넣어도된다.
//	sort(v.begin(), v.end(),pred()); //원소를 정렬하는데 필요한 조건자(predicate)가 필요하다.즉 조건을 판단하는자 
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		cout << *v[i] << " ";
//	}
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		delete v[i];
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<int*> v;
//	v.push_back(new int(10));
//	v.push_back(new int(20));
//	v.push_back(new int(50));
//	v.push_back(new int(40));
//	v.push_back(new int(30));
//
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		cout << *v[i] << " ";
//	}
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		delete v[i];
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(30);
//
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//}