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
//		Point(2, 3); //�ӽð�ü
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
//		Point m;// ��0.0�̶�� �����Ͱ�ü��
//		m = Point(2, 3);//�߿�: m�� �̹� 0,0�̶�� �����Ͱ�ü�ε� �ű⿡ 2,3�� ������ . �׷��� 2,3�� �ӽð�ü��� ��.�ӽð�ü�� �̸��� ���� �� ���忡�� ��������� �� ���忡�� ������.
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
//	m = Point(2,3);//�߿�: m�� �̹� 0,0�̶�� �����Ͱ�ü�ε� �ű⿡ 2,3�� ������ . �׷��� 2,3�� �ӽð�ü��� ��.�ӽð�ü�� �̸��� ���� �� ���忡�� ��������� �� ���忡�� ������.
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
//	m = int(10);//���ĺ�ȯ�̶� �� int��� ���Ŀ� 10���� �־ ���ʰ��� ������ ��� ��.
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
//	int operator[](int index)const//int at(int index) const //�Ȱ���
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
//	cout <<arr[0]/*arr.at(0)at�� ����� []�� ���� */<< endl;
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
//	int x = pt1[0]; //	pt1.operator[](0); //[]�� �����̳ʰ�ü�� ���ҵ��� ������ �޸𸮸� ��������� ��������� ������ �츮�� �������� �ϴ°��̱� ������ ������. 
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
//	const Point operator++(int n) //int�� 0�� �ޱ����� ����,ũ�� �߿����� ���� 
//	{
//		Point t(x, y); //�긦 ������ִ� ������ �����ϱ� �� �� ������ֱ� ����
//		++x;
//		++y;
//		return t; //t�� ������� ��ü �̹Ƿ� �ּҷ� ������ �ȵǰ� ������ �޴´�.
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2;
//	pt2 = pt1++; //pt2 =pt1.operator++(0) ���� �����ڴ� ������ �̷��� �ؼ���
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
//		py = new int(b);//py�� ����Ű�� �޸�
//	}
//	Point(const Point& arg)
//	{ //pt2= pt1 ����
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
//	void operator=(const Point& arg) //���� ���� ,�� �̰� ������Կ�������  Point p2(p1)
//	{
//		
//		x = arg.x;
//		*py = *arg.py;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2=pt1;  //���迡 ������ ��������ڿ� ������Կ����� ����.
//	
//	pt1.Print();
//	pt2.Print();
//	system("pause");
//}


//#include <iostream>  //�ߺ�������
//#include <cstdlib>   //��ȯ������ �޴°��� �ݵ�� ��ȯ���� ����.
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
//	const Point& operator=(const Point& arg) //���� ���� ,�� �̰� ������Կ�������  Point p2(p1)
//	{
//		x = arg.x;
//		*py = *arg.py;
//		return *this; //�Ʒ��� ����������� ����
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3;
//
//	pt2 = pt1;  //y�� �ּҷ� ���� ����.
//	//pt2.operator=(pt1);//�����Ϸ��� �׻��̷������� �ؼ�����.
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
//	int Size() const //����� ���ؼ��̱⿡ const�� ����. ��� ������ �����ʴ� �޼ҵ���� ������ const�� �ٿ��� ��. ������ ���� ��ü�� �����ϸ� const�� ����°�����. 
//	{
//		return size;
//	}
//	int At(int index) const
//	{
//		return buf[index];
//	}
//	const Array& operator=(const Array& pt) //operator=�� �׻� �ڱ��ڽ��� ���⿡ const ������ ��.
//	{  //this = arr2, pt = arr��
//
//		if (capacity != pt.capacity)//�޸� �뷮�� ������ �ƴ����� ���°�. 
//		{
//			delete[] buf; //�ϴ� �����ϴµ� �޸𸮰� �����ʱ⿡ buf�� ������. �� �ڵ帻��� ��������ڿ� �Ȱ���.
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
//	int Size() const //����� ���ؼ��̱⿡ const�� ����. ��� ������ �����ʴ� �޼ҵ���� ������ const�� �ٿ��� ��. ������ ���� ��ü�� �����ϸ� const�� ����°�����. 
//	{
//		return size;
//	}
//	int At(int index) const
//	{
//		return buf[index];
//	}
//	void operator=(const Array& pt) //���� ���Կ�����
//	{  //this = arr2, pt = arr��
//		
//		if (capacity != pt.capacity)//�޸� �뷮�� ������ �ƴ����� ���°�. 
//		{
//			delete[] buf; //�ϴ� �����ϴµ� �޸𸮰� �����ʱ⿡ buf�� ������. �� �ڵ帻��� ��������ڿ� �Ȱ���.
//			buf = new int[pt.capacity]; //�������� ����ũ��� �ٽ� ������.
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
//	Array arr2 = arr; //���� 10,20,30�� ���簡 �� ����
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
//	int Size() const //����� ���ؼ��̱⿡ const�� ����. ��� ������ �����ʴ� �޼ҵ���� ������ const�� �ٿ��� ��. ������ ���� ��ü�� �����ϸ� const�� ����°�����. 
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


