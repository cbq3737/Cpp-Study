#include <iostream> //�����ѹ� Ǯ��� �����غ��� 
#include <cstdlib>  
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) :x(a), y(b) {}
	int GetX()const
	{
		return x;
	}
	int GetY()const
	{
		return y;
	}
	void Print()const
	{
		cout << x << ',' << y << endl;
	}

};
ostream& operator<<(ostream& out, const Point& pt)
{
	//pt.Print(); �̷��� �ص���.
	out << pt.GetX() << ',' << pt.GetY();
	return out;
}
int main()
{
	vector<Point> v;
	v.push_back(Point(3, 4));
	v.push_back(Point(2, 3));
	v.push_back(Point(8, 9));
	v.push_back(Point(3, 2));
	v.push_back(Point(5, 6));

	sort(v.begin(), v.end()); //�����ض�
	for (unsigned i = 0; i < v.size(); ++i)
	{ //v[i]->Print();
		cout << v[i] << " ";
	}
	/*for (unsigned i = 0; i < v.size(); ++i)
	{
		delete v[i];
	}*/
	cout << endl;
	system("pause");
}


//#include <iostream> 
//#include <cstdlib>  
//#include <vector>
//#include <algorithm>
//#include <functional>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a = 0, int b = 0) :x(a), y(b) {}
//	int GetX()const
//	{
//		return x;
//	}
//	int GetY()const
//	{
//		return y;
//	}
//	void Print()const
//	{
//		cout << x << ',' << y << endl;
//	}
//
//};
//ostream& operator<<(ostream& out, const Point& pt)
//{
//	//pt.Print(); �̷��� �ص���.
//	out << pt.GetX() << ',' << pt.GetY();
//	return out;
//}
//int main()
//{
//	vector<Point*> v;
//	v.push_back(new Point(3, 4)); 
//	v.push_back(new Point(2, 3));
//	v.push_back(new Point(8, 9));
//	v.push_back(new Point(3, 2));
//	v.push_back(new Point(5, 6));
//
//	for (unsigned i = 0; i < v.size(); ++i)
//	{ //v[i]->Print();
//		cout << *v[i] << " ";
//	}
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		delete v[i];
//	}
//	cout << endl;
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib>  
//#include <vector>
//#include <algorithm>
//#include <functional>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a = 0, int b = 0):x(a),y(b){}
//	int GetX()const
//	{
//		return x;
//	}
//	int GetY()const
//	{
//		return y;
//	}
//	void Print()const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//ostream& operator<<(ostream& out,const Point& pt)
//{
//	//pt.Print(); �̷��� �ص���.
//	out << pt.GetX() << ',' << pt.GetY();
//	return out;
//}
//int main()
//{
//	vector<Point> v;
//	v.push_back(Point(3, 4));
//	v.push_back(Point(2, 3));
//	v.push_back(Point(8, 9));
//	v.push_back(Point(3, 2));
//	v.push_back(Point(5, 6));
//
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>  
//#include <vector>
//#include <algorithm>
//#include <functional>
//using namespace std;
//int main()
//{
//	vector<int> v;
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(10);
//	v.push_back(40);
//
//	sort(v.begin(), v.end(), greater<int>()); //���� ���� , sort�� �������� input���� �޴´�.
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>  
//#include <vector>
//#include <algorithm>
//using namespace std; 
//int main()
//{
//	vector<int> v;
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(10);
//	v.push_back(40);
//	
//	sort(v.begin(), v.end()); //����, sort�� iterator�� ���� �۵���.
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>  
//#include <vector> 
//using namespace std; //���˰����� �������� �ʿ�� �Ѵ�.stl�� �ݺ��ڽ����� ǥ���ϰ� ������ġ�� ������ ����ġ�� �󱸰����� ��Ÿ����.
//int main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	
//	v.erase(v.begin() + 1, v.end() - 1); //[20,40)�� �� 20,30�� �ǹ��Ѵ�.
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>  
//#include <vector> 
//#include <list> 
//using namespace std;
//int main()
//{
//	list<int> lt;
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	lt.push_back(100);
//	lt.push_back(200);
//	
//	list<int>::iterator iter = lt.begin(); //���ۿ��Ҹ� ����
//	++iter;
//	++iter; //2��° ����
//	lt.erase(iter); //������.()�ȿ� �ε����� ����������. 
//	for (list<int>::iterator iter = lt.begin(); iter != lt.end(); ++iter)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>  
//#include <vector> 
//#include <list> 
//using namespace std; 
//int main() 
//{	
//	list<int> lt;
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	lt.push_front(100);
//	lt.push_front(200);
//	for (list<int>::iterator iter = lt.begin(); iter != lt.end(); ++iter)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>  
//#include <vector> 
//#include <deque> 
//using namespace std; //�⺻���� ����� 4����. �׷��� ���Ҹ� ������� �ϸ� �⺻������ 4���� ����.���ʹ� ���Ҹ� �߰��Ҷ����� �ø�/������ ť�� �ѹ��� 4��,4���� �������� �׸��� �Ѱ��� �ǳʶٴٰ� ���� ť4��¥���� ������ ó���ּҷ� ������.
//int main() //���ʹ� �տ��ٰ� �߰��ϴ� �������̽��� ���������ʴ´�.���� �ִ´ٰ��ϸ� �� �ڸ��ڿ� �ִ� ��� ���� �� ��ĭ�� �ڷ� �и���.��ť�� �տ� ���ο� 4��¥�� ����� �׼��� �߰����ְ� �����ּҸ� �� ���ҷ� ����� ��.���ͺ��� ������ ���Ӹ޸𸮸� ���´�.����,������ ���� ������ �ֳĿ� ���� ȿ�������� �Ѵ�.
//{//�������� ���Ӹ޸� ���(�迭) , ������ �񿬼� �޸� ����̶�� �θ���.  
//	deque<int> q;
//	q.push_back(10);
//	q.push_back(20);
//	q.push_back(30);
//	q.push_back(40);
//	q.push_back(50);
//	
//	for (unsigned i = 0; i < q.size(); ++i)
//	{
//		cout << q[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>  
//#include <vector> 
//#include <string> 
//using namespace std;
//int main()
//{
//	vector<int> v;
//
//	v.reserve(4); //�����ϰڴٴ� �� , 4���� ���Ҹ� �����Ҷ����� 4�ΰ��� 1.5�踦 �ø��ϱ� �����ķ� 6���� �Ȱ���.
//	cout << v.size() << ',' << v.capacity() << endl; 
//	v.push_back(10);
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(20);
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(30);
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(40);
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(50);
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(60);
//	cout << v.size() << ',' << v.capacity() << endl;
//
//	system("pause"); 
//}


