//#include <iostream>
//#include <vector>
//#include <cstdlib>
//using namespace std;
//class Array  //�ϴ� ������ �����ϴ� array��� �����ϰ� �ۼ�
//{
//	int* buf; 
//	int size;
//public:
//	//������
//	Array() :size(0) //size�� 0���� �ʱ�ȭ 
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
//class Array  //�ϴ� ������ �����ϴ� array��� �����ϰ� �ۼ�
//{
//	int buf[100]; //�ϴ� 100���� �����Ҽ��ִ� �迭 ����
//	int size;
//public: 
//	Array():size(0) //size�� 0���� �ʱ�ȭ 
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
//typedef vector<int> Array;  //�迭�� ũ�Ⱑ �������ְ� ���ʹ� �� ũ�⸦ ���̰����̰��Ҽ������� �Ѵ� ���հ�ü�� �ǹ̸� �����ִ�.
//int main()
//{
//	Array arr;  //100,200,300�̶� ��Ҹ� ����ִ� ��ü, ���հ�ü �ǹ�, container��ü��� �θ� , ������ �����ϴ� �����̳�
//
//	arr.push_back(100); //100�� �����ٰ� �־��
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
//typedef vector<int> Array;  //�迭�� ũ�Ⱑ �������ְ� ���ʹ� �� ũ�⸦ ���̰����̰��Ҽ������� �Ѵ� ���հ�ü�� �ǹ̸� �����ִ�.
//int main()
//{
//	Array arr;  //100,200,300�̶� ��Ҹ� ����ִ� ��ü, ���հ�ü �ǹ�, container��ü��� �θ� , ������ �����ϴ� �����̳�
//
//	arr.push_back(100); //100�� �����ٰ� �־��
//	arr.push_back(200);
//	arr.push_back(300);
//
//	cout << arr.at(0) << endl;  //0��° ,at�� �� �����ϴ¸� 
//	cout << arr.at(1) << endl;
//	cout << arr.at(2) << endl;
//	system("pause");
//}


//#include <iostream>
//#include <vector>
//#include <cstdlib>
//using namespace std;
//typedef vector<int> Array;  //�迭�� ũ�Ⱑ �������ְ� ���ʹ� �� ũ�⸦ ���̰����̰��Ҽ������� �Ѵ� ���հ�ü�� �ǹ̸� �����ִ�.
//int main()
//{
//	Array arr;  //100,200,300�̶� ��Ҹ� ����ִ� ��ü, ���հ�ü �ǹ�, container��ü��� �θ� , ������ �����ϴ� �����̳�
//
//	arr.push_back(100); //100�� �����ٰ� �־��
//	arr.push_back(200);
//	arr.push_back(300);
//
//	cout << arr[0] << endl; //arr�� 0��° ���Ҹ� ��� ��� ��
//	cout << arr[1] << endl;
//	cout << arr[2] << endl;
//	system("pause");
//}

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point  //�������� ��ü�̹Ƿ� ���� ī�ǰ� �ƴ� ���� ī�Ǹ� �ؾ���. 
//{
//	int* px;
//	int* py;
//public:
//	Point(int _x = 0, int _y = 2) : px(NULL), py(NULL)
//	{
//		px = new int(_x);
//		py = new int(_y);
//	}
//	//���� ������ arg= p1
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
//	//���� ����, ���� �������� ������ ��
//	//Point p2(p1);
//	//p2.Print();
//
//	//�ʱ�ȭ�� �̿��� �������� , ������ �̿��� ���� ����� ����.
//	Point p2 = p1;
//	p2.Print();
//
//	//Point p2;  �������̿��� ��������¾ȉ�.
//	//p2 = p1;
//	//p2.Print();
//	system("pause");
//}

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point  //�������� ��ü�̹Ƿ� ���� ī�ǰ� �ƴ� ���� ī�Ǹ� �ؾ���. 
//{
//	int* px;
//	int* py;
//public:
//	Point(int _x = 0, int _y = 2) : px(NULL), py(NULL)
//	{
//		px = new int(_x);
//		py = new int(_y);
//	}
//	//���� ������ arg= p1
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
//	//���� ����, ���� �������� ������ ��
//	//Point p2(p1);
//	//p2.Print();
//
//	//�ʱ�ȭ�� �̿��� �������� , ������ �̿��� ���� ����� ����.
//	Point p2 = p1;
//	p2.Print();
//
//	//Point p2;  �������̿��� ��������¾ȉ�.
//	//p2 = p1;
//	//p2.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point  //�������� ��ü�̹Ƿ� ���� ī�ǰ� �ƴ� ���� ī�Ǹ� �ؾ���. 
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
//	//���� ����, ���� �������� ������ ��
//	Point p2(p1);
//	p2.Print();
//
//	system("pause");
//}


