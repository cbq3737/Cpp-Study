//#include<iostream>
//#include<cstdlib>
//#include <list>
//	using namespace std; //해쉬 함수
//	struct Hash //70%이상 차게 되면 성능이 떨어지기때문에 보통 테이블의 개수를 정해주지않는다.
//	{
//		list<int> table[10];
//	};
//	int Hashfunction(int key)
//	{
//		return ((key >> 2) << 2) % 10;
//	}
//	void AddHash(Hash& h, int key)
//	{
//		int addr = Hashfunction(key);
//		h.table[addr].push_back(key);
//	}
//	void PrintHash(Hash& h)
//	{
//		int tsize = 10;
//		for (int i = 0; i < tsize; ++i)
//		{
//			cout << "[" << i << "]" << " ";
//			for (list<int>::iterator iter = h.table[i].begin(); iter != h.table[i].end(); ++iter)
//			{
//				cout << *iter;
//			}
//			cout << endl;
//		}
//	}
//	void SearchHash(Hash& h, int key)
//	{
//		int adrr = Hashfunction(key);
//		for (list<int>::iterator iter = h.table[adrr].begin(); iter != h.table[adrr].end(); ++iter)
//		{
//			if (key == *iter)
//			{
//				cout << key << "찾음! " << endl;
//				return;
//			}
//		}cout << "없음 : " << endl;
//	}
//	void RemoveHash(Hash& h, int key)
//	{
//		int addr = Hashfunction(key);
//		list <int> ::iterator iter = find(h.table[addr].begin(), h.table[addr].end(), key);
//		if (iter != h.table[addr].end())
//		{
//			h.table[addr].erase(iter);
//		}
//	}
//	int main()
//	{
//		Hash h;
//		AddHash(h, 47);
//		AddHash(h, 89);
//		AddHash(h, 120);
//
//		SearchHash(h, 89);
//		RemoveHash(h, 89);
//
//		PrintHash(h);
//		system("pause");
//	}




//#include<iostream>
//#include<cstdlib>
//#include <list>
//using namespace std; //해쉬 함수
//struct Hash //70%이상 차게 되면 성능이 떨어지기때문에 보통 테이블의 개수를 정해주지않는다.
//{
//	list<int> table[10];
//};
//int Hashfunction(int key)
//{
//	return ((key >> 2) << 2) % 10;
//}
//void AddHash(Hash& h, int key)
//{
//	int addr = Hashfunction(key);
//	h.table[addr].push_back(key);
//}
//void PrintHash(Hash& h)
//{
//	int tsize = 10;
//	for (int i = 0; i < tsize; ++i)
//	{
//		cout << "[" << i << "]" << " ";
//		for (list<int>::iterator iter = h.table[i].begin(); iter != h.table[i].end(); ++iter)
//		{
//			cout << *iter;
//		}
//		cout << endl;
//	}
//}
//void SearchHash(Hash& h, int key)
//{
//	int adrr = Hashfunction(key);
//	for (list<int>::iterator iter = h.table[adrr].begin(); iter != h.table[adrr].end(); ++iter)
//	{
//		if (key == *iter)
//		{
//			cout << key << "찾음! " << endl;
//			return;
//		}
//	}cout << "없음 : " << endl;
//}
//int main()
//{
//	Hash h;
//	AddHash(h, 47);
//	AddHash(h, 89);
//	AddHash(h, 120);
//
//	SearchHash(h, 89);
//	
//	PrintHash(h);
//	system("pause");
//}



//#include<iostream>
//#include<cstdlib>
//#include <list>
//using namespace std; //해쉬 함수
//struct Hash //70%이상 차게 되면 성능이 떨어지기때문에 보통 테이블의 개수를 정해주지않는다.
//{
//	list<int> table[10];
//};
//int Hashfunction(int key)
//{
//	return ((key >> 2) << 2) % 10;
//}
//void AddHash(Hash& h, int key)
//{
//	int addr = HashFunction(key);
//	h.table[addr].push_back(key);
//}
//void PrintHash(Hash& h)
//{
//	int tsize = 10;
//	for (int i = 0; i < tsize; ++i)
//	{
//		cout << "[" << i << "]" << " ";
//		for (list<int>::iterator iter = h.table[i].begin(); iter != h.table[i].end(); ++iter)
//		{
//			cout << *iter << endl;
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	Hash h;
//	AddHash(h, 47);
//	AddHash(h, 89);
//	AddHash(h, 120);
//	
//	PrintHash(h);
//	system("pause");
//}


