//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//template <typename T, typename K>
//void Print(T a, K b)
//{
//	cout << a << "," << b << endl;
//}
//int main()
//{
//	Print(10, 'A');
//	Print('A', 5.6);
//	Print(5.66, "Hello");
//	
//	Print<int,char>(10, 'A');
//	Print<char,double>('A', 5.6);
//	Print<double,const char*>(5.66, "Hello");
//	
//	cout << Print<int,char> << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//template <typename T,typename K>
//void Print(T a, K b)
//{
//	cout << a << "," << b << endl;
//}
//int main()
//{
//	Print(10, 'A');
//	Print('A', 5.6);
//	Print(5.66, "Hello");
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//template <typename T>
//void Swap(T& a,T& b)
//{
//	T n = a;
//	a = b;
//	b = n;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	double d1 = 5.67;
//	double d2 = 3.54;
//
//	Swap(a, b);
//	Swap(d1, d2);
//	cout << a << ',' << b << endl;
//	cout << d1 << ',' << d2 << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//template <typename T>  //Ŭ���̾�Ʈ�� ������ Ÿ���̶�� �� 
//void Print(T data)
//{
//	cout << typeid(T).name() << "" << data << endl;
//}
//int main()
//{
//	Print(100);//��¥ �Լ��� �̸�
//	Print<const char*>("Hello");
//	Print<double>(200);//�̷��� �Ǹ� �Լ��� 3�����Ǵ°��̰� <>�ȿ� int������ �ٲ��־���Ѵ�.
//	Print<int>('A'); //��������� ���� int���̶�� �����Ͽ��⶧���� ���������� ��µȴ�.
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//template <typename T>  //Ŭ���̾�Ʈ�� ������ Ÿ���̶�� �� 
//void Print(T data)
//{
//	cout << typeid(T).name() << "" << data << endl;
//}
//int main()
//{
//	Print<int>(100);//��¥ �Լ��� �̸�
//	Print<const char*>("Hello");
//	Print<double>(200);//�̷��� �Ǹ� �Լ��� 3�����Ǵ°��̰� <>�ȿ� int������ �ٲ��־���Ѵ�.
//	Print<char>('A'); 
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//template <typename T>  //Ŭ���̾�Ʈ�� ������ Ÿ���̶�� �� 
//void Print(T data)
//{
//	cout << typeid(T).name() << "" << data << endl;
//}
//int main()
//{
//	Print<int>(100);//��¥ �Լ��� �̸�
//	Print<const char*>("Hello");
//	Print<double>(7.89);
//	Print<char>('A'); //4���� �� ���� �ٸ��Լ��̴�.
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//template <typename T>  //Ŭ���̾�Ʈ�� ������ Ÿ���̶�� �� 
//void Print(T data)
//{
//	cout <<typeid(T).name()<<""<<data  << endl;
//}
//int main()
//{
//	Print(100);
//	Print("Hello");
//	Print(7.89);
//	Print('A');
//	system("pause");
//}


//#include <iostream>///���ø� : 1. �Լ� ���ø� 2.Ŭ���� ���ø�   //���ø��̶� ����ȭ�� Ʋ�� �ǹ��Ѵ�.�Լ��� ������ Ʋ
//#include <cstdlib>
//using namespace std;
//template <typename T>  //Ŭ���̾�Ʈ�� ������ Ÿ���̶�� �� 
//void Print(T data)
//{
//	cout << data<< endl;
//}
//int main() 
//{
//	Print(100);
//	Print("Hello");
//	Print(7.89);
//	Print('A');
//	system("pause");
//}



