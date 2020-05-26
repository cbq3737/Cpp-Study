//#include <iostream> 
//#include <cstdlib> 
//#include <cstring> 
//#include <string>
//using namespace std;
//class String
//{
//	char* buf;
//public:
//	String(const char* s = " ") //explicit�� ���ؼ� �Ϲ������� ���Ѵ�.
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
//	const String str2 = "Hello!!"; //����� ���� Ÿ��
//
//	PrintString(string(s));//string ��ü�� ���� ȣ�� //char*  ������ stringŸ���̴� �ֳ��ϸ� ���ĺ�ȯ �ɲ��ϱ�
//	PrintString(string(arr));   //char*Ÿ��,
//	PrintString(str);   //string��Ÿ��
//	PrintString(str2);   //���� ������ ���������� �Լ� , ������ �Ʒ��ϳ��� �����ٸ� ������ �Լ�
//	system("pause");  
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <cstring> 
//#include <string>
//using namespace std;
//void PrintString(const string& s) //s�� string ��ü�ε� ����Ǹ� �ȵǱ⿡ &�� ������ 
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
//	PrintString(s);//string ��ü�� ���� ȣ�� //char*
//	PrintString(arr);   //char*Ÿ��
//	PrintString(str);   //string��Ÿ��
//	system("pause");
//}



//#include <iostream> 
//#include <cstdlib> 
//#include <cstring> 
//#include <string>
//using namespace std;
//void PrintString(const string& s) //s�� string ��ü�ε� ����Ǹ� �ȵǱ⿡ &�� ������ 
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
//	PrintString(string(s));//string ��ü�� ���� ȣ��
//	PrintString(string(arr));
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <cstring> 
//#include <string>
//using namespace std;
//void PrintString(const string s)//string ���� �ٲ㵵 ����� ���� 
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
//void PrintString(const char* s) //������ �ϳ��� ����ϰ������
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
//#include <functional> //greater<int>()�� ����ϱ� ���ؼ� ����.
//using namespace std;
//template <typename T>
//struct Greater //x�� �������� y�� ��������
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
//	//v.end(), less <int>()); //a<b�� less �� �������� , a>b�� greater �� �������� �̴�
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
//#include <functional> //greater<int>()�� ����ϱ� ���ؼ� ����.
//using namespace std;
//template <typename T>
//struct Greater //10������ ũ��񱳰� ���̰� �ȳ����� �ϱ�
//{
//	bool operator()(const T& a, const T& b)const
//	{
//		return a/10 > b/10;
//		//return a/100 <b/100 �� 100�Ǵ����� �Ǵ��Ҷ� ���
//	}
//};
//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 1000; ++i)
//	{
//		v.push_back(rand() % 10000);
//	}
//	sort(v.begin(), v.end(), Greater<int>()); //������������
//	//sort(v.begin(), v.end(), less <int>()); //a<b�� less �� �������� , a>b�� greater �� �������� �̴�
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
//#include <functional> //greater<int>()�� ����ϱ� ���ؼ� ����.
//using namespace std;
//bool cmp(const int a, const int b)
//{
//	return a > b;
//}
//struct Pred //�̰Ŵ� ��ü������ �ϴ°�.
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
//	//sort(v.begin(), v.end(), greater<int>()); //������������
//	sort(v.begin(), v.end(), less <int>()); //a<b�� less �� �������� , a>b�� greater �� �������� �̴�
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
//struct Pred //�̰Ŵ� ��ü������ �ϴ°�.
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
//	sort(v.begin(), v.end(),Pred()); //������������
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
//	sort(v.begin(), v.end()); //����
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
//		fun(*siter);   //siter�� �����ҿ� ���ؼ� ��¶�, *siter�� ������ �ǹ��Ѵ�.fun(*siter)�� ����� �����϶��� ��
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
//			fun(*siter);   //siter�� �����ҿ� ���ؼ� ��¶�, *siter�� ������ �ǹ��Ѵ�.fun(*siter)�� ����� �����϶��� ��
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
//			fun(*siter);   //siter�� �����ҿ� ���ؼ� ��¶�, *siter�� ������ �ǹ��Ѵ�.fun(*siter)�� ����� �����϶��� ��
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
//		fun(*siter);   //siter�� �����ҿ� ���ؼ� ��¶�, *siter�� ������ �ǹ��Ѵ�.fun(*siter)�� ����� �����϶��� ��
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
//	fun(*siter);   //siter�� �����ҿ� ���ؼ� ��¶�, *siter�� ������ �ǹ��Ѵ�.fun(*siter)�� ����� �����϶��� ��
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


