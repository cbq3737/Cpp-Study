#include <iostream> 
#include <cstdlib>
using namespace std;
struct Point  
{
	int x;
	int y;

	void Set(int x, int y)
	{
		(*this).x = x; //�ڽ��ǰ� x�� y�� ����. this�� �ּ��� ������ struct pt��ü���� �ȿ��� �ϱ⶧���� �ڱ��ڽ��� �ּҸ� ��Ÿ���ִ°��̴�. 
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

	pt.Set(2, 3);  //pt�� 2,3�� �����ض�
	pt.Print();  //pt�� ����ض�.
	system("pause");
}



//#include <iostream> 
//#include <cstdlib>
//using namespace std;  //struct �����Ҷ� �Լ��ȿ� �־���ϴ� �Լ�.
//struct Point
//{
//	int x;
//	int y;
//
//	void SetPoint(int x, int y)
//	{
//	(*this).x = x; //�ڽ��ǰ� x�� y�� ����. this = &pt
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
//	pt.SetPoint(2, 3);  //pt�� 2,3�� �����ض�
//	pt.PrintPoint();  //pt�� ����ض�.
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
//void PrintPoint(const Point* p) //�Է¹ް� ����ؾ��ϱ� ������ const�� ����. 
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
//	Point pt = { 2,3 };  //tydef�Ƚᵵ��.
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
//	int* p = AllocArray(10);  //�������� ���Ҹ� �����  
//	int i;
//	for (i = 0; i < 10; ++i)
//	{
//		p[i] = i + 1;
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		cout << p[i] << endl;
//	}
//	DeleteArray(p); //������ ���ȣ�� ���ý� �� �Ȱ��� ���;��Ѵ�.
//	system("pause");
//}



//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//
//void main()
//{
//	int* p = new int[10];  //�������� ���Ҹ� �����  
//	int i;
//	for (i = 0; i < 10; ++i)
//	{
//		p[i] = i + 1;
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		cout << p[i] << endl;
//	}
//	delete []p; //������ ���ȣ�� ���ý� �� �Ȱ��� ���;��Ѵ�.
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//
//void main()
//{
//	int* p = new int[10];  //�������� ���Ҹ� �����  
//	int i;
//	for (i = 0; i < 10; ++i)
//	{
//		p[i] = i + 1;            //�� ����
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		cout << p[i] << endl;   //���
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
//	int* p = new int;  //c���� ġ�� malloc 
//	
//	*p = 10;
//	cout << *p << endl;
//	delete p; //free
//	system("pause");
//}



//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void Increment(int& n)  //����Ǿ� ����ϴ°��̱⶧���� const�� ���� �ȵȴ�. 
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
//void PrintArray(const int* arr, int size) //�Է¹޴°ſ��� ����ɼ��ִٴ� ���趧���� const�� ������.
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
//	InitArray(arr, 5); //�ʱ�ȭ�ϴ� �Լ�
//	PrintArray(arr, 5); //����ϴ� �Լ�
//	system("pause");
//	//return 0; ���� int main�̱⶧���� �����Ǿ��ִ�.
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void Add(const int* pa,const int* pb, int* psum)  //const�� ���� ������ �о���°��̱⶧���� �����°�,�Լ��ȿ��� �װ��� �ٲ�� �ȵǱ⶧���� ���̴°��̰� psum�� �������°��̱⶧���� ������ �ʴ´�.
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
//	//s[0] = 'S'; //�������� �ν��� ������������ �ȵ�.���� ������ ������̱⶧���� �ȵ�. �׷��� const�� ����.
//	cout << s << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//using namespace std;
//void main()
//{
//	int n = 10;
//	const int* const p = &n;  // 2. int* const p=&n , 3.const int* const p=&n �ٵ�. �̰��� ������ const�� 1��ó�� ���̸� int���� ���ٲٰ� 2��ó�� ������ p�� ���ٲ۴ٰ� �����ϸ� ��. 3���� ������ �ּҺ��� �� �ȵ�.
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
//	const int* p = &n;  // 2. int* const p=&n , 3.const int* const p=&n �ٵ�. �̰��� ������ const�� 1��ó�� ���̸� int���� ���ٲٰ� 2��ó�� ������ p�� ���ٲ۴ٰ� �����ϸ� ��. 
//	//*p = 20;  //�ȵ�
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
//	const int cn = 30;  //const�� ���
//	//cn = 20;  ����̱⿡ �ȉ�.
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
////using MyA::Print;  //�̷��Ե� ��������. MyA�� �ȿ��ִ� Print�� ���ڴ�. 
//using namespace MyA; //�̰��� �� ������.
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
//void Swap(int& a, int& b) //������ ���
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
////void Swap(int* a, int* b) �̰� �ߴ���.
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
//	int& r = n; //int���� r�� n�̶�� ��, c++���� &�� ��ȣ�� , r�� n�� �����ǰڴ�. �� ���� �̸��� ���� �Ǵ°�.�� n���� r�̴�. n�̶�� �޸𸮸� r�̶�� �ض�.  
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
//void Print(int n=1, char c='C', char* s = "string") //���� �⺻�Ű������� �������ָ� �μ������� �Լ��� �⺻�Ű��������̳���.  
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
//void Print(int n, char c, char* s="string") //�ι�° �Լ��� �μ��� 2���ۿ� �����ϱ� ������ �⺻���� �ذ���. 
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
//void Print(int data) //�Լ��ߺ� , c�� ����
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
//	n = int();  //int()�� int�� �⺻������ ����°�.  �� 0 
//	d = double(); // ���� ���� ����
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
//	//n = (int)d; c����� ���ĺ�ȯ
//	n = int(d); //n�� ���Ӱ� ���ǰ� �Ǵ°�. 
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
//	cout << a << endl; //c���� �̰� �ȉ�. ����Ʒ����ǰ� �Ǹ� �����ȵ����� c++�� ��. 
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
//	cout << "�����Է�:" ;
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


//#include <iostream> //��� ��ü������ io�� ���� stream�� ��  
//#include <cstdlib>
//using namespace std; //std �� standard�� ���ڷ� ���� ������ namespace std�� ����ϰڴٶ�°���. 
//void main()
//{
//	cout << 100 <<"," <<200<<","<<300<< endl;   
//	cout << 200 << '\n'; //�̷��� �ص���.
//	cout << 100 << endl << 200 << endl << 300 << endl;
//	system("pause");
//}


//#include <iostream> //stdio�� c���̰� iostream�� c++����  
//#include <cstdlib>
//using namespace std;
//void main()
//{
//	cout << 100 << endl;  //cout�� ��� ��Ʈ�� ��ü, <<�� ������ , endl(endline)�� \n�̶�� �����ϸ� ��. 
//	cout << 200 << endl;
//	cout<< 300 << endl;
//	system("pause");
//}

//#include <iostream> //stdio�� c���̰� iostream�� c++����  
//#include <cstdlib>
//
//void main()
//{
//	std::cout << 100 << std::endl;
//	std::cout << 200 << std::endl;
//	std::cout << 300 << std::endl;
//	system("pause");
//}

//#include <cstdio>  //C++����� .h�� ����. �տ� c�� ����. 
//#include <cstdlib>
//
//void main()
//{
//	printf("%d\n", 100);
//	printf("%d\n", 200);
//	printf("%d\n", 300);
//	system("pause");
//}