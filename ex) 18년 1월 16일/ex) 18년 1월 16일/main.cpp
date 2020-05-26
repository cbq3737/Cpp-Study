//#include <iostream> 
//#include <cstdlib>
//using namespace std;
/////////Point클래스 정의 ////// 두가지의 멤버변수를 갖고 두가지의 멤버함수를 갖엇다고 정의한것. 
///////////Point.h//////////// 클래스의 정의는 헤더파일에 들어감.
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int a = 0, int b = 0);
//	void Print()const;
//};
//////////멤버 함수 정의(구현)///
///////////point.cpp/////////////
//Point::Point(int a = 0, int b = 0)  
//{
//	x = a;
//	y = b;
//}
//void Point::Print()const
//{
//	cout << x << ',' << y << endl;
//}
////////////////main.cpp/////////메인의 함수 정의(구현)
//void main()
//{
//	Point pt1(2, 3); 
//	pt1.Print();
//
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int a=0 , int b=0 )  //생성자는 값을 변경하기위해 있으므로 const가 절대로 안붙음 
//	{
//		x = a;
//		y = b;
//	}
//	void Print()const  
//	{
//		cout << x << ',' << y << endl;
//	}
//	void SetX(int n)
//	{
//		x = n;
//	}
//	void SetY(int k)
//	{
//		y = k;
//	}
//	int GetX() const  //내부에 있는 x,y가 변경이안되므로 함수 맨끝에 붙혓음.
//	{
//		return x;
//	}
//	int GetY() const
//	{
//		return y;
//	}
//};
//void main()
//{
//	Point pt1(2, 3); //pt1은 변경 가능 객체 
//	const Point	pt2; //변경 불가능한 객체 , const 객체 
//
//	pt1.SetX(1);
//	//pt2.SetX(1); //안됨
//	pt1.Print();
//	pt2.Print(); //const객체는 const만 호출한다. 
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int a = 0, int b = 0)  //값을 안주면 0,0으로 초기화하겠다라는 뜻이다. 
//	{
//		x = a;
//		y = b;
//	}
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//	void SetX(int n)
//	{
//		x = n;
//	}
//
//	void SetY(int k)
//	{
//		y = k;
//	}
//	int GetX()
//	{
//		return x;
//	}
//	int GetY()
//	{
//		return y;
//	}
//};
//void main()
//{
//	Point pt1(2, 3), pt2;   
//
//	pt1.SetX(pt1.GetX() * 2); //x값을 두배하고싶다.
//	pt1.SetY(pt1.GetY() * 2); //x값을 두배하고싶다.
//
//	pt1.Print();
//	pt2.Print();
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int a = 0, int b = 0)  //값을 안주면 0,0으로 초기화하겠다라는 뜻이다. 
//	{
//		x = a;
//		y = b;
//		Print();
//	}
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//	void SetX(int n)
//	{
//		x = n;
//	}
//
//	void SetY(int k)
//	{
//		y = k;
//	}
//	int GetX()
//	{
//		return x;
//	}
//	int GetY()
//	{
//		return y;
//	}
//};
//void main()
//{
//	Point pt1(2, 3), pt2;  //pt1을 2,3으로 초기화 한다. 
//
//	pt1.Print();
//	pt2.Print();
//	//pt1.x = 5; //바꿀수없는 이유는 private때문에 바꾸지 못한다. 
//	//pt2.x = 9;
//	pt1.SetX(5); //인터페이스를 사용해서 메세지를 보내는것.
//	pt2.SetX(9);
//
//	cout << pt1.GetX() << ',' << pt1.GetY() << endl; //pt1에게 x값을 달라는 말
//	pt2.Print();
//
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int a = 5, int b = 5)  //값을 안주면 5,5으로 초기화하겠다라는 뜻이다. 
//	{
//		x = a;
//		y = b;
//		
//	}
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//	void SetX(int n)
//	{
//		x = n;
//	}
//
//	void SetY(int k)
//	{
//		y = k;
//	}
//
//};
//void main()
//{
//	Point pt1(2, 3), pt2;  //pt1을 2,3으로 초기화 한다. 
//
//	pt1.Print();
//	pt2.Print();
//	//pt1.x = 5; //바꿀수없는 이유는 private때문에 바꾸지 못한다. 
//	//pt2.x = 9;
//	pt1.SetX(5); //인터페이스를 사용해서 메세지를 보내는것.
//	pt2.SetX(9);
//	
//	pt1.Print();
//	pt2.Print();
//
//	system("pause");
//}



