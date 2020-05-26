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
//template <typename T>  //클라이언트가 결정한 타입이라는 뜻 
//void Print(T data)
//{
//	cout << typeid(T).name() << "" << data << endl;
//}
//int main()
//{
//	Print(100);//진짜 함수의 이름
//	Print<const char*>("Hello");
//	Print<double>(200);//이렇게 되면 함수가 3개가되는것이고 <>안에 int형으로 바꿔주어야한다.
//	Print<int>('A'); //명시적으로 내가 int형이라고 선언하였기때문에 정수형으로 출력된다.
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//template <typename T>  //클라이언트가 결정한 타입이라는 뜻 
//void Print(T data)
//{
//	cout << typeid(T).name() << "" << data << endl;
//}
//int main()
//{
//	Print<int>(100);//진짜 함수의 이름
//	Print<const char*>("Hello");
//	Print<double>(200);//이렇게 되면 함수가 3개가되는것이고 <>안에 int형으로 바꿔주어야한다.
//	Print<char>('A'); 
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//template <typename T>  //클라이언트가 결정한 타입이라는 뜻 
//void Print(T data)
//{
//	cout << typeid(T).name() << "" << data << endl;
//}
//int main()
//{
//	Print<int>(100);//진짜 함수의 이름
//	Print<const char*>("Hello");
//	Print<double>(7.89);
//	Print<char>('A'); //4개가 다 전혀 다른함수이다.
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//template <typename T>  //클라이언트가 결정한 타입이라는 뜻 
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


//#include <iostream>///템플릿 : 1. 함수 템플릿 2.클래스 템플릿   //템플릿이란 정형화된 틀을 의미한다.함수를 만들어내는 틀
//#include <cstdlib>
//using namespace std;
//template <typename T>  //클라이언트가 결정한 타입이라는 뜻 
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
//int main() //클래스변환에는 두가지 방법이 있음. a라는형식변수가있던가 operator함수 변환이있던가 해야함.
//{
//	Point p1(2, 3);
//	int x = (int)p1; //p1.operator int()이것을 확인해야할것 그래서 멤버함수를 만들어야함.
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
//ostream& operator<<(ostream& o, const String& s) //얘만 만들어주면 됨
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
//	explicit String(const char* a = "noname")//자동으로는 안된다. 명시적으로만 된다 라는 뜻 
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
//ostream& operator<<(ostream& o, const String& s) //얘만 만들어주면 됨
//{
//	o << s.c_str();
//	return o;
//}
//int main()
//{
//	String s = (String)"Hello";
//
//	s = (String)"Hi~!";  //s= "Hi~!" 생성자에서 explicit를 붙혔기 때문에 명시적으로 클래스를 적어줘야함.형식변환
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
//	explicit String(const char* a = "noname")//자동으로는 안된다. 명시적으로만 된다 라는 뜻 
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
//ostream& operator<<(ostream& o, const String& s) //얘만 만들어주면 됨
//{
//	o << s.c_str();//원래대로라면 buf라는 시작주소를 s.buf로 적기위함인데 private이므로 사용못하여 보내줄만한 함수를 c_str을 만들어 보낸것이다.
//	return o;
//}
//int main()
//{
//	String s("Hello");
//
//	s = (String)"Hi~!";//s = "Hi~!";//원래는 안되야함.s는 string , hi~!는 char* 임 형식이아예달라서 안되는게 맞는것. 이것은 된이유가 컴파일러가 String("Hi~!")가 되길래 적용한것.
//	cout << s.c_str() << endl;
//	cout << s << endl;  //이렇게 해서 출력되기위함 , s를 기준으로 왼쪽은 cout객체 오른쪽은 string 객체. 그래서 전역함수로밖에 만들수없다.
//	system("pause");
//}



//#include <iostream> //형식변환
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
//	p1 = (Point)10; p1 = Point(10); //명시적 형식변환 
//	//p1 = 10;//Point(10);//임시객체를 만들어내는 것  , 이것이 생성자호출을 이용한 형식변환 
//	p1.Print();
//	system("pause");
//}



//#include <iostream> //형식변환
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
//	//형식변환 두가지 1. 명시적(explicit) 2.암묵적(imlicit)
//	p1 = 10;//Point(10);//임시객체를 만들어내는 것  , 이것이 생성자호출을 이용한 형식변환 
//	p1.Print();
//	system("pause");
//}




