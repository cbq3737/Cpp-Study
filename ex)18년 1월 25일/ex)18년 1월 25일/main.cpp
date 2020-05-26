#include <iostream> //문제한번 풀어보기 정렬해보기 
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
	//pt.Print(); 이렇게 해도됌.
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

	sort(v.begin(), v.end()); //정렬해라
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
//	//pt.Print(); 이렇게 해도됌.
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
//	//pt.Print(); 이렇게 해도됌.
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
//	sort(v.begin(), v.end(), greater<int>()); //내림 차순 , sort는 순차열을 input으로 받는다.
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
//	sort(v.begin(), v.end()); //정렬, sort는 iterator를 보고 작동함.
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
//using namespace std; //모든알고리즘은 순차열을 필요로 한다.stl은 반복자쌍으로 표현하고 시작위치는 개구간 끝위치는 폐구간으로 나타낸다.
//int main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	
//	v.erase(v.begin() + 1, v.end() - 1); //[20,40)은 즉 20,30을 의미한다.
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
//	list<int>::iterator iter = lt.begin(); //시작원소를 받음
//	++iter;
//	++iter; //2번째 원소
//	lt.erase(iter); //지워라.()안에 인덱스를 넣을수없음. 
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
//using namespace std; //기본적인 블록이 4개다. 그래서 원소를 넣으라고 하면 기본적으로 4개를 만듬.벡터는 원소를 추가할때마다 늘림/하지만 큐는 한번에 4개,4개씩 만들어버림 그리고 한개씩 건너뛰다가 다음 큐4개짜리로 갈려면 처음주소로 가야함.
//int main() //벡터는 앞에다가 추가하는 인터페이스를 제공하지않는다.만일 넣는다고하면 그 자리뒤에 있는 모든 수를 다 한칸씩 뒤로 밀린다.디큐는 앞에 새로운 4개짜리 만들고 그수를 추가해주고 시작주소를 그 원소로 만들면 됨.벡터보다 유연한 연속메모리를 갖는다.삽입,삭제시 뒤쪽 앞쪽이 있냐에 따라 효율적으로 한다.
//{//시퀀스는 연속메모리 기반(배열) , 연관은 비연속 메모리 기반이라고 부른다.  
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
//	v.reserve(4); //예약하겠다는 뜻 , 4개의 원소를 저장할때까지 4인거임 1.5배를 늘리니까 그이후로 6개가 된거임.
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
//	cout << v.size() << ',' << v.capacity() << endl; //size는원소 개수 , capacity는 메모리 용량임으로 만들엇지만 없으므로 0,0이 나옴
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
//	system("pause"); //1.5배 정책을 사용함.
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
//	cout << *++iter << endl;//즉 2번째 원소
//	cout << *--v.end()<< endl;//즉 마지막 원소
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>  
//#include <vector> 
//#include <string> //stl은 일반화가 중요, 효율적인 성능 중시
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
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) //iterator를 만든 이유는 컨테이너에 들어잇는 모든원소를 동일한 방법을 써서 일반화해서 참조해보자라는 뜻임.
//	{
//		cout << *iter << " ";
//	}
//	vector<int>::iterator iter; 
//	iter = v.begin(); //end는 마지막원소 다음을 가르킨다. 
//	cout << *iter << endl; 
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib>  
//#include <vector> //vector배열과 가장흡사한 형태임.  2. deque는 일률적인 메모리로 만들어짐 연속하는 특징과 비연속 특징 둘다 갖음. 3.list연결리스트임 원소들이 군데군데 순서를 갖음 ㅁ=ㅁ=ㅁ이런식임
//#include <string> //시퀀스 컨테이너 1. vector 2. deque 3.list / 연관컨테이너 1.set 2.multiset 3.map 4.multimap이둘을 분류하는 기준은 순서를 갖는지 안갖는지이다.시퀀스는 순서를 갖고 연관은 자동정렬되는방식이다.
//using namespace std; //연관컨테이너들은 이진트리형태로 이루어짐 1.2.set은 key들의 집합  3.4는 key와 value의 집합으로 이루어짐.
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
//	for (vector<int>::iterator iter=v.begin();iter != v.end(); ++iter) //iter가 원소를 가르킨다. 
//	{
//		cout << *iter << " ";
//	}
//	//vector<int> //<int>를안썻으면 템플릿이지만 <int>를썻기때문에 클래스라고 부름
//	//vector<int>::iterator iter(v.begin()); //iterator라는 클래스이름, iter는 vector iterator객체임.
//	vector<int>::iterator iter; //이것은 아무것도 안가르키고잇는 iterator임
//	iter = v.begin();// 첫번째 원소를 가르키는 iterator임. iterator는 포인터를 추상화한거라고 생각하면 됨.
//	cout << *iter << endl; //*iter는 첫번째 원소에대한 참조가 됨.
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>  
//#include <vector>
//#include <string>
//using namespace std;
//int main()
//{
//	vector<string> v; //컨테이너는 객체를 담는 객체라고 부름
//	v.push_back("10");
//	v.push_back("20");
//	v.push_back("30");
//	v.push_back("40");
//	v.push_back("50");
//	v.push_back("60");
//
//	for (vector<string>::size_type i = 0; i < v.size(); ++i) //unsigned는 i의 형이 언사인드 형이다.옆에 코드와 unsigned와 같은 의미고 기본적으로 unsignded int형식이다.
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
//	vector<string> v; //컨테이너는 객체를 담는 객체라고 부름
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


//#include <iostream> //s.t.l 표준적으로 사용하는 템플릿, 구성요소 1.컨테이너(자료구조) 2. 알고리즘(함수 3. 반복자(위치를 가르키는 놈) 4.함수객체(함수처럼 동작하는 객체) 5.어뎁테(인터페이스 변환) 6.메모리할당기(메모리할당 정책을 갖고있음)
//#include <cstdlib>  //4번까지 stl의 4대 요소라고 부름, 나머지요소들은 그나마 덜 중요
//#include <algorithm>
//#include <functional>
//#include <iterator>
//#include <vector>
//using namespace std; //이코드들에 4대 컴포넌트(요소)가 다나옴
//int main()
//{
//	vector<int> v; //v가 컨테이너객체 ,vector는 컨테이너 클라스
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
//	sort(v.begin(), v.end(), greater<int>());//적는 알고리즘 ,begin, end는 시작과 끝의 원소를 가르키는iterator(반복자)라고부름, greater는 함수객체임 
//	copy(v.begin(), v.end(), ostream_iterator<int>(cout,"")); //복사 알고리즘, 뒤에ostream_iterator는  컨테이너 어뎁터라고 부름
//	cout << endl;
//	system("pause");
//}

//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//class Math 
//{
//	static string name; //거의안쓰긴함,현자 private. static변수는 객체것이 아니다. 즉 객체없이도 저 변수가 존재한다.
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
//string Math::name("classMath"); //Math안에 static이름이있다 라고 말해줌.
//int main()
//{
//	Math::SetName("class Math.."); //객체없이도 존재가능하다는것을 보여줌. 객체한테 메세지를 보내는것이아니라 클래스에게 사용됨. 즉 클래스개체라고 부름.
//	Math::PrintName();//객체것이 아니기에 가능
//	cout << Math::Add(2, 3) << endl; //중요!객체것이 아니어도 상태와 메소드를 갖을수있다. 그것이 독립적으로 클래스만의 상태변수,기능을 갖고자 할때 사용한다.
//	system("pause");
//}


//#include <iostream>//static 객체없이도 호출가능한 변수
//#include <cstdlib>
//using namespace std;
//class Math //수학,과학 관련된 클래스 는 거의 staic이 많이 있다.
//{
//public:
//	static int Add(int a, int b)//staic을붙혀서 객체것이라고 말해준것,
//	{
//		return a + b; //인스턴스 메소드
//	}
//};
//int main()
//{
//	Math m;
//	cout << Math::Add(2, 3) << endl; //static이 붙었기때문에 객체없이도 호출가능,클래스만의 메소드 
//	system("pause");
//}


//#include <iostream>//static 객체없이도 호출가능한 변수
//#include <cstdlib>
//using namespace std;
//class Math //수학,과학 관련된 클래스 
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
//	cout << m.Add(2, 3) << endl; //Add는 값을 넘겨서 받지만 보면 m과 상관이없음.
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
//int main() //참조상태가 아니면 복사생성자 만들필요가없음.
//{ //힙메모리는 두번생성됫으므로 delete도 두번해줘야함.
//	Point p1(2, 3);
//	Point& p2 = p1; 
//	Point* p = new Point(4, 5);
//	Point arr[2] = { Point(1,2),Point(5,6)};
//	Point* pa = new Point[2];
//
//	p1.Print();
//	p2.Print();
//	(*p).Print();
//	arr[0].Print(); //arr->Print(); 가능
//	arr[1].Print(); //(arr+1)->Print()가능
//	pa[0].Print(); //pa->Print();
//	pa[1].Print();//(pa+1)->Print();
//
//	delete p;
//	delete[] pa;
//	system("pause");
//}