//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int a = 0, int b = 0)  //값을 안주면 0,0으로 초기화하겠다라는 뜻이다. 하지만 xy값에 값을 넣어주면 pt1,pt2 다 변경 포함. 
//	{
//		x = a;
//		y = b;
//		
//	}
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//void main()
//{
//	Point pt1(2,3), pt2;  //pt1을 2,3으로 초기화 한다. 
//
//	pt1.Print();
//	pt2.Print();
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;   
//class Point  
//{
//private:  
//	int x;
//	int y;
//public: 
//	Point()  //초기화 메소드, 즉 생성자. 클래스이름과 똑같은 메소드를 만듬. 초기화를 목적으로 하기때문에 절대로 return값을 가질수없음.
//	{
//		x = 0;
//		y = 0;
//		 
//	}
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//void main()
//{
//	Point pt1, pt2;
//
//	pt1.Print();
//	pt2.Print();
//	system("pause");
//}


//#include <iostream> //인터페이스란 외부와 내부를 소통하는 방법,메소드의 시그니쳐를 말한다. 상태(정적)은 인터페이스가 될수없음.하지만 행동(동적)자체가 인터페이스라고 할순없음. 서로간의 중간자 역할이므로 행동에대한 시그니쳐만 인터페이스가되는것이고 행동에대한 프로세스는 인터페이스가아니다. 
//#include <cstdlib>
//using namespace std;   //객체지향(object oriented라고 해서 oo라고 부름)의 특징 3가지 1.캡슐화(1.보호  2. 내부와 외부를 경계를 맺는 묶기) 2.상속 3. 다형성
//class Point  //캡슐화가 적용되어있음 1.(묶기), 2.: public 
//{
//private:  //클래스내에서만 사용할수있는 멤버  
//	int x;
//	int y;
//public : //공용으로 외부, 내부 다 사용 가능
//	void Init(int a, int b)
//	{
//		x = a;
//		y = b;
//		Print();  //객체내부에서 객체내부로 인터페이스를 호출한것임.
//	}
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//void main() 
//{
//	Point pt1, pt2; 
//	pt1.Init(2, 3);  
//	pt2.Init(5, 8);
//	//pt1.x = 7;  //오류가 나옴. private을 사용했으므로
//
//	pt1.Print();  
//	pt2.Print();
//	system("pause");
//}



//#include <iostream> 
//using namespace std;
//struct Point //c의 구조체에는 함수를 넣을수없다. c++이니까 가능
//{
//	int x;
//	int y;
//	void Init(int a, int b)
//	{
//		x = a;
//		y = b;
//	}
//	void Print()
//	{
//		cout << x << ',' << y << ',' << endl;
//	}
//};
//void main() //Point를 class로 보고 pt1,pt2,를 객체, 그리고 그 안에 x,y를 상태, Init()를 행동으로 본다.Init을 인터페이스라고 부름,
////그래서 예를 들어 값을 변경하기 위해서 p1.x=10;라면 직접적으로 메인함수에 나타내지말고 인터페이스를 이용하여 값을 변경해야한다.(pt.SetX()등) 
//{
//	Point pt1, pt2; //객체 생성
//	pt1.Init(2, 3);  //객체 초기화 
//	pt2.Init(5, 8);
//	
//	pt1.Print();  //객체 출력 
//	pt2.Print();
//	//cout << pt2.x << ',' << pt2.y << endl; 이렇게하면 나중에 많은 필요가 있을때 번거롭기에 인터페이싱을 사용하는게 좋다. 
//}


//#include <iostream> 
//using namespace std;
//struct Point //c의 구조체에는 함수를 넣을수없다. c++이니까 가능
//{
//	int x;
//	int y;
//};
//void main()
//{
//	Point pt1 = { 2,3 }, pt2 = { 5,8 };
//
//	cout << pt1.x << ',' << pt1.y << endl;
//	cout << pt1.x << ',' << pt1.y << endl;
//}



