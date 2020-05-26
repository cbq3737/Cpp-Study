//#include <iostream>
//#include <vector>
//#include <cstdlib>
//using namespace std;
//class Array  //일단 정수만 보관하는 array라고 가정하고 작성
//{
//	int* buf; 
//	int size;
//public:
//	//생성자
//	Array() :size(0) //size를 0으로 초기화 
//	{
//		buf = new int[100];
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(int data)
//	{
//		buf[size++] = data;
//	}
//	int Size()const
//	{
//		return size;
//	}
//	int at(int index)const
//	{
//		return buf[index];
//	}
//};
//int main()
//{
//	Array arr;
//
//	arr.Add(100);
//	arr.Add(200);
//	arr.Add(300);
//	arr.Add(400);
//	arr.Add(500);
//	int i;
//	for (i = 0; i < arr.Size(); ++i)
//	{
//		cout << arr.at(i) << endl;
//	}
//	Array arr2;
//	arr2.Add(90);
//	system("pause");
//}

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Array  //일단 정수만 보관하는 array라고 가정하고 작성
//{
//	int buf[100]; //일단 100까지 저장할수있는 배열 생성
//	int size;
//public: 
//	Array():size(0) //size를 0으로 초기화 
//	{
//	}
//	void Add(int data)
//	{
//		buf[size++] = data;
//	}
//	int size()const
//	{
//		return size;
//	}
//	int at(int index)const
//	{
//		return buf[index];
//	}
//};
//int main()
//{
//	Array arr;  
//	arr.Add(100); 
//	arr.Add(200);
//	arr.Add(300); 
//	arr.Add(400);
//	arr.Add(500);
//	int i;
//	for (i = 0; i < arr.size(); ++i)
//	{
//		cout << arr.at(i) << endl;
//	}
//	
//	Array arr2;
//	arr2.Add(90);
//	system("pause");
//}


//#include <iostream>
//#include <vector>
//#include <cstdlib>
//using namespace std;
//typedef vector<int> Array;  //배열은 크기가 정해져있고 벡터는 그 크기를 늘이고줄이고할수잇지만 둘다 집합객체의 의미를 갖고있다.
//int main()
//{
//	Array arr;  //100,200,300이란 요소를 담고있는 객체, 집합객체 의미, container객체라고 부름 , 정수를 저장하는 컨테이너
//
//	arr.push_back(100); //100을 끝에다가 넣어라
//	arr.push_back(200);
//	arr.push_back(300);
//
//	int i;
//	for (i = 0; i < arr.size(); ++i)
//	{
//		cout << arr.at(i) << endl;
//	}
//	system("pause");
//}


//#include <iostream>
//#include <vector>
//#include <cstdlib>
//using namespace std;
//typedef vector<int> Array;  //배열은 크기가 정해져있고 벡터는 그 크기를 늘이고줄이고할수잇지만 둘다 집합객체의 의미를 갖고있다.
//int main()
//{
//	Array arr;  //100,200,300이란 요소를 담고있는 객체, 집합객체 의미, container객체라고 부름 , 정수를 저장하는 컨테이너
//
//	arr.push_back(100); //100을 끝에다가 넣어라
//	arr.push_back(200);
//	arr.push_back(300);
//
//	cout << arr.at(0) << endl;  //0번째 ,at은 딱 지정하는말 
//	cout << arr.at(1) << endl;
//	cout << arr.at(2) << endl;
//	system("pause");
//}


