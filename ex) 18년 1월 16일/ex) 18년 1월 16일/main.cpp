//#include <iostream> 
//#include <cstdlib>
//using namespace std;
/////////PointŬ���� ���� ////// �ΰ����� ��������� ���� �ΰ����� ����Լ��� �����ٰ� �����Ѱ�. 
///////////Point.h//////////// Ŭ������ ���Ǵ� ������Ͽ� ��.
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int a = 0, int b = 0);
//	void Print()const;
//};
//////////��� �Լ� ����(����)///
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
////////////////main.cpp/////////������ �Լ� ����(����)
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
//	Point(int a=0 , int b=0 )  //�����ڴ� ���� �����ϱ����� �����Ƿ� const�� ����� �Ⱥ��� 
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
//	int GetX() const  //���ο� �ִ� x,y�� �����̾ȵǹǷ� �Լ� �ǳ��� ������.
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
//	Point pt1(2, 3); //pt1�� ���� ���� ��ü 
//	const Point	pt2; //���� �Ұ����� ��ü , const ��ü 
//
//	pt1.SetX(1);
//	//pt2.SetX(1); //�ȵ�
//	pt1.Print();
//	pt2.Print(); //const��ü�� const�� ȣ���Ѵ�. 
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
//	Point(int a = 0, int b = 0)  //���� ���ָ� 0,0���� �ʱ�ȭ�ϰڴٶ�� ���̴�. 
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
//	pt1.SetX(pt1.GetX() * 2); //x���� �ι��ϰ�ʹ�.
//	pt1.SetY(pt1.GetY() * 2); //x���� �ι��ϰ�ʹ�.
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
//	Point(int a = 0, int b = 0)  //���� ���ָ� 0,0���� �ʱ�ȭ�ϰڴٶ�� ���̴�. 
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
//	Point pt1(2, 3), pt2;  //pt1�� 2,3���� �ʱ�ȭ �Ѵ�. 
//
//	pt1.Print();
//	pt2.Print();
//	//pt1.x = 5; //�ٲܼ����� ������ private������ �ٲ��� ���Ѵ�. 
//	//pt2.x = 9;
//	pt1.SetX(5); //�������̽��� ����ؼ� �޼����� �����°�.
//	pt2.SetX(9);
//
//	cout << pt1.GetX() << ',' << pt1.GetY() << endl; //pt1���� x���� �޶�� ��
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
//	Point(int a = 5, int b = 5)  //���� ���ָ� 5,5���� �ʱ�ȭ�ϰڴٶ�� ���̴�. 
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
//	Point pt1(2, 3), pt2;  //pt1�� 2,3���� �ʱ�ȭ �Ѵ�. 
//
//	pt1.Print();
//	pt2.Print();
//	//pt1.x = 5; //�ٲܼ����� ������ private������ �ٲ��� ���Ѵ�. 
//	//pt2.x = 9;
//	pt1.SetX(5); //�������̽��� ����ؼ� �޼����� �����°�.
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
//	Point(int a = 0, int b = 0)  //���� ���ָ� 0,0���� �ʱ�ȭ�ϰڴٶ�� ���̴�. ������ xy���� ���� �־��ָ� pt1,pt2 �� ���� ����. 
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
//	Point pt1(2,3), pt2;  //pt1�� 2,3���� �ʱ�ȭ �Ѵ�. 
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
//	Point()  //�ʱ�ȭ �޼ҵ�, �� ������. Ŭ�����̸��� �Ȱ��� �޼ҵ带 ����. �ʱ�ȭ�� �������� �ϱ⶧���� ����� return���� ����������.
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


//#include <iostream> //�������̽��� �ܺο� ���θ� �����ϴ� ���,�޼ҵ��� �ñ״��ĸ� ���Ѵ�. ����(����)�� �������̽��� �ɼ�����.������ �ൿ(����)��ü�� �������̽���� �Ҽ�����. ���ΰ��� �߰��� �����̹Ƿ� �ൿ������ �ñ״��ĸ� �������̽����Ǵ°��̰� �ൿ������ ���μ����� �������̽����ƴϴ�. 
//#include <cstdlib>
//using namespace std;   //��ü����(object oriented��� �ؼ� oo��� �θ�)�� Ư¡ 3���� 1.ĸ��ȭ(1.��ȣ  2. ���ο� �ܺθ� ��踦 �δ� ����) 2.��� 3. ������
//class Point  //ĸ��ȭ�� ����Ǿ����� 1.(����), 2.: public 
//{
//private:  //Ŭ������������ ����Ҽ��ִ� ���  
//	int x;
//	int y;
//public : //�������� �ܺ�, ���� �� ��� ����
//	void Init(int a, int b)
//	{
//		x = a;
//		y = b;
//		Print();  //��ü���ο��� ��ü���η� �������̽��� ȣ���Ѱ���.
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
//	//pt1.x = 7;  //������ ����. private�� ��������Ƿ�
//
//	pt1.Print();  
//	pt2.Print();
//	system("pause");
//}