//#include <iostream> //정수입출력 , 구조체 사용 ,지금 상태는 ,멤버변수 즉 상태변수 3개 함수 6개
//using namespace std;
//struct IntArray //c++이기에 묶어놓을수있다.
//{
//	//int dArray[100]
//	int* dArray; //이메모리의 개수를 고정시키면 안되기때문에 포인터로 해놓은것. 
//	int size;
//	int capacity;
//	void Add() //Add,Remove 원소가 변경되고 Print,Search는 원소가 변경되지않는다.
//	{
//		cout << "정수입력: " << endl;
//		int data;
//		cin >> data;
//		if (size <capacity) //자신꺼이기때문에 ia.을빼도 됨
//		{
//			dArray[size++] = data;
//		}
//	}
//	void Print()
//	{
//		int i;
//		for (i = 0; i < size; ++i)
//
//			cout << "[" << i << "]" << dArray[i] << endl;
//
//	}
//	void Search()
//	{
//		cout << "검색 정수 입력:";
//		int data;
//		cin >> data;
//		int i;
//		for (i = 0; i < size; ++i)
//		{
//			if (dArray[i] == data)
//			{
//				cout << "검색정수:" << endl;
//				cout << "[" << i << "]" << dArray[i] << endl;
//			}
//		}
//	}
//	void Remove()
//	{
//		cout << "삭제정수:";
//		int data;
//		cin >> data;
//		int i;
//		for (i = 0; i < size; ++i)
//		{
//			if (dArray[i] == data)
//			{
//				for (int j = i; j < size - 1; ++j)
//				{
//					dArray[i] = dArray[j + 1];
//				}
//				--size;
//				break;
//			}
//
//		}
//	}
//	void Init(int cap =100) //내용이 변하기에 const를 붙히지 않음.
//	{
//		capacity = cap;// 얘네는 지우면 변수명이 똑같아져버림 왼쪽은 내꺼 오른쪽은 매개변수, 그래서 그냥 이름을 바꿔줘버림
//		dArray = new int[capacity];  //메모리의 개수는 클라이언트가 결정할수있다는것을 보여줌. 
//		size = 0;
//	}
//	void Uninit()
//	{
//		delete[] dArray;
//	}
//};
//void Menu()
//{
//	cout << "1.정수 입력" << endl;
//	cout << "2.정수 출력" << endl;
//	cout << "3.정수 검색" << endl;
//	cout << "4.정수 삭제" << endl;
//	cout << "0.프로그램 종료" << endl;
//}
//int main()
//{
//	bool run = true; 
//
//	IntArray ia;  
//	ia.Init(1000); 
//
//	while (run)
//	{
//		int n;
//		Menu();
//		cin >> n;
//		switch (n)
//		{
//		case 1:
//			ia.Add();  //이미 묶어놓은 함수이기에 뒤에 IntArray를 빼줘도 됨/
//			break;
//		case 2:
//			ia.Print();
//			break;
//		case 3:
//			ia.Search();
//			break;
//		case 4:
//			ia.Remove();
//			break;
//		case 0:
//			run = false;
//			break;
//		}
//	}
//	ia.Uninit(); //초기화함수를 사용했기에 마무리함수를 사용한것. 
//}

//#include <iostream> //정수입출력 , 구조체 사용
//using namespace std;
//struct IntArray
//{
//	//int dArray[100]
//	int* dArray; //이메모리의 개수를 고정시키면 안되기때문에 포인터로 해놓은것. 
//	int size;
//	int capacity;
//};
//void AddIntArray(IntArray& ia) //Add,Remove 원소가 변경되고 Print,Search는 원소가 변경되지않는다.
//{
//	cout << "정수입력: " << endl;
//	int data;
//	cin >> data;
//	if (ia.size < ia.capacity)
//	{
//		ia.dArray[ia.size++] = data;
//	}
//}
//void PrintIntArray(const IntArray& ia)
//{
//	int i;
//	for (i = 0; i < ia.size; ++i)
//
//		cout << "[" << i << "]" << ia.dArray[i] << endl;
//
//}
//void SearchArray(const IntArray& ia)
//{
//	cout << "검색 정수 입력:";
//	int data;
//	cin >> data;
//	int i;
//	for (i = 0; i < ia.size; ++i)
//	{
//		if (ia.dArray[i] == data)
//		{
//			cout << "검색정수:" << endl;
//			cout << "[" << i << "]" << ia.dArray[i] << endl;
//		}
//	}
//}
//void RemoveIntArray(IntArray& ia)
//{
//	cout << "삭제정수:";
//	int data;
//	cin >> data;
//	int i;
//	for (i = 0; i < ia.size; ++i)
//	{
//		if (ia.dArray[i] == data)
//		{
//			for (int j = i; j < ia.size - 1; ++j)
//			{
//				ia.dArray[i] = ia.dArray[j + 1];
//			}
//			--ia.size;
//			break;
//		}
//
//	}
//}
//void InitIntArray(IntArray& ia, int capacity = 100) //내용이 변하기에 const를 붙히지 않음.
//{
//	ia.capacity = capacity;
//	ia.dArray = new int[capacity];  //메모리의 개수는 클라이언트가 결정할수있다는것을 보여줌. 
//	ia.size = 0;
//}
//void UninitIntArray(IntArray& ia)
//{
//	delete[] ia.dArray;
//}
//
//void Menu()
//{
//	cout << "1.정수 입력" << endl;
//	cout << "2.정수 출력" << endl;
//	cout << "3.정수 검색" << endl;
//	cout << "4.정수 삭제" << endl;
//	cout << "0.프로그램 종료" << endl;
//}
//int main()
//{
//	bool run = true; //프로그램 종료위해 만드는것.
//
//	IntArray ia;  //원랜 0으로 초기화하는것은 말이안됌.애초에 안에 요소가 몇인지 알수없기에,그래서 초기화를 위하여 InitArray를 사용
//
//	InitIntArray(ia, 1000); //초기화를 위해 호출,원소를 더 생성하기 위하여 원소의 개수를 표시해준다.
//
//	while (run)
//	{
//		int n;
//		Menu();
//		cin >> n;
//		switch (n)
//		{
//		case 1:
//			AddIntArray(ia);  //c언어면 참조가 복사되어야 하지만 c++이므로
//			break;
//		case 2:
//			PrintIntArray(ia);
//			break;
//		case 3:
//			SearchArray(ia);
//			break;
//		case 4:
//			RemoveIntArray(ia);
//			break;
//		case 0:
//			run = false;
//			break;
//		}
//	}
//	UninitIntArray(ia); //초기화함수를 사용했기에 마무리함수를 사용한것. 
//}


