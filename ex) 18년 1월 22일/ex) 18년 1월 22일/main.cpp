//#include <iostream>
//#include <cstdlib> 
//using namespace std;
//class point
//{
//	int x, y;
//public:
//	point(int x = 0, int y = 0) : x(x), y(y) 
//	{
//		cout << "point()" << endl;
//	}
//	~point()
//	{
//
//		cout << "~point()" << endl;
//	}
//	void print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//void main()
//{
//	{
//		Point(2, 3); //임시객체
//		Point(2, 3);
//		Point(2, 3);
//	}
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib> 
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) 
//	{
//		cout << "Point()" << endl;
//	}
//	~Point()
//	{
//
//		cout << "~Point()" << endl;
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//void main()
//{
//	{
//		Point m;// 얜0.0이라는 포인터객체임
//		m = Point(2, 3);//중요: m은 이미 0,0이라는 포인터객체인데 거기에 2,3을 넣은것 . 그래서 2,3을 임시객체라고 함.임시객체란 이름이 없고 이 문장에서 만들어지고 이 문장에서 없어짐.
//		m.Print();
//	}
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib> 
//using namespace std;
//class Point
//{
//	int x, y;
//	public:
//		Point(int x = 0,int y=0) : x(x), y(y){}
//			void Print() const
//		{
//			cout << x << ',' << y << endl;
//		}
//};
//void main()
//{
//	Point n(1,2);
//	Point m;
//	m = Point(2,3);//중요: m은 이미 0,0이라는 포인터객체인데 거기에 2,3을 넣은것 . 그래서 2,3을 임시객체라고 함.임시객체란 이름이 없고 이 문장에서 만들어지고 이 문장에서 없어짐.
//	Point k;
//	k = Point();
//
//	n.Print();
//	m.Print();
//	k.Print();
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib> 
//using namespace std;
//void main()
//{
//	int n(10);
//	int m;
//	m = int(10);//형식변환이란 뜻 int라는 형식에 10값을 넣어서 최초값을 만들어라 라는 뜻.
//	int k;
//	k = int();
//
//	cout << n << ',' << m << ',' << k << endl;
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
//	int operator[](int index)const//int at(int index) const //똑같음
//	{
//		return buf[index];
//	}
//};
////void printarray(const array& arr)
////{
////	for (int i = 0; i < arr.size(); ++i)
////	{
////		cout << arr.at(i) << endl;
////	}
////}
//void main()
//{
//	Array arr(100);
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	cout <<arr[0]/*arr.at(0)at의 기능이 []랑 같음 */<< endl;
//	//cout << arr.at(1) << endl;
//	cout << arr[2]/*arr.at(2)*/ << endl;
//
//	system("pause");
//}


//#include <iostream>  
//#include <cstdlib> 
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a = 0, int b = 0) : x(a), y(b)
//	{}
//	void Print()const
//	{
//		cout << x << ',' << y << endl;
//	}
//	int operator[](int idx)
//	{
//		if (idx == 0)
//		{
//			return x;
//		}
//		else
//		{
//			return y;
//		}
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	int x = pt1[0]; //	pt1.operator[](0); //[]는 컨테이너객체의 원소들을 연속한 메모리를 담고있을때 사용하지만 지금은 우리가 연습으로 하는것이기 때문에 적은것. 
//	int y = pt1[1];	//	pt1.operator[](1);
//
//	system("pause");
//}


//#include <iostream>  
//#include <cstdlib> 
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a = 0, int b = 0) : x(a), y(b)
//	{}
//	void Print()const
//	{
//		cout << x << ',' << y << endl;
//	}
//	//const Point& operator++()
//	//{
//	//	x;
//	//	y;
//	//	return *this;
//	//}
//	const Point operator++(int n) //int는 0을 받기위한 형식,크게 중요하진 않음 
//	{
//		Point t(x, y); //얘를 만들어주는 이유는 증가하기 전 을 만들어주기 위해
//		++x;
//		++y;
//		return t; //t는 사라지는 객체 이므로 주소로 받으면 안되고 값으로 받는다.
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2;
//	pt2 = pt1++; //pt2 =pt1.operator++(0) 후위 연산자는 무조건 이렇게 해석함
//	pt1.Print(); 
//	pt2.Print();
//	system("pause");
//}