//#include <iostream> 
//using namespace std;
//struct Point //c�� ����ü���� �Լ��� ����������. c++�̴ϱ� ����
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
//void main() //Point�� class�� ���� pt1,pt2,�� ��ü, �׸��� �� �ȿ� x,y�� ����, Init()�� �ൿ���� ����.Init�� �������̽���� �θ�,
////�׷��� ���� ��� ���� �����ϱ� ���ؼ� p1.x=10;��� ���������� �����Լ��� ��Ÿ�������� �������̽��� �̿��Ͽ� ���� �����ؾ��Ѵ�.(pt.SetX()��) 
//{
//	Point pt1, pt2; //��ü ����
//	pt1.Init(2, 3);  //��ü �ʱ�ȭ 
//	pt2.Init(5, 8);
//	
//	pt1.Print();  //��ü ��� 
//	pt2.Print();
//	//cout << pt2.x << ',' << pt2.y << endl; �̷����ϸ� ���߿� ���� �ʿ䰡 ������ ���ŷӱ⿡ �������̽��� ����ϴ°� ����. 
//}


//#include <iostream> 
//using namespace std;
//struct Point //c�� ����ü���� �Լ��� ����������. c++�̴ϱ� ����
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



//#include <iostream> //��������� , ����ü ��� ,���� ���´� ,������� �� ���º��� 3�� �Լ� 6��
//using namespace std;
//struct IntArray //c++�̱⿡ ����������ִ�.
//{
//	//int dArray[100]
//	int* dArray; //�̸޸��� ������ ������Ű�� �ȵǱ⶧���� �����ͷ� �س�����. 
//	int size;
//	int capacity;
//	void Add() //Add,Remove ���Ұ� ����ǰ� Print,Search�� ���Ұ� ��������ʴ´�.
//	{
//		cout << "�����Է�: " << endl;
//		int data;
//		cin >> data;
//		if (size <capacity) //�ڽŲ��̱⶧���� ia.������ ��
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
//		cout << "�˻� ���� �Է�:";
//		int data;
//		cin >> data;
//		int i;
//		for (i = 0; i < size; ++i)
//		{
//			if (dArray[i] == data)
//			{
//				cout << "�˻�����:" << endl;
//				cout << "[" << i << "]" << dArray[i] << endl;
//			}
//		}
//	}
//	void Remove()
//	{
//		cout << "��������:";
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
//	void Init(int cap =100) //������ ���ϱ⿡ const�� ������ ����.
//	{
//		capacity = cap;// ��״� ����� �������� �Ȱ��������� ������ ���� �������� �Ű�����, �׷��� �׳� �̸��� �ٲ������
//		dArray = new int[capacity];  //�޸��� ������ Ŭ���̾�Ʈ�� �����Ҽ��ִٴ°��� ������. 
//		size = 0;
//	}
//	void Uninit()
//	{
//		delete[] dArray;
//	}
//};
//void Menu()
//{
//	cout << "1.���� �Է�" << endl;
//	cout << "2.���� ���" << endl;
//	cout << "3.���� �˻�" << endl;
//	cout << "4.���� ����" << endl;
//	cout << "0.���α׷� ����" << endl;
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
//			ia.Add();  //�̹� ������� �Լ��̱⿡ �ڿ� IntArray�� ���൵ ��/
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
//	ia.Uninit(); //�ʱ�ȭ�Լ��� ����߱⿡ �������Լ��� ����Ѱ�. 
//}

