#include <iostream> 
#include <cstdlib>  
#include <string> 
#include <set>
#include <map>
using namespace std;
int main() //�̷��� �� ������Ͼ����� �ѹ� �غ���.
{
	map<int, string> m;
	m[1] = "one";
	m[3] = "three";
	m[5] = "five";
	
	for (map<int, string>::iterator iter = m.begin(); iter != m.end(); ++iter)
	{
		cout << (*iter).first << "," << (*iter).second << "      ";
	}
	cout << endl;
	system("pause");
}

//#include <iostream> 
//#include <cstdlib>  
//#include <string> 
//#include <set>
//#include <map>
//using namespace std;
//int main()
//{
//	map<int, string> m;
//	m[1] = "one";  
//	m[3] = "three";
//	m[5] = "five"; 
//	map<int, string>::iterator iter = m.find(5);
//	if (iter != m.end())
//		(*iter).second = "Five"; //������������ �̰��� �� �����ϴ� 
//
//	cout << m[3] << endl;
//	cout << m[5] << endl;
//	cout << m[1] << endl;
//
//	system("pause");
//}

//#include <iostream> //���������̳ʿ��� �����Ǵ� �˻� �޼ҵ� 4�� : 1.find 2.lower_bound 3.upper_bound  4. equal_ranged   
//#include <cstdlib>  //1.�����ϳ��� ã���� 2.3.���Ҹ� ���ε��� ã���� 
//#include <string> 
//#include <set>
//#include <map>
//using namespace std;
//int main()
//{
//	map<int, string> m;
//	m[1] = "one";  //�̹���� insert�� �ȴ�.
//	m[3] = "three";
//	m[5] = "five"; //insert
//	m[5] = "Five"; //insert�� �ƴ϶� ������Ʈ�̴�. Ű���� �����ϱ� ������ �׷���.�� value���� ������Ʈ�� ��.
//
//	cout << m[3] << endl;
//	cout << m[5] << endl;
//	cout << m[1] << endl;
//
//	system("pause");
//}


//#include <iostream> //���������̳ʿ��� �����Ǵ� �˻� �޼ҵ� 4�� : 1.find 2.lower_bound 3.upper_bound  4. equal_ranged   
//#include <cstdlib>  //1.�����ϳ��� ã���� 2.3.���Ҹ� ���ε��� ã���� 
//#include <string> 
//#include <set>
//#include <map>
//using namespace std;
//int main()
//{
//	map<int,string> m;
//	m.insert(pair<int, string>(1,"one"));
//	m.insert(pair<int, string>(3,"three"));
//	m.insert(pair<int, string>(5,"five"));
//	//Ű���ٸ� value�� ã�ƾ� �Ѵ�.�װ� ��ǥ��
//	//m[key]�� �Է��ϸ� value�� ������ ��ȯ�Ѵ�.
//	
//	cout << m[3] << endl;
//	cout << m[5] << endl;
//	cout << m[1] << endl;
//	
//	system("pause");
//}


//#include <iostream>  
//#include <cstdlib>  
//#include <string> 
//#include <set>
//#include <map>
//using namespace std;
//int main()
//{
//	multiset<int> s;
//	s.insert(50);
//	s.insert(20);
//	s.insert(30);
//	s.insert(10);
//	s.insert(40);
//	s.insert(30);
//
//	pair<set<int>::iterator , set<int>::iterator> pr; //pr�� ����Ų��.
//	pr=s.equal_range(30);//30�� ã�ƶ� , first�� second�� iterator�����Ѵ�.
//	if (pr.first != pr.second)//ã�Ѵٴ� �Ҹ� /iter1 != iter2�� ������
//	{
//		multiset<int>::iterator iter;
//		for (iter = pr.first; iter != pr.second; ++iter)  //�Ʒ��� �Ȱ���.
//		{
//			cout << *iter << endl;
//		}
//	}
//	system("pause");
//}