//#include <iostream>
//#include <vector>
//#include <cstdlib>
//using namespace std;
//typedef vector<int> Array;  //배열은 크기가 정해져있고 벡터는 그 크기를 늘이고줄이고할수잇지만 둘다 집합객체의 의미를 갖고있다.
//int main()
//{
//	Array arr;  //100,200,300이란 요소를 담고있는 객체, 집합객체 의미, container객체라고 부름 , 정수를 저장하는 컨테이너
//
//	arr.push_back(100); //100을 끝에다가 넣어라
//	arr.push_back(200);
//	arr.push_back(300);
//
//	cout << arr[0] << endl; //arr에 0번째 원소를 줘라 라는 말
//	cout << arr[1] << endl;
//	cout << arr[2] << endl;
//	system("pause");
//}

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point  //참조상태 객체이므로 얕은 카피가 아닌 깊은 카피를 해야함. 
//{
//	int* px;
//	int* py;
//public:
//	Point(int _x = 0, int _y = 2) : px(NULL), py(NULL)
//	{
//		px = new int(_x);
//		py = new int(_y);
//	}
//	//복사 생성자 arg= p1
//	Point(const Point& arg)
//	{
//		px = new int(*arg.px);
//		py = new int(*arg.py);
//	}
//	~Point()
//	{
//		delete px;
//		delete py;
//	}
//	void Print() const
//	{
//		cout << *px << "," << *py << endl;
//	}
//
//};
//int main()
//{
//	Point p1(2, 3);
//	p1.Print();
//	//얕은 복사, 값은 나오지만 오류가 뜸
//	//Point p2(p1);
//	//p2.Print();
//
//	//초기화를 이용한 깊은복사 , 대입을 이용한 깊은 복사는 안함.
//	Point p2 = p1;
//	p2.Print();
//
//	//Point p2;  대입을이용한 깊은복사는안됌.
//	//p2 = p1;
//	//p2.Print();
//	system("pause");
//}

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point  //참조상태 객체이므로 얕은 카피가 아닌 깊은 카피를 해야함. 
//{
//	int* px;
//	int* py;
//public:
//	Point(int _x = 0, int _y = 2) : px(NULL), py(NULL)
//	{
//		px = new int(_x);
//		py = new int(_y);
//	}
//	//복사 생성자 arg= p1
//	Point(const Point& arg)
//	{
//		px = new int(*arg.px);
//		py = new int(*arg.py);
//	}
//	~Point()
//	{
//		delete px;
//		delete py;
//	}
//	void Print() const
//	{
//		cout << *px << "," << *py << endl;
//	}
//
//};
//int main()
//{
//	Point p1(2, 3);
//	p1.Print();
//	//얕은 복사, 값은 나오지만 오류가 뜸
//	//Point p2(p1);
//	//p2.Print();
//
//	//초기화를 이용한 깊은복사 , 대입을 이용한 깊은 복사는 안함.
//	Point p2 = p1;
//	p2.Print();
//
//	//Point p2;  대입을이용한 깊은복사는안됌.
//	//p2 = p1;
//	//p2.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point  //참조상태 객체이므로 얕은 카피가 아닌 깊은 카피를 해야함. 
//{
//	int* px;   
//	int* py;
//public:
//	Point(int _x = 0, int _y = 2) : px(NULL), py(NULL)
//	{
//		px = new int(_x); 
//		py = new int(_y);
//	}
//	void Print() const
//	{
//		cout << *px << "," << *py << endl;
//	}
//	~Point()
//	{
//		delete px;
//		delete py;
//	}
//};
//int main()
//{
//	Point p1(2, 3);
//	p1.Print();
//	//얕은 복사, 값은 나오지만 오류가 뜸
//	Point p2(p1);
//	p2.Print();
//
//	system("pause");
//}