//#include <iostream> 
//#include <cstdlib>  
//#include <vector> 
//#include <string> 
//using namespace std;
//int main()
//{
//	vector<int> v;
//
//	cout << v.size() << ',' << v.capacity() << endl; //size�¿��� ���� , capacity�� �޸� �뷮������ ��������� �����Ƿ� 0,0�� ����
//	v.push_back(10);
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(20);
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(30);
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(40);
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(50);
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(60);
//	cout << v.size() << ',' << v.capacity() << endl;
//
//	system("pause"); //1.5�� ��å�� �����.
//}


//#include <iostream> 
//#include <cstdlib>  
//#include <vector> 
//#include <string> 
//using namespace std;
//int main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(60);
//
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) 
//	{
//		cout << *iter << " ";
//	}
//	vector<int>::iterator iter;
//	iter = v.begin(); 
//	cout << *++iter << endl;//�� 2��° ����
//	cout << *--v.end()<< endl;//�� ������ ����
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>  
//#include <vector> 
//#include <string> //stl�� �Ϲ�ȭ�� �߿�, ȿ������ ���� �߽�
//using namespace std; 
//int main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(60);
//
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) //iterator�� ���� ������ �����̳ʿ� ����մ� �����Ҹ� ������ ����� �Ἥ �Ϲ�ȭ�ؼ� �����غ��ڶ�� ����.
//	{
//		cout << *iter << " ";
//	}
//	vector<int>::iterator iter; 
//	iter = v.begin(); //end�� ���������� ������ ����Ų��. 
//	cout << *iter << endl; 
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib>  
//#include <vector> //vector�迭�� ��������� ������.  2. deque�� �Ϸ����� �޸𸮷� ������� �����ϴ� Ư¡�� �񿬼� Ư¡ �Ѵ� ����. 3.list���Ḯ��Ʈ�� ���ҵ��� �������� ������ ���� ��=��=���̷�����
//#include <string> //������ �����̳� 1. vector 2. deque 3.list / ���������̳� 1.set 2.multiset 3.map 4.multimap�̵��� �з��ϴ� ������ ������ ������ �Ȱ������̴�.�������� ������ ���� ������ �ڵ����ĵǴ¹���̴�.
//using namespace std; //���������̳ʵ��� ����Ʈ�����·� �̷���� 1.2.set�� key���� ����  3.4�� key�� value�� �������� �̷����.
//int main()
//{
//	vector<int> v; 
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(60);
//
//	for (unsigned i = 0; i < v.size(); ++i) 
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	for (vector<int>::iterator iter=v.begin();iter != v.end(); ++iter) //iter�� ���Ҹ� ����Ų��. 
//	{
//		cout << *iter << " ";
//	}
//	//vector<int> //<int>���ț����� ���ø������� <int>�����⶧���� Ŭ������� �θ�
//	//vector<int>::iterator iter(v.begin()); //iterator��� Ŭ�����̸�, iter�� vector iterator��ü��.
//	vector<int>::iterator iter; //�̰��� �ƹ��͵� �Ȱ���Ű���մ� iterator��
//	iter = v.begin();// ù��° ���Ҹ� ����Ű�� iterator��. iterator�� �����͸� �߻�ȭ�ѰŶ�� �����ϸ� ��.
//	cout << *iter << endl; //*iter�� ù��° ���ҿ����� ������ ��.
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>  
//#include <vector>
//#include <string>
//using namespace std;
//int main()
//{
//	vector<string> v; //�����̳ʴ� ��ü�� ��� ��ü��� �θ�
//	v.push_back("10");
//	v.push_back("20");
//	v.push_back("30");
//	v.push_back("40");
//	v.push_back("50");
//	v.push_back("60");
//
//	for (vector<string>::size_type i = 0; i < v.size(); ++i) //unsigned�� i�� ���� ����ε� ���̴�.���� �ڵ�� unsigned�� ���� �ǹ̰� �⺻������ unsignded int�����̴�.
//	{
//		cout << v[i] << "";
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>  
//#include <vector>
//#include <string>
//using namespace std; 
//int main()
//{
//	vector<string> v; //�����̳ʴ� ��ü�� ��� ��ü��� �θ�
//	v.push_back("10");
//	v.push_back("20");
//	v.push_back("30");
//	v.push_back("40");
//	v.push_back("50");
//	v.push_back("60");
//
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << "";
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream> //s.t.l ǥ�������� ����ϴ� ���ø�, ������� 1.�����̳�(�ڷᱸ��) 2. �˰���(�Լ� 3. �ݺ���(��ġ�� ����Ű�� ��) 4.�Լ���ü(�Լ�ó�� �����ϴ� ��ü) 5.���(�������̽� ��ȯ) 6.�޸��Ҵ��(�޸��Ҵ� ��å�� ��������)
//#include <cstdlib>  //4������ stl�� 4�� ��Ҷ�� �θ�, ��������ҵ��� �׳��� �� �߿�
//#include <algorithm>
//#include <functional>
//#include <iterator>
//#include <vector>
//using namespace std; //���ڵ�鿡 4�� ������Ʈ(���)�� �ٳ���
//int main()
//{
//	vector<int> v; //v�� �����̳ʰ�ü ,vector�� �����̳� Ŭ��
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << "";
//	}
//	cout << endl;
//	sort(v.begin(), v.end(), greater<int>());//���� �˰��� ,begin, end�� ���۰� ���� ���Ҹ� ����Ű��iterator(�ݺ���)���θ�, greater�� �Լ���ü�� 
//	copy(v.begin(), v.end(), ostream_iterator<int>(cout,"")); //���� �˰���, �ڿ�ostream_iterator��  �����̳� ��Ͷ�� �θ�
//	cout << endl;
//	system("pause");
//}