//#include <iostream>  
//#include <cstdlib>  
//#include <string> 
//#include <set>
//#include <map>
//using namespace std;
//int main()
//{
//	multiset<int> s;
//	s.insert(50);
//	s.insert(20);
//	s.insert(30);
//	s.insert(10);
//	s.insert(40);
//	s.insert(30);
//	
//	//10,20,30,40,50,30
//	multiset<int>::iterator iter1 = s.lower_bound(30); //lower�� upper�� �׻� ���� ����.
//	multiset<int>::iterator iter2 = s.upper_bound(30);
//	if (iter1 != iter2)//ã�Ѵٴ� �Ҹ�
//	{
//		multiset<int>::iterator iter;
//		for (iter = iter1; iter != iter2; ++iter)
//		{
//			cout << *iter << endl;
//		}
//	}
//	system("pause");
//}


//#include <iostream>  
//#include <cstdlib>  
//#include <string> 
//#include <set>
//#include <map>
//using namespace std;
//int main()
//{
//	set<int> s;
//	s.insert(50);
//	s.insert(20);
//	s.insert(30);
//	s.insert(10);
//	s.insert(40);
//	//10,20,30,40,50�� ������ 30�� lower bound�̰� 40�� upper bound�̴�.�� [lower,upper)�̶� ����
//	set<int>::iterator iter1 = s.lower_bound(30); //lower�� upper�� �׻� ���� ����.
//	set<int>::iterator iter2 = s.upper_bound(30);
//	if (iter1 != iter2)//ã�Ѵٴ� �Ҹ�
//	{
//		cout << *iter1 << endl;
//	}
//	system("pause");
//}


//#include <iostream> //���ʹ� ������ ���� insert, ������ �� ���� erase�� �ִ�.���ʹ� ��Ҹ� �յڷ� �߰� ���� �� ���ִ�. ����ϴ� ��κ��� ������ �� �ڷᱸ���� �´� �����͸� ����,�����ϱ� ���ؼ��̴�. 
//#include <cstdlib>  //set�� �����̾ƴ϶� �׳� insert��.erase�� �����Ѱ��� �����Ҽ��ִ�.���� ��Ҹ� �յڷ� Ʈ���� �̿��ϱ⶧���� �߰����Ÿ� ���Ѵ�. ������ ���Ҹ� ������ ã�°�(����Ʈ���� ����)�� ��ǥ�̴�. �� �˻��� ��ǥ�� �����ϴ°��̴�.
//#include <string> 
//#include <set>
//#include <map>
//using namespace std;
//int main()
//{
//	set<int> s;
//	s.insert(50);
//	s.insert(20);
//	s.insert(30);
//	s.insert(10);
//	s.insert(40);
//	//������ζ�� �˻������ ��ǥ�̱⶧���� ������ ����϶� ��� �ڵ�� �� �ʿ䰡����.
//	set<int>::iterator iter = s.find(30);
//	if (iter != s.end())
//	{
//		cout << *iter << endl;
//	}
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <string> 
//#include <set>
//#include <map>
//using namespace std;
//int main()
//{
//	map<int, int> m; 
//
//	m.insert(pair<int, int>(5, 500));  //�տ� 5,3,7�� Ű���̰� �ڿ� 500,300,700�� value�̴�. ������ ¦���� �۾��� �ϴ°�.
//	m.insert(pair<int, int>(3, 300));  //map���׻� Ű�� value�� ������ �̷������. Ű�� ������ �� �ϳ��� ������Ʈ,���Ҷ�� �θ���.
//	m.insert(pair<int, int>(7, 700));  //Ű�� Ÿ�԰� value�� �׻� pair<>��ü�� �����ؾ��Ѵ�.
//	m.insert(pair<int, int>(8, 800));
//	m.insert(pair<int, int>(2, 200));
//
//	for (map<int, int>::iterator iter = m.begin(); iter != m.end(); ++iter)
//	{
//		cout << (*iter).first <<" "<<(*iter).second<<"    " << endl; 
//	}
//
//	pair<int, string> pr(1, "1"); //pair��� ����ü,Ŭ�����̴�.ù���� int�� �۽�Ʈ �ι�° string�� �������.
//	cout << pr.first << "," << pr.second << endl;
//	pr.first = 2;
//  pr.second = "-2-";
//	cout << pr.first << "," << pr.second << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <set>
//using namespace std;
//int main()
//{
//	multiset<int> s; //multi�� Ű�� �ߺ��� �����ϰ� �Ѵ�.
//	//�������� �����͸� ���Ҷ�� �θ��� �ʰ� key��� �θ���.
//	s.insert(100);
//	s.insert(80);
//	s.insert(50);
//	s.insert(30);
//	s.insert(40);
//	s.insert(80); //80�� �ΰ����ִ°��� ������ 80�� �ִ°� �ƴϴ�.
//
//	for (multiset<int>::iterator iter = s.begin(); iter != s.end(); ++iter)
//	{
//		cout << *iter << endl; //����ϸ� ���������� ������ �ȴ�.Ʈ��������� �����ϱ⶧��
//	}
//	system("pause");
//}


