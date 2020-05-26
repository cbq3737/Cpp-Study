#include <iostream> 
#include <cstdlib>
using namespace std;
struct Point  
{
	int x;
	int y;

	void Set(int x, int y)
	{
		(*this).x = x; //자신의것 x와 y를 넣음. this가 주소인 이유가 struct pt자체에서 안에서 하기때문에 자기자신의 주소를 나타내주는것이다. 
		(*this).y = y;
	}
	void Print()
	{
		cout << "(" << (*this).x << ',' << (*this).y << ")" << endl;
	}
};
void main()
{
	Point pt;

	pt.Set(2, 3);  //pt에 2,3을 설정해라
	pt.Print();  //pt를 출력해라.
	system("pause");
}



//#include <iostream> 
//#include <cstdlib>
//using namespace std;  //struct 선언할때 함수안에 넣어야하는 함수.
//struct Point
//{
//	int x;
//	int y;
//
//	void SetPoint(int x, int y)
//	{
//	(*this).x = x; //자신의것 x와 y를 넣음. this = &pt
//	(*this).y = y;
//	}
//	void PrintPoint()
//	{
//		cout << "(" << (*this).x << ',' << (*this).y << ")" << endl;
//	}
//};
//void main()
//{
//	Point pt;
//
//	pt.SetPoint(2, 3);  //pt에 2,3을 설정해라
//	pt.PrintPoint();  //pt를 출력해라.
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//struct Point
//{
//	int x;
//	int y;
//};
//void SetPoint(Point* p, int x, int y)
//{
//	(*p).x = x;
//	(*p).y = y;
//}
//void PrintPoint(const Point* p) //입력받고 출력해야하기 때문에 const를 붙힘. 
//{
//	cout << "(" << (*p).x << ',' << (*p).y << ")" << endl;
//
//}
//void main()
//{
//	Point pt;
//
//	SetPoint(&pt, 2, 3);
//	PrintPoint(&pt);
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//struct Point
//{
//	int x;
//	int y;
//};
//void SetPoint(Point* p, int a, intb)
//{
//	(*p).x = a;
//	(*p).y = b;
//}
//void PrintPoint(Point* p)
//{
//	cout <<"("<< (*p).x << ',' << (*p).y <<")"<< endl;
//
//}
//void main()
//{
//	Point* p = new Point;
//	SetPoint(p, 2, 3);
//	PrintPoint(p);
//	delete p;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//struct Point
//{
//	int x;
//	int y;
//};
//void main()
//{
//	Point* p = new Point;  
//	(*p).x = 10;
//	(*p).y = 20;
//	cout << (*p).x << ',' << (*p).y << endl;
//	delete p;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//struct Point
//{
//	int x;
//	int y;
//};
//void main()
//{
//	Point pt = { 2,3 };  //tydef안써도됌.
//	cout << pt.x << "," << pt.y << endl;
//	system("pause");
//}



//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//int* AllocArray(int n)
//{
//	return new int[n];
//}
//void DeleteArray(int* p)
//{
//	delete[]p;
//}
//void main()
//{
//	int* p = AllocArray(10);  //여러개의 원소를 만들시  
//	int i;
//	for (i = 0; i < 10; ++i)
//	{
//		p[i] = i + 1;
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		cout << p[i] << endl;
//	}
//	DeleteArray(p); //위에서 대괄호가 나올시 꼭 똑같이 나와야한다.
//	system("pause");
//}



//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//
//void main()
//{
//	int* p = new int[10];  //여러개의 원소를 만들시  
//	int i;
//	for (i = 0; i < 10; ++i)
//	{
//		p[i] = i + 1;
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		cout << p[i] << endl;
//	}
//	delete []p; //위에서 대괄호가 나올시 꼭 똑같이 나와야한다.
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//
//void main()
//{
//	int* p = new int[10];  //여러개의 원소를 만들시  
//	int i;
//	for (i = 0; i < 10; ++i)
//	{
//		p[i] = i + 1;            //값 정의
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		cout << p[i] << endl;   //출력
//	}
//	delete p; //free
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//
//void main()
//{
//	int* p = new int;  //c언어로 치면 malloc 
//	
//	*p = 10;
//	cout << *p << endl;
//	delete p; //free
//	system("pause");
//}