//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int a = 0, int b = 0) : x(a), y(b) {}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//	operator int()const
//	{
//		return x;
//	}
//};
//
//int main() //Ŭ������ȯ���� �ΰ��� ����� ����. a������ĺ������ִ��� operator�Լ� ��ȯ���ִ��� �ؾ���.
//{
//	Point p1(2, 3);
//	int x = (int)p1; //p1.operator int()�̰��� Ȯ���ؾ��Ұ� �׷��� ����Լ��� ��������.
//	cout << x << endl;
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String
//{
//	char* n;
//	int size;
//public:
//	String(int i) 
//	{
//		char temp[100];
//		sprintf_s(temp, "%d", i);
//		size = strlen(temp);
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, temp);
//
//	}
//	String(const char* a = "noname")
//	{
//		size = strlen(a);
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, a);
//	}
//	String(const String& arg)
//	{
//		size = arg.size;
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, arg.n);
//	}
//	~String()
//	{
//		delete[] n;
//	}
//	const char* c_str() const
//	{
//		return n;
//	}
//
//	const String& operator=(const String& arg)
//	{
//		delete[] n;
//		size = arg.size;
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, arg.n);
//		return *this;
//	}
//	const char operator[](int index)const
//	{
//		return n[index];
//	}
//};
//ostream& operator<<(ostream& o, const String& s) 
//{
//	o << s.c_str();
//	return o;
//}
//int main()
//{
//	String s = String("Hello");
//
//	s = 125;
//	cout << s << endl;
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String
//{
//	char* n;
//	int size;
//public:
//	String(const char* a = "noname")
//	{
//		size = strlen(a);
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, a);
//	}
//	String(const String& arg)
//	{
//		size = arg.size;
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, arg.n);
//	}
//	~String()
//	{
//		delete[] n;
//	}
//	const char* c_str() const
//	{
//		return n;
//	}
//
//	const String& operator=(const String& arg)
//	{
//		delete[] n;
//		size = arg.size;
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, arg.n);
//		return *this;
//	}
//	const char operator[](int index)const
//	{
//		return n[index];
//	}
//};
//ostream& operator<<(ostream& o, const String& s) //�길 ������ָ� ��
//{
//	o << s.c_str();
//	return o;
//}
//int main()
//{
//	String s = String("Hello");
//
//	s = "Hi~!";
//	cout << s << endl;
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String
//{
//	char* n;
//	int size;
//public:
//	explicit String(const char* a = "noname")//�ڵ����δ� �ȵȴ�. ��������θ� �ȴ� ��� �� 
//	{
//		size = strlen(a);
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, a);
//	}
//	String(const String& arg)
//	{
//		size = arg.size;
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, arg.n);
//	}
//	~String()
//	{
//		delete[] n;
//	}
//	const char* c_str() const
//	{
//		return n;
//	}
//
//	const String& operator=(const String& arg)
//	{
//		delete[] n;
//		size = arg.size;
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, arg.n);
//		return *this;
//	}
//	const char operator[](int index)const
//	{
//		return n[index];
//	}
//};
//ostream& operator<<(ostream& o, const String& s) //�길 ������ָ� ��
//{
//	o << s.c_str();
//	return o;
//}
//int main()
//{
//	String s = (String)"Hello";
//
//	s = (String)"Hi~!";  //s= "Hi~!" �����ڿ��� explicit�� ������ ������ ��������� Ŭ������ ���������.���ĺ�ȯ
//	cout << s << endl; 
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String 
//{
//	char* n;
//	int size;
//public:
//	explicit String(const char* a = "noname")//�ڵ����δ� �ȵȴ�. ��������θ� �ȴ� ��� �� 
//	{
//		size = strlen(a);
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, a);
//	}
//	String(const String& arg)  
//	{
//		size = arg.size;
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, arg.n);
//	}
//	~String()
//	{
//		delete[] n;
//	}
//	const char* c_str() const
//	{
//		return n;
//	}
//
//	const String& operator=(const String& arg)
//	{
//		delete[] n;
//		size = arg.size;
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, arg.n);
//		return *this;
//	}
//	const char operator[](int index)const 
//	{
//		return n[index];
//	}
//};
//ostream& operator<<(ostream& o, const String& s) //�길 ������ָ� ��
//{
//	o << s.c_str();//������ζ�� buf��� �����ּҸ� s.buf�� ���������ε� private�̹Ƿ� �����Ͽ� �����ٸ��� �Լ��� c_str�� ����� �������̴�.
//	return o;
//}
//int main()
//{
//	String s("Hello");
//
//	s = (String)"Hi~!";//s = "Hi~!";//������ �ȵǾ���.s�� string , hi~!�� char* �� �����̾ƿ��޶� �ȵǴ°� �´°�. �̰��� �������� �����Ϸ��� String("Hi~!")�� �Ǳ淡 �����Ѱ�.
//	cout << s.c_str() << endl;
//	cout << s << endl;  //�̷��� �ؼ� ��µǱ����� , s�� �������� ������ cout��ü �������� string ��ü. �׷��� �����Լ��ιۿ� ���������.
//	system("pause");
//}