//#include <iostream>  
//#include <cstdlib> 
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a = 0, int b = 0) : x(a), y(b)
//	{}
//	void Print()const
//	{
//		cout << x << ',' << y << endl;
//	}
//    const Point& operator++()
//	{
//		++x;
//		++y;
//		return *this;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2;
//	pt2 = ++pt1; //pt2= pt1.operator++();
//	pt1.Print();
//	pt2.Print();
//	system("pause");
//}

//#include <iostream>  
//#include <cstdlib> 
//using namespace std;
//class Point
//{
//	int x,y;
//public:
//	Point(int a = 0, int b = 0) : x(a),y(b)
//	{}
//	void Print()const
//	{
//		cout << x << ',' << y << endl;
//	}
//	void operator++()
//	{
//		++x;
//		++y;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	++pt1; //pt1.operator++()
//	pt1.Print();
//	system("pause");
//}


//#include <iostream>  
//#include <cstdlib> 
//using namespace std;
//class Point
//{
//	int x, *py;
//public:
//	Point(int a = 0, int b = 0) : x(a)
//	{
//		py = new int(b);//py가 가르키는 메모리
//	}
//	Point(const Point& arg)
//	{ //pt2= pt1 형식
//		x = arg.x;
//		py = new int();
//		*py = *arg.py;
//	}
//	~Point()
//	{
//		delete py;
//	}
//	void Print()const
//	{
//		cout << x << ',' << *py << endl;
//	}
//	void operator=(const Point& arg) //깊은 복사 ,즉 이건 복사대입연산자임  Point p2(p1)
//	{
//		
//		x = arg.x;
//		*py = *arg.py;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2=pt1;  //시험에 무조건 복사생성자와 복사대입연산자 나옴.
//	
//	pt1.Print();
//	pt2.Print();
//	system("pause");
//}