//#include <iostream> //정수입출력 , 구조체 사용
//using namespace std;
//struct IntArray
//{
//	//int dArray[100]
//	int* dArray; //이메모리의 개수를 고정시키면 안되기때문에 포인터로 해놓은것. 
//	int size;
//};
//void AddIntArray(IntArray& ia) //Add,Remove 원소가 변경되고 Print,Search는 원소가 변경되지않는다.
//{
//	cout << "정수입력: " << endl;
//	int data;
//	cin >> data;
//	ia.dArray[ia.size++] = data;
//}
//void PrintIntArray(const IntArray& ia)
//{
//	int i;
//	for (i = 0; i < ia.size; ++i)
//
//		cout << "[" << i << "]" << ia.dArray[i] << endl;
//
//}
//void SearchArray(const IntArray& ia)
//{
//	cout << "검색 정수 입력:";
//	int data;
//	cin >> data;
//	int i;
//	for (i = 0; i < ia.size; ++i)
//	{
//		if (ia.dArray[i] == data)
//		{
//			cout << "검색정수:" << endl;
//			cout << "[" << i << "]" << ia.dArray[i] << endl;
//		}
//	}
//}
//void RemoveIntArray(IntArray& ia)
//{
//	cout << "삭제정수:";
//	int data;
//	cin >> data;
//	int i;
//	for (i = 0; i < ia.size; ++i)
//	{
//		if (ia.dArray[i] == data)
//		{
//			for (int j = i; j < ia.size - 1; ++j)
//			{
//				ia.dArray[i] = ia.dArray[j + 1];
//			}
//			--ia.size;
//			break;
//		}
//
//	}
//}
//void InitIntArray(IntArray& ia,int capacity =100) //내용이 변하기에 const를 붙히지 않음.
//{
//	ia.dArray = new int[capacity];  //메모리의 개수는 클라이언트가 결정할수있다는것을 보여줌. 
//      ia.size = 0;
//}
//void UninitIntArray(IntArray& ia)
//{
//	delete[] ia.dArray;
//}
//
//void Menu()
//{
//	cout << "1.정수 입력" << endl;
//	cout << "2.정수 출력" << endl;
//	cout << "3.정수 검색" << endl;
//	cout << "4.정수 삭제" << endl;
//	cout << "0.프로그램 종료" << endl;
//}
//int main()
//{
//	bool run = true; //프로그램 종료위해 만드는것.
//
//	IntArray ia ;  //원랜 0으로 초기화하는것은 말이안됌.애초에 안에 요소가 몇인지 알수없기에,그래서 초기화를 위하여 InitArray를 사용
//
//	InitIntArray(ia,1000); //초기화를 위해 호출,원소를 더 생성하기 위하여 원소의 개수를 표시해준다.
//	while (run)
//	{
//		int n;
//		Menu();
//		cin >> n;
//		switch (n)
//		{
//		case 1:
//			AddIntArray(ia);  //c언어면 참조가 복사되어야 하지만 c++이므로
//			break;
//		case 2:
//			PrintIntArray(ia);
//			break;
//		case 3:
//			SearchArray(ia);
//			break;
//		case 4:
//			RemoveIntArray(ia);
//			break;
//		case 0:
//			run = false;
//			break;
//		}
//	}
//	UninitIntArray(ia); //초기화함수를 사용했기에 마무리함수를 사용한것. 
//}