//#include <iostream> //���� �����̳�, Ʈ���� ������ �θ� ���Ͽ� ������ ���� ū���� ���������� �Ͽ�ǥ���Ѵ�. �������� ������,������ ���ı�Ģ�� ���´�.
//#include <cstdlib> //iterator�� inorder������� Ž���Ѵ�.�׷��� ���������̳ʴ� �ڵ������� �ȴ�.
//#include <set>
//using namespace std;
//int main()
//{
//	set<int> s;
//	//�������� �����͸� ���Ҷ�� �θ��� �ʰ� key��� �θ���.
//	s.insert(100);  
//	s.insert(80);
//	s.insert(50);
//	s.insert(30);
//	s.insert(40);
//	s.insert(80);//�Ϲ������� Ű�� �ߺ��� �ȵǱ⶧���� ����̾ȵȴ�.
//
//	for (set<int>::iterator iter = s.begin(); iter != s.end(); ++iter)
//	{
//		cout << *iter << endl; //����ϸ� ���������� ������ �ȴ�.Ʈ��������� �����ϱ⶧��
//	}
//	system("pause");
//}

//#include <iostream> //���� �����̳�
//#include <cstdlib>
//#include <set>
//using namespace std; 
//int main()
//{
//	set<int> s;
//	
//	s.insert(100);  //�޼ҵ尡 push���� ���� . ���Ҹ� �ֱ����ؼ� insert�ۿ� ����.
//	s.insert(80);
//	s.insert(50);
//	s.insert(30);
//	s.insert(40);
//
//	for (set<int>::iterator iter = s.begin(); iter != s.end(); ++iter)
//	{
//		cout << *iter << endl; //����ϸ� ���������� ������ �ȴ�.Ʈ��������� �����ϱ⶧��
//	}
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//#include <list>
//using namespace std; //���� ����Ʈ�� �ڷᱸ�������� ���θ��ֺ����մ� ���Ḯ��Ʈ�̴�. �׶� lt1�� ������ ���� lt2�� ù��° ��带 ���� �����ϸ� lt1�� 6���� ����������ִ�.
//int main()
//{
//	list<int> lt1;
//	lt1.push_back(10);
//	lt1.push_back(20);
//	lt1.push_back(30);
//
//	list<int> lt2;
//	lt2.push_back(50);
//	lt2.push_back(60);
//	lt2.push_back(70);
//	
//	lt1.insert(lt1.end(), lt2.begin(), lt2.end()); //spliceó�� �߶�����°��̾ƴ϶� ������ ����޶��� ���� ���縦 �ϴ°��̴�.
//	cout << lt1.size() << ":" << lt2.size() << endl;
//
//	for (list<int>::iterator iter = lt1.begin(); iter != lt1.end(); ++iter)
//	{
//		cout << *iter << endl;
//	}
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//#include <list>
//using namespace std; //���� ����Ʈ�� �ڷᱸ�������� ���θ��ֺ����մ� ���Ḯ��Ʈ�̴�. �׶� lt1�� ������ ���� lt2�� ù��° ��带 ���� �����ϸ� lt1�� 6���� ����������ִ�.
//int main()
//{
//	list<int> lt1;
//	lt1.push_back(10);
//	lt1.push_back(20);
//	lt1.push_back(30);
//
//	list<int> lt2;
//	lt2.push_back(50);
//	lt2.push_back(60);
//	lt2.push_back(70);
//	//�߶� �Ű� ������, ���簡 �ƴϴ�. �Űܼ� �����°��̴�.
//	lt1.splice(lt1.end(), lt2, lt2.begin(), lt2.end()); //lt2�� �߶����� lt1���� ��. �̹���� list�� ������ ���. //lt1�������� lt2�� lt2�� ù��°���� ���������� �Ű� ������
//	cout << lt1.size() << ":" << lt2.size() << endl;
//
//	for (list<int>::iterator iter = lt1.begin(); iter != lt1.end(); ++iter)
//	{
//		cout << *iter << endl;
//	}
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
//struct CMP {
//	bool operator()(const Point& data)const //x�� y���� ū ���� ã����� //�٤��� ���� �� ã�������� �����ϰ�ʹ�.
//	{
//		return data.GetX() > data.GetY();
//	}
//};
//int main()
//{
//	vector<Point> v;
//	v.push_back(Point(3, 4));
//	v.push_back(Point(2, 3));
//	v.push_back(Point(8, 9));
//	v.push_back(Point(3, 2));
//	v.push_back(Point(5, 6));
//
//	vector<Point>::iterator iter =
//		find_if(v.begin(), v.end(), CMP()); //��ü�� �Ѱ���
//
//	if (iter != v.end())//ã�Ҵٸ�
//	{
//		v.erase(iter);	//cout << *iter << endl; //x�� y�� ū���� ������־���.
//	}
//	for (unsigned i = 0; i < v.size(); ++i)  //������� Ȯ���ϱ����Ͽ� ������.
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
//struct CMP {
//	bool operator()(const Point& data)const //2,3�� ã������� 
//	{
//		return data.GetX() == 2 && data.GetY() == 3;
//	}
//};
//int main()
//{
//	vector<Point> v;
//	v.push_back(Point(3, 4));
//	v.push_back(Point(2, 3));
//	v.push_back(Point(8, 9));
//	v.push_back(Point(3, 2));
//	v.push_back(Point(5, 6));
//
//	vector<Point>::iterator iter =
//		find_if(v.begin(), v.end(), CMP()); //��ü�� �Ѱ���
//
//	if (iter != v.end())//ã�Ҵٸ�
//	{
//		cout << *iter << endl;
//	}
//	system("pause");
//}