//#include <iostream>  //중복연산자
//#include <cstdlib>   //반환형으로 받는것은 반드시 반환값이 있음.
//using namespace std;
//class Point
//{
//	int x, *py;
//public:
//	Point(int a = 0, int b = 0) : x(a)
//	{
//		py = new int(b);
//	}
//	~Point()
//	{
//		delete py;
//	}
//	void Print()const
//	{
//		cout << x << ',' << *py << endl;
//	}
//	const Point& operator=(const Point& arg) //깊은 복사 ,즉 이건 복사대입연산자임  Point p2(p1)
//	{
//		x = arg.x;
//		*py = *arg.py;
//		return *this; //아래와 비슷한형식의 예제
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3;
//
//	pt2 = pt1;  //y만 주소로 받은 상태.
//	//pt2.operator=(pt1);//컴파일러는 항상이런식으로 해석을함.
//	pt1.Print();
//	pt2.Print();
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
//	int Size() const //출력을 위해서이기에 const를 붙힘. 모든 변경을 하지않는 메소드들은 무조건 const를 붙여야 함. 참조로 받은 객체는 웬만하면 const를 만드는게좋음. 
//	{
//		return size;
//	}
//	int At(int index) const
//	{
//		return buf[index];
//	}
//	const Array& operator=(const Array& pt) //operator=은 항상 자기자신이 들어가기에 const 참조가 옴.
//	{  //this = arr2, pt = arr임
//
//		if (capacity != pt.capacity)//메모리 용량이 같은지 아닌지를 보는것. 
//		{
//			delete[] buf; //일단 복사하는데 메모리가 맞지않기에 buf를 지워줌. 이 코드말고는 복사생성자와 똑같음.
//			buf = new int[pt.capacity];
//		}
//		size = pt.size;
//		capacity = pt.capacity;
//		for (int i = 0; i < size; ++i)
//		{
//			buf[i] = pt.buf[i];
//		}
//		return *this;
//	}
//};
//void PrintArray(const Array& arr)
//{
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		cout << arr.At(i) << endl;
//	}
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//	PrintArray(arr);
//
//	Array arr2 = arr;
//	arr2 = arr; //arr2.operator = (arr);
//
//	arr2.Add(100);
//	arr2.Add(200);
//	PrintArray(arr2);
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
//	int Size() const //출력을 위해서이기에 const를 붙힘. 모든 변경을 하지않는 메소드들은 무조건 const를 붙여야 함. 참조로 받은 객체는 웬만하면 const를 만드는게좋음. 
//	{
//		return size;
//	}
//	int At(int index) const
//	{
//		return buf[index];
//	}
//	void operator=(const Array& pt) //복사 대입연산자
//	{  //this = arr2, pt = arr임
//		
//		if (capacity != pt.capacity)//메모리 용량이 같은지 아닌지를 보는것. 
//		{
//			delete[] buf; //일단 복사하는데 메모리가 맞지않기에 buf를 지워줌. 이 코드말고는 복사생성자와 똑같음.
//			buf = new int[pt.capacity]; //지워준후 같은크기로 다시 생성함.
//	}
//		size = pt.size;
//		capacity = pt.capacity; 
//		for (int i = 0; i < size; ++i)
//		{
//			buf[i] = pt.buf[i];
//		}
//
//	}
//};
//void PrintArray(const Array& arr)
//{
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		cout << arr.At(i) << endl;
//	}
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//	PrintArray(arr);
//
//	Array arr2 = arr; //지금 10,20,30이 복사가 된 상태
//	arr2 = arr; //arr2.operator = (arr);
//
//	arr2.Add(100);
//	arr2.Add(200);
//	PrintArray(arr2);
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
//	int Size() const //출력을 위해서이기에 const를 붙힘. 모든 변경을 하지않는 메소드들은 무조건 const를 붙여야 함. 참조로 받은 객체는 웬만하면 const를 만드는게좋음. 
//	{
//		return size;
//	}
//	int At(int index) const 
//	{
//		return buf[index];
//	}
//};
//void PrintArray(const Array& arr) 
//{
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		cout << arr.At(i) << endl;
//	}
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//	PrintArray(arr);
//
//	Array arr2 = arr; // Array arr2(arr);
//	arr2.Add(100);
//	arr2.Add(200);	
//	PrintArray(arr2);
//	system("pause");
//}