//#include <iostream> //��������� , ����ü ���
//using namespace std;
//struct IntArray
//{
//	//int dArray[100]
//	int* dArray; //�̸޸��� ������ ������Ű�� �ȵǱ⶧���� �����ͷ� �س�����. 
//	int size;
//	int capacity;
//};
//void AddIntArray(IntArray& ia) //Add,Remove ���Ұ� ����ǰ� Print,Search�� ���Ұ� ��������ʴ´�.
//{
//	cout << "�����Է�: " << endl;
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
//	cout << "�˻� ���� �Է�:";
//	int data;
//	cin >> data;
//	int i;
//	for (i = 0; i < ia.size; ++i)
//	{
//		if (ia.dArray[i] == data)
//		{
//			cout << "�˻�����:" << endl;
//			cout << "[" << i << "]" << ia.dArray[i] << endl;
//		}
//	}
//}
//void RemoveIntArray(IntArray& ia)
//{
//	cout << "��������:";
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
//void InitIntArray(IntArray& ia, int capacity = 100) //������ ���ϱ⿡ const�� ������ ����.
//{
//	ia.capacity = capacity;
//	ia.dArray = new int[capacity];  //�޸��� ������ Ŭ���̾�Ʈ�� �����Ҽ��ִٴ°��� ������. 
//	ia.size = 0;
//}
//void UninitIntArray(IntArray& ia)
//{
//	delete[] ia.dArray;
//}
//
//void Menu()
//{
//	cout << "1.���� �Է�" << endl;
//	cout << "2.���� ���" << endl;
//	cout << "3.���� �˻�" << endl;
//	cout << "4.���� ����" << endl;
//	cout << "0.���α׷� ����" << endl;
//}
//int main()
//{
//	bool run = true; //���α׷� �������� ����°�.
//
//	IntArray ia;  //���� 0���� �ʱ�ȭ�ϴ°��� ���̾ȉ�.���ʿ� �ȿ� ��Ұ� ������ �˼����⿡,�׷��� �ʱ�ȭ�� ���Ͽ� InitArray�� ���
//
//	InitIntArray(ia, 1000); //�ʱ�ȭ�� ���� ȣ��,���Ҹ� �� �����ϱ� ���Ͽ� ������ ������ ǥ�����ش�.
//
//	while (run)
//	{
//		int n;
//		Menu();
//		cin >> n;
//		switch (n)
//		{
//		case 1:
//			AddIntArray(ia);  //c���� ������ ����Ǿ�� ������ c++�̹Ƿ�
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
//	UninitIntArray(ia); //�ʱ�ȭ�Լ��� ����߱⿡ �������Լ��� ����Ѱ�. 
//}


//#include <iostream> //��������� , ����ü ���
//using namespace std;
//struct IntArray
//{
//	//int dArray[100]
//	int* dArray; //�̸޸��� ������ ������Ű�� �ȵǱ⶧���� �����ͷ� �س�����. 
//	int size;
//};
//void AddIntArray(IntArray& ia) //Add,Remove ���Ұ� ����ǰ� Print,Search�� ���Ұ� ��������ʴ´�.
//{
//	cout << "�����Է�: " << endl;
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
//	cout << "�˻� ���� �Է�:";
//	int data;
//	cin >> data;
//	int i;
//	for (i = 0; i < ia.size; ++i)
//	{
//		if (ia.dArray[i] == data)
//		{
//			cout << "�˻�����:" << endl;
//			cout << "[" << i << "]" << ia.dArray[i] << endl;
//		}
//	}
//}
//void RemoveIntArray(IntArray& ia)
//{
//	cout << "��������:";
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
//void InitIntArray(IntArray& ia,int capacity =100) //������ ���ϱ⿡ const�� ������ ����.
//{
//	ia.dArray = new int[capacity];  //�޸��� ������ Ŭ���̾�Ʈ�� �����Ҽ��ִٴ°��� ������. 
//      ia.size = 0;
//}
//void UninitIntArray(IntArray& ia)
//{
//	delete[] ia.dArray;
//}
//
//void Menu()
//{
//	cout << "1.���� �Է�" << endl;
//	cout << "2.���� ���" << endl;
//	cout << "3.���� �˻�" << endl;
//	cout << "4.���� ����" << endl;
//	cout << "0.���α׷� ����" << endl;
//}
//int main()
//{
//	bool run = true; //���α׷� �������� ����°�.
//
//	IntArray ia ;  //���� 0���� �ʱ�ȭ�ϴ°��� ���̾ȉ�.���ʿ� �ȿ� ��Ұ� ������ �˼����⿡,�׷��� �ʱ�ȭ�� ���Ͽ� InitArray�� ���
//
//	InitIntArray(ia,1000); //�ʱ�ȭ�� ���� ȣ��,���Ҹ� �� �����ϱ� ���Ͽ� ������ ������ ǥ�����ش�.
//	while (run)
//	{
//		int n;
//		Menu();
//		cin >> n;
//		switch (n)
//		{
//		case 1:
//			AddIntArray(ia);  //c���� ������ ����Ǿ�� ������ c++�̹Ƿ�
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
//	UninitIntArray(ia); //�ʱ�ȭ�Լ��� ����߱⿡ �������Լ��� ����Ѱ�. 
//}