//#include <iostream> //������ �Ͽ���
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
//bool pred(const Point& data) //2,3�� ã������� 
//{
//	return data.GetX() == 2 && data.GetY() == 3;
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
//	vector<Point>::iterator iter=
//	find_if(v.begin(),v.end(),pred); //ã�°��̱⶧���� ���Ҹ� �ϳ��� �Ѱ���, �Լ��� ������
//	
//	if (iter != v.end())//ã�Ҵٸ�
//	{
//		cout << *iter << endl;
//	}
//	system("pause");
//}


//#include <iostream> //������ �Ͽ���
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
//class Functor
//{
//public :
//	bool operator()(const Point& lhs, const Point& rhs)const  //bool������ �Ǵ�, �μ��� �ΰ� �� ���� predicate , sort�� �ο�Ҹ� ���ؾ��ϱ� ������ predicate, ���� ������ �����ΰ� ���� ���� �갡 �ٸ��� �´����� ���°�.�׷��� �Լ�ó�� �̿��Ҽ��ִ� �Լ���ü�� �ִ�.
//	{
//		if (lhs.GetX() < rhs.GetX())
//		{
//			return true;
//		}
//		else if (lhs.GetX() > rhs.GetX())
//		{
//			return false;
//		}
//		else //������ 
//		{
//			return lhs.GetY() < rhs.GetY();  //x�� �Ǵ��� �ȵǸ� y�� 
//		}
//	}
//};
//int main()
//{
//	vector<Point> v; 
//	v.push_back(Point(3, 4));
//	v.push_back(Point(2, 3));
//	v.push_back(Point(8, 9));
//	v.push_back(Point(3, 2));
//	v.push_back(Point(5, 6));
//
//	Functor cmp; 
//	sort(v.begin(), v.end(), cmp); 
//	sort(v.begin(), v.end(), Functor()); //���� ����
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream> //������ �Ͽ���
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
//bool cmp(const Point& lhs, const Point& rhs) //bool������ �Ǵ�, �μ��� �ΰ� �� ���� predicate , sort�� �ο�Ҹ� ���ؾ��ϱ� ������ predicate, ���� ������ �����ΰ� ���� ���� �갡 �ٸ��� �´����� ���°�.�׷��� �Լ�ó�� �̿��Ҽ��ִ� �Լ���ü�� �ִ�.
//{
//	if (lhs.GetX() < rhs.GetX())
//	{
//		return true;
//	}
//	else if (lhs.GetX() > rhs.GetX())
//	{
//		return false;
//	}
//	else //������ 
//	{
//		return lhs.GetY() < rhs.GetY();  //x�� �Ǵ��� �ȵǸ� y�� 
//	}
//	}
//int main()
//{
//	vector<Point> v; //�̹����� Point��ü�� ����
//	v.push_back(Point(3, 4));
//	v.push_back(Point(2, 3));
//	v.push_back(Point(8, 9));
//	v.push_back(Point(3, 2));
//	v.push_back(Point(5, 6));
//
//	sort(v.begin(), v.end(),cmp);//�ƹ��͵� ���������⶧���� ����°�μ��� �����å�� ����� ��. 
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream> //�Լ���ü = function object = functor �Լ���
//#include <cstdlib>  
//using namespace std;
//int Find(int list[], int size, bool(*func)(int))
//{
//	for (int i = 0; i < size; ++i)
//	{
//		if (func(list[i]))
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//struct Functor //�Լ���ü�� ����, �� �Լ���ü�� �÷���
//{
//	int base;
//	Functor(int b = 100) : base(b) {}
//	bool operator()(int a, int b)const //predicate , ���� predicate
//	{
//		return b-a > base;
//	}
//};
//int main()
//{
//	Functor f; //���� ������ �갡 �����̶�°��̴� . ��ü�� �ٸ� �޼ҵ�鵵 ���������ְ� �ٸ� ���µ� �������ֱ�Ŷ�����,�Լ����� �� ū ����� �������ִ�.
//	cout << f(10,20) << endl;
//	cout << f(15,60) << endl;
//	system("pause");
//}