//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//class Math 
//{
//	static string name; //���ǾȾ�����,���� private. static������ ��ü���� �ƴϴ�. �� ��ü���̵� �� ������ �����Ѵ�.
//public:
//	static void SetName(const string& n)
//	{
//		name = n;
//	}
//	static void PrintName()
//	{
//		cout << name << endl;
//	}
//	static int Add(int a, int b)
//	{
//		return a + b;
//	}
//};
//string Math::name("classMath"); //Math�ȿ� static�̸����ִ� ��� ������.
//int main()
//{
//	Math::SetName("class Math.."); //��ü���̵� ���簡���ϴٴ°��� ������. ��ü���� �޼����� �����°��̾ƴ϶� Ŭ�������� ����. �� Ŭ������ü��� �θ�.
//	Math::PrintName();//��ü���� �ƴϱ⿡ ����
//	cout << Math::Add(2, 3) << endl; //�߿�!��ü���� �ƴϾ ���¿� �޼ҵ带 �������ִ�. �װ��� ���������� Ŭ�������� ���º���,����� ������ �Ҷ� ����Ѵ�.
//	system("pause");
//}


//#include <iostream>//static ��ü���̵� ȣ�Ⱑ���� ����
//#include <cstdlib>
//using namespace std;
//class Math //����,���� ���õ� Ŭ���� �� ���� staic�� ���� �ִ�.
//{
//public:
//	static int Add(int a, int b)//staic�������� ��ü���̶�� �����ذ�,
//	{
//		return a + b; //�ν��Ͻ� �޼ҵ�
//	}
//};
//int main()
//{
//	Math m;
//	cout << Math::Add(2, 3) << endl; //static�� �پ��⶧���� ��ü���̵� ȣ�Ⱑ��,Ŭ�������� �޼ҵ� 
//	system("pause");
//}