//#include <iostream>  //참조 상태 객체  
//#include <cstdlib>
//#include <cstring>  //strlen때문에 나옴
//using namespace std;
//class Person
//{
//	char* name;
//	int age;
//public:
//	Person(const char* n = "noname", int a = 0)  //생성자
//	{
//		int slen = strlen(n);
//		name = new char[slen + 1];
//		strcpy_s(name, slen + 1, n);
//		age = a;
//	}
//	//복사생성자를 만들때 방법임. 외울것.  //여기서 per= p1임
//	Person(const Person& per)//자기자신을 인수로 받고 참조로써 받는다.입력받고 변경되면안되기 때문에 const로 받는다. 
//	{
//		name = new char[strlen(per.name) + 1];
//		strcpy_s(name, strlen(per.name) + 1, per.name);
//		age = per.age;
//	}
//	~Person() //생성자에 new가 만들어졋기때문에 소멸자에서 delete해줘야한다.
//	{
//		delete[] name;
//	}
//	void Print()const
//	{
//		cout << "name: " << name << ',' << "age:" << age << endl;
//	}
//};
//int main()
//{
//	Person p1("Hong Gil-Gong", 25);
//	p1.Print();
//	//1.초기화 하여 복사하는 방법
//	//Person p2(p1); 이방법은 얕은 복사방법이다.
//	//p2.Print();
//	///2.대입하여 복사하는 방법
//	//Person p2; //이방법에서 제대로할려면 기본생성자를 제거한후에 p1의 문자열을 p2가 다시 복사해야한다.
//	//p2 = p1; //이것도 얕은 복사방법이다.
//	//p2.Print();
//  //깊은 복사방법
//	Person p2(p1); //자신의 타입(Person)을 인수로 받는 생성자가 있다는말 
//	p2.Print();  //생성자가 생성될때 char,int형말고 자신의 타입객체를 받아서 생성할때 그것이 바로 복사생성자이다.
//	system("pause");
//}


//#include <iostream>  //참조 상태 객체  
//#include <cstdlib>
//using namespace std;
//class Person
//{
//	char* name;
//	int age;
//public :
//	Person(const char* n = "noname", int a = 0)  //생성자
//	{
//		int slen = strlen(n);
//			name = new char[slen + 1];
//		strcpy_s(name, slen + 1, n);
//		age = a;
//	}
//	~Person() //생성자에 new가 만들어졋기때문에 소멸자에서 delete해줘야한다.
//	{
//		delete[] name;
//	}
//	void Print()const
//	{
//		cout << "name: " << name << ',' << "age:" << age << endl;
//	}
//};
//int main()
//{
//	Person p1("Hong Gil-Gong", 25);
//	p1.Print();
//	system("pause");
//}


//#include <iostream>  //값 상태 객체
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 2) : x(_x), y(_y)
//	{
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//};
//int main()
//{
//	Point p1(2, 3); 
//	p1.Print();
//	//값상태객체의 복사는 문자가 없는데 참조상태의객체는 같은 주소를 가르키고있기
//	//때문에 남겨진 메모리누수도 발생할수있고 값 변경시 객체가 독립성을 갖고있지않고 같이 변경되버린다는게 문제가 된다.
//	//Point p2 = p1; 아래랑 같은 말이다. 
//	Point p2(p1);
//	p2.Print();
//
//	Point p3;
//	p3 = p1;  
//	p3.Print();
//	system("pause");
//}


//#include <iostream>  //값 상태 객체
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x;   	
//	int y;
//public:
//	Point(int _x=0, int _y = 2) : x(_x), y(_y) 
//	{
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//};
//int main()
//{
//	Point p1(2, 3);
//	p1.Print();
//
//	Point p2 = p1; //p2를 p1으로 복사해라. 타입이 같은 객체끼리 복사가 가능하다. 
//	p2.Print();  
//	//복사 2방법,Point p2 =p1; 은 초기화(같은 메모리 선상그림) , p3=p1은 대입(다른 메모리그림)
//	Point p3;
//	p3 = p1; //이것도 복사의 과정중 하나. 
//	p3.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int* px;   //이번엔 값을 갖는게 아니라 참조를 가진다. 
//	int* py;
//public:
//	Point(int _x = 0, int _y = 2) : px(NULL), py(NULL) //아무것도 안가르킴 
//	{
//		px = new int(_x); //새롭게 만든 힙 메모리에 x값과 y값을 넣어서 px,py가 값을 가르키게 만듬.
//		py = new int(_y);
//	}
//	void Print() const
//	{
//		cout << *px << "," << *py << endl;
//	}
//	~Point()
//	{
//		delete px;
//		delete py;
//	}
//};
//int main()
//{
//	Point p1(2, 3);
//	p1.Print();
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
//	Point(int _x = 0, int _y = 2) : x(_x), y(_y)  //기본 생성자 =0,=2를 지우면 오류가 남.
//	{
//
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//};
//int main()
//{
//	Point* arr = new Point[5];
//	int i;
//	for (i = 0; i < 5; ++i)
//	{
//		arr[i].Print();
//	}
//	delete[] arr;
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
//	Point(int _x=0, int _y=2)  : x(_x), y(_y)  //기본 생성자 =0,=2를 지우면 오류가 남.
//	{
//
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//};
//int main()
//{
//	Point arr[5] = { Point(5,6), Point(3,4) }; //이런식으로 초기화 가능
//	int i;
//	for (i = 0; i < 5; ++i)
//	{
//		arr[i].Print();
//	}
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
//	Point(int _x = 0, int _y = 2) : x(_x), y(_y)
//	{
//
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//};
//int main()
//{
//	Point arr[5] = { Point(5,6), Point(3,4) }; //이런식으로 초기화 가능
//	int i;
//	for (i = 0; i < 5; ++i)
//	{
//		arr[i].Print();
//	}
//	system("pause");
//}