//#include <iostream> //정수입출력 , 구조체 사용
//using namespace std;
//struct IntArray
//{
//	int dArray[100];
//	int size=0;
//};
//void AddIntArray(IntArray& ia) //Add,Remove 원소가 변경되고 Print,Search는 원소가 변경되지않는다.
//{
//	cout << "정수입력: " << endl;
//	int data;
//	cin >> data;
//	ia.dArray[ia.size++] = data;
//}
//void PrintIntArray(const IntArray& ia)
//{
//	int i;
//	for (i = 0; i < ia.size; ++i)
//
//		cout << "[" << i << "]" << ia.dArray[i] << endl;
//
//}
//void SearchArray(const IntArray& ia)
//{
//	cout << "검색 정수 입력:";
//	int data;
//	cin >> data;
//	int i;
//	for (i = 0; i < ia.size; ++i)
//	{
//		if (ia.dArray[i] == data)
//		{
//			cout << "검색정수:" << endl;
//			cout << "[" << i << "]" << ia.dArray[i] << endl;
//		}
//	}
//}
//void RemoveIntArray(IntArray& ia)
//{
//	cout << "삭제정수:";
//	int data;
//	cin >> data;
//	int i;
//	for (i = 0; i < ia.size; ++i)
//	{
//		if (ia.dArray[i] == data)
//		{
//			for (int j = i; j < ia.size - 1; ++j)
//			{
//				ia.dArray[i] = ia.dArray[j + 1];
//			}
//			--ia.size;
//			break;
//		}
//
//	}
//}
//
//void Menu()
//{
//	cout << "1.정수 입력" << endl;
//	cout << "2.정수 출력" << endl;
//	cout << "3.정수 검색" << endl;
//	cout << "4.정수 삭제" << endl;
//	cout << "0.프로그램 종료" << endl;
//}
//int main()
//{
//	bool run = true; //프로그램 종료위해 만드는것.
//
//	IntArray ia ;  //원랜 0으로 초기화하는것은 말이안됌.애초에 안에 요소가 몇인지 알수없기에 
//	while (run)
//	{
//		int n;
//		Menu();
//		cin >> n;
//		switch (n)
//		{
//		case 1:
//			AddIntArray(ia);  //c언어면 참조가 복사되어야 하지만 c++이므로
//			break;
//		case 2:
//			PrintIntArray(ia);
//			break;
//		case 3:
//			SearchArray(ia);
//			break;
//		case 4:
//			RemoveIntArray(ia);
//			break;
//		case 0:
//			run = false;
//			break;
//		}
//	}
//}


//#include <iostream> //정수입출력 , 일단 c언어 방법으로 
//using namespace std;
//void AddIntArray(int* dArray, int& size) //Add,Remove 원소가 변경되고 Print,Search는 원소가 변경되지않는다.
//{
//	cout << "정수입력: " << endl;
//	int data;
//	cin >> data;
//	dArray[size++] = data;
//}
//void PrintIntArray(const int* dArray, int size)
//{
//	int i;
//	for (i = 0; i < size; ++i)
//	
//		cout << "[" << i << "]" << dArray[i] << endl;
//	
//}
//void SearchArray(const int* dArray, int size)
//{
//	cout << "검색 정수 입력:";
//	int data;
//	cin >> data;
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		if (dArray[i] == data)
//		{
//			cout << "검색정수:" << endl;
//			cout << "[" << i << "]" << dArray[i] << endl;
//		}
//	}
//}
//void RemoveIntArray(int* dArray, int& size)
//{
//	cout << "삭제정수:";
//	int data;
//	cin >> data;
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		if (dArray[i] == data)
//		{
//			for (int j = i; j < size - 1; ++j)
//			{
//				dArray[i] = dArray[j + 1];
//			}
//			--size;
//			break;
//		}
//		
//	}
//}
//
//void Menu()
//{
//	cout << "1.정수 입력" << endl;
//	cout << "2.정수 출력" << endl;
//	cout << "3.정수 검색" << endl;
//	cout << "4.정수 삭제" << endl;
//	cout << "0.프로그램 종료" << endl;
//}
//int main()
//{
//	bool run = true; //프로그램 종료위해 만드는것.
//	
//		int dArray[100];  //정수를 받을수 위한것.
//		int size = 0; 
//	while (run)
//	{
//		int n;
//		Menu();
//		cin >> n;
//		switch (n)
//		{
//		case 1:
//			AddIntArray(dArray, size);
//			break;
//		case 2:
//			PrintIntArray(dArray,size);
//			break;
//		case 3:
//			SearchArray(dArray, size);
//			break;
//		case 4:
//			RemoveIntArray(dArray, size);
//			break;
//		case 0:	
//			run = false;
//			break;
//		}
//	}
//}