//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void Increment(int& n)  //변경되어 출력하는것이기때문에 const를 쓰면 안된다. 
//{
//	n = n + 1;
//}
//int main()
//{
//	int n = 0;
//	Increment(n);
//	Increment(n);
//	Increment(n);
//	cout << n << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//int Increment(int n)
//{
//	return n + 1;
//}
//int main()
//{
//	int n = 0;
//	n = Increment(n);
//	n = Increment(n);
//	n = Increment(n);
//	cout << n << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void InitArray(int* arr, int size)
//{
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		arr[i] = i + 1;
//	}
//}
//void PrintArray(const int* arr, int size) //입력받는거여서 변경될수있다는 위험때문에 const를 붙힌다.
//{
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		cout << arr[i] << endl;
//	}
//}
//int main()
//{
//	int arr[5] = { 0 };
//	InitArray(arr, 5); //초기화하는 함수
//	PrintArray(arr, 5); //출력하는 함수
//	system("pause");
//	//return 0; 위에 int main이기때문에 생략되어있다.
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void Add(const int* pa,const int* pb, int* psum)  //const를 붙힌 이유는 읽어오는것이기때문에 붙히는것,함수안에서 그값이 바뀌면 안되기때문에 붙이는것이고 psum은 쓰여지는것이기때문에 붙히지 않는다.
//{
//	*psum = *pa + *pb;
//}
//void main()
//{
//	int a = 10;
//	int b = 20;
//	int sum;
//	Add(&a, &b, &sum);
//
//	cout << "sum=" << sum << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void Add(int* pa, int* pb, int* psum)
//{
//	*psum = *pa + *pb;
//}
//void main()
//{
//	int a = 10;
//	int b = 20;
//	int sum;
//	Add(&a, &b, &sum);
//
//	cout << "sum=" << sum << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void PrintString(const char* s)  
//{
//	cout << s << endl;
//}
//
//void main()
//{
//	const char* s = "Hello!";
//
//	PrintString(s);
//	PrintString("HI~!");
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void main()
//{
//	const char* s = "Hello!";
//	//s[0] = 'S'; //컴파일은 인식을 하지만원래는 안됨.위에 문장이 상수열이기때문에 안됨. 그래서 const를 붙힘.
//	cout << s << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void main()
//{
//	int n = 10;
//	const int* const p = &n;  // 2. int* const p=&n , 3.const int* const p=&n 다됨. 이것의 이유는 const를 1번처럼 붙이면 int형을 못바꾸고 2번처럼 붙히면 p를 못바꾼다고 생각하면 됨. 3번은 값변경 주소변경 다 안됨.
//	//*p = 20;  
//	int m = 90;
//	//p = &m;
//	cout << n << ',' << *p << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void main()
//{
//	int n = 10;
//	const int* p = &n;  // 2. int* const p=&n , 3.const int* const p=&n 다됨. 이것의 이유는 const를 1번처럼 붙이면 int형을 못바꾸고 2번처럼 붙히면 p를 못바꾼다고 생각하면 됨. 
//	//*p = 20;  //안됨
//	int m = 90;
//	p = &m;
//	cout << n << ',' << *p << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void main()
//{
//	int n = 10;
//	const int cn = 30;  //const는 상수
//	//cn = 20;  상수이기에 안됌.
//		cout << n << ',' << cn << endl;
//		system("pause");
//}