//#include <iostream> //객체가 있으면 초기화기능(생성자)과 마무리기능(소멸자)이 같이있어야한다.하지만 이게 우리눈에 안보일뿐이지 갖고있다.  
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 2) : x(_x), y(_y) 
//	{
//		
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//};
//
//int main()
//{
//	Point arr[5]; //지역객체 여러개 만드는것
//	int i;
//	for (i = 0; i < 5; ++i)
//	{
//		arr[i].Print();
//	}
//	system("pause");
//}



//#include <iostream> //객체가 있으면 초기화기능(생성자)과 마무리기능(소멸자)이 같이있어야한다.하지만 이게 우리눈에 안보일뿐이지 갖고있다.  
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 2) : x(_x), y(_y) //이것은 x에 _x를 넣고 y를 _y를넣는것. 최초로 값을 할당하는것.이건 그냥 문법임
//	{
//		x = _x;//여기에 값을 넣으면 그냥 처음 초기화후 값을 나중에 또 넣는다고 볼수잇다.
//		//x = x; y = y; //이것은 초기화 코드가 아니라 대입이라고 볼수있음. 
//	}
//	void Print() const
//	{
//		cout << this << ":" << x << "," << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	Point* p = new Point(4, 5);
//
//	cout << &p1 << ":";	p1.Print();  //스택개체의 주소
//	cout << p << ":";	(*p).Print(); //힙개체의 주소 그래서 서로 차이가 크다. 
//	delete p;
//	system("pause");
//}



//#include <iostream> //객체가 있으면 초기화기능(생성자)과 마무리기능(소멸자)이 같이있어야한다.하지만 이게 우리눈에 안보일뿐이지 갖고있다.  
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 2) 
//	{   
//		(*this).x = x; (*this).y = y;  
//		cout << "Point()" << endl;
//	}
//	void Print() const
//	{
//		cout << this << ":" <<x << "," << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	Point* p = new Point(4, 5);
//
//	cout << &p1 << ":";	p1.Print();  //스택개체의 주소
//	cout << p << ":";	(*p).Print(); //힙개체의 주소 그래서 서로 차이가 크다. 
//	delete p;
//	system("pause");
//}


//#include <iostream> //객체가 있으면 초기화기능(생성자)과 마무리기능(소멸자)이 같이있어야한다.하지만 이게 우리눈에 안보일뿐이지 갖고있다.  
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 2)  //p1.Print(), p2,Print() 즉 함수가호출한 얘네p1,p2 객체의 주소가 this인것.
//	{   //this를 포인터같이 생각해주면 됨.
//		(*this).x = x; (*this).y = y;  //헷갈리기때문에 this라는 키워드를 붙히는데 실제 객체의 주소라고 생각하면 됨. 
//		cout << "Point()" << endl;
//	}
//	void Print() const
//	{
//		cout << this <<":"<< /*(*this)이게 생략되어있음*/x << "," << /*(*this)이게 생략*/y << endl;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3); 
//	Point p2(2, 3);
//	Point p3(2, 3);
//
//	p1.Print();  //출력하면 this는 각각 p1,p2,p3의 주소임 즉 시작주소이다.
//	p2.Print();
//	p3.Print();
//
//	cout << &p1 << ":";	p1.Print();
//	cout << &p2 << ":";	p2.Print();
//	cout << &p3 << ":";	p3.Print();
//	system("pause");
//}