//#include <iostream> //�Լ���ü = function object = functor �Լ���
//#include <cstdlib>  
//using namespace std;
//int Find(int list[], int size, bool(*func)(int))
//{
//	for (int i = 0; i < size; ++i)
//	{
//		if (func(list[i]))
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//struct Functor //�Լ���ü�� ����, �� �Լ���ü�� �÷���
//{
//	int base; 
//	Functor(int b = 100) : base(b) {}
//		bool operator()(int n)const //predicate , ���� predicate
//		{
//		return n > base;
//	}
//};
//int main() 
//{
//	Functor f; //���� ������ �갡 �����̶�°��̴� . ��ü�� �ٸ� �޼ҵ�鵵 ���������ְ� �ٸ� ���µ� �������ֱ�Ŷ�����,�Լ����� �� ū ����� �������ִ�.
//	cout << f(100) << endl;
//	cout << f(200) << endl;
//	system("pause");
//}


//#include <iostream> //�Լ���ü = function object = functor �Լ���
//#include <cstdlib>  
//using namespace std;
//int Find(int list[], int size, bool(*func)(int))
//{
//	for (int i = 0; i < size; ++i)
//	{
//		if (func(list[i]))
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//struct Functor //�Լ���ü�� ����
//{
//	bool operator()(int n)const
//	{
//		return n > 100;
//	}
//};
//int main() //f�� �Լ���ü��� �θ���.
//{
//	Functor f;
//	cout <<f(100) << endl;
//	cout << f(200) << endl;
//	system("pause");
//}