//#include <iostream>  //���� ���� ��ü  
//#include <cstdlib>
//#include <cstring>  //strlen������ ����
//using namespace std;
//class Person
//{
//	char* name;
//	int age;
//public:
//	Person(const char* n = "noname", int a = 0)  //������
//	{
//		int slen = strlen(n);
//		name = new char[slen + 1];
//		strcpy_s(name, slen + 1, n);
//		age = a;
//	}
//	//��������ڸ� ���鶧 �����. �ܿ��.  //���⼭ per= p1��
//	Person(const Person& per)//�ڱ��ڽ��� �μ��� �ް� �����ν� �޴´�.�Է¹ް� ����Ǹ�ȵǱ� ������ const�� �޴´�. 
//	{
//		name = new char[strlen(per.name) + 1];
//		strcpy_s(name, strlen(per.name) + 1, per.name);
//		age = per.age;
//	}
//	~Person() //�����ڿ� new�� �����⶧���� �Ҹ��ڿ��� delete������Ѵ�.
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
//	//1.�ʱ�ȭ �Ͽ� �����ϴ� ���
//	//Person p2(p1); �̹���� ���� �������̴�.
//	//p2.Print();
//	///2.�����Ͽ� �����ϴ� ���
//	//Person p2; //�̹������ ������ҷ��� �⺻�����ڸ� �������Ŀ� p1�� ���ڿ��� p2�� �ٽ� �����ؾ��Ѵ�.
//	//p2 = p1; //�̰͵� ���� �������̴�.
//	//p2.Print();
//  //���� ������
//	Person p2(p1); //�ڽ��� Ÿ��(Person)�� �μ��� �޴� �����ڰ� �ִٴ¸� 
//	p2.Print();  //�����ڰ� �����ɶ� char,int������ �ڽ��� Ÿ�԰�ü�� �޾Ƽ� �����Ҷ� �װ��� �ٷ� ����������̴�.
//	system("pause");
//}


//#include <iostream>  //���� ���� ��ü  
//#include <cstdlib>
//using namespace std;
//class Person
//{
//	char* name;
//	int age;
//public :
//	Person(const char* n = "noname", int a = 0)  //������
//	{
//		int slen = strlen(n);
//			name = new char[slen + 1];
//		strcpy_s(name, slen + 1, n);
//		age = a;
//	}
//	~Person() //�����ڿ� new�� �����⶧���� �Ҹ��ڿ��� delete������Ѵ�.
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


//#include <iostream>  //�� ���� ��ü
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
//	//�����°�ü�� ����� ���ڰ� ���µ� ���������ǰ�ü�� ���� �ּҸ� ����Ű���ֱ�
//	//������ ������ �޸𸮴����� �߻��Ҽ��ְ� �� ����� ��ü�� �������� ���������ʰ� ���� ����ǹ����ٴ°� ������ �ȴ�.
//	//Point p2 = p1; �Ʒ��� ���� ���̴�. 
//	Point p2(p1);
//	p2.Print();
//
//	Point p3;
//	p3 = p1;  
//	p3.Print();
//	system("pause");
//}


//#include <iostream>  //�� ���� ��ü
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
//	Point p2 = p1; //p2�� p1���� �����ض�. Ÿ���� ���� ��ü���� ���簡 �����ϴ�. 
//	p2.Print();  
//	//���� 2���,Point p2 =p1; �� �ʱ�ȭ(���� �޸� ����׸�) , p3=p1�� ����(�ٸ� �޸𸮱׸�)
//	Point p3;
//	p3 = p1; //�̰͵� ������ ������ �ϳ�. 
//	p3.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int* px;   //�̹��� ���� ���°� �ƴ϶� ������ ������. 
//	int* py;
//public:
//	Point(int _x = 0, int _y = 2) : px(NULL), py(NULL) //�ƹ��͵� �Ȱ���Ŵ 
//	{
//		px = new int(_x); //���Ӱ� ���� �� �޸𸮿� x���� y���� �־ px,py�� ���� ����Ű�� ����.
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
//	Point(int _x = 0, int _y = 2) : x(_x), y(_y)  //�⺻ ������ =0,=2�� ����� ������ ��.
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
//	Point(int _x=0, int _y=2)  : x(_x), y(_y)  //�⺻ ������ =0,=2�� ����� ������ ��.
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
//	Point arr[5] = { Point(5,6), Point(3,4) }; //�̷������� �ʱ�ȭ ����
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
//	Point arr[5] = { Point(5,6), Point(3,4) }; //�̷������� �ʱ�ȭ ����
//	int i;
//	for (i = 0; i < 5; ++i)
//	{
//		arr[i].Print();
//	}
//	system("pause");
//}