//#include <iostream> //객체가 있으면 초기화기능(생성자)과 마무리기능(소멸자)이 같이있어야한다.하지만 이게 우리눈에 안보일뿐이지 갖고있다.  
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 2)
//	{
//		x = _x; y = _y;
//		cout << "Point()" << endl;
//	}
//	void Print() const //변경하지않는 메소드여서 붙힘.
//	{
//		cout << x << "," << y << endl;
//	}
//	void Set(int a, int b)
//	{
//		x = a;
//		y = b;
//	}
//	void SetX(int a)
//	{
//		x = a;
//	}
//	void SetY(int b)
//	{
//		y = b;
//	}
//};
//
//void PrintPoint(const Point* p1)  //인자를 받기때문에 const를 붙힘
//{
//	//(*p1).Set(); 그래서 얘넨 안됨.
//	(*p1).Print();
//}
//
//int main()
//{
//	Point p1(2, 3);
//
//	PrintPoint(&p1); //2,3이 출력, 멤버함수가 아님
//	system("pause");
//}


//#include <iostream> //객체가 있으면 초기화기능(생성자)과 마무리기능(소멸자)이 같이있어야한다.하지만 이게 우리눈에 안보일뿐이지 갖고있다.  
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 2)
//	{
//		x = _x; y = _y;
//		cout << "Point()" << endl;
//	}
//	void Print() const //변경하지않는 메소드여서 붙힘.
//	{
//		cout << x << "," << y << endl;
//	}
//	void Set(int a, int b)
//	{
//		x = a;
//		y = b;
//	}
//	void SetX(int a)
//	{
//		x = a;
//	}
//	void SetY(int b)
//	{
//		y = b;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	p1.Print();
//	p1.Set(5, 8);
//	p1.Print();
//	p1.SetX(0);
//	p1.SetY(6);
//	p1.Print();
//	system("pause");
//}



//#include <iostream> //객체가 있으면 초기화기능(생성자)과 마무리기능(소멸자)이 같이있어야한다.하지만 이게 우리눈에 안보일뿐이지 갖고있다.  
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 2) 
//	{
//		x = _x; y = _y;
//		cout << "Point()" << endl;
//	}
//	void Print() const //변경하지않는 메소드여서 붙힘.
//	{
//		cout << x << "," << y << endl;
//	}
//	void Set(int a, int b)
//	{
//		x = a;
//		y = b;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	p1.Print();
//	p1.Set(5, 8);
//	p1.Print();
//	system("pause");
//}


//#include <iostream> //객체가 있으면 초기화기능(생성자)과 마무리기능(소멸자)이 같이있어야한다.하지만 이게 우리눈에 안보일뿐이지 갖고있다.  
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 2) //p3때매 _y를 만듬
//	{
//		x = _x; y = _y;
//		cout << "Point()" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//};
//
//int main()
//{
//	{
//		Point p1(2, 3);  //스택 개체
//		Point* p = new Point(2, 3); //힙을 만드는과정, 힙 개체 
//
//		p1.Print();
//		(*p).Print();
//
//		delete p;//p의 소멸자 호출
//	} //소멸자를 보기위하여 표시한 괄호,delete가없으면 p1의 소멸자만 보인다. 
//		system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y=2) 
//	{
//		x = _x; y = _y;  
//		cout << "Point()" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1(10);
//	Point p2;  
//	Point p3(2,3);
//	
//	p1.Print();
//	p2.Print();
//	p3.Print();
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
//	Point(int _x=0) //=0을 준 이유는 인수를 안 준 p2를 위해서 
//	{
//		x = _x; y = 0;  //_x 를 y에 넣어도 가능
//		cout << "Point()" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1(10);
//	Point p2;  //p2를 만들어주는 함수를 만들어줘야함. 1.중복함수만들기. 2.인수에 아무것도 안줫을때 나오는 값 넣어주기.
//
//	p1.Print();
//	p2.Print();
//	system("pause");
//}