//#include <iostream>  //중복연산자
//#include <cstdlib> 
//using namespace std;
//class Point
//{
//	int x, *py;
//public:
//	Point(int a = 0, int b = 0) : x(a)
//	{
//		py = new int(b);
//	}
//	~Point()
//	{
//		delete py;
//	}
//	void Print()const
//	{
//		cout << x << ',' << *py << endl;
//	}
//	void operator=(const Point& arg) //깊은 복사 ,즉 이건 복사대입연산자임  Point p2(p1)
//	{
//		x = arg.x;
//		*py = *arg.py;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3;
//
//	pt2 = pt1;  //y만 주소로 받은 상태.
//	//pt2.operator=(pt1);//컴파일러는 항상이런식으로 해석을함.
//	pt1.Print();
//	pt2.Print();
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib> 
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a = 0, int b = 0) : x(a), y(b)
//	{}
//	void Print()const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3;
//
//	//pt2 = pt1;  //객체 복사
//	pt2.operator=(pt1);//컴파일러는 항상이런식으로 해석을함.
//	pt1.Print();
//	pt2.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib> 
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a = 0, int b = 0) : x(a), y(b)
//	{}
//	void Print()const
//	{
//		cout << x << ',' << y << endl;
//	}
//	const Point& operator+(const Point& pt) const
//	{
//		return Point(x + pt.x, y + pt.y);
//	}
//	const Point& operator-(const Point& pt)const
//	{
//		return Point(x - pt.x, y - pt.y);
//	}
//	const Point& operator+=(const Point& pt) //p3에 자신의 타입을 넣어주기위해서 즉 자기 자신을 반환해야한다. 
//	{  
//		x += pt.x;
//		y += pt.y;
//		return *this; //객체 자신의 참조가 반환됨
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3;
//
//	pt3 = pt1 += pt2; // =이 붙어있으므로 원래 이게 가능한 연산자이다. 
//	pt1.Print();
//	pt3.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib> 
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a = 0, int b = 0) : x(a), y(b)
//	{}
//	void Print()const
//	{
//		cout << x << ',' << y << endl;
//	}
//	const Point& operator+(const Point& pt) const
//	{
//
//		Point result(x + pt.x, y + pt.y);
//		return result;
//	}
//	const Point& operator-(const Point& pt)const
//	{
//		return Point(x - pt.x, y - pt.y);
//	}
//	const Point& operator+=(const Point& pt) //p3에 자신의 타입을 넣어주기위해서 즉 자기 자신을 반환해야한다. 
//	{
//		x += pt.x;
//		y += pt.y;
//			return Point(x, y);
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3;
//
//	pt3 = pt1 += pt2; // =이 붙어있으므로 원래 이게 가능한 연산자이다. 
//	pt1.Print();
//	pt3.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib> 
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a = 0, int b = 0) : x(a), y(b)
//	{}
//	void Print()const
//	{
//		cout << x << ',' << y << endl;
//	}
//	/*const Point& operator+(const Point& pt) const
//	{
//
//		Point result(x + pt.x, y + pt.y);
//		return result;
//	}
//	const Point& operator-(const Point& pt)const
//	{
//		return Point(x - pt.x, y - pt.y);
//	}*/
//	 void operator+=(const Point& pt) //pt1.operator += (pt2); 즉 함수이름이 operator+=이다.x,y값이 변경되기때문에 const를 붙히면 안된다. 
//	{
//		 x += pt.x;
//		 y += pt.y;
//	 }
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//
//	pt1 += pt2; //덧셈은 둘다 변하지 않았지만 이것은 아니다. 즉 pt1=p1+pt2; 즉 pt1.operator+=(pt2);이랑 똑같은 코드이다.
//	pt1.Print();
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib> 
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a = 0, int b = 0) : x(a), y(b)
//	{}
//	void Print()const
//	{
//		cout << x << ',' << y << endl;
//	}
//	bool operator==(const Point& pt)const
//	{
//		if (x == pt.x && y == pt.y)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(5, 4);
//
//	if (pt1 == pt2) //pt1.operator == (pt2)
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
//class Point
//{
//	int x, y;
//public:
//	Point(int a = 0, int b = 0) : x(a), y(b)
//	{}
//	void Print()const
//	{
//		cout << x << ',' << y << endl;
//	}
//	const Point& operator+(const Point& pt) const 
//	{
//
//		Point result(x + pt.x, y + pt.y);
//		return result;
//	}
//	const Point& operator-(const Point& pt)const
//	{
//		return Point(x - pt.x, y - pt.y);
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3;
//	pt3= pt1.operator-(pt2); 
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib> 
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a = 0, int b = 0) : x(a), y(b)
//	{}
//	void Print()const
//	{
//		cout << x << ',' << y << endl;
//	}
//	const Point& operator+(const Point& pt) const //뒤에도const를 붙히는 이유는 x와 y값을 변경할수없기때문에 
//	{
//		return Point (x + pt.x, y + pt.y);
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3 = pt1.operator+(pt2); // pt1+pt2 
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib> 
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a = 0, int b = 0) : x(a), y(b)
//	{}
//	void Print()const
//	{
//		cout << x << ',' << y << endl;
//	}
//	const Point& operator+(const Point& pt) const //뒤에도const를 붙히는 이유는 x와 y값을 변경할수없기때문에 
//	{
//		
//		Point result(x + pt.x, y + pt.y);
//		return result;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3 = pt1+pt2; //근데 pt1+pt2가 되면 훨씬쉬움 그래서 위에 operator를 붙힘. 
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib> 
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a = 0, int b = 0) : x(a), y(b)
//	{}
//	void Print()const
//	{
//		cout << x << ',' << y << endl;
//	}
//	const Point& Add(const Point& pt)  //메세지를 받은객체 pt1.즉 this.pt1
//	{ 
//		Point result(x + pt.x, y + pt.y);
//		return result;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3 = pt1.Add(pt2); //pt1과 pt2를 더하라
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib> 
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a = 0, int b = 0) : x(a), y(b)
//	{}
//	void Print()const
//	{
//		cout << x << ',' << y << endl;
//	}
//	const Point& Add(const Point& pt)  //메세지를 받은객체 pt1.즉 this.pt1
//	{  //즉 이함수객체 this객체는 pt1이고 pt객체는 pt2객체 
//		return Point(x+pt.x+pt.y);
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3 = pt1.Add(pt2); //pt1에 pt2를 더하라
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib> 
//using namespace std;
//class Point
//{
//	int x, y;
//public:
// 	Point(int a = 0, int b = 0): x(a),y(b)
//	{}
//	void Print()const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//void main()
//{
//Point pt1(2,3);
//Point pt2(5,3);
//
//pt1.Print();
//pt2.Print();
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
//	Array(const Array& arg)  //복사생성자
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
//	int Size() const //출력을 위해서이기에 const를 붙힘. 모든 변경을 하지않는 메소드들은 무조건 const를 붙여야 함. 참조로 받은 객체는 웬만하면 const를 만드는게좋음. 
//	{
//		return size;
//	}
//	int At(int index) const 
//	{
//		return buf[index];
//	}
//};
//void PrintArray(const Array& arr) 
//{
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		cout << arr.At(i) << endl;
//	}
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	PrintArray(arr);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib> //메소드 = 기능
//using namespace std;
//class Array
//{
//	int* buf;
//	int size;
//	int capacity;
//public :
//	Array(int cap = 10)
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
//	int Size() const
//	{
//		return size;
//	}
//	int At(int index) const //수정되지않는 함수이기에 const를 사용
//	{
//		return buf[index];
//	}
//};
//void main()
//{
//	Array arr(100);
//	
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		cout << arr.At(i) << endl;
//	}
//	system("pause");
//}
//
//
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
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(int n)
//	{
//		buf[size++] = n;
//	}
//	int Size() const //출력을 위해서이기에 const를 붙힘. 모든 변경을 하지않는 메소드들은 무조건 const를 붙여야 함. 참조로 받은 객체는 웬만하면 const를 만드는게좋음. 
//	{
//		return size;
//	}
//	int At(int index) const 
//	{
//		return buf[index];
//	}
//};
//void PrintArray(const Array& arr) //클래스이기 때문에 그냥 복사되면안되고 참조로 받아야하며 const로 받아야한다. 클래스가아니기때문에 arr을 받을때 arr의 기능을 사용하는게 아니기때문에 참조만 받는것임.
//const를 붙히는 이유는 const를 붙힘으로써 참조의 위험을 없앤것.참조라는건 원본을 변경할수있는 위험이 있음. 함수안에 갑자기 add.Add가 붙으면 내가출력하는 값과는 달리 Add값도 호출되어 나올수가있음.cosnt를 붙히는것은 변경하지 않고 출력만 할려는것이다.
//{
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		cout << arr.At(i) << endl;
//	}
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	PrintArray(arr);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib> //메소드 = 기능
//using namespace std;
//class Array
//{
//	int* buf;
//	int size;
//	int capacity;
//public :
//	Array(int cap = 10)
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
//	int Size() const
//	{
//		return size;
//	}
//	int At(int index) const //수정되지않는 함수이기에 const를 사용
//	{
//		return buf[index];
//	}
//};
//void main()
//{
//	Array arr(100);
//	
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		cout << arr.At(i) << endl;
//	}
//	system("pause");
//}