//#include <iostream> //��ü�� ������ �ʱ�ȭ���(������)�� ���������(�Ҹ���)�� �����־���Ѵ�.������ �̰� �츮���� �Ⱥ��ϻ����� �����ִ�.  
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
//	Point arr[5]; //������ü ������ ����°�
//	int i;
//	for (i = 0; i < 5; ++i)
//	{
//		arr[i].Print();
//	}
//	system("pause");
//}



//#include <iostream> //��ü�� ������ �ʱ�ȭ���(������)�� ���������(�Ҹ���)�� �����־���Ѵ�.������ �̰� �츮���� �Ⱥ��ϻ����� �����ִ�.  
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 2) : x(_x), y(_y) //�̰��� x�� _x�� �ְ� y�� _y���ִ°�. ���ʷ� ���� �Ҵ��ϴ°�.�̰� �׳� ������
//	{
//		x = _x;//���⿡ ���� ������ �׳� ó�� �ʱ�ȭ�� ���� ���߿� �� �ִ´ٰ� �����մ�.
//		//x = x; y = y; //�̰��� �ʱ�ȭ �ڵ尡 �ƴ϶� �����̶�� ��������. 
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
//	cout << &p1 << ":";	p1.Print();  //���ð�ü�� �ּ�
//	cout << p << ":";	(*p).Print(); //����ü�� �ּ� �׷��� ���� ���̰� ũ��. 
//	delete p;
//	system("pause");
//}



//#include <iostream> //��ü�� ������ �ʱ�ȭ���(������)�� ���������(�Ҹ���)�� �����־���Ѵ�.������ �̰� �츮���� �Ⱥ��ϻ����� �����ִ�.  
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
//	cout << &p1 << ":";	p1.Print();  //���ð�ü�� �ּ�
//	cout << p << ":";	(*p).Print(); //����ü�� �ּ� �׷��� ���� ���̰� ũ��. 
//	delete p;
//	system("pause");
//}


//#include <iostream> //��ü�� ������ �ʱ�ȭ���(������)�� ���������(�Ҹ���)�� �����־���Ѵ�.������ �̰� �츮���� �Ⱥ��ϻ����� �����ִ�.  
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 2)  //p1.Print(), p2,Print() �� �Լ���ȣ���� ���p1,p2 ��ü�� �ּҰ� this�ΰ�.
//	{   //this�� �����Ͱ��� �������ָ� ��.
//		(*this).x = x; (*this).y = y;  //�򰥸��⶧���� this��� Ű���带 �����µ� ���� ��ü�� �ּҶ�� �����ϸ� ��. 
//		cout << "Point()" << endl;
//	}
//	void Print() const
//	{
//		cout << this <<":"<< /*(*this)�̰� �����Ǿ�����*/x << "," << /*(*this)�̰� ����*/y << endl;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3); 
//	Point p2(2, 3);
//	Point p3(2, 3);
//
//	p1.Print();  //����ϸ� this�� ���� p1,p2,p3�� �ּ��� �� �����ּ��̴�.
//	p2.Print();
//	p3.Print();
//
//	cout << &p1 << ":";	p1.Print();
//	cout << &p2 << ":";	p2.Print();
//	cout << &p3 << ":";	p3.Print();
//	system("pause");
//}


//#include <iostream> //��ü�� ������ �ʱ�ȭ���(������)�� ���������(�Ҹ���)�� �����־���Ѵ�.������ �̰� �츮���� �Ⱥ��ϻ����� �����ִ�.  
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
//	void Print() const //���������ʴ� �޼ҵ忩�� ����.
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
//void PrintPoint(const Point* p1)  //���ڸ� �ޱ⶧���� const�� ����
//{
//	//(*p1).Set(); �׷��� ��� �ȵ�.
//	(*p1).Print();
//}
//
//int main()
//{
//	Point p1(2, 3);
//
//	PrintPoint(&p1); //2,3�� ���, ����Լ��� �ƴ�
//	system("pause");
//}