//#include<iostream>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//#include <functional> //greater 때문에 포함됨
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f)//f로 원소끼리의 비교 less로 받기때문에 A<B일시true
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//	while (child>1)
//	{
//		if (f(list[parent], list[child]))
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//template <typename Func>
//void Pop_Heap(int list[], Func f)
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0];
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size)
//	{
//		if (child < size && f(list[child], list[child + 1])) //원소비교가 이루어지는곳.
//		{
//			child = child + 1;
//		}
//		if (f(list[parent], list[child]))
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		parent = child;
//		child = parent * 2;
//	}
//}
//template <typename Func>
//void Make_Heap(int list[], Func f)
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 1; i <= size; ++i)
//	{
//		Push_Heap(list, f);
//	}
//}
//template <typename Func>
//void Sort_Heap(int list[], Func f) //size는 안받아도됌. list[0]번째로 받을것이기때문에
//{
//	int size = list[0];
//	for (int i = 0; i < size; ++i)
//	{
//		Pop_Heap(list, f); //list에 있는애를 뺌
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//template <typename T>
//struct Greater
//{
//	bool operator()(int a, int b)
//	{
//		return a > b; //Gerater이므로 a>b임
//	}
//};
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[11] = { 10, 40,50,20,90,10,80,60,30,70,100 };//10개의원소가있음을지정
//
//	Make_Heap(list,less<int>()); //뒤에 greater를 안주면 less로 동작함
//	PrintList(list, 11);
//
//	Sort_Heap(list,less<int>());
//	PrintList(list, 11);
//	system("pause");
//}


//#include<iostream>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//#include <functional> //greater 때문에 포함됨
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f)//f로 원소끼리의 비교 less로 받기때문에 A<B일시true
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//	while (child>1)
//	{
//		if (f(list[parent], list[child]))
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//template <typename Func>
//void Pop_Heap(int list[], Func f)
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0];
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size)
//	{
//		if (child < size && f(list[child], list[child + 1])) //원소비교가 이루어지는곳.
//		{
//			child = child + 1;
//		}
//		if (f(list[parent], list[child]))
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		parent = child;
//		child = parent * 2;
//	}
//}
//template <typename Func>
//void Make_Heap(int list[],Func f)
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 1; i <= size; ++i)
//	{
//		Push_Heap(list,f);
//	}
//}
//template <typename Func>
//void Sort_Heap(int list[],Func f) //size는 안받아도됌. list[0]번째로 받을것이기때문에
//{
//	int size = list[0];
//	for (int i = 0; i < size; ++i)
//	{
//		Pop_Heap(list,f); //list에 있는애를 뺌
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//template <typename T>
//struct Greater
//{
//	bool operator()(int a, int b)
//	{
//		return a > b; //Gerater이므로 a>b임
//	}
//};
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[11] = { 10, 40,50,20,90,10,80,60,30,70,100 };//10개의원소가있음을지정
//
//	Make_Heap(list, greater<int>());
//	PrintList(list, 11);
//
//	Sort_Heap(list, greater<int>());
//	PrintList(list, 11);
//	system("pause");
//}


//#include<iostream>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//#include <functional> //greater 때문에 포함됨
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f)//f로 원소끼리의 비교 less로 받기때문에 A<B일시true
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//	while (child>1)
//	{
//		if (f(list[parent], list[child]))
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//template <typename Func>
//void Pop_Heap(int list[], Func f)
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0];
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size)
//	{
//		if (child < size && f(list[child], list[child + 1])) //원소비교가 이루어지는곳.
//		{
//			child = child + 1;
//		}
//		if (f(list[parent], list[child]))
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		parent = child;
//		child = parent * 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//template <typename T>
//struct Greater
//{
//	bool operator()(int a, int b)
//	{
//		return a > b; //Gerater이므로 a>b임
//	}
//};
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[11] = { 0, 40,50,20,90,10,80,60,30,70,100 };//10개의원소가있음을지정
//
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	PrintList(list, 11);
//
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	PrintList(list, 11);
//	system("pause");
//}