//#include <iostream> //�Լ���ü = function object = functor �Լ���
//#include <cstdlib>  
//using namespace std;
//int Find(int list[], int size, bool(*func)(int))
//{
//	for (int i = 0; i < size; ++i)
//	{
//		if (func(list[i]))
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//struct Functor //�Լ���ü�� ����
//{
//	void operator()(int n)
//	{
//		cout << n << endl;
//	}
//};
//int main() //f�� �Լ���ü��� �θ���.
//{
//	Functor f; 
//	f(100);  //ó���� �����Ҷ� ���� �Ҵ��ؾ��� �ʱ�ȭ���� �̰��� �̹� ������ ���� �ҷ��⶧���� �Լ�ȣ���̴�. f�� ��ü�̴�. �� f.operator()(100)�̶� ������
//	system("pause");
//}


//#include <iostream> //predicate(������)���� �߿��� �ܾ� : ���𰡸� �Ǵ��Ҷ� ���ȴ�. ������ �������� �� ������ ��ȯ�ϴ� �Լ�,��ü,�Լ������͸� ����  
//#include <cstdlib>  
//using namespace std;
//int Find(int list[], int size, bool (*func)(int))
//{
//	for (int i = 0; i < size; ++i)
//	{
//		if (func(list[i])) 
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//bool Mycmp(int data)//ã������� true�ƴϸ� false , �� predicate��� ��������.
//{
//	return 50 < data && data % 3 == 0;
//}
//int main() //���� �˻�
//{
//	int list[10] = { 50, 36, 79, 46, 51, 85, 69, 79, 48, 61 };
//	int idx = Find(list, 10, Mycmp); //���� �ذԾƴ϶� �Լ��� �����ּҸ� �־���.�� ��å�̶�� ��.
//	if (idx >= 0)
//	{
//		cout << idx << ":" << list[idx];
//	}
//	system("pause");
//}


//#include <iostream>  
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, bool (*func)(int))//ã������� true�ƴϸ� false, bool������ �μ��� �ϴ� �Ű������� ���� �Լ�������
//{
//	for (int i = 0; i < size; ++i)
//	{
//		if (func(list[i])) //������ Ŭ���̾�Ʈ���� �����ֳİ� ����°�.�ݹ�
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//bool Mycmp(int data)//ã������� true�ƴϸ� false
//{
//	return 50 < data && data % 3 == 0;
//}
//int main() //���� �˻�
//{
//	int list[10] = { 50, 36, 79, 46, 51, 85, 69, 79, 48, 61 };
//	int idx = Find(list, 10, Mycmp); //���� �ذԾƴ϶� �Լ��� �����ּҸ� �־���.�� ��å�̶�� ��.
//	if (idx >= 0)
//	{
//		cout << idx << ":" << list[idx];
//	}
//	system("pause");
//}


//#include <iostream> //��ҿ� ��Ұ� ���̷�Ʈ�� ���� ��ҿ� ��һ����� �߰���(�������̽�)�������� ���� ���������� ���� �����Ѻ����� �Ҽ��ְ� ���� ���������� ��� ������ ���������� ���� ������ �����. �� �߰��ڴ� �ݺ����̰� ��ҿ� ��Ҵ� �����̳ʿ� �˰��� ���̴�. 
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, int data)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		if (list[i] == data)
//		{
//			return i;
//		}
//	} 
//    return -1;
//}
//int main() //���� �˻�
//{
//	int list[10] = { 50, 36, 79, 46, 51, 85, 69, 79, 48, 61 };
//	//int idx = Find(list, 10, 35);
//	int idx = Find(list, 10, 69);
//	if (idx >= 0)
//	{
//		cout << idx << ":" << list[idx];  
//	}
//	system("pause");
//}


