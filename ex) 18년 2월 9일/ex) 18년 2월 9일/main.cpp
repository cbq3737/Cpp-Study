//#include<iostream>
//#include<cstdlib>
//#include <list>
//	using namespace std; //�ؽ� �Լ�
//	struct Hash //70%�̻� ���� �Ǹ� ������ �������⶧���� ���� ���̺��� ������ ���������ʴ´�.
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
//				cout << key << "ã��! " << endl;
//				return;
//			}
//		}cout << "���� : " << endl;
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
//using namespace std; //�ؽ� �Լ�
//struct Hash //70%�̻� ���� �Ǹ� ������ �������⶧���� ���� ���̺��� ������ ���������ʴ´�.
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
//			cout << key << "ã��! " << endl;
//			return;
//		}
//	}cout << "���� : " << endl;
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
//using namespace std; //�ؽ� �Լ�
//struct Hash //70%�̻� ���� �Ǹ� ������ �������⶧���� ���� ���̺��� ������ ���������ʴ´�.
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
//#include <functional> //greater ������ ���Ե�
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f)//f�� ���ҳ����� �� less�� �ޱ⶧���� A<B�Ͻ�true
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
//		if (child < size && f(list[child], list[child + 1])) //���Һ񱳰� �̷�����°�.
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
//void Sort_Heap(int list[], Func f) //size�� �ȹ޾Ƶ���. list[0]��°�� �������̱⶧����
//{
//	int size = list[0];
//	for (int i = 0; i < size; ++i)
//	{
//		Pop_Heap(list, f); //list�� �ִ¾ָ� ��
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
//		return a > b; //Gerater�̹Ƿ� a>b��
//	}
//};
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[11] = { 10, 40,50,20,90,10,80,60,30,70,100 };//10���ǿ��Ұ�����������
//
//	Make_Heap(list,less<int>()); //�ڿ� greater�� ���ָ� less�� ������
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
//#include <functional> //greater ������ ���Ե�
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f)//f�� ���ҳ����� �� less�� �ޱ⶧���� A<B�Ͻ�true
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
//		if (child < size && f(list[child], list[child + 1])) //���Һ񱳰� �̷�����°�.
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
//void Sort_Heap(int list[],Func f) //size�� �ȹ޾Ƶ���. list[0]��°�� �������̱⶧����
//{
//	int size = list[0];
//	for (int i = 0; i < size; ++i)
//	{
//		Pop_Heap(list,f); //list�� �ִ¾ָ� ��
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
//		return a > b; //Gerater�̹Ƿ� a>b��
//	}
//};
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[11] = { 10, 40,50,20,90,10,80,60,30,70,100 };//10���ǿ��Ұ�����������
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
//#include <functional> //greater ������ ���Ե�
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f)//f�� ���ҳ����� �� less�� �ޱ⶧���� A<B�Ͻ�true
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
//		if (child < size && f(list[child], list[child + 1])) //���Һ񱳰� �̷�����°�.
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
//		return a > b; //Gerater�̹Ƿ� a>b��
//	}
//};
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[11] = { 0, 40,50,20,90,10,80,60,30,70,100 };//10���ǿ��Ұ�����������
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
//#include <functional> //greater ������ ���Ե�
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f)//f�� ���ҳ����� �� less�� �ޱ⶧���� A<B�Ͻ�true
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
//		if (child < size && f(list[child] , list[child + 1])) //���Һ񱳰� �̷�����°�.
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
//		return a > b; //Gerater�̹Ƿ� a>b��
//	}
//};
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[11] = { 0, 40,50,20,90,10,80,60,30,70,100 };//10���ǿ��Ұ�����������
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
//#include <functional> //greater ������ ���Ե�
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f)//f�� ���ҳ����� �� less�� �ޱ⶧���� A<B�Ͻ�true
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
//		return a > b; //Gerater�̹Ƿ� a>b��
//	}
//};
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[11] = { 0, 40,50,20,90,10,80,60,30,70,100 };//10���ǿ��Ұ�����������
//														 //less �� gerater�� ����predicate �� �Ҹ�
//														 //bool������ �Ǵ��ϴ°��� predicate�� ��
//	cout << Greater<int>()(40, 50) << endl;//Greater<int>() -> ��ü�� �ǹ�
//	cout << Greater<int>().operator()(40, 50) << endl;
//	Greater<int> g;
//	cout << g(40, 50) << endl;//g -> ��ü�� �ǹ�
//	cout << g.operator()(40, 50) << endl;
//	Push_Heap(list, Greater<int>());//greater������ �ּ�heap�� �� less�� ����ҽÿ��� �ִ�heap
//	Push_Heap(list, Greater<int>());//���忡�� �ӽð�ü������ �Ѱ���
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
//		if (f(list[parent],list[child])) //less�� ��� �ؼ� �񱳸� �Ѱ� ���ʰ��� �� ũ�� true�� ��ȯ
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
//void PrintList(int list[], int size) //������ ���빰�� ��� ���ش�. ���� ����ƴ�
//{
//	for (int i = 0; i < size; ++i)
//	{
//		cout << list[i] << endl;
//	}
//	cout << endl;
//}
//void Pop_Heap(int list[])
//{
//	//int data = list[1]; �� �����ʹ� ���峡���ٰ� �־���
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
//void Sort_Heap(int list[]) //size�� �ȹ޾Ƶ���. list[0]��°�� �������̱⶧����
//{
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//	{
//		Pop_Heap(list); //list�� �ִ¾ָ� ��
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
//int main() //�ڵ������� ������ִ� make_heap�� ���鲨��
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[11] = { 0, 40,50,20,90,10,80,60,30,70,100 };
//
//	Push_Heap(list,greater<int>());  //less�� ���� �ִ� heap�� ������ greater�� ���� �ּ� heap�� �ȴ�.
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
//void PrintList(int list[], int size) //������ ���빰�� ��� ���ش�. ���� ����ƴ�
//{
//	for (int i = 0; i < size; ++i)
//	{
//		cout << list[i] << endl;
//	}
//	cout << endl;
//}
//void Pop_Heap(int list[])
//{
//	//int data = list[1]; �� �����ʹ� ���峡���ٰ� �־���
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
//void Sort_Heap(int list[]) //size�� �ȹ޾Ƶ���. list[0]��°�� �������̱⶧����
//{
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//	{
//		Pop_Heap(list); //list�� �ִ¾ָ� ��
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
//int main() //�ڵ������� ������ִ� make_heap�� ���鲨��
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
//void PrintList(int list[], int size) //������ ���빰�� ��� ���ش�. ���� ����ƴ�
//{
//	for (int i = 0; i < size; ++i)
//	{
//		cout << list[i] << endl;
//	}
//	cout << endl;
//}
//void Pop_Heap(int list[])
//{
//	//int data = list[1]; �� �����ʹ� ���峡���ٰ� �־���
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
////void Sort_Heap(int list[]) //size�� �ȹ޾Ƶ���. list[0]��°�� �������̱⶧����
////{
////	int temp[11];
////	int size = list[0];
////	for (int i = 1; i <= size; ++i)
////	{
////		temp[i] = Pop_Heap(list); //list�� �ִ¾ָ� ��
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
//int main() //�ڵ������� ������ִ� make_heap�� ���鲨��
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
//	PrintList(list, 11); //���Ұ� �����鼭 �ڵ������� �����̵�
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
//void PrintList(int list[], int size) //������ ���빰�� ��� ���ش�. ���� ����ƴ�
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
//void Sort_Heap(int list[]) //size�� �ȹ޾Ƶ���. list[0]��°�� �������̱⶧����
//{
//	int temp[11];
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//	{
//		temp[i] = Pop_Heap(list); //list�� �ִ¾ָ� ��
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
//int main() //�ڵ������� ������ִ� make_heap�� ���鲨��
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[11] = { 10, 40,50,20,90,10,80,60,30,70,100 };
//
//	Make_Heap(list); //���ҵ��� ����Ǿ��ִٴ� ������ ����ִ°�
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
//void PrintList(int list[], int size) //������ ���빰�� ��� ���ش�. ���� ����ƴ�
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
//void Sort_Heap(int list[]) //size�� �ȹ޾Ƶ���. list[0]��°�� �������̱⶧����
//{
//	int temp[11];
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//	{
//		temp[i] = Pop_Heap(list); //list�� �ִ¾ָ� ��
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
//int main() //�ڵ������� ������ִ� make_heap�� ���鲨��
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[11] = { 10, 40,50,20,90,10,80,60,30,70,100 };
//
//	Make_Heap(list); //���ҵ��� ����Ǿ��ִٴ� ������ ����ִ°�
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
//void PrintList(int list[], int size) //������ ���빰�� ��� ���ش�. ���� ����ƴ�
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
//	int temp[20] = { 0 }; //�� �޸� ����
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
//int main() //�ڵ������� ������ִ� make_heap�� ���鲨��
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
//void PrintList(int list[], int size) //������ ���빰�� ��� ���ش�. ���� ����ƴ�
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
//	int temp[20] = { 0 }; //�� �޸� ����
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
//	sort_heap(list, list + 10,less<int>()); //sort_heap�� �������� ������ �� �� less�� �����ȰŶ� �����ǹ�,greater<int>()�� ������ ���� ������ ��.
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
//void PrintList(int list[], int size) //������ ���빰�� ��� ���ش�. ���� ����ƴ�
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
//	int temp[20] = { 0 }; //�� �޸� ����
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
//	list[list[0] + 1] = data; //�� �ε����� ��ġ�� ���Ҹ��ִ°�
//	int size = ++list[0]; //���ι�° �ε����� ������� �˷��ذ�.�������ִ� ������ ����
//	int child = size;
//	int parent = size / 2; //�θ��� �ε��� ��ȣ 
//
//	while (child > 1) //70�� ��Ģ�� �°� �ڸ��� �������� ��� ������. child�� 1�̶�°��� root��� �Ҹ�, �� child�� 1�̶�� �ε������� Ŀ���Ѵ�. 
//	{
//		if (list[parent] < list[child]) //70�̶�� ���Ұ� ���ͼ� ���� ��Ģ�� ���߱����� ���ҳ��� ��ġ�� �ٲٴ°�.
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		child = parent;
//		parent = child / 2; //�����ε����� �ڽ��ε����� �θ��ε����� ���� �ȴ�.
//	}
//}
//void PrintList(int list[])
//{
//	int size = list[0];
//	cout << "size: " << size << endl;
//	for (int i = 1; i <= size; ++i)//list�� ù��° ���Һ��� ����ؾߵǱ⶧���� 1���� ���
//	{
//		cout << list[i] << endl;
//	}
//	cout << endl;
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1]; //���� ���� �� root.
//	list[1] = list[list[0]];//���� �����մ� �����͸� �ε��� 1�� �ڸ��� ������� �Ѵ�. ������ �̹� ��ȿ�� �������� ������ �̹� 9���� ���� �����ʹ� ���õǱ⶧����
//	int size = --list[0];
//
//	int parent = 1; //1�� �ε��� ��ȣ
//	int child = parent * 2;
//	
//	while (child <=size) //child�� ��� �������� ���� size���� ũ�� �ɼ������Ƿ� ���������� ������.
//	{
//		if (child < size && list[child] < list[child + 1]) //�� ���� �������� ���ؼ� ū �ֿ� ��
//		{
//			child = child + 1; //ū������ �����ϴ°�.
//		}
//		if (list[parent] < list[child])
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		parent = child; //�������� �� 10�� ������ parent�̱⶧���� �ٲ���� �Ѵ�.
//		child = parent * 2; //�ö� child�� parent�� �ٲ��ְ� �ε��� �ι踦 ������Ѵ�.
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
//	Push_Heap(list, 70); //70,80�ٲ�
//	Push_Heap(list, 60);
//	Push_Heap(list, 30);
//	Push_Heap(list, 80); //70,80�ٲ�
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
//	list[list[0] + 1] = data; //�� �ε����� ��ġ�� ���Ҹ��ִ°�
//	int size = ++list[0]; //���ι�° �ε����� ������� �˷��ذ�.�������ִ� ������ ����
//	int child = size;
//	int parent = size / 2; //�θ��� �ε��� ��ȣ 
//
//	while (child > 1) //70�� ��Ģ�� �°� �ڸ��� �������� ��� ������. child�� 1�̶�°��� root��� �Ҹ�, �� child�� 1�̶�� �ε������� Ŀ���Ѵ�. 
//	{
//		if (list[parent] < list[child]) //70�̶�� ���Ұ� ���ͼ� ���� ��Ģ�� ���߱����� ���ҳ��� ��ġ�� �ٲٴ°�.
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		child = parent;
//		parent = child / 2; //�����ε����� �ڽ��ε����� �θ��ε����� ���� �ȴ�.
//	}
//}
//void PrintList(int list[])
//{
//	int size = list[0];
//	cout << "size: " << size << endl;
//	for (int i = 1; i <= size; ++i)//list�� ù��° ���Һ��� ����ؾߵǱ⶧���� 1���� ���
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
//	list[list[0] + 1] = data; //�� �ε����� ��ġ�� ���Ҹ��ִ°�
//	int size = ++list[0]; //���ι�° �ε����� ������� �˷��ذ�.�������ִ� ������ ����
//	int child = size;
//	int parent = size / 2; //�θ��� �ε��� ��ȣ 
//
//	while (child > 1) //70�� ��Ģ�� �°� �ڸ��� �������� ��� ������. child�� 1�̶�°��� root��� �Ҹ�, �� child�� 1�̶�� �ε������� Ŀ���Ѵ�. 
//	{
//		if (list[parent] < list[child]) //70�̶�� ���Ұ� ���ͼ� ���� ��Ģ�� ���߱����� ���ҳ��� ��ġ�� �ٲٴ°�.
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		child = parent;
//		parent = child / 2; //�����ε����� �ڽ��ε����� �θ��ε����� ���� �ȴ�.
//	}
//}
//void PrintList(int list[])
//{
//	int size = list[0];
//	cout << "size: " << size << endl;
//	for (int i = 1; i <= size; ++i)//list�� ù��° ���Һ��� ����ؾߵǱ⶧���� 1���� ���
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
//	list[list[0] + 1] = data; //�� �ε����� ��ġ�� ���Ҹ��ִ°�
//	int size = ++list[0]; //���ι�° �ε����� ������� �˷��ذ�.�������ִ� ������ ����
//	int child = size;
//	int parent = size / 2; //�θ��� �ε��� ��ȣ 
//
//	while (child > 1) //70�� ��Ģ�� �°� �ڸ��� �������� ��� ������. child�� 1�̶�°��� root��� �Ҹ�, �� child�� 1�̶�� �ε������� Ŀ���Ѵ�. 
//	{
//		if (list[parent] < list[child]) //70�̶�� ���Ұ� ���ͼ� ���� ��Ģ�� ���߱����� ���ҳ��� ��ġ�� �ٲٴ°�.
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		child = parent;
//		parent = child / 2; //�����ε����� �ڽ��ε����� �θ��ε����� ���� �ȴ�.
//	}
//}
//void PrintList(int list[])
//{
//	int size = list[0];
//	cout << "size: " << size << endl;
//	for (int i = 1; i <= size; ++i)//list�� ù��° ���Һ��� ����ؾߵǱ⶧���� 1���� ���
//	{
//		cout << list[i] << endl;
//	}
//}
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[10] = { 6,90,50,80,40,10,20 };//ù��° ���� �ε����� ������ ������ �����.90���� 1�ε���
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
//	list[list[0]+1] = data; //�� �ε����� ��ġ�� ���Ҹ��ִ°�
//	int size = ++list[0]; //���ι�° �ε����� ������� �˷��ذ�.�������ִ� ������ ����
//	int child = size;
//	int parent = size / 2; //�θ��� �ε��� ��ȣ 
//	
//	while (1) //70�� ��Ģ�� �°� �ڸ��� �������� ��� ������. 
//	{
//		if (list[parent] < list[child]) //70�̶�� ���Ұ� ���ͼ� ���� ��Ģ�� ���߱����� ���ҳ��� ��ġ�� �ٲٴ°�.
//		{
//			Swap(list[parent], list[child]);
//		}
//		else
//		{
//			break;
//		}
//		child = parent;
//		parent = child / 2; //�����ε����� �ڽ��ε����� �θ��ε����� ���� �ȴ�.
//	}
//}
//void PrintList(int list[])
//{
//	int size = list[0];
//	cout << "size: " <<size << endl;
//	for (int i = 1; i <= size; ++i)//list�� ù��° ���Һ��� ����ؾߵǱ⶧���� 1���� ���
//	{
//		cout << list[i] << endl; 
//	}
//}
//int main()
//{
//	//int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
//	int list[10] = {6,90,50,80,40,10,20 };//ù��° ���� �ε����� ������ ������ �����.90���� 1�ε���
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
//using namespace std; //list�� ���� 5���� �־� ����϶�
//class Heap
//{
//	vector<int> list; //heap ���⼭ ���� �޸𸮸� �����ϸ� �ȉ�. �׷��� vector�� �ٲ�
//	int size;
//public:
//	void Push(int data)
//	{
//		list.push_back(data);
//		push_heap(list.begin(), list.end()); //������ ���Ҹ� �ְԵǴ°��̱⶧����
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
//		pop_heap(list.begin(), list.end()); //�ϳ��� �����ؼ� ���峡���� �ű�
//		int data = list.back();//���ϳ����ִ� ��ȯ�����͸� ����
//			list.pop_back(); //�����̱� ������ ��¥�� ���Ÿ� �������
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
//	cout << h.Pop() << endl; //���ۿ����� root �� ����ū����90�� �����.
//	h.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std; //list�� ���� 5���� �־� ����϶�
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
//		return list[size]; //�̰� ���� ���� ū ������
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
//	cout << h.Pop() << endl; //���ۿ����� root �� ����ū����90�� �����.
//	h.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std; //list�� ���� 5���� �־� ����϶�
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
//using namespace std; //list�� ���� 5���� �־� ����϶�
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