//#include <iostream> //�Ʒ��� ��� ���̴��� ���̴� �غ�ܰ�
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
//	const type_info& ti = typeid(int); //typeinfo��ü�� �����Ҽ����� �����Ҽ�����. �׷��� �ݵ��const��ü���߸��Ѵ�.
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
//	cout << typeid(int).name() << endl;//typeid�� ������
//	cout << typeid(double).name() << endl;
//	cout << typeid(int*).name() << endl;
//	cout << typeid(double*).name() << endl;
////int�� Ÿ�԰�ü�ε� �ű⿡ name�̶�� �޼ҵ�� �̸��� �����
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <string>
//#include <exception>
//using namespace std;
//class ExF1 :public exception //exception�ҹ���
//{
//	string msg;
//public:
//	ExF1(const char* s) : msg(s) {}
//	const char* what() const //what()��ӵǾ��ִ� �޼ҵ���� �ҹ��ڴ�
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
//	throw ExF1("fuction1 ���ܹ߻�");
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//	throw ExF2("fuction2 ���ܹ߻�");
//}
//int main()
//{
//	try //���������ڵ�� try���� �������־���ϰ� ������ ���� �پ��־���Ѵ�.
//	{
//		function1(10);
//		function2(20);
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl; //what�޼ҵ�� �����Ǿ� �־���Ѵ�.
//	}
//	catch (...) 
//	{
//		cout << "����" << endl;
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
//	throw ExF1("fuction1 ���ܹ߻�");  
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//	throw ExF2("fuction2 ���ܹ߻�");
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
//	catch (...) //Ȥ�ó� ó���������Ѿֵ��������� �θ������ϰ� �� ó���϶�¶�
//	{
//		cout << "����" << endl;
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
//		//throw ExF1("fuction1 ���ܹ߻�");  
//	}
//	void function2(int n)
//	{
//		cout << "function2 : " << n << endl;
//		throw ExF2("fuction2 ���ܹ߻�");
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
//		catch (...) //Ȥ�ó� ó���������Ѿֵ��������� �θ������ϰ� �� ó���϶�¶�
//		{
//			cout << "����" << endl;
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
//	throw ExF1("fuction1 ���ܹ߻�");  //Ŭ���̾�Ʈ���� ��ü�� ���� ����ó�� �˾Ƽ� �϶�� �����ذ�.
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//int main()
//{  //function1�� 2�� �������̴�. 1�� �������������� ����� 2�� �����ϸ� �ȵǰ� ���൵ �ȵȴ�. �� ���ʿ��� ���ܰ� �߻��ϸ� �� �̻� �����ϸ� �ȵȴ�.
//	try //Ȥ�� ���ܰ� �߻��ϸ� ������ �˷��ٷ�?��¶�, �ϴ� �غ��� ��� ��
//	{
//		function1(10);
//		function2(20);
//	}
//	catch (const ExF1& e)//f1��ü�� �������� ��ƶ�
//	{//���⼭ �Ʒ����� ó�� �ڵ�, Exf1�� ���ܶ�°��� ������ ó�����Ѵ�.
//		cout << e.what() << endl;
//	}
//	catch (...)
//	{
//		cout << "����" << endl;
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
//		return msg.c_str(); //�̸��� ����̾���.
//	}
//};
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	throw ExF1("fuction1 ���ܹ߻�");  //���ܰ��߻��ϸ� ��������� ExF1�� ����Ѵ�.
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//int main()
//{  //function1�� 2�� �������̴�. 1�� �������������� ����� 2�� �����ϸ� �ȵǰ� ���൵ �ȵȴ�. �� ���ʿ��� ���ܰ� �߻��ϸ� �� �̻� �����ϸ� �ȵȴ�.
//	try
//	{
//		function1(10);  
//		function2(20);
//	}
//	catch (const char* ex)
//	{
//		cout << ex << endl;
//	}
//	catch (...)//������ ���� ��� , ...�� ����´ٴ� ��
//	{
//		cout << "����" << endl;
//	}
//	system("pause");
//}