//#include <iostream> //���ĺ�ȯ
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int a = 0, int b = 0) : x(a), y(b) {}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	p1 = (Point)10; p1 = Point(10); //����� ���ĺ�ȯ 
//	//p1 = 10;//Point(10);//�ӽð�ü�� ������ ��  , �̰��� ������ȣ���� �̿��� ���ĺ�ȯ 
//	p1.Print();
//	system("pause");
//}



//#include <iostream> //���ĺ�ȯ
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a=0, int b=0): x(a),y(b){}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	//���ĺ�ȯ �ΰ��� 1. �����(explicit) 2.�Ϲ���(imlicit)
//	p1 = 10;//Point(10);//�ӽð�ü�� ������ ��  , �̰��� ������ȣ���� �̿��� ���ĺ�ȯ 
//	p1.Print();
//	system("pause");
//}




//#include <iostream> //���ĺ�ȯ
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int ab):x(ab),y(ab){}
//	Point(int a, int b): x(a),y(b){}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	
//	p1 = 10;//Point(10);//�ӽð�ü�� ������ ��  , �̰��� ������ȣ���� �̿��� ���ĺ�ȯ 
//	p1.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib> 
//using namespace std;
//class Array
//{
//	int* buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap = 10)
//	{
//		capacity = cap;
//		buf = new int[cap];
//		size = 0;
//	}
//	Array(const Array& arg)
//
//	{
//		capacity = arg.capacity;
//		buf = new int[arg.capacity];
//		size = arg.size;
//		for (int i = 0; i < Size(); ++i)
//		{
//			buf[i] = arg.buf[i];
//		}
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(int n)
//	{
//		buf[size++] = n;
//	}
//	int Size() const  
//	{
//		return size;
//	}
//	int operator[](int index)const//int At(int index) const //�Ȱ���
//	{
//		return buf[index];
//	}
//};
//ostream& operator<<(ostream& out, const Array& arr)
//{
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		out << arr[i]<<"";
//	}
//	return out;
//}
//void main()
//{
//	Array arr(100);
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	cout << arr << endl; //�̰͵� ���׿����� ������ �����Լ� , �������� ����Լ� //operator<<(cout,arr).operator<<(endl);
//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String 
//{
//	char* n;
//	int size;
//public:
//	String(const char* a = "noname") 
//	{
//		size = strlen(a);
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, a);
//	}
//	String(const String& arg)  
//	{
//		size = arg.size;
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, arg.n);
//	}
//	~String()
//	{
//		delete[] n;
//	}
//	const char* c_str() const
//	{
//		return n;
//	}
//
//	const String& operator=(const String& arg)
//	{
//		delete[] n;
//		size = arg.size;
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, arg.n);
//		return *this;
//	}
//	const char operator[](int index)const 
//	{
//		return n[index];
//	}
//};
//ostream& operator<<(ostream& o, const String& s) //�길 ������ָ� ��
//{
//	o << s.c_str();
//	return o;
//}
//int main()
//{
//	String s("Hello");// String s= "Hello";
//	cout << s.c_str() << endl;
//	cout << s << endl;  //�̷��� �ؼ� ��µǱ����� , s�� �������� ������ cout��ü �������� string ��ü. �׷��� �����Լ��ιۿ� ���������.
//	system("pause");  //operator<<(cout,s).operator<<(endl);
//}



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a, int b) : x(a), y(b) {}
//
//	void Print()const
//	{
//		cout << x << "," << y << endl;
//	}
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	const Point operator+(int n)
//	{
//		return Point(x + n, y + n);
//	}
//};
//ostream& operator<<(ostream& o,const Point& pt) //cout, p1�� �޾��ذ�.
//{
//	o << pt.GetX() << ',' << pt.GetY(); //o�� cout��
//	return o;
//}
//int main()
//{
//	Point p1(2, 3);
//	cout << p1<< endl;
//	cout.operator<<(p1).operator<<(endl);//������ �Ǵµ� p1�� �ȵ�. p1�� �츮�� ���� Ŭ������ü.�츮�� ���� ����Լ��� �μ��� �޴°� ���̾ȵ�.
//    ����Լ� cout << p1; cout.operator<<(p1) �ȵ�. ���׿����ڴ� �ΰ��� ����̱⶧���� ����Լ��� �ȵǹǷ� �����Լ��� operator<<(cout,p1)
//	operator << (cout, p1).operator<<(endl); //������ �����Լ� �������� ����Լ��� ȣ���Ѱ��̰� ���� ����ڵ�� �Ȱ��� �ڵ��̴�
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a, int b) : x(a), y(b) {}
//
//	void Print()const
//	{
//		cout << x << "," << y << endl;
//	}
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	const Point operator+(int n)
//	{
//		return Point(x + n, y + n);
//	}
//};
//const Point operator+(int n, const Point& pt)
//{
//	return Point(n + pt.GetX(), n + pt.GetY());
//}
//int main()
//{
//	cout.operator<<(100).operator<<(endl); //���� �� / ���� ���ص���.
//	cout << 100;
//	cout << endl;
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a, int b) : x(a), y(b) {}
//
//	void Print()const
//	{
//		cout << x << "," << y << endl;
//	}
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	const Point operator+(int n)
//	{
//		return Point(x + n, y + n);
//	}
//};
//const Point operator+(int n, const Point& pt)
//{
//	return Point(n + pt.GetX(), n + pt.GetY());  
//}
//int main()  
//{
//	cout << 100 << endl; //�Ʒ��� ������
//	cout << 100; 
//	cout << endl;
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a, int b) : x(a), y(b) {}
//
//	void Print()const
//	{
//		cout << x << "," << y << endl;
//	}
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	const Point operator+(int n)
//	{
//		return Point(x + n, y + n);
//	}
//};
//const Point operator+(int n, const Point& pt)
//{
//	return Point(n + pt.GetX(),n+pt.GetY());  //���� Ŭ������ �ƴϹǷ� �ȵǼ� ���͸� �������.
//}
//int main() //���� 1.����Լ� 2, �����Լ�, �����Լ��� Ŭ�� �Լ��� �ƴ϶�� �����Լ��� ����Ѵ�. 
//{
//	Point p1(2, 3);
//	Point p2(4, 5);
//	//Point p3 = p1+10; // p1.operator(10)
//	Point p3 = 10 + p1; //�̰Ŵ� �ȵǴ� �ڵ���. ���ʰ�ü�� this��ü�� �ƴ϶� �޼����� �������� ����. operator+(10,p1)�� �����Լ���
//	p1.Print();
//	p2.Print();
//	p3.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a, int b) : x(a), y(b) {}
//
//	void Print()const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point operator+(int n)
//	{
//		return Point(x+n, y+n);
//	}
//};
//int main()
//{
//	Point p1(2, 3);
//	Point p2(4, 5);
//	Point p3 = p1 + 10;  //Point p3= p1.operartor+(10)
//	p1.Print();
//	p2.Print();
//	p3.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a, int b) : x(a), y(b) {}
//
//	void Print()const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator+(const Point& arg)
//	{
//		return Point(arg.x + x, arg.y + y);
//	}
//};
//int main()
//{
//	Point p1(2, 3);
//	Point p2(4, 5);
//	Point p3 = p1 + p2;  //p1.operator(p2)
//	p1.Print();
//	p2.Print();
//	p3.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class Point
//{
//	int x, y;
//public: 
//	Point(int a = 0, int b = 0) : x(a), y(b){}
//
//	void Print()const
//	{
//		cout << x << "," << y <<  endl;
//	}
//};
//int main()
//{
//	Point p1(2, 3);
//	Point p2(4, 5);
//
//	p1.Print();
//	p2.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String 
//{
//	char* n;
//	int size;
//public:
//	String(const char* a = "noname") //���ڿ��� �޾Ƽ� �ʱ�ȭ
//	{
//		size = strlen(a);
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, a);
//	}
//	String(const String& arg)  //�� ��ü�� �޾Ƽ� �ʱ�ȭ , �� �ڱ� �ڽ��� *this.
//	{
//		size = arg.size;
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, arg.n);
//	}
//	~String()
//	{
//		delete[] n;
//	}
//	const char* c_str() const
//	{
//		return n;
//	}
//
//	const String& operator=(const String& arg)
//	{
//		delete[] n;
//		size = arg.size;
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, arg.n);
//		return *this;
//	}
//	const char operator[](int index)const //�ߺ� ������
//	{
//		return n[index];
//	}
//};
//int main()
//{
//	String s = "Hello";
//	for (int i = 0; s[i]; ++i)
//	{
//		cout << s[i] << endl;
//	}
//	String s2("Hi~");  //���������, ���� ���Կ�����
//	cout << s2.c_str() << endl;
//	system("pause");
//}