//#include<iostream>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//#include <functional> //greater 때문에 포함됨
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f)//f로 원소끼리의 비교 less로 받기때문에 A<B일시true
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//	while (child>1)
//	{
//		if (f(list[parent], list[child]))
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//template <typename Func>
//void Pop_Heap(int list[],Func f)
//{
//	Swap(list[list[0]],list[1]);
//	int size = --list[0];
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size)
//	{
//		if (child < size && f(list[child] , list[child + 1])) //원소비교가 이루어지는곳.
//		{
//			child = child + 1;
//		}
//		if (f(list[parent] , list[child]))
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		parent = child;
//		child = parent * 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//template <typename T>
//struct Greater
//{
//	bool operator()(int a, int b)
//	{
//		return a > b; //Gerater이므로 a>b임
//	}
//};
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[11] = { 0, 40,50,20,90,10,80,60,30,70,100 };//10개의원소가있음을지정
//														
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	PrintList(list, 11);
//
//
//	Pop_Heap(list,greater<int>());
//	PrintList(list, 11);
//	system("pause");
//}

//#include<iostream>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//#include <functional> //greater 때문에 포함됨
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f)//f로 원소끼리의 비교 less로 받기때문에 A<B일시true
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//	while (child>1)
//	{
//		if (f(list[parent], list[child]))
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//template <typename T>
//struct Greater
//{
//	bool operator()(int a, int b)
//	{
//		return a > b; //Gerater이므로 a>b임
//	}
//};
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[11] = { 0, 40,50,20,90,10,80,60,30,70,100 };//10개의원소가있음을지정
//														 //less 나 gerater는 이항predicate 라 불림
//														 //bool형식을 판단하는것을 predicate라 함
//	cout << Greater<int>()(40, 50) << endl;//Greater<int>() -> 객체를 의미
//	cout << Greater<int>().operator()(40, 50) << endl;
//	Greater<int> g;
//	cout << g(40, 50) << endl;//g -> 객체를 의미
//	cout << g.operator()(40, 50) << endl;
//	Push_Heap(list, Greater<int>());//greater로인해 최소heap가 됨 less를 사용할시에는 최대heap
//	Push_Heap(list, Greater<int>());//문장에서 임시객체를만들어서 넘겨줌
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	PrintList(list, 11);
//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[],Func f)
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (f(list[parent],list[child])) //less를 사용 해서 비교를 한것 왼쪽것이 더 크면 true를 반환
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size) //원소의 내용물을 출력 해준다. 힙의 연산아님
//{
//	for (int i = 0; i < size; ++i)
//	{
//		cout << list[i] << endl;
//	}
//	cout << endl;
//}
//void Pop_Heap(int list[])
//{
//	//int data = list[1]; 요 데이터는 가장끝에다가 넣어줌
//	Swap(list[list[0]], list[1]);
//	int size = --list[0];
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size)
//	{
//		if (child < size && list[child] < list[child + 1])
//		{
//			child = child + 1;
//		}
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		parent = child;
//		child = parent * 2;
//	}
//}
//void Sort_Heap(int list[]) //size는 안받아도됌. list[0]번째로 받을것이기때문에
//{
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//	{
//		Pop_Heap(list); //list에 있는애를 뺌
//	}
//}
////void Make_Heap(int list[])
////{
////	int size = list[0];
////	list[0] = 0;
////	for (int i = 1; i <= size; ++i)
////	{
////		Push_Heap(list);
////	}
////}
//int main() //자동적으로 만들어주는 make_heap을 만들꺼임
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[11] = { 0, 40,50,20,90,10,80,60,30,70,100 };
//
//	Push_Heap(list,greater<int>());  //less를 쓰면 최대 heap이 되지만 greater를 쓰면 최소 heap이 된다.
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	PrintList(list, 11);
//	system("pause");
//}