//#include <iostream>  //�ߺ�������
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
//	void operator=(const Point& arg) //���� ���� ,�� �̰� ������Կ�������  Point p2(p1)
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
//	pt2 = pt1;  //y�� �ּҷ� ���� ����.
//	//pt2.operator=(pt1);//�����Ϸ��� �׻��̷������� �ؼ�����.
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
//	//pt2 = pt1;  //��ü ����
//	pt2.operator=(pt1);//�����Ϸ��� �׻��̷������� �ؼ�����.
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
//	const Point& operator+=(const Point& pt) //p3�� �ڽ��� Ÿ���� �־��ֱ����ؼ� �� �ڱ� �ڽ��� ��ȯ�ؾ��Ѵ�. 
//	{  
//		x += pt.x;
//		y += pt.y;
//		return *this; //��ü �ڽ��� ������ ��ȯ��
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3;
//
//	pt3 = pt1 += pt2; // =�� �پ������Ƿ� ���� �̰� ������ �������̴�. 
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
//	const Point& operator+=(const Point& pt) //p3�� �ڽ��� Ÿ���� �־��ֱ����ؼ� �� �ڱ� �ڽ��� ��ȯ�ؾ��Ѵ�. 
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
//	pt3 = pt1 += pt2; // =�� �پ������Ƿ� ���� �̰� ������ �������̴�. 
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
//	 void operator+=(const Point& pt) //pt1.operator += (pt2); �� �Լ��̸��� operator+=�̴�.x,y���� ����Ǳ⶧���� const�� ������ �ȵȴ�. 
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
//	pt1 += pt2; //������ �Ѵ� ������ �ʾ����� �̰��� �ƴϴ�. �� pt1=p1+pt2; �� pt1.operator+=(pt2);�̶� �Ȱ��� �ڵ��̴�.
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
//	const Point& operator+(const Point& pt) const //�ڿ���const�� ������ ������ x�� y���� �����Ҽ����⶧���� 
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
//	const Point& operator+(const Point& pt) const //�ڿ���const�� ������ ������ x�� y���� �����Ҽ����⶧���� 
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
//	Point pt3 = pt1+pt2; //�ٵ� pt1+pt2�� �Ǹ� �ξ����� �׷��� ���� operator�� ����. 
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
//	const Point& Add(const Point& pt)  //�޼����� ������ü pt1.�� this.pt1
//	{ 
//		Point result(x + pt.x, y + pt.y);
//		return result;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3 = pt1.Add(pt2); //pt1�� pt2�� ���϶�
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
//	const Point& Add(const Point& pt)  //�޼����� ������ü pt1.�� this.pt1
//	{  //�� ���Լ���ü this��ü�� pt1�̰� pt��ü�� pt2��ü 
//		return Point(x+pt.x+pt.y);
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3 = pt1.Add(pt2); //pt1�� pt2�� ���϶�
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
//	Array(const Array& arg)  //���������
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
//	int Size() const //����� ���ؼ��̱⿡ const�� ����. ��� ������ �����ʴ� �޼ҵ���� ������ const�� �ٿ��� ��. ������ ���� ��ü�� �����ϸ� const�� ����°�����. 
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
//#include <cstdlib> //�޼ҵ� = ���
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
//	int At(int index) const //���������ʴ� �Լ��̱⿡ const�� ���
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
//	int Size() const //����� ���ؼ��̱⿡ const�� ����. ��� ������ �����ʴ� �޼ҵ���� ������ const�� �ٿ��� ��. ������ ���� ��ü�� �����ϸ� const�� ����°�����. 
//	{
//		return size;
//	}
//	int At(int index) const 
//	{
//		return buf[index];
//	}
//};
//void PrintArray(const Array& arr) //Ŭ�����̱� ������ �׳� ����Ǹ�ȵǰ� ������ �޾ƾ��ϸ� const�� �޾ƾ��Ѵ�. Ŭ�������ƴϱ⶧���� arr�� ������ arr�� ����� ����ϴ°� �ƴϱ⶧���� ������ �޴°���.
//const�� ������ ������ const�� �������ν� ������ ������ ���ذ�.������°� ������ �����Ҽ��ִ� ������ ����. �Լ��ȿ� ���ڱ� add.Add�� ������ ��������ϴ� ������ �޸� Add���� ȣ��Ǿ� ���ü�������.cosnt�� �����°��� �������� �ʰ� ��¸� �ҷ��°��̴�.
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
//#include <cstdlib> //�޼ҵ� = ���
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
//	int At(int index) const //���������ʴ� �Լ��̱⿡ const�� ���
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