//#include <iostream> //��ü�� ������ �ʱ�ȭ���(������)�� ���������(�Ҹ���)�� �����־���Ѵ�.������ �̰� �츮���� �Ⱥ��ϻ����� �����ִ�.  
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
//	void Print() const //���������ʴ� �޼ҵ忩�� ����.
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



//#include <iostream> //��ü�� ������ �ʱ�ȭ���(������)�� ���������(�Ҹ���)�� �����־���Ѵ�.������ �̰� �츮���� �Ⱥ��ϻ����� �����ִ�.  
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
//	void Print() const //���������ʴ� �޼ҵ忩�� ����.
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


//#include <iostream> //��ü�� ������ �ʱ�ȭ���(������)�� ���������(�Ҹ���)�� �����־���Ѵ�.������ �̰� �츮���� �Ⱥ��ϻ����� �����ִ�.  
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 2) //p3���� _y�� ����
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
//		Point p1(2, 3);  //���� ��ü
//		Point* p = new Point(2, 3); //���� ����°���, �� ��ü 
//
//		p1.Print();
//		(*p).Print();
//
//		delete p;//p�� �Ҹ��� ȣ��
//	} //�Ҹ��ڸ� �������Ͽ� ǥ���� ��ȣ,delete�������� p1�� �Ҹ��ڸ� ���δ�. 
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
//	Point(int _x=0) //=0�� �� ������ �μ��� �� �� p2�� ���ؼ� 
//	{
//		x = _x; y = 0;  //_x �� y�� �־ ����
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
//	Point p2;  //p2�� ������ִ� �Լ��� ����������. 1.�ߺ��Լ������. 2.�μ��� �ƹ��͵� �ȢZ���� ������ �� �־��ֱ�.
//
//	p1.Print();
//	p2.Print();
//	system("pause");
//}

//#include <iostream> //��ü�� ������ �ʱ�ȭ���(������)�� ���������(�Ҹ���)�� �����־���Ѵ�.������ �̰� �츮���� �Ⱥ��ϻ����� �����ִ�.  
//#include <cstdlib>
//using namespace std;
//class Point   
//{
//	int x;
//	int y;
//public:
//	Point(int _x) //(10)int���� �ޱ����Ͽ� 
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


//#include <iostream> //��ü�� ������ �ʱ�ȭ���(������)�� ���������(�Ҹ���)�� �����־���Ѵ�.������ �̰� �츮���� �Ⱥ��ϻ����� �����ִ�.  
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	//int n = 10;
//	int n(10);//Ŭ����,��ü,(�ʱ�ȭ��) //c++�� �ʱ�ȭ�� ��ȣ�ļ� �ص��ȴ�. �׳� ������, c++������ int������ int type,class��� �ҷ�����.
//	cout << n << endl;
//	system("pause");
//}



//#include <iostream> //��ü�� ������ �ʱ�ȭ���(������)�� ���������(�Ҹ���)�� �����־���Ѵ�.������ �̰� �츮���� �Ⱥ��ϻ����� �����ִ�.  
//#include <cstdlib>
//using namespace std;
//class Point   
//{
//	int x;
//	int y;
//public:
//	Point()//������ ,�Ҹ��ڴ� �츮�� �ȸ��� �˾Ƽ� ����������Ѵ�. ��׸� �⺻����,�Ҹ��� ��� �Ѵ�. 
//
//	{
//		x = 0; y = 0;  //�����ڸ� ������⶧���� �Ʒ� �ʱ�ȭ�ϴ� Init�� ���ֵ� �ȴ�. 
//		cout << "Point()" << endl;
//	}  	
//	~Point()  //ó�������ڰ� �����ǰ� �������� ��� �Ҹ��ڰ� �����ȴ�.
//	{
//		cout << "~Point()" << endl;
//	}
//	// void Init() //���� �����ϱ� ���� ����ٰ� �ٸ����� ���°��� �ʱ�ȭ�ϴ°��� �����ϴ°��� �ƴϴ�. 
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
//class Point  //Ŭ�󽺷� �ٲ㵵 ���̰� ����. 
//{
////class������ private�� ������ �����ϴ�. 
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
//private: //struct�� ���������ʱ� ���Ͽ�, �� �ܺη� �������� �ʱ����Ͽ�
//	int x;
//	int y;
//public: //�Ʒ� �Լ����� �ܺο� ����� �ʿ��ϱ⶧���� public���� �������
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


//#include <iostream> //c��� ��� , �Լ��� �Լ��� ���ļ� ���� ��µǴ� ���.
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