//#include <iostream> //객체가 있으면 초기화기능(생성자)과 마무리기능(소멸자)이 같이있어야한다.하지만 이게 우리눈에 안보일뿐이지 갖고있다.  
//#include <cstdlib>
//using namespace std;
//class Point   
//{
//	int x;
//	int y;
//public:
//	Point(int _x) //(10)int형을 받기위하여 
//	{
//		x = _x; y = 0;  
//		cout << "Point()" << endl;
//	}  	
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1(10);
//	p1.Print();
//	system("pause");
//}


//#include <iostream> //객체가 있으면 초기화기능(생성자)과 마무리기능(소멸자)이 같이있어야한다.하지만 이게 우리눈에 안보일뿐이지 갖고있다.  
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	//int n = 10;
//	int n(10);//클래스,객체,(초기화값) //c++은 초기화를 괄호쳐서 해도된다. 그냥 문법임, c++에서는 int형식을 int type,class라고 불러도됌.
//	cout << n << endl;
//	system("pause");
//}



//#include <iostream> //객체가 있으면 초기화기능(생성자)과 마무리기능(소멸자)이 같이있어야한다.하지만 이게 우리눈에 안보일뿐이지 갖고있다.  
//#include <cstdlib>
//using namespace std;
//class Point   
//{
//	int x;
//	int y;
//public:
//	Point()//생성자 ,소멸자는 우리가 안만들어도 알아서 만들어지긴한다. 얘네를 기본생성,소멸자 라고 한다. 
//
//	{
//		x = 0; y = 0;  //생성자를 만들었기때문에 아래 초기화하는 Init을 없애도 된다. 
//		cout << "Point()" << endl;
//	}  	
//	~Point()  //처음생성자가 생성되고 마지막에 잠깐 소멸자가 생성된다.
//	{
//		cout << "~Point()" << endl;
//	}
//	// void Init() //값을 변경하기 위해 여기다가 다른수를 적는것은 초기화하는거지 변경하는것이 아니다. 
//	//{
//	//	x = 0; 
//	//	y = 0;
//	///
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1;
//	//p1.Init();
//	p1.Print();
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//class Point  //클라스로 바꿔도 차이가 없다. 
//{
////class에서는 private이 생략이 가능하다. 
//	int x;
//	int y;
//public: 
//	void Init()
//	{
//		x = 4;
//		y = 3;
//	}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1;
//	p1.Init();
//	p1.Print();
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//struct Point
//{
//private: //struct를 공개하지않기 위하여, 즉 외부로 보여지기 않기위하여
//	int x;
//	int y;
//public: //아래 함수들은 외부에 사용이 필요하기때문에 public으로 만들어짐
//	void Init()
//	{
//		x = 4;
//		y = 3;
//	}
//	void Print()
//	{
//		cout << x << "," << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1;
//	p1.Init();
//	p1.Print();
//	system("pause");
//}


//#include <iostream> //c++
//#include <cstdlib>
//using namespace std;
//struct Point
//{
//	int x;
//	int y;
//	
//	void Init()
//	{
//		x = 4;
//		y = 3;
//	}
//	void Print()
//	{
//		cout <<x << "," << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1;
//	p1.Init();
//	p1.Print();
//	system("pause");
//}


//#include <iostream> //c언어 방식 , 함수의 함수를 거쳐서 값이 출력되는 방식.
//#include <cstdlib>
//using namespace std;
//struct Point
//{
//	int x;
//	int y;
//};
//void InitPoint(Point* p1)
//{
//	(*p1).x = 0;
//	(*p1).y = 0;
//}
//void PrintPoint(Point* p1)
//{
//	cout << (*p1).x <<","<<(*p1).y<< endl;
//}
//int main()
//{
//	Point p1;
//	InitPoint(&p1);
//	PrintPoint(&p1);
//	system("pause");
//}