//#include <iostream> //��������� , ����ü ���
//using namespace std;
//struct IntArray
//{
//	int dArray[100];
//	int size=0;
//};
//void AddIntArray(IntArray& ia) //Add,Remove ���Ұ� ����ǰ� Print,Search�� ���Ұ� ��������ʴ´�.
//{
//	cout << "�����Է�: " << endl;
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
//	cout << "�˻� ���� �Է�:";
//	int data;
//	cin >> data;
//	int i;
//	for (i = 0; i < ia.size; ++i)
//	{
//		if (ia.dArray[i] == data)
//		{
//			cout << "�˻�����:" << endl;
//			cout << "[" << i << "]" << ia.dArray[i] << endl;
//		}
//	}
//}
//void RemoveIntArray(IntArray& ia)
//{
//	cout << "��������:";
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
//	cout << "1.���� �Է�" << endl;
//	cout << "2.���� ���" << endl;
//	cout << "3.���� �˻�" << endl;
//	cout << "4.���� ����" << endl;
//	cout << "0.���α׷� ����" << endl;
//}
//int main()
//{
//	bool run = true; //���α׷� �������� ����°�.
//
//	IntArray ia ;  //���� 0���� �ʱ�ȭ�ϴ°��� ���̾ȉ�.���ʿ� �ȿ� ��Ұ� ������ �˼����⿡ 
//	while (run)
//	{
//		int n;
//		Menu();
//		cin >> n;
//		switch (n)
//		{
//		case 1:
//			AddIntArray(ia);  //c���� ������ ����Ǿ�� ������ c++�̹Ƿ�
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


//#include <iostream> //��������� , �ϴ� c��� ������� 
//using namespace std;
//void AddIntArray(int* dArray, int& size) //Add,Remove ���Ұ� ����ǰ� Print,Search�� ���Ұ� ��������ʴ´�.
//{
//	cout << "�����Է�: " << endl;
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
//	cout << "�˻� ���� �Է�:";
//	int data;
//	cin >> data;
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		if (dArray[i] == data)
//		{
//			cout << "�˻�����:" << endl;
//			cout << "[" << i << "]" << dArray[i] << endl;
//		}
//	}
//}
//void RemoveIntArray(int* dArray, int& size)
//{
//	cout << "��������:";
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
//	cout << "1.���� �Է�" << endl;
//	cout << "2.���� ���" << endl;
//	cout << "3.���� �˻�" << endl;
//	cout << "4.���� ����" << endl;
//	cout << "0.���α׷� ����" << endl;
//}
//int main()
//{
//	bool run = true; //���α׷� �������� ����°�.
//	
//		int dArray[100];  //������ ������ ���Ѱ�.
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


//#include <iostream> //�迭���� ���Ҹ� �����ϴ� ���,�迭���� ���Ҹ� �����ϴ°��� �ȵǰ� ���� �Է������ʾҴ��� ó�� ������ش�. 
//using namespace std;  //���������ڸ��� �ڿ� ���Ҹ� ���ܼ� ǥ���� , ���� 50�� ���ٰ� ������.
//void main()
//{
//	int arr[100] = { 40,50,60,70,80 };
//	int size = 5;
//	
//	int i;  //50�̺������ϱ� 1~3���� ���Ұ� �̵�  
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

//#include <iostream> //��������� , �ϴ� c��� ������� 
//using namespace std;
//void AddIntArray(int* dArray, int& size) //Add,Remove ���Ұ� ����ǰ� Print,Search�� ���Ұ� ��������ʴ´�.
//{
//	cout << "�����Է�: " << endl;
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
//	cout << "�˻� ���� �Է�:";
//	int data;
//	cin >> data;
//	int i;
//	for (i = 0; i < size; ++i)
//	{
//		if (dArray[i] == data)
//		{
//			cout << "�˻�����:" << endl;
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
//	cout << "1.���� �Է�" << endl;
//	cout << "2.���� ���" << endl;
//	cout << "3.���� �˻�" << endl;
//	cout << "4.���� ����" << endl;
//	cout << "0.���α׷� ����" << endl;
//}
//int main()
//{
//	bool run = true; //���α׷� �������� ����°�.
//	while (run)
//	{
//		int dArray[100];  //������ ���������Ѱ�.
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



//#include <iostream> //��������� , �ϴ� c��� ������� 
//using namespace std;
//void Menu()
//{
//	cout << "1.���� �Է�" << endl;
//	cout << "2.���� ���" << endl;
//	cout << "3.���� �˻�" << endl;
//	cout << "4.���� ����" << endl;
//	cout << "0.���α׷� ����" << endl;
//}
//
//void main()
//{
//	bool run = true; //���α׷� �������� ����°�.
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