//#include <iostream>  // ���� = 1. ��������� 2. ���� ���Կ�����
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String 
//	char* n;
//	int size;
//public:
//	String(const char* a = "noname") //���ڿ��� �޾Ƽ� �ʱ�ȭ
//	{
//		size = strlen(a);
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, a);
//	}
//	String(const String& arg)  //���������
//	{
//		size = arg.size;
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, arg.n);
//	}
//	~String()
//	{
//		delete[] n;
//	}
//	const char* c_str() const
//	{
//		return n;
//	}
//
//	const String& operator=(const String& arg) //���� ���Կ�����
//	{
//		delete[] n;
//		size = arg.size;
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, arg.n);
//		return *this;
//
//	}
//};
//int main()
//{
//	String s = "Hello";
//	cout << s.c_str() << endl;
//
//	String s2 ("Hi~");  //���������, ���� ���Կ�����
//	cout << s2.c_str() << endl;
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String 
//{
//	char* n;
//	int size;
//public:
//	String(const char* a = "noname") //���ڿ��� �޾Ƽ� �ʱ�ȭ
//	{
//		size = strlen(a);
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, a);
//	}
//	String(const String& arg)  //�� ��ü�� �޾Ƽ� �ʱ�ȭ , �� �ڱ� �ڽ��� *this.
//	{
//		size = arg.size;
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, arg.n);
//	}
//	~String()
//	{
//		delete[] n;
//	}
//	const char* c_str() const
//	{
//		return n;
//	}
//};
//int main()
//{
//	String s = "Hello";
//	cout << s.c_str() << endl;
//
//	String s2 = s;  //���������, ���� ���Կ�����
//	cout << s2.c_str() << endl;
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String 
//{
//	char* n;
//	int size;
//public:
//	String(const char* a = "noname") 
//	{
//		size = strlen(a);
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, a);
//	}
//	~String()
//	{
//		delete[] n;
//	}
//	const char* c_str() const
//	{
//		return n;
//	}
//};
//int main()
//{
//	String s = "Hello";
//
//	cout << s.c_str() << endl;
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String //��ü�� �´´� ����������. ������ ���ۿ� ������.
//{
//	char n[100];
//public:
//	String(const char* a = "noname") //�����ڸ� ���������:�ʱ�ȭ
//	{
//		strcpy_s(n,strlen(a)+1,a);
//	}
//	const char* c_str() const 
//	{
//		return n;
//	}
//};
//int main()
//{
//	String s = "Hello"; 
//
//	cout << s.c_str() << endl; 
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;//�Լ��� ������ٶ� �����ϱ����ؼ�,���ο��� ����ϴ� ����̸����� std�������� �������.
//class String //Ŭ������ ����������� �߻�ȭ�� �� ���մ�. ��ü���� �߻�ȭ�� ���ǰ� Ŭ����
//{
//	char* n;
//public:
//	String(const char* a="noname") //�����ڸ� ���������:�ʱ�ȭ
//	{
//		//const�� ���� �ȵ�n = a;
//		n = (char*)a;
//	}
//	const char* c_str() const //���⼭�� �ڵ带 ������ �׳� �ּҸ� ����Ű���ִ°��̴�. �ܺ��ǻ��¸� ���� ��ü�� ����Ű��������, ���� ������� �𸣱⶧���̴�.
//	{  //�� ���¸� ���ڽ��� ���������� �������̴�.
//		return n;
//	}
//};
//int main()
//{
//	String s = "Hello"; //String s("Hello")c++ ��Ÿ��//��Ʈ��Ŭ���� ����°� ���迡 ����
//	
//	cout << s.c_str() << endl; //c_str�� c��Ÿ���� ���ڿ��� ��� ��� �� , ���� 
//	system("pause");
//}