//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[])
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size) //원소의 내용물을 출력 해준다. 힙의 연산아님
//{
//	for (int i = 0; i < size; ++i)
//	{
//		cout << list[i] << endl;
//	}
//	cout << endl;
//}
//void Pop_Heap(int list[])
//{
//	//int data = list[1]; 요 데이터는 가장끝에다가 넣어줌
//	Swap(list[list[0]], list[1]);
//	int size = --list[0];
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size)
//	{
//		if (child < size && list[child] < list[child + 1])
//		{
//			child = child + 1;
//		}
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		parent = child;
//		child = parent * 2;
//	}
//}
//void Sort_Heap(int list[]) //size는 안받아도됌. list[0]번째로 받을것이기때문에
//{
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//	{
//		Pop_Heap(list); //list에 있는애를 뺌
//	}
//}
//void Make_Heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 1; i <= size; ++i)
//	{
//		Push_Heap(list);
//	}
//}
//int main() //자동적으로 만들어주는 make_heap을 만들꺼임
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[11] = { 0, 40,50,20,90,10,80,60,30,70,100 };
//
//	Make_Heap(list);
//	PrintList(list, 11);
//
//	Sort_Heap(list);
//	PrintList(list, 11);
//
//	system("pause");
//}

//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional>
//using namespace std;
//void Swap(int& a, int& b) 
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[])
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size) //원소의 내용물을 출력 해준다. 힙의 연산아님
//{
//	for (int i = 0; i < size; ++i)
//	{
//		cout << list[i] << endl;
//	}
//	cout << endl;
//}
//void Pop_Heap(int list[])
//{
//	//int data = list[1]; 요 데이터는 가장끝에다가 넣어줌
//	Swap(list[list[0]],list[1]);
//	int size = --list[0];
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size)
//	{
//		if (child < size && list[child] < list[child + 1])
//		{
//			child = child + 1;
//		}
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		parent = child;
//		child = parent * 2;
//	}
//}
////void Sort_Heap(int list[]) //size는 안받아도됌. list[0]번째로 받을것이기때문에
////{
////	int temp[11];
////	int size = list[0];
////	for (int i = 1; i <= size; ++i)
////	{
////		temp[i] = Pop_Heap(list); //list에 있는애를 뺌
////	}
////	for (int i = 1; i <= size; ++i)
////	{
////		list[size - i + 1] = temp[i];
////	}
////	list[0] = size;
////}
////void Make_Heap(int list[])
////{
////	int size = list[0];
////	list[0] = 0;
////	for (int i = 1; i <= size; ++i)
////	{
////		Push_Heap(list, list[i]);
////	}
////}
//int main() //자동적으로 만들어주는 make_heap을 만들꺼임
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[11] = {0, 40,50,20,90,10,80,60,30,70,100 };
//
//	//Push_Heap(list);
//	//PrintList(list, 2);
//	Push_Heap(list);
//	Push_Heap(list);
//	Push_Heap(list);
//	Push_Heap(list);
//	Push_Heap(list);
//	Push_Heap(list);
//	Push_Heap(list);
//	Push_Heap(list);
//	Push_Heap(list);
//	Push_Heap(list);
//	PrintList(list, 11);
//	
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list); 
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	PrintList(list, 11); //원소가 빠지면서 자동적으로 정렬이됨
//	
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data)
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size) //원소의 내용물을 출력 해준다. 힙의 연산아님
//{
//	for (int i = 0; i < size; ++i)
//	{
//		cout << list[i] << endl;
//	}
//	cout << endl;
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1];
//	list[1] = list[list[0]];
//	int size = --list[0];
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size)
//	{
//		if (child < size && list[child] < list[child + 1])
//		{
//			child = child + 1;
//		}
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		parent = child;
//		child = parent * 2;
//	}
//	return data;
//}
//void Sort_Heap(int list[]) //size는 안받아도됌. list[0]번째로 받을것이기때문에
//{
//	int temp[11];
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//	{
//		temp[i] = Pop_Heap(list); //list에 있는애를 뺌
//	}
//	for (int i = 1; i <= size; ++i)
//	{
//		list[size - i + 1] = temp[i];
//	}
//	list[0] = size;
//}
//void Make_Heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 1; i <= size; ++i)
//	{
//		Push_Heap(list, list[i]);
//	}
//}
//int main() //자동적으로 만들어주는 make_heap을 만들꺼임
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[11] = { 10, 40,50,20,90,10,80,60,30,70,100 };
//
//	Make_Heap(list); //원소들이 저장되어있다는 전제를 깔고있는것
//	PrintList(list, 11);
//	Sort_Heap(list);
//	PrintList(list, 11);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data)
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size) //원소의 내용물을 출력 해준다. 힙의 연산아님
//{
//	for (int i = 0; i < size; ++i)
//	{
//		cout << list[i] << endl;
//	}
//	cout << endl;
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1];
//	list[1] = list[list[0]];
//	int size = --list[0];
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size)
//	{
//		if (child < size && list[child] < list[child + 1])
//		{
//			child = child + 1;
//		}
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		parent = child;
//		child = parent * 2;
//	}
//	return data;
//}
//void Sort_Heap(int list[]) //size는 안받아도됌. list[0]번째로 받을것이기때문에
//{
//	int temp[11];
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//	{
//		temp[i] = Pop_Heap(list); //list에 있는애를 뺌
//	}
//	for (int i = 1; i <= size; ++i)
//	{
//		list[size-i+1] = temp[i];
//	}
//	list[0] = size;
//}
//void Make_Heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 1; i <= size; ++i)
//	{
//		Push_Heap(list, list[i]);
//	}
//}
//int main() //자동적으로 만들어주는 make_heap을 만들꺼임
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[11] = { 10, 40,50,20,90,10,80,60,30,70,100 };
//
//	Make_Heap(list); //원소들이 저장되어있다는 전제를 깔고있는것
//	Sort_Heap(list);
//	PrintList(list, 11);
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data)
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size) //원소의 내용물을 출력 해준다. 힙의 연산아님
//{
//	for (int i = 0; i < size; ++i)
//	{
//		cout << list[i] << endl;
//	}
//	cout << endl;
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1];
//	list[1] = list[list[0]];
//	int size = --list[0];
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size)
//	{
//		if (child < size && list[child] < list[child + 1])
//		{
//			child = child + 1;
//		}
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		parent = child;
//		child = parent * 2;
//	}
//	return data;
//}
//void Heap_Sort(int list[], int size)
//{
//	int temp[20] = { 0 }; //힙 메모리 공간
//	for (int i = 0; i < size; ++i)
//	{
//		Push_Heap(temp, list[i]);
//	}
//	for (int i = 0; i < size; ++i)
//	{
//		list[i] = Pop_Heap(temp);
//	}
//}
//void Make_Heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 1; i <= size; ++i)
//	{
//		Push_Heap(list,list[i]);
//	}
//}
//int main() //자동적으로 만들어주는 make_heap을 만들꺼임
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[11] = {10, 40,50,20,90,10,80,60,30,70,100 };
//
//	Make_Heap(list);
//	
//	PrintList(list, 11);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data)
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size) //원소의 내용물을 출력 해준다. 힙의 연산아님
//{
//	for (int i = 0; i < size; ++i)
//	{
//		cout << list[i] << endl;
//	}
//	cout << endl;
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1];
//	list[1] = list[list[0]];
//	int size = --list[0];
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size)
//	{
//		if (child < size && list[child] < list[child + 1])
//		{
//			child = child + 1;
//		}
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		parent = child;
//		child = parent * 2;
//	}
//	return data;
//}
//void Heap_Sort(int list[], int size)
//{
//	int temp[20] = { 0 }; //힙 메모리 공간
//	for (int i = 0; i < size; ++i)
//	{
//		Push_Heap(temp, list[i]);
//	}
//	for (int i = 0; i < size; ++i)
//	{
//		list[i] = Pop_Heap(temp);
//	}
//}
//int main()
//{
//	int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//
//	//make_heap(list, list + 10,greater<int>());
//	make_heap(list, list + 10, less<int>());
//	sort_heap(list, list + 10,less<int>()); //sort_heap은 오름차순 정리를 함 즉 less가 생략된거랑 같은의미,greater<int>()를 붙히면 내림 차수가 됨.
//	PrintList(list, 10);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data)
//{
//	list[list[0] + 1] = data; 
//	int size = ++list[0]; 
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)  
//	{
//		if (list[parent] < list[child]) 
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		child = parent;
//		parent = child / 2; 
//	}
//}
//void PrintList(int list[], int size) //원소의 내용물을 출력 해준다. 힙의 연산아님
//{
//	for (int i = 0; i < size; ++i)
//	{
//		cout << list[i] << endl;
//	}
//	cout << endl;
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1]; 
//	list[1] = list[list[0]];
//	int size = --list[0];
//
//	int parent = 1; 
//	int child = parent * 2;
//
//	while (child <= size) 
//	{
//		if (child < size && list[child] < list[child + 1]) 
//		{
//			child = child + 1; 
//		}
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		parent = child; 
//		child = parent * 2;
//	}
//	return data;
//}
//void Heap_Sort(int list[],int size)
//{
//	int temp[20] = { 0 }; //힙 메모리 공간
//	for (int i = 0; i < size; ++i)
//	{
//		Push_Heap(temp, list[i]);
//	}
//	for (int i = 0; i < size; ++i)
//	{
//		list[i] = Pop_Heap(temp);
//	}
//}
//int main()
//{
//	int list[10] = { 40,50,20,90,10,80,60,30,70,100 }; 
//	
//	Heap_Sort(list, 10); 
//	PrintList(list, 10);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data)
//{
//	list[list[0] + 1] = data; //그 인덱스에 위치에 원소를넣는것
//	int size = ++list[0]; //제로번째 인덱스가 개수라고 알려준것.기존에있던 원소의 개수
//	int child = size;
//	int parent = size / 2; //부모의 인덱스 번호 
//
//	while (child > 1) //70이 규칙에 맞게 자리로 갈때까지 계속 돌린다. child가 1이라는것은 root라는 소리, 즉 child가 1이라는 인덱스보다 커야한다. 
//	{
//		if (list[parent] < list[child]) //70이라는 원소가 들어와서 힙의 규칙을 맞추기위해 원소끼리 위치를 바꾸는것.
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		child = parent;
//		parent = child / 2; //원소인덱스는 자식인덱스가 부모인덱스의 반이 된다.
//	}
//}
//void PrintList(int list[])
//{
//	int size = list[0];
//	cout << "size: " << size << endl;
//	for (int i = 1; i <= size; ++i)//list의 첫번째 원소부터 출력해야되기때문에 1부터 출력
//	{
//		cout << list[i] << endl;
//	}
//	cout << endl;
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1]; //빼질 원소 즉 root.
//	list[1] = list[list[0]];//가장 끝에잇는 데이터를 인덱스 1에 자리에 놔둬줘야 한다. 이유는 이미 유효한 데이터의 범위는 이미 9여서 끝에 데이터는 무시되기때문에
//	int size = --list[0];
//
//	int parent = 1; //1은 인덱스 번호
//	int child = parent * 2;
//	
//	while (child <=size) //child가 계속 떨어지다 보면 size보다 크게 될수있으므로 그전까지만 돌린다.
//	{
//		if (child < size && list[child] < list[child + 1]) //즉 왼쪽 오른쪽을 비교해서 큰 애와 비교
//		{
//			child = child + 1; //큰놈으로 선택하는것.
//		}
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		parent = child; //내려갔던 그 10이 아직은 parent이기때문에 바꿔줘야 한다.
//		child = parent * 2; //올라간 child는 parent로 바꿔주고 인덱스 두배를 해줘야한다.
//	}
//	return data;
//}
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[20] = { 0 };
//	Push_Heap(list, 40);
//	Push_Heap(list, 50);
//	Push_Heap(list, 20);
//	Push_Heap(list, 90);
//	Push_Heap(list, 10);
//	Push_Heap(list, 70); //70,80바꿈
//	Push_Heap(list, 60);
//	Push_Heap(list, 30);
//	Push_Heap(list, 80); //70,80바꿈
//	Push_Heap(list, 100);
//
//
//	cout << Pop_Heap(list) <<endl;
//	cout << Pop_Heap(list) << endl;
//	cout << Pop_Heap(list) << endl;
//	cout << Pop_Heap(list) << endl;
//	cout << Pop_Heap(list) << endl;
//	cout << Pop_Heap(list) << endl;
//	cout << Pop_Heap(list) << endl;
//	cout << Pop_Heap(list) << endl;
//	cout << Pop_Heap(list) << endl;
//	cout << Pop_Heap(list) << endl;
//
//	PrintList(list);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data)
//{
//	list[list[0] + 1] = data; //그 인덱스에 위치에 원소를넣는것
//	int size = ++list[0]; //제로번째 인덱스가 개수라고 알려준것.기존에있던 원소의 개수
//	int child = size;
//	int parent = size / 2; //부모의 인덱스 번호 
//
//	while (child > 1) //70이 규칙에 맞게 자리로 갈때까지 계속 돌린다. child가 1이라는것은 root라는 소리, 즉 child가 1이라는 인덱스보다 커야한다. 
//	{
//		if (list[parent] < list[child]) //70이라는 원소가 들어와서 힙의 규칙을 맞추기위해 원소끼리 위치를 바꾸는것.
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		child = parent;
//		parent = child / 2; //원소인덱스는 자식인덱스가 부모인덱스의 반이 된다.
//	}
//}
//void PrintList(int list[])
//{
//	int size = list[0];
//	cout << "size: " << size << endl;
//	for (int i = 1; i <= size; ++i)//list의 첫번째 원소부터 출력해야되기때문에 1부터 출력
//	{
//		cout << list[i] << endl;
//	}
//	cout << endl;
//}
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[20] = { 0 };
//	Push_Heap(list, 40);
//	Push_Heap(list, 50);
//	Push_Heap(list, 20);
//	Push_Heap(list, 90);
//	Push_Heap(list, 10);
//	Push_Heap(list, 80);
//	Push_Heap(list, 60);
//	Push_Heap(list, 30);
//	Push_Heap(list, 70);
//	Push_Heap(list, 100);
//
//	PrintList(list);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data)
//{
//	list[list[0] + 1] = data; //그 인덱스에 위치에 원소를넣는것
//	int size = ++list[0]; //제로번째 인덱스가 개수라고 알려준것.기존에있던 원소의 개수
//	int child = size;
//	int parent = size / 2; //부모의 인덱스 번호 
//
//	while (child > 1) //70이 규칙에 맞게 자리로 갈때까지 계속 돌린다. child가 1이라는것은 root라는 소리, 즉 child가 1이라는 인덱스보다 커야한다. 
//	{
//		if (list[parent] < list[child]) //70이라는 원소가 들어와서 힙의 규칙을 맞추기위해 원소끼리 위치를 바꾸는것.
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		child = parent;
//		parent = child / 2; //원소인덱스는 자식인덱스가 부모인덱스의 반이 된다.
//	}
//}
//void PrintList(int list[])
//{
//	int size = list[0];
//	cout << "size: " << size << endl;
//	for (int i = 1; i <= size; ++i)//list의 첫번째 원소부터 출력해야되기때문에 1부터 출력
//	{
//		cout << list[i] << endl;
//	}
//	cout << endl;
//}
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[20] = {0};
//	Push_Heap(list,40);
//	Push_Heap(list,50);
//	Push_Heap(list,20);
//	Push_Heap(list,90);
//	Push_Heap(list,10);
//	Push_Heap(list,80);
//	Push_Heap(list,60);
//	Push_Heap(list,30);
//	Push_Heap(list,70);
//	Push_Heap(list,100);
//	
//	PrintList(list);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void Swap(int& a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data)
//{
//	list[list[0] + 1] = data; //그 인덱스에 위치에 원소를넣는것
//	int size = ++list[0]; //제로번째 인덱스가 개수라고 알려준것.기존에있던 원소의 개수
//	int child = size;
//	int parent = size / 2; //부모의 인덱스 번호 
//
//	while (child > 1) //70이 규칙에 맞게 자리로 갈때까지 계속 돌린다. child가 1이라는것은 root라는 소리, 즉 child가 1이라는 인덱스보다 커야한다. 
//	{
//		if (list[parent] < list[child]) //70이라는 원소가 들어와서 힙의 규칙을 맞추기위해 원소끼리 위치를 바꾸는것.
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		child = parent;
//		parent = child / 2; //원소인덱스는 자식인덱스가 부모인덱스의 반이 된다.
//	}
//}
//void PrintList(int list[])
//{
//	int size = list[0];
//	cout << "size: " << size << endl;
//	for (int i = 1; i <= size; ++i)//list의 첫번째 원소부터 출력해야되기때문에 1부터 출력
//	{
//		cout << list[i] << endl;
//	}
//}
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[10] = { 6,90,50,80,40,10,20 };//첫번째 제로 인덱스는 원소의 개수로 사용함.90부터 1인덱스
//	Push_Heap(list, 60);
//	Push_Heap(list, 30);
//	Push_Heap(list, 100);
//	PrintList(list);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void Swap(int& a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[],int data)
//{
//	list[list[0]+1] = data; //그 인덱스에 위치에 원소를넣는것
//	int size = ++list[0]; //제로번째 인덱스가 개수라고 알려준것.기존에있던 원소의 개수
//	int child = size;
//	int parent = size / 2; //부모의 인덱스 번호 
//	
//	while (1) //70이 규칙에 맞게 자리로 갈때까지 계속 돌린다. 
//	{
//		if (list[parent] < list[child]) //70이라는 원소가 들어와서 힙의 규칙을 맞추기위해 원소끼리 위치를 바꾸는것.
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		child = parent;
//		parent = child / 2; //원소인덱스는 자식인덱스가 부모인덱스의 반이 된다.
//	}
//}
//void PrintList(int list[])
//{
//	int size = list[0];
//	cout << "size: " <<size << endl;
//	for (int i = 1; i <= size; ++i)//list의 첫번째 원소부터 출력해야되기때문에 1부터 출력
//	{
//		cout << list[i] << endl; 
//	}
//}
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[10] = {6,90,50,80,40,10,20 };//첫번째 제로 인덱스는 원소의 개수로 사용함.90부터 1인덱스
//	Push_Heap(list,60);
//	Push_Heap(list,30);
//	Push_Heap(list,70);
//	PrintList(list);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <vector>
//using namespace std; //list에 원소 5개를 넣어 출력하라
//class Heap
//{
//	vector<int> list; //heap 여기서 원래 메모리를 고정하면 안됌. 그래서 vector로 바꿈
//	int size;
//public:
//	void Push(int data)
//	{
//		list.push_back(data);
//		push_heap(list.begin(), list.end()); //마지막 원소를 넣게되는것이기때문에
//	}
//	void Print()
//	{
//		for (unsigned i = 0; i < list.size(); ++i)
//		{
//			cout << list[i] << " ";
//		}
//		cout << endl;
//	}
//	int Pop()
//	{
//		pop_heap(list.begin(), list.end()); //하나를 제거해서 가장끝으로 옮김
//		int data = list.back();//제일끝에있는 반환데이터를 만들어서
//			list.pop_back(); //벡터이기 때문에 진짜로 제거를 해줘야함
//			return data; 
//	}
//};
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	Heap h;
//	h.Push(40);
//	h.Push(50);
//	h.Push(20);
//	h.Push(90);
//	h.Push(10);
//	h.Push(80);
//	h.Push(60);
//	h.Push(30);
//	h.Push(70);
//	h.Push(100);
//	h.Print();
//
//	cout << h.Pop() << endl; //시작원소인 root 즉 제일큰원소90을 줘야함.
//	h.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std; //list에 원소 5개를 넣어 출력하라
//class Heap
//{
//	int list[10];
//	int size;
//public:
//	Heap() :size(0) {}
//	void Push(int data)
//	{
//		list[size++] = data;
//		push_heap(list, list + size);
//	}
//	void Print()
//	{
//		for (int i = 0; i < size; ++i)
//		{
//			cout << list[i] << " ";
//		}
//		cout << endl;
//	}
//	int Pop()
//	{
//		pop_heap(list, list + size);
//		--size;
//		return list[size]; //이게 빠진 가장 큰 원소임
//	}
//};
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	Heap h;
//	h.Push(40);
//	h.Push(50);
//	h.Push(20);
//	h.Push(90);
//	h.Push(10);
//	h.Print();
//
//	cout << h.Pop() << endl; //시작원소인 root 즉 제일큰원소90을 줘야함.
//	h.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std; //list에 원소 5개를 넣어 출력하라
//class Heap
//{
//	int list[10];
//	int size;
//public:
//	Heap() :size(0) {}
//	void Push(int data)
//	{
//		list[size++]= data;
//		push_heap(list, list + size);
//	}
//	void Print()
//	{
//		for (int i = 0; i < size; ++i)
//		{
//			cout << list[i] << " ";
//		}
//		cout << endl;
//	}
//};
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	Heap h;
//	h.Push(40);
//	h.Push(50);
//	h.Push(20);
//	h.Push(90);
//	h.Push(10);
//	h.Print();
//	system("pause");
//}

//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std; //list에 원소 5개를 넣어 출력하라
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		cout << list[i] << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	PrintList(list, 10);
//	int size = 0;
//	make_heap(list, list + 5);
//	/*++size;
//	push_heap(list,list+1);
//	++size;
//	push_heap(list, list + 1);
//	++size;
//	push_heap(list, list + 1);
//	++size;
//	push_heap(list, list + 1);
//	++size;
//	push_heap(list, list + 1);*/
//	//PrintList(list, size);
//	PrintList(list, 10);
//	system("pause");
//}