//#include <iostream> //c++���� �����ϴ� ������ ���� ó��
//#include <cstdlib> //������ ó���� ����°��� ����ó��
//using namespace std;
////server:Ŭ���� ���� (throw) , client : try{} catch{}
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	////////�������� �׻� �������� ������.
//	throw "function1�� ����!,���ܻ�Ȳ �߻�!";//���� ��ü�� ������., �ٸ����ڴ� ���ڿ������������� c++�� ����,function1�� �����ϴٰ� os�� ������
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//int main()
//{  //function1�� 2�� �������̴�. 1�� �������������� ����� 2�� �����ϸ� �ȵǰ� ���൵ �ȵȴ�. �� ���ʿ��� ���ܰ� �߻��ϸ� �� �̻� �����ϸ� �ȵȴ�.
//	try 
//	{
//		function1(10);  //���� ��Ͼȿ� �տ��� ���ܰ��߻��ϸ� ����������(function2) �����̵����ʴ´�.
//		function2(20);
//	}
//	catch (const char* ex)//���ڿ��� ������������
//	{
//		cout << ex << "� ���� �߻�!";
//	}
//	system("pause");
//}


//#include <iostream> //c++���� �����ϴ� ������ ���� ó��
//#include <cstdlib> //������ ó���� ����°��� ����ó��
//using namespace std;
////server:Ŭ���� ���� (throw) , client : try{} catch{}
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	////////�������� �׻� �������� ������.
//	throw "function1�� ����!,���ܻ�Ȳ �߻�!";//���� ��ü�� ������., �ٸ����ڴ� ���ڿ������������� c++�� ����,function1�� �����ϴٰ� os�� ������
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
//	catch (const char* ex)//���ڿ��� ������������
//	{
//		cout <<ex<< "� ���� �߻�!";
//	}
//	function2(20);
//
//	system("pause");
//}


//#include <iostream> //c++���� �����ϴ� ������ ���� ó��
//#include <cstdlib> //������ ó���� ����°��� ����ó��
//using namespace std;
////server:Ŭ���� ���� (throw) , client : try{} catch{}
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	////////�������� �׻� �������� ������.
//	throw "function1�� ����!,���ܻ�Ȳ �߻�!";//���� ��ü�� ������., �ٸ����ڴ� ���ڿ������������� c++�� ����,function1�� �����ϴٰ� os�� ������
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//int main()
//{
//try //���ܰ��߻��ϸ� ���⼭ ���� 
//{
//		function1(10); //function1�� �����ϴٰ�...��� ����
//	}
//catch (...)//���ܸ� ��ڴ� ��¶� , �ȿ� ...�� ���̾��� �����
//{
//	cout << "� ���� �߻�!";
//}
//function2(20);
//
//	system("pause");
//}


//#include <iostream> //c++���� �����ϴ� ������ ���� ó��
//#include <cstdlib> //������ ó���� ����°��� ����ó��
//using namespace std;
////server:Ŭ���� ���� (throw) , client : try{} catch{}
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	////////�������� �׻� �������� ������.
//	throw "function1�� ����!,���ܻ�Ȳ �߻�!";//���� ��ü�� ������., �ٸ����ڴ� ���ڿ������������� c++�� ����,function1�� �����ϴٰ� os�� ������
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

//#include <iostream> //c++���� �����ϴ� ������ ���� ó��
//#include <cstdlib> //������ ó���� ����°��� ����ó��
//using namespace std;
////server:Ŭ���� ���� (throw) , client : try{} catch{}
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
//#include <algorithm> //sort�� ��������.
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
//struct pred //Ŭ������ ��ü�� �Լ������ϵ��� ������������.
//{
//	bool operator()(const int* a, const int* b)
//	{
//		return *a < *b; //���������� �ε�ȣ�� �ٲ���.
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
//	cout << pred()(new int(10), new int(20)) << endl; //bool������ ��ȯ
//	cout << pred()(new int(50), new int(20)) << endl;
//	//predicate�� pred()�� �־ �ǰ� cmp�� �־�ȴ�.
//	sort(v.begin(), v.end(), pred()); //���Ҹ� �����ϴµ� �ʿ��� ������(predicate)�� �ʿ��ϴ�.�� ������ �Ǵ��ϴ��� 
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
//#include <algorithm> //sort�� ��������.
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
//struct pred //Ŭ������ ��ü�� �Լ������ϵ��� ������������.
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
//	cout << pred()(new int(10),new int (20)) << endl; //bool������ ��ȯ
//	cout << pred()(new int(50), new int(20)) << endl;
//	//predicate�� pred()�� �־ �ǰ� cmp�� �־�ȴ�.
//	sort(v.begin(), v.end(),pred()); //���Ҹ� �����ϴµ� �ʿ��� ������(predicate)�� �ʿ��ϴ�.�� ������ �Ǵ��ϴ��� 
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