//#include <iostream> //형식변환
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
//	p1 = 10;//Point(10);//임시객체를 만들어내는 것  , 이것이 생성자호출을 이용한 형식변환 
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
//	int operator[](int index)const//int At(int index) const //똑같음
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
//	cout << arr << endl; //이것도 이항연산자 왼쪽은 전역함수 , 오른쪽은 멤버함수 //operator<<(cout,arr).operator<<(endl);
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
//ostream& operator<<(ostream& o, const String& s) //얘만 만들어주면 됨
//{
//	o << s.c_str();
//	return o;
//}
//int main()
//{
//	String s("Hello");// String s= "Hello";
//	cout << s.c_str() << endl;
//	cout << s << endl;  //이렇게 해서 출력되기위함 , s를 기준으로 왼쪽은 cout객체 오른쪽은 string 객체. 그래서 전역함수로밖에 만들수없다.
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
//ostream& operator<<(ostream& o,const Point& pt) //cout, p1을 받아준것.
//{
//	o << pt.GetX() << ',' << pt.GetY(); //o가 cout임
//	return o;
//}
//int main()
//{
//	Point p1(2, 3);
//	cout << p1<< endl;
//	cout.operator<<(p1).operator<<(endl);//정수는 되는데 p1은 안됨. p1은 우리가 만든 클래스객체.우리가 만든 멤버함수를 인수로 받는게 말이안됨.
//    멤버함수 cout << p1; cout.operator<<(p1) 안됨. 이항연산자는 두가지 방법이기때문에 멤버함수가 안되므로 전역함수인 operator<<(cout,p1)
//	operator << (cout, p1).operator<<(endl); //왼쪽은 전역함수 오른쪽은 멤버함수를 호출한것이고 위에 출력코드랑 똑같은 코드이다
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
//	cout.operator<<(100).operator<<(endl); //같은 말 / 굳이 안해도됌.
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
//	cout << 100 << endl; //아래와 같은말
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
//	return Point(n + pt.GetX(),n+pt.GetY());  //같은 클래스가 아니므로 안되서 게터를 만들어줌.
//}
//int main() //이항 1.멤버함수 2, 전역함수, 왼쪽함수가 클라스 함수가 아니라면 전역함수를 사용한다. 
//{
//	Point p1(2, 3);
//	Point p2(4, 5);
//	//Point p3 = p1+10; // p1.operator(10)
//	Point p3 = 10 + p1; //이거는 안되는 코드임. 왼쪽객체가 this객체가 아니라 메세지를 보내지를 못함. operator+(10,p1)얜 전역함수임
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
//	String(const char* a = "noname") //문자열을 받아서 초기화
//	{
//		size = strlen(a);
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, a);
//	}
//	String(const String& arg)  //내 객체를 받아서 초기화 , 즉 자기 자신은 *this.
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
//	const char operator[](int index)const //중복 연산자
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
//	String s2("Hi~");  //복사생성자, 복사 대입연산자
//	cout << s2.c_str() << endl;
//	system("pause");
//}


//#include <iostream>  // 복사 = 1. 복사생성자 2. 복사 대입연산자
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String 
//	char* n;
//	int size;
//public:
//	String(const char* a = "noname") //문자열을 받아서 초기화
//	{
//		size = strlen(a);
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, a);
//	}
//	String(const String& arg)  //복사생성자
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
//	const String& operator=(const String& arg) //복사 대입연산자
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
//	String s2 ("Hi~");  //복사생성자, 복사 대입연산자
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
//	String(const char* a = "noname") //문자열을 받아서 초기화
//	{
//		size = strlen(a);
//		n = new char[size + 1];
//		strcpy_s(n, size + 1, a);
//	}
//	String(const String& arg)  //내 객체를 받아서 초기화 , 즉 자기 자신은 *this.
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
//	String s2 = s;  //복사생성자, 복사 대입연산자
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
//class String //객체는 맞는대 단점이있음. 정해진 수밖에 못만듬.
//{
//	char n[100];
//public:
//	String(const char* a = "noname") //생성자를 만드는이유:초기화
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
//using namespace std;//함수에 사용해줄때 생략하기위해서,내부에서 사용하는 모든이름들이 std공간내에 들어있음.
//class String //클래스를 만드는이유는 추상화로 볼 수잇다. 객체들의 추상화의 정의가 클래스
//{
//	char* n;
//public:
//	String(const char* a="noname") //생성자를 만드는이유:초기화
//	{
//		//const로 인해 안됨n = a;
//		n = (char*)a;
//	}
//	const char* c_str() const //여기서만 코드를 끝내면 그냥 주소만 가르키고있는것이다. 외부의상태를 단지 객체가 가르키고있을뿐, 언제 변경될지 모르기때문이다.
//	{  //즉 상태를 내자신이 가지고있지 않은것이다.
//		return n;
//	}
//};
//int main()
//{
//	String s = "Hello"; //String s("Hello")c++ 스타일//스트링클래스 만드는것 시험에 나옴
//	
//	cout << s.c_str() << endl; //c_str은 c스타일의 문자열을 줘라 라는 뜻 , 게터 
//	system("pause");
//}