//#include <iostream> //������ �Ͽ���
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
//bool cmp(const Point& lhs, const Point& rhs) //���Ұ���ü�� �ٲ�°� �ƴ϶� ����Ű�� �ּҰ� �޶����°���
//{
//	if (lhs.GetX() < rhs.GetX())
//	{
//		return true;
//	}
//	else if (lhs.GetX() > rhs.GetX())
//	{
//		return false;
//	}
//	else //������ 
//	{
//		return lhs.GetY() < rhs.GetY();  //x�� �Ǵ��� �ȵǸ� y�� 
//	}
//	}
//int main()
//{
//	vector<Point> v; //�̹����� Point��ü�� ����
//	v.push_back(Point(3, 4));
//	v.push_back(Point(2, 3));
//	v.push_back(Point(8, 9));
//	v.push_back(Point(3, 2));
//	v.push_back(Point(5, 6));
//
//	sort(v.begin(), v.end(),cmp);//�ƹ��͵� ���������⶧���� ����°�μ��� �����å�� ����� ��. 
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream> //������ �Ͽ���
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
//	bool operator<(const Point& arg)const  //Point�� sort�� �������� ���̴� Point�� �������ִ°��̰� sort�� ���������� �������ִ°��ε� ������ ���ؼ� Point�� ��� �����ϴ°��� �������� ����̴�.
//	{
//		return x < arg.x;
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
//	vector<Point> v; //�̹����� Point��ü�� ����
//	v.push_back(Point(3, 4));
//	v.push_back(Point(2, 3));
//	v.push_back(Point(8, 9));
//	v.push_back(Point(3, 2));
//	v.push_back(Point(5, 6));
//
//	sort(v.begin(), v.end() ); //������ �ּҴ� �񱳰� ���� , sort�� �׻� �񱳸� �ؾ���. �񱳸� �ؾ��� ������ �Ҽ�������.������ Point��ü���� �񱳸� ���־�� ��.
//	for (unsigned i = 0; i < v.size(); ++i)
//	{ 
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//}

//#include <iostream> //������ �Ͽ���
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
//bool cmp(const Point* lhs, const Point* rhs) //���Ұ���ü�� �ٲ�°� �ƴ϶� ����Ű�� �ּҰ� �޶����°���
//{
//	if ((*lhs).GetX() < (*rhs).GetX())
//	{
//		return true;
//	}
//	else if ((*lhs).GetX() > (*rhs).GetX())
//	{
//		return false;
//	}
//	else //������ 
//	{
//		return (*lhs).GetY() < (*rhs).GetY();  //x�� �Ǵ��� �ȵǸ� y�� 
//	}
//	}
//int main()
//{
//	vector<Point*> v;
//	v.push_back(new Point(3, 4));
//	v.push_back(new Point(2, 3));
//	v.push_back(new Point(8, 9));
//	v.push_back(new Point(3, 2));
//	v.push_back(new Point(5, 6));
//
//	sort(v.begin(), v.end(), cmp); //iterator������ ��Ÿ��.cmp���ϴ� �Լ�,�ּҰ� ����Ű�� ���ҳ��� ��
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


//#include <iostream> //������ �Ͽ���
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//#include <functional>
//using namespace std;
//class Point
//	{
//		int x, y;
//	public:
//		Point(int a = 0, int b = 0) :x(a), y(b) {}
//		int GetX()const
//		{
//			return x;
//		}
//		int GetY()const
//		{
//			return y;
//		}
//		void Print()const
//		{
//			cout << x << ',' << y << endl;
//		}
//
//	};
//ostream& operator<<(ostream& out, const Point& pt)
//	{
//		//pt.Print(); �̷��� �ص���.
//		out << pt.GetX() << ',' << pt.GetY();
//		return out;
//	}
//bool cmp(const Point* lhs, const Point* rhs)
//{
//	return (*lhs).GetX() < (*rhs).GetX();  
//}
//	int main()
//	{
//		vector<Point*> v;
//		v.push_back(new Point(3, 4));
//		v.push_back(new Point(2, 3));
//		v.push_back(new Point(8, 9));
//		v.push_back(new Point(3, 2));
//		v.push_back(new Point(5, 6));
//
//		sort(v.begin(), v.end(),cmp); //iterator������ ��Ÿ��.cmp���ϴ� �Լ�,Point�ּҸ� ����Ű�� ������ ��
//		for (unsigned i = 0; i < v.size(); ++i)
//		{ //v[i]->Print();
//			cout << *v[i] << " ";
//		}
//		for (unsigned i = 0; i < v.size(); ++i)
//		{
//			delete v[i];
//		}
//		cout << endl;
//		system("pause");
//}