//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//namespace MyA
//{
//	void Print(int data)
//	{
//		cout << "MyA:" << data << endl;
//	}
//}
//namespace MyB
//{
//	void Print(int data)
//	{
//		cout << "MyB:" << data << endl;
//	}
//}
////using MyA::Print;  //이렇게도 쓸수있음. MyA에 안에있는 Print를 쓰겠다. 
//using namespace MyA; //이것은 다 열어논것.
//void main()
//{
//	Print(100);
//	MyB::Print(200);
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//namespace MyA
//{
//	void Print(int data)
//	{
//		cout << "MyA:" << data << endl;
//	}
//}
//namespace MyB
//{
//	void Print(int data)
//	{
//		cout << "MyB:" << data << endl;
//	}
//}
//void main()
//{
//	MyA::Print(100);
//	MyB::Print(200);
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void Swap(int& a, int& b) //참조를 사용
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
////void Swap(int* a, int* b) 이게 했던것.
////{
////	int temp = *a;
////	*a = *b;
////	*b = temp;
////}
//void main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(a, b);
//	cout << a << ',' << b << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//
//void main()
//{
//	int n = 10;
//	int& r = n; //int참조 r은 n이라는 뜻, c++에서 &는 기호임 , r이 n에 참조되겠다. 즉 같은 이름을 쓰게 되는것.즉 n이자 r이다. n이라는 메모리를 r이라고 해라.  
//
//	cout << n << ',' << r << endl;
//	cout << &n << ',' << &r << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void main()
//{
//	int n = 10;
//	int r = n;
//
//	cout << n << ',' << r << endl;
//	cout << &n << ',' << &r << endl;
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void Print(int n=1, char c='C', char* s = "string") //옆에 기본매개변수를 정의해주면 인수가없는 함수는 기본매개변수값이나옴.  
//{
//	cout << n << "," << c << "," << s << endl;
//}
//void main()
//{
//	Print(10, 'A', "Hello");
//	Print(100, 'B');
//	Print(100, 'B');
//	Print();
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void Print(int n, char c, char* s="string") //두번째 함수가 인수가 2개밖에 없으니까 임의의 기본값을 준것임. 
//{
//	cout << n << "," << c << "," << s << endl;
//}
//void main()
//{
//	Print(10, 'A', "Hello");
//	Print(100, 'B');
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void Print(int data) //함수중복 , c언어에 없음
//{
//	cout << "data: " <<data<< endl;
//}
//void Print(char* data)
//{
//	cout << "data :  " <<data<< endl;
//}
//void Print(double * data)
//{
//	cout << " data : " <<data<< endl;
//}
//void Print(int n1, int n2, int n3)
//{
//	cout << "data : " << n1 <<","<< n2<<"," << n3  << endl;
//}
//void main()
//{
//	Print(100);
//	Print("Hello");
//	Print(5.678);
//	Print(2,3,4);
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void main()
//{
//	double d = 5.5;
//	int n = 10;
//	
//	
//	n = int();  //int()은 int의 기본값으로 만드는것.  즉 0 
//	d = double(); // 위랑 같은 이유
//	cout << n << endl;
//	cout << d << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void main()
//{
//	double d = 5.5;
//	int n = 10;
//	//n = (int)d; c언어의 형식변환
//	n = int(d); //n은 새롭게 정의가 되는것. 
//	cout << n << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void main()
//{
//	
//	bool b = true;
//	cout << b << endl;
//
//	b = false;
//	cout << b << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void main()
//{
//	int a = 10;
//	cout << a << endl; //c에선 이건 안됌. 문장아래정의가 되면 원래안되지만 c++은 됨. 
//	int b = 20;
//	cout << b << endl;
//	int c = 30;
//	cout << c << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void main()
//{
//	int n;
//	cout << "정수입력:" ;
//	cin >> n;
//	cout << "data:" << n << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std; 
//void main()
//{
//	cout << 100 << endl; 
//	cout << 5.98 << endl;
//	cout << 'A' << endl;
//	cout << "Hello" << endl;
//	int n = 10;
//	cout << n << endl;
//	cout << &n << endl;
//				   
//	system("pause");
//}


//#include <iostream> //모든 객체지향은 io가 들어가면 stream을 씀  
//#include <cstdlib>
//using namespace std; //std 는 standard의 약자로 여기 문구는 namespace std를 사용하겠다라는것임. 
//void main()
//{
//	cout << 100 <<"," <<200<<","<<300<< endl;   
//	cout << 200 << '\n'; //이렇게 해도됌.
//	cout << 100 << endl << 200 << endl << 300 << endl;
//	system("pause");
//}


//#include <iostream> //stdio는 c꺼이고 iostream이 c++꺼임  
//#include <cstdlib>
//using namespace std;
//void main()
//{
//	cout << 100 << endl;  //cout은 출력 스트림 객체, <<는 연산자 , endl(endline)은 \n이라고 생각하면 됌. 
//	cout << 200 << endl;
//	cout<< 300 << endl;
//	system("pause");
//}

//#include <iostream> //stdio는 c꺼이고 iostream이 c++꺼임  
//#include <cstdlib>
//
//void main()
//{
//	std::cout << 100 << std::endl;
//	std::cout << 200 << std::endl;
//	std::cout << 300 << std::endl;
//	system("pause");
//}

//#include <cstdio>  //C++헤더는 .h가 없다. 앞에 c를 붙힘. 
//#include <cstdlib>
//
//void main()
//{
//	printf("%d\n", 100);
//	printf("%d\n", 200);
//	printf("%d\n", 300);
//	system("pause");
//}