//#include <iostream> //배열에서 원소를 제거하는 방법,배열에서 원소를 제거하는것은 안되고 원래 입력하지않았던것 처럼 만들어준다. 
//using namespace std;  //빠진원소자리에 뒤에 원소를 땡겨서 표현함 , 원소 50을 뺀다고 볼때임.
//void main()
//{
//	int arr[100] = { 40,50,60,70,80 };
//	int size = 5;
//	
//	int i;  //50이빠졋으니까 1~3까지 원소가 이동  
//	for (i = 1; i < size - 1; ++i)
//	{
//		arr[i] = arr[i + 1];
//	}
//	--size;
//	for (i = 0; i < size; ++i)
//	{
//		cout << "[" << i << "]" << arr[i] << endl;
//	}
//}

//#include <iostream> //정수입출력 , 일단 c언어 방법으로 
//using namespace std;
//void AddIntArray(int* dArray, int& size) //Add,Remove 원소가 변경되고 Print,Search는 원소가 변경되지않는다.
//{
//	cout << "정수입력: " << endl;
//	int data;
//	cin >> data;
//	dArray[size++] = data;
//}
//void PrintIntArray(const int* dArray, int size)
//{
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		cout << "[" << i << "]" << dArray[i] << endl;
//	}
//}
//void SearchArray(const int* dArray, int size)
//{
//	cout << "검색 정수 입력:";
//	int data;
//	cin >> data;
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		if (dArray[i] == data)
//		{
//			cout << "검색정수:" << endl;
//			cout << "[" << i << "]" << dArray[i] << endl;
//		}
//	}
//}
//void RemoveIntArray(int* dArray, int& size)
//{
//	
//}
//
//void Menu()
//{
//	cout << "1.정수 입력" << endl;
//	cout << "2.정수 출력" << endl;
//	cout << "3.정수 검색" << endl;
//	cout << "4.정수 삭제" << endl;
//	cout << "0.프로그램 종료" << endl;
//}
//int main()
//{
//	bool run = true; //프로그램 종료위해 만드는것.
//	while (run)
//	{
//		int dArray[100];  //정수를 받을수위한것.
//		int size = 0; 
//		int n;
//		Menu();
//		cin >> n;
//		switch (n)
//		{
//		case 1:
//			AddIntArray(dArray, size);
//			break;
//		case 2:
//			PrintIntArray(dArray, size);
//			break;
//		case 3:
//			SearchArray(dArray, size);
//			break;
//		case 0:
//			RemoveIntArray(dArray, size);
//			run = false;
//			break;
//		}
//	}
//}



//#include <iostream> //정수입출력 , 일단 c언어 방법으로 
//using namespace std;
//void Menu()
//{
//	cout << "1.정수 입력" << endl;
//	cout << "2.정수 출력" << endl;
//	cout << "3.정수 검색" << endl;
//	cout << "4.정수 삭제" << endl;
//	cout << "0.프로그램 종료" << endl;
//}
//
//void main()
//{
//	bool run = true; //프로그램 종료위해 만드는것.
//	while (run)
//	{
//		int n;
//		Menu();
//		cin >> n;
//		switch (n)
//		{
//		case 1:
//			break;
//		case 2:
//			break;
//		case 3:
//			break;
//		case 0:
//			run = false;
//			break;
//		}
//	}
//}


//#include <iostream>
//using namespace std;
//void main()
//{
//	int n;
//	cin >> n;
//	switch(n)
//	{
//	case 1:
//		break;
//	case 2:
//		break;
//	case 3:
//		break;
//	case 0:
//		break;
//	}
//}