//#include <iostream>//static ��ü���̵� ȣ�Ⱑ���� ����
//#include <cstdlib>
//using namespace std;
//class Math //����,���� ���õ� Ŭ���� 
//{
//public:
//	int Add(int a, int b)
//	{
//		return a + b;
//	}
//};
//int main() 
//{ 
//	Math m;
//	cout << m.Add(2, 3) << endl; //Add�� ���� �Ѱܼ� ������ ���� m�� ����̾���.
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int a=0,int b=0):x(a),y(b)
//	{
//	}
//	void Print()const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main() //�������°� �ƴϸ� ��������� �����ʿ䰡����.
//{ //���޸𸮴� �ι����������Ƿ� delete�� �ι��������.
//	Point p1(2, 3);
//	Point& p2 = p1; 
//	Point* p = new Point(4, 5);
//	Point arr[2] = { Point(1,2),Point(5,6)};
//	Point* pa = new Point[2];
//
//	p1.Print();
//	p2.Print();
//	(*p).Print();
//	arr[0].Print(); //arr->Print(); ����
//	arr[1].Print(); //(arr+1)->Print()����
//	pa[0].Print(); //pa->Print();
//	pa[1].Print();//(pa+1)->Print();
//
//	delete p;
//	delete[] pa;
//	system("pause");
//}