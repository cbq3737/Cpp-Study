#include <iostream> 
#include <cstdlib>  
#include <string> 
#include <set>
#include <map>
using namespace std;
int main() //이렇게 다 출력할일없지만 한번 해본것.
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
//		(*iter).second = "Five"; //같은말이지만 이것이 더 안전하다 
//
//	cout << m[3] << endl;
//	cout << m[5] << endl;
//	cout << m[1] << endl;
//
//	system("pause");
//}

//#include <iostream> //연관컨테이너에게 제공되는 검색 메소드 4개 : 1.find 2.lower_bound 3.upper_bound  4. equal_ranged   
//#include <cstdlib>  //1.원소하나를 찾을때 2.3.원소를 따로따로 찾을때 
//#include <string> 
//#include <set>
//#include <map>
//using namespace std;
//int main()
//{
//	map<int, string> m;
//	m[1] = "one";  //이방식은 insert가 된다.
//	m[3] = "three";
//	m[5] = "five"; //insert
//	m[5] = "Five"; //insert가 아니라 업데이트이다. 키값이 동일하기 때문에 그렇다.즉 value값이 업데이트가 됨.
//
//	cout << m[3] << endl;
//	cout << m[5] << endl;
//	cout << m[1] << endl;
//
//	system("pause");
//}


//#include <iostream> //연관컨테이너에게 제공되는 검색 메소드 4개 : 1.find 2.lower_bound 3.upper_bound  4. equal_ranged   
//#include <cstdlib>  //1.원소하나를 찾을때 2.3.원소를 따로따로 찾을때 
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
//	//키에다른 value를 찾아야 한다.그게 목표임
//	//m[key]를 입력하면 value의 참조를 반환한다.
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
//	pair<set<int>::iterator , set<int>::iterator> pr; //pr이 가르킨다.
//	pr=s.equal_range(30);//30을 찾아라 , first도 second도 iterator여야한다.
//	if (pr.first != pr.second)//찾앗다는 소리 /iter1 != iter2랑 같으말
//	{
//		multiset<int>::iterator iter;
//		for (iter = pr.first; iter != pr.second; ++iter)  //아래랑 똑같다.
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
//	multiset<int>::iterator iter1 = s.lower_bound(30); //lower와 upper은 항상 같이 쓴다.
//	multiset<int>::iterator iter2 = s.upper_bound(30);
//	if (iter1 != iter2)//찾앗다는 소리
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
//	//10,20,30,40,50이 있으면 30이 lower bound이고 40이 upper bound이다.즉 [lower,upper)이라 생각
//	set<int>::iterator iter1 = s.lower_bound(30); //lower와 upper은 항상 같이 쓴다.
//	set<int>::iterator iter2 = s.upper_bound(30);
//	if (iter1 != iter2)//찾앗다는 소리
//	{
//		cout << *iter1 << endl;
//	}
//	system("pause");
//}


//#include <iostream> //벡터는 지정한 곳에 insert, 지정한 곳 삭제 erase가 있다.벡터는 요소를 앞뒤로 추가 제거 할 수있다. 사용하는 대부분의 이유는 이 자료구조에 맞는 데이터를 보관,관리하기 위해서이다. 
//#include <cstdlib>  //set은 지정이아니라 그냥 insert임.erase는 지정한것을 제거할수있다.셋은 요소를 앞뒤로 트리를 이용하기때문에 추가제거를 못한다. 목적은 원소를 빠르게 찾는것(이진트리가 편함)이 목표이다. 즉 검색을 목표로 보관하는것이다.
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
//	//원래대로라면 검색기능이 목표이기때문에 모든것을 출력하라 라는 코드는 쓸 필요가없다.
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
//	m.insert(pair<int, int>(5, 500));  //앞에 5,3,7은 키값이고 뒤에 500,300,700은 value이다. 맵핑은 짝짓는 작업을 하는것.
//	m.insert(pair<int, int>(3, 300));  //map은항상 키와 value의 쌍으로 이루어진다. 키와 밸유의 쌍 하나를 엘리멘트,원소라고 부른다.
//	m.insert(pair<int, int>(7, 700));  //키의 타입과 value를 항상 pair<>객체로 보관해야한다.
//	m.insert(pair<int, int>(8, 800));
//	m.insert(pair<int, int>(2, 200));
//
//	for (map<int, int>::iterator iter = m.begin(); iter != m.end(); ++iter)
//	{
//		cout << (*iter).first <<" "<<(*iter).second<<"    " << endl; 
//	}
//
//	pair<int, string> pr(1, "1"); //pair라는 구조체,클래스이다.첫번재 int가 퍼스트 두번째 string이 세컨드다.
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
//	multiset<int> s; //multi는 키의 중복이 가능하게 한다.
//	//연관에선 데이터를 원소라고 부르지 않고 key라고 부른다.
//	s.insert(100);
//	s.insert(80);
//	s.insert(50);
//	s.insert(30);
//	s.insert(40);
//	s.insert(80); //80이 두개가있는거지 동일한 80이 있는게 아니다.
//
//	for (multiset<int>::iterator iter = s.begin(); iter != s.end(); ++iter)
//	{
//		cout << *iter << endl; //출력하면 내부적으로 정렬이 된다.트리방식으로 정리하기때문
//	}
//	system("pause");
//}


//#include <iostream> //연관 컨테이너, 트리를 적을때 부모에 비하여 작으면 왼편 큰것을 오른쪽으로 하여표시한다. 시퀀스는 상대순서,연관은 정렬규칙을 갖는다.
//#include <cstdlib> //iterator는 inorder방식으로 탐색한다.그래서 연관컨테이너는 자동정렬이 된다.
//#include <set>
//using namespace std;
//int main()
//{
//	set<int> s;
//	//연관에선 데이터를 원소라고 부르지 않고 key라고 부른다.
//	s.insert(100);  
//	s.insert(80);
//	s.insert(50);
//	s.insert(30);
//	s.insert(40);
//	s.insert(80);//일반적으로 키의 중복이 안되기때문에 출력이안된다.
//
//	for (set<int>::iterator iter = s.begin(); iter != s.end(); ++iter)
//	{
//		cout << *iter << endl; //출력하면 내부적으로 정렬이 된다.트리방식으로 정리하기때문
//	}
//	system("pause");
//}

//#include <iostream> //연관 컨테이너
//#include <cstdlib>
//#include <set>
//using namespace std; 
//int main()
//{
//	set<int> s;
//	
//	s.insert(100);  //메소드가 push류가 없다 . 원소를 넣기위해서 insert밖에 없다.
//	s.insert(80);
//	s.insert(50);
//	s.insert(30);
//	s.insert(40);
//
//	for (set<int>::iterator iter = s.begin(); iter != s.end(); ++iter)
//	{
//		cout << *iter << endl; //출력하면 내부적으로 정렬이 된다.트리방식으로 정리하기때문
//	}
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib>
//#include <list>
//using namespace std; //지금 리스트는 자료구조상으로 서로마주보고잇는 연결리스트이다. 그때 lt1의 마지막 노드와 lt2의 첫번째 노드를 서로 연결하면 lt1의 6개로 만들어질수있다.
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
//	lt1.insert(lt1.end(), lt2.begin(), lt2.end()); //splice처럼 잘라붙히는것이아니라 원본에 내용달라짐 없이 복사를 하는것이다.
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
//using namespace std; //지금 리스트는 자료구조상으로 서로마주보고잇는 연결리스트이다. 그때 lt1의 마지막 노드와 lt2의 첫번째 노드를 서로 연결하면 lt1의 6개로 만들어질수있다.
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
//	//잘라서 옮겨 붙혀라, 복사가 아니다. 옮겨서 붙히는것이다.
//	lt1.splice(lt1.end(), lt2, lt2.begin(), lt2.end()); //lt2께 잘라져서 lt1으로 옴. 이방법은 list만 가능한 방법. //lt1마지막에 lt2를 lt2의 첫번째부터 마지막까지 옮겨 붙혀라
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
//	//pt.Print(); 이렇게 해도됌.
//	out << pt.GetX() << ',' << pt.GetY();
//	return out;
//}
//struct CMP {
//	bool operator()(const Point& data)const //x가 y보다 큰 수를 찾고싶음 //근ㄴ데 만일 이 찾은값에서 삭제하고싶다.
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
//		find_if(v.begin(), v.end(), CMP()); //객체를 넘겨줌
//
//	if (iter != v.end())//찾았다면
//	{
//		v.erase(iter);	//cout << *iter << endl; //x가 y가 큰값을 출력해주었음.
//	}
//	for (unsigned i = 0; i < v.size(); ++i)  //사라진걸 확인하기위하여 적었음.
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
//	//pt.Print(); 이렇게 해도됌.
//	out << pt.GetX() << ',' << pt.GetY();
//	return out;
//}
//struct CMP {
//	bool operator()(const Point& data)const //2,3을 찾고싶을때 
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
//		find_if(v.begin(), v.end(), CMP()); //객체를 넘겨줌
//
//	if (iter != v.end())//찾았다면
//	{
//		cout << *iter << endl;
//	}
//	system("pause");
//}

//#include <iostream> //정렬을 하여라
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
//bool pred(const Point& data) //2,3을 찾고싶을때 
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
//	find_if(v.begin(),v.end(),pred); //찾는거이기때문에 원소를 하나씩 넘겨줌, 함수를 적어줌
//	
//	if (iter != v.end())//찾았다면
//	{
//		cout << *iter << endl;
//	}
//	system("pause");
//}


//#include <iostream> //정렬을 하여라
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
//class Functor
//{
//public :
//	bool operator()(const Point& lhs, const Point& rhs)const  //bool형식의 판단, 인수가 두개 즉 이항 predicate , sort란 두요소를 비교해야하기 때문에 predicate, 내가 참인지 거짓인거 보다 나와 얘가 다른지 맞는지를 보는것.그래서 함수처럼 이용할수있는 함수객체가 있다.
//	{
//		if (lhs.GetX() < rhs.GetX())
//		{
//			return true;
//		}
//		else if (lhs.GetX() > rhs.GetX())
//		{
//			return false;
//		}
//		else //같으면 
//		{
//			return lhs.GetY() < rhs.GetY();  //x가 판단이 안되면 y로 
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
//	sort(v.begin(), v.end(), Functor()); //같은 문장
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream> //정렬을 하여라
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
//bool cmp(const Point& lhs, const Point& rhs) //bool형식의 판단, 인수가 두개 즉 이항 predicate , sort란 두요소를 비교해야하기 때문에 predicate, 내가 참인지 거짓인거 보다 나와 얘가 다른지 맞는지를 보는것.그래서 함수처럼 이용할수있는 함수객체가 있다.
//{
//	if (lhs.GetX() < rhs.GetX())
//	{
//		return true;
//	}
//	else if (lhs.GetX() > rhs.GetX())
//	{
//		return false;
//	}
//	else //같으면 
//	{
//		return lhs.GetY() < rhs.GetY();  //x가 판단이 안되면 y로 
//	}
//	}
//int main()
//{
//	vector<Point> v; //이번에는 Point객체를 저장
//	v.push_back(Point(3, 4));
//	v.push_back(Point(2, 3));
//	v.push_back(Point(8, 9));
//	v.push_back(Point(3, 2));
//	v.push_back(Point(5, 6));
//
//	sort(v.begin(), v.end(),cmp);//아무것도 만질수없기때문에 세번째인수에 사용정책을 만들어 줌. 
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream> //함수객체 = function object = functor 함수자
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
//struct Functor //함수객체의 정의, 즉 함수개체의 플러스
//{
//	int base;
//	Functor(int b = 100) : base(b) {}
//	bool operator()(int a, int b)const //predicate , 단항 predicate
//	{
//		return b-a > base;
//	}
//};
//int main()
//{
//	Functor f; //얘의 장점은 얘가 장점이라는것이다 . 객체는 다른 메소드들도 갖을수도있고 다른 상태도 갖을수있기매때문에,함수보다 더 큰 기능을 갖을수있다.
//	cout << f(10,20) << endl;
//	cout << f(15,60) << endl;
//	system("pause");
//}


//#include <iostream> //함수객체 = function object = functor 함수자
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
//struct Functor //함수객체의 정의, 즉 함수개체의 플러스
//{
//	int base; 
//	Functor(int b = 100) : base(b) {}
//		bool operator()(int n)const //predicate , 단항 predicate
//		{
//		return n > base;
//	}
//};
//int main() 
//{
//	Functor f; //얘의 장점은 얘가 장점이라는것이다 . 객체는 다른 메소드들도 갖을수도있고 다른 상태도 갖을수있기매때문에,함수보다 더 큰 기능을 갖을수있다.
//	cout << f(100) << endl;
//	cout << f(200) << endl;
//	system("pause");
//}


//#include <iostream> //함수객체 = function object = functor 함수자
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
//struct Functor //함수객체의 정의
//{
//	bool operator()(int n)const
//	{
//		return n > 100;
//	}
//};
//int main() //f를 함수객체라고 부른다.
//{
//	Functor f;
//	cout <<f(100) << endl;
//	cout << f(200) << endl;
//	system("pause");
//}

//#include <iostream> //함수객체 = function object = functor 함수자
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
//struct Functor //함수객체의 정의
//{
//	void operator()(int n)
//	{
//		cout << n << endl;
//	}
//};
//int main() //f를 함수객체라고 부른다.
//{
//	Functor f; 
//	f(100);  //처음에 정의할때 값을 할당해야지 초기화지만 이것은 이미 지난후 값을 불럿기때문에 함수호출이다. f는 객체이다. 즉 f.operator()(100)이랑 같은말
//	system("pause");
//}


//#include <iostream> //predicate(조건자)정말 중요한 단어 : 무언가를 판단할때 사용된다. 참인지 거짓인지 불 형식을 반환하는 함수,객체,함수포인터를 말함  
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
//bool Mycmp(int data)//찾고싶으면 true아니면 false , 즉 predicate라고 볼수있음.
//{
//	return 50 < data && data % 3 == 0;
//}
//int main() //선형 검색
//{
//	int list[10] = { 50, 36, 79, 46, 51, 85, 69, 79, 48, 61 };
//	int idx = Find(list, 10, Mycmp); //값을 준게아니라 함수의 시작주소를 주었음.비교 정책이라고 함.
//	if (idx >= 0)
//	{
//		cout << idx << ":" << list[idx];
//	}
//	system("pause");
//}


//#include <iostream>  
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, bool (*func)(int))//찾고싶으면 true아니면 false, bool형식을 인수로 하는 매개변수를 갖는 함수포인터
//{
//	for (int i = 0; i < size; ++i)
//	{
//		if (func(list[i])) //서버가 클라이언트에게 원소있냐고 물어보는것.콜백
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//bool Mycmp(int data)//찾고싶으면 true아니면 false
//{
//	return 50 < data && data % 3 == 0;
//}
//int main() //선형 검색
//{
//	int list[10] = { 50, 36, 79, 46, 51, 85, 69, 79, 48, 61 };
//	int idx = Find(list, 10, Mycmp); //값을 준게아니라 함수의 시작주소를 주었음.비교 정책이라고 함.
//	if (idx >= 0)
//	{
//		cout << idx << ":" << list[idx];
//	}
//	system("pause");
//}


//#include <iostream> //요소와 요소가 다이렉트로 말고 요소와 요소사이의 중개자(인터페이스)가잇으면 보다 복잡하지만 보다 유연한변경을 할수있고 서로 직접적으로 닿고 있으면 결착력으로 인해 변경이 힘들다. 즉 중개자는 반복자이고 요소와 요소는 컨테이너와 알고리즘 사이다. 
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
//int main() //선형 검색
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


//#include <iostream> //정렬을 하여라
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
//bool cmp(const Point& lhs, const Point& rhs) //원소값자체가 바뀌는게 아니라 가리키는 주소가 달라지는것임
//{
//	if (lhs.GetX() < rhs.GetX())
//	{
//		return true;
//	}
//	else if (lhs.GetX() > rhs.GetX())
//	{
//		return false;
//	}
//	else //같으면 
//	{
//		return lhs.GetY() < rhs.GetY();  //x가 판단이 안되면 y로 
//	}
//	}
//int main()
//{
//	vector<Point> v; //이번에는 Point객체를 저장
//	v.push_back(Point(3, 4));
//	v.push_back(Point(2, 3));
//	v.push_back(Point(8, 9));
//	v.push_back(Point(3, 2));
//	v.push_back(Point(5, 6));
//
//	sort(v.begin(), v.end(),cmp);//아무것도 만질수없기때문에 세번째인수에 사용정책을 만들어 줌. 
//	for (unsigned i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream> //정렬을 하여라
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
//	bool operator<(const Point& arg)const  //Point와 sort는 개별적인 일이다 Point는 정의해주는것이고 sort는 독립적으로 정렬해주는것인데 정렬을 위해서 Point를 계속 변경하는것은 좋지않은 방법이다.
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
//	//pt.Print(); 이렇게 해도됌.
//	out << pt.GetX() << ',' << pt.GetY();
//	return out;
//}
//int main()
//{
//	vector<Point> v; //이번에는 Point객체를 저장
//	v.push_back(Point(3, 4));
//	v.push_back(Point(2, 3));
//	v.push_back(Point(8, 9));
//	v.push_back(Point(3, 2));
//	v.push_back(Point(5, 6));
//
//	sort(v.begin(), v.end() ); //정수와 주소는 비교가 가능 , sort는 항상 비교를 해야함. 비교를 해야지 정렬을 할수가있음.지금은 Point객체끼리 비교를 해주어야 함.
//	for (unsigned i = 0; i < v.size(); ++i)
//	{ 
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//}

//#include <iostream> //정렬을 하여라
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
//bool cmp(const Point* lhs, const Point* rhs) //원소값자체가 바뀌는게 아니라 가리키는 주소가 달라지는것임
//{
//	if ((*lhs).GetX() < (*rhs).GetX())
//	{
//		return true;
//	}
//	else if ((*lhs).GetX() > (*rhs).GetX())
//	{
//		return false;
//	}
//	else //같으면 
//	{
//		return (*lhs).GetY() < (*rhs).GetY();  //x가 판단이 안되면 y로 
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
//	sort(v.begin(), v.end(), cmp); //iterator쌍으로 나타냄.cmp비교하는 함수,주소가 가르키는 원소끼리 비교
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


//#include <iostream> //정렬을 하여라
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
//		//pt.Print(); 이렇게 해도됌.
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
//		sort(v.begin(), v.end(),cmp); //iterator쌍으로 나타냄.cmp비교하는 함수,Point주소를 가르키는 수끼리 비교
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