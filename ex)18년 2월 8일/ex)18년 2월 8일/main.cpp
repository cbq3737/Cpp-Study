#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std; //최대힙 구조, stl 힙 알고리즘이기에 이런 구조가 나타난다.
void PrintList(int list[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << list[i] << " ";
	}
	cout << endl;
}
int main()
{
	int list[10] = { 40,50,20,90,10,80,60,30,70,100 };
	int size = 0; //배열로 완전이진트리를 만들수있다는것을 보여줌

	size = 10;
	make_heap(list, list + size); //원소를 힙구조로 만들어라. push를 10번해라
	PrintList(list, size);

	sort_heap(list, list + size); //pop을 10번했다.
	PrintList(list, size);
	size = 0;
	PrintList(list,size);
	system("pause");
}


//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std; //최대힙 구조, stl 힙 알고리즘이기에 이런 구조가 나타난다.
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
//	int size = 0;
//
//	//make_heap(list, list + size);
//	++size;
//	push_heap(list, list + size); //list+1은 힙에다가 담는 원소를 1개라고 말한것. 
//	++size;
//	push_heap(list, list + size); //50을 추가하는데 50이 40보다 크므로 최대 힙이라는 논리적순서므로 40,50의 순서를 바꿔 50,40으로 출력이된다.
//	++size;
//	push_heap(list, list + size);
//	++size;
//	push_heap(list, list + size);//90은 제일 크므로 40타고 올라가고 50타고 올라가서 제일 위로 가고 20은 맞는 순서이므로 고정되서 90 50 20 40 으로 ㅂ배치가됨.
//	++size;
//	push_heap(list, list + size);
//	
//	PrintList(list, size);
//	pop_heap(list, list + size); //pop은 원소를 빼라는 의미인데 최대 heap은 root가 빠짐
//	PrintList(list, size); //그래서 출력될때 root엿던 수가맨뒤로 나옴
//	--size;
//	pop_heap(list, list + size); 
//	--size;
//	pop_heap(list, list + size);
//	--size;
//	pop_heap(list, list + size);
//	PrintList(list, size);
//	
//	PrintList(list, 10);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std; //최대힙 구조, 알고리즘이기에 이런 구조가 나타난다.
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
//	int size = 0;
//
//	//make_heap(list, list + size);
//	++size;
//	push_heap(list, list + size); //list+1은 힙에다가 담는 원소를 1개라고 말한것. 
//	++size;
//	push_heap(list, list + size); //50을 추가하는데 50이 40보다 크므로 최대 힙이라는 논리적순서므로 40,50의 순서를 바꿔 50,40으로 출력이된다.
//	++size;
//	push_heap(list, list + size); 
//	++size;
//	push_heap(list, list + size);//90은 제일 크므로 40타고 올라가고 50타고 올라가서 제일 위로 가고 20은 맞는 순서이므로 고정되서 90 50 20 40 으로 ㅂ배치가됨.
//	++size;
//	push_heap(list, list + size);
//	PrintList(list, size);
//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
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
//	int size = 10;
//
//	//make_heap(list, list + size);
//	push_heap(list, list+1); //list는 최초의 시작 노드 , 두번째 위치
//	push_heap(list, list+2);
//	push_heap(list, list+3);
//	push_heap(list, list+4);
//	push_heap(list, list+5);
//	PrintList(list, 5);
//	system("pause");
//}

//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
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
//	int size = 10;
//
//	make_heap(list, list + size);
//	PrintList(list, size);
//	sort_heap(list, list + size);
//	PrintList(list, size);
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//class Btree
//{
//	Node* root;
//	Node* AllocNode(int data)
//	{
//		Node* p = new Node;
//		p->data = data;
//		p->lchild = p->rchild = NULL;
//
//		return p;
//	}
//	void Inorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//	{
//		if (p) //p(현재위치)가 NULL이면 종료해라
//		{
//			Inorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//			cout << p->data << " ";
//			Inorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//		}
//	}
//	void Preorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//	{
//		if (p) //p(현재위치)가 NULL이면 종료해라
//		{
//			cout << p->data << " ";
//			Preorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//			Preorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//		}
//	}
//	void Postorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//	{
//		if (p) //p(현재위치)가 NULL이면 종료해라
//		{
//			Postorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//			Postorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//			cout << p->data << " ";
//
//		}
//	}
//	void Levelorder(Node* root)
//	{
//		if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//		{
//			return;
//		}
//		queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//		q.push(root); //루트 먼저 보관
//		while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//		{
//			Node* cur = q.front();//front는 참조
//			q.pop(); //원소제거
//			cout << cur->data << " ";
//			if (cur->lchild)
//			{
//				q.push(cur->lchild); //cur의 lchild를 담아라
//			}
//			if (cur->rchild)
//			{
//				q.push(cur->rchild);
//			}
//		}
//	}
//	void Destroy(Node* root)
//	{
//		if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//		{
//			return;
//		}
//		queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//		q.push(root); //루트 먼저 보관
//		while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//		{
//			Node* cur = q.front();//front는 참조
//			q.pop(); //원소제거
//			if (cur->lchild)
//			{
//				q.push(cur->lchild); //cur의 lchild를 담아라
//			}
//			if (cur->rchild)
//			{
//				q.push(cur->rchild);
//			}
//			delete cur;
//		}
//	}
//	void AddNode(Node*& root, int data)
//	{
//		if (root == NULL)//종료조건
//		{
//			root = AllocNode(data);
//			return;
//		}
//		{
//			Node* p = root;
//			Node* pp = p;
//			while (p)
//			{
//				pp = p;
//				if (p->data > data)//작으면 왼쪽 선택 
//				{
//					p = p->lchild;
//				}
//				else
//				{
//					p = p->rchild;
//				}
//			}
//			if (pp->data > data)//pp는 부모
//			{
//				pp->lchild = AllocNode(data);
//			}
//			else
//			{
//				pp->rchild = AllocNode(data);
//			}
//		}
//	}
//	void SearchNode(Node* proot, int data) //재귀함수로 만듬
//	{
//		if (proot == NULL) //종료조건1 
//		{
//			cout << "없음" << endl;
//			return;
//		}
//		if (proot->data == data) //종료조건2
//		{
//			cout << "찾음 : " << data << endl;
//			return; //계속 돌기때문에 종료하기위해 끝낸다.
//		}
//		if (proot->data > data)
//		{
//			SearchNode(proot->lchild, data); //왼쪽으로 이동할시  루프의 역할 , 반복적인 재귀적인 기능 실행 , 내 자식을줄테니 40을 찾아줘라는 의미
//		} //찾은후 호출했던 처음놈에게 반드시 반환해줘야한다.
//		else
//		{
//			SearchNode(proot->rchild, data); //오른쪽으로 이동
//		}
//	}
//	Node* RemoveNode(Node* root, int data) //재귀함수
//	{
//		Node* p = root;
//		if (p == NULL) //종료조건
//		{
//			return NULL; //삭제하고자하는 데이터를 못찾았을때
//		}
//		if (p->data > data)
//		{
//			p->lchild = RemoveNode(p->lchild, data);
//		}
//		else if (p->data < data)
//		{
//			p->rchild = RemoveNode(p->rchild, data);
//		}
//		else//1.차수가 0인 경우, 2.차수가 1인데 왼쪽,오른쪽 따로 만들어서 3. 차수가 2인경우 즉 찾았다라는 코드
//		{
//			//1.번 경우 
//			if (p->lchild == NULL && p->rchild == NULL)
//			{
//				delete p;
//				return NULL;
//			}
//			//2번 경우
//			else if (p->lchild != NULL && p->rchild == NULL)
//			{
//				Node* lchild = p->lchild; //p는 60
//				delete p;
//				return lchild; //70에게 반환해도록 해주었기 때문에 
//			}
//			else if (p->lchild == NULL && p->rchild != NULL) //오른쪽이 있는 경우, 현재는 없음
//			{
//				Node* rchild = p->rchild; //p는 60
//				delete p;
//				return rchild; //70에게 반환해도록 해주었기 때문에 
//			}
//			//3번의 경우,삭제되는 노드의 왼쪽 자식들중에 가중 큰 원소, 오른족 자식들 중에 가장 작은원소중 하나를 올려줘야함.
//			else //p는 삭제하고자 하는 노드임 즉 70, 이번에 오른쪽자식중 가장 작은 원소를 올리겠음
//			{
//				Node* np = p->rchild; //np는 p의 오른자식에서 부터 출발해라 라는 뜻.
//				Node* npp = p; //즉 위에 np의 부모
//				while (np->lchild) //가장 작은 놈을 찾아야하므로 왼쪽자식이 NULL일때까지 돌리는것.
//				{
//					npp = np; //한번씩 이동할때마다 바꿔줌.
//					np = np->lchild; //젤 작은놈을 찾음
//				}
//				p->data = np->data; //즉 제일 작은놈을 p와 바꿔준것.
//				if (p == npp) //한번이라도 이동을 하지않았다.
//				{
//					npp->rchild = np->rchild; //이럴땐 자식이 없었으므로 오른쪽에 붙혀준것.
//				}
//				else
//				{
//					npp->lchild = np->rchild;//np의 부모 , 즉 np를 지워주기위해 rchild를 붙힌것.
//				}
//				delete np; //붙혔기때문에 지워줌
//				return p;
//
//			}
//			return NULL;
//		}
//		return p;
//	}
//	//////////////////////////// 위임하는것임
//public:
//	Btree() :root(NULL) {} //생성자 소멸자는 인터페이스니까 public으로 하지만 위에 함수는 다 private임
//	~Btree()
//	{
//		Destroy(root); //마무리작업을 하도록 호출해줌
//	}
//	void Add(int data)
//	{
//		AddNode(root, data);
//	}
//	void Remove(int data)
//	{
//		root = RemoveNode(root, data);
//	}
//	void Inorder()
//	{
//		Inorder(root); cout << endl;
//	}
//	void Preorder()
//	{
//		Preorder(root);
//	}
//};
//int main() //C++스타일로
//{ //클래스안에 있는 함수는 재귀함수이므로 인수를 받았었음.하지만 지금은 필요하지않음 그래서 위임을 사용
//	Btree t;
//	t.Add(50);
//	t.Add(30);
//	t.Add(10);
//	t.Add(40);
//	t.Add(70);
//	t.Add(90);
//
//	t.Remove(30); //자식이 부족한 2차를 제거
//
//	t.Inorder();
//	t.Preorder();
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//class Btree
//{
//	Node* root;
//	Node* AllocNode(int data)
//	{
//		Node* p = new Node;
//		p->data = data;
//		p->lchild = p->rchild = NULL;
//
//		return p;
//	}
//	void Inorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//	{
//		if (p) //p(현재위치)가 NULL이면 종료해라
//		{
//			Inorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//			cout << p->data << " ";
//			Inorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//		}
//	}
//	void Preorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//	{
//		if (p) //p(현재위치)가 NULL이면 종료해라
//		{
//			cout << p->data << " ";
//			Preorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//			Preorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//		}
//	}
//	void Postorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//	{
//		if (p) //p(현재위치)가 NULL이면 종료해라
//		{
//			Postorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//			Postorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//			cout << p->data << " ";
//
//		}
//	}
//	void Levelorder(Node* root)
//	{
//		if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//		{
//			return;
//		}
//		queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//		q.push(root); //루트 먼저 보관
//		while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//		{
//			Node* cur = q.front();//front는 참조
//			q.pop(); //원소제거
//			cout << cur->data << " ";
//			if (cur->lchild)
//			{
//				q.push(cur->lchild); //cur의 lchild를 담아라
//			}
//			if (cur->rchild)
//			{
//				q.push(cur->rchild);
//			}
//		}
//	}
//	void Destroy(Node* root)
//	{
//		if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//		{
//			return;
//		}
//		queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//		q.push(root); //루트 먼저 보관
//		while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//		{
//			Node* cur = q.front();//front는 참조
//			q.pop(); //원소제거
//			if (cur->lchild)
//			{
//				q.push(cur->lchild); //cur의 lchild를 담아라
//			}
//			if (cur->rchild)
//			{
//				q.push(cur->rchild);
//			}
//			delete cur;
//		}
//	}
//	void AddNode(Node*& root, int data)
//	{
//		if (root == NULL)//종료조건
//		{
//			root = AllocNode(data);
//			return;
//		}
//		{
//			Node* p = root;
//			Node* pp = p;
//			while (p)
//			{
//				pp = p;
//				if (p->data > data)//작으면 왼쪽 선택 
//				{
//					p = p->lchild;
//				}
//				else
//				{
//					p = p->rchild;
//				}
//			}
//			if (pp->data > data)//pp는 부모
//			{
//				pp->lchild = AllocNode(data);
//			}
//			else
//			{
//				pp->rchild = AllocNode(data);
//			}
//		}
//	}
//	void SearchNode(Node* proot, int data) //재귀함수로 만듬
//	{
//		if (proot == NULL) //종료조건1 
//		{
//			cout << "없음" << endl;
//			return;
//		}
//		if (proot->data == data) //종료조건2
//		{
//			cout << "찾음 : " << data << endl;
//			return; //계속 돌기때문에 종료하기위해 끝낸다.
//		}
//		if (proot->data > data)
//		{
//			SearchNode(proot->lchild, data); //왼쪽으로 이동할시  루프의 역할 , 반복적인 재귀적인 기능 실행 , 내 자식을줄테니 40을 찾아줘라는 의미
//		} //찾은후 호출했던 처음놈에게 반드시 반환해줘야한다.
//		else
//		{
//			SearchNode(proot->rchild, data); //오른쪽으로 이동
//		}
//	}
//	Node* RemoveNode(Node* root, int data) //재귀함수
//	{
//		Node* p = root;
//		if (p == NULL) //종료조건
//		{
//			return NULL; //삭제하고자하는 데이터를 못찾았을때
//		}
//		if (p->data > data)
//		{
//			p->lchild = RemoveNode(p->lchild, data);
//		}
//		else if (p->data < data)
//		{
//			p->rchild = RemoveNode(p->rchild, data);
//		}
//		else//1.차수가 0인 경우, 2.차수가 1인데 왼쪽,오른쪽 따로 만들어서 3. 차수가 2인경우 즉 찾았다라는 코드
//		{
//			//1.번 경우 
//			if (p->lchild == NULL && p->rchild == NULL)
//			{
//				delete p;
//				return NULL;
//			}
//			//2번 경우
//			else if (p->lchild != NULL && p->rchild == NULL)
//			{
//				Node* lchild = p->lchild; //p는 60
//				delete p;
//				return lchild; //70에게 반환해도록 해주었기 때문에 
//			}
//			else if (p->lchild == NULL && p->rchild != NULL) //오른쪽이 있는 경우, 현재는 없음
//			{
//				Node* rchild = p->rchild; //p는 60
//				delete p;
//				return rchild; //70에게 반환해도록 해주었기 때문에 
//			}
//			//3번의 경우,삭제되는 노드의 왼쪽 자식들중에 가중 큰 원소, 오른족 자식들 중에 가장 작은원소중 하나를 올려줘야함.
//			else //p는 삭제하고자 하는 노드임 즉 70, 이번에 오른쪽자식중 가장 작은 원소를 올리겠음
//			{
//				Node* np = p->rchild; //np는 p의 오른자식에서 부터 출발해라 라는 뜻.
//				Node* npp = p; //즉 위에 np의 부모
//				while (np->lchild) //가장 작은 놈을 찾아야하므로 왼쪽자식이 NULL일때까지 돌리는것.
//				{
//					npp = np; //한번씩 이동할때마다 바꿔줌.
//					np = np->lchild; //젤 작은놈을 찾음
//				}
//				p->data = np->data; //즉 제일 작은놈을 p와 바꿔준것.
//				if (p == npp) //한번이라도 이동을 하지않았다.
//				{
//					npp->rchild = np->rchild; //이럴땐 자식이 없었으므로 오른쪽에 붙혀준것.
//				}
//				else
//				{
//					npp->lchild = np->rchild;//np의 부모 , 즉 np를 지워주기위해 rchild를 붙힌것.
//				}
//				delete np; //붙혔기때문에 지워줌
//				return p;
//
//			}
//			return NULL;
//		}
//		return p;
//	}
////////////////////////////// 위임하는것임
//	public:
//		Btree() :root(NULL) {} //생성자 소멸자는 인터페이스니까 public으로 하지만 위에 함수는 다 private임
//		~Btree()
//		{
//			Destroy(root); //마무리작업을 하도록 호출해줌
//		}
//	void Add(int data)
//	{
//	   AddNode(root,data);
//	}
//	void Remove(int data)
//	{
//		root= RemoveNode(root, data);
//	}
//	void Inorder()
//	{
//		Inorder(root);
//	}
//};
//int main() //C++스타일로
//{ //클래스안에 있는 함수는 재귀함수이므로 인수를 받았었음.하지만 지금은 필요하지않음 그래서 위임을 사용
//	Btree t;
//	t.Add(50);
//	t.Add(30);
//	t.Add(10);
//	t.Add(40);
//	t.Add(70);
//	t.Add(90);
//
//	t.Remove(30); //자식이 부족한 2차를 제거
//
//	t.Inorder();
//	//c++이기에 어차피 소멸자가 생기기에 destory 지움
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Inorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		cout << p->data << " ";
//		Inorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Preorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		cout << p->data << " ";
//		Preorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Preorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Postorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Postorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Postorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//		cout << p->data << " ";
//
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		cout << cur->data << " ";
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//	}
//}
//void Destroy(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//		delete cur;
//	}
//}
//void AddNode(Node*& root, int data)
//{
//	if (root == NULL)//종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;
//		while (p)
//		{
//			pp = p;
//			if (p->data > data)//작으면 왼쪽 선택 
//			{
//				p = p->lchild;
//			}
//			else
//			{
//				p = p->rchild;
//			}
//		}
//		if (pp->data > data)//pp는 부모
//		{
//			pp->lchild = AllocNode(data);
//		}
//		else
//		{
//			pp->rchild = AllocNode(data);
//		}
//	}
//}
//void SearchNode(Node* proot, int data) //재귀함수로 만듬
//{
//	if (proot == NULL) //종료조건1 
//	{
//		cout << "없음" << endl;
//		return;
//	}
//	if (proot->data == data) //종료조건2
//	{
//		cout << "찾음 : " << data << endl;
//		return; //계속 돌기때문에 종료하기위해 끝낸다.
//	}
//	if (proot->data > data)
//	{
//		SearchNode(proot->lchild, data); //왼쪽으로 이동할시  루프의 역할 , 반복적인 재귀적인 기능 실행 , 내 자식을줄테니 40을 찾아줘라는 의미
//	} //찾은후 호출했던 처음놈에게 반드시 반환해줘야한다.
//	else
//	{
//		SearchNode(proot->rchild, data); //오른쪽으로 이동
//	}
//}
//Node* RemoveNode(Node* root, int data) //재귀함수
//{
//	Node* p = root;
//	if (p == NULL) //종료조건
//	{
//		return NULL; //삭제하고자하는 데이터를 못찾았을때
//	}
//	if (p->data > data)
//	{
//		p->lchild = RemoveNode(p->lchild, data);
//	}
//	else if (p->data < data)
//	{
//		p->rchild = RemoveNode(p->rchild, data);
//	}
//	else//1.차수가 0인 경우, 2.차수가 1인데 왼쪽,오른쪽 따로 만들어서 3. 차수가 2인경우 즉 찾았다라는 코드
//	{
//		//1.번 경우 
//		if (p->lchild == NULL && p->rchild == NULL)
//		{
//			delete p;
//			return NULL;
//		}
//		//2번 경우
//		else if (p->lchild != NULL && p->rchild == NULL)
//		{
//			Node* lchild = p->lchild; //p는 60
//			delete p;
//			return lchild; //70에게 반환해도록 해주었기 때문에 
//		}
//		else if (p->lchild == NULL && p->rchild != NULL) //오른쪽이 있는 경우, 현재는 없음
//		{
//			Node* rchild = p->rchild; //p는 60
//			delete p;
//			return rchild; //70에게 반환해도록 해주었기 때문에 
//		}
//		//3번의 경우,삭제되는 노드의 왼쪽 자식들중에 가중 큰 원소, 오른족 자식들 중에 가장 작은원소중 하나를 올려줘야함.
//		else //p는 삭제하고자 하는 노드임 즉 70, 이번에 오른쪽자식중 가장 작은 원소를 올리겠음
//		{
//			Node* np = p->rchild; //np는 p의 오른자식에서 부터 출발해라 라는 뜻.
//			Node* npp = p; //즉 위에 np의 부모
//			while (np->lchild) //가장 작은 놈을 찾아야하므로 왼쪽자식이 NULL일때까지 돌리는것.
//			{
//				npp = np; //한번씩 이동할때마다 바꿔줌.
//				np = np->lchild; //젤 작은놈을 찾음
//			}
//			p->data = np->data; //즉 제일 작은놈을 p와 바꿔준것.
//			if (p == npp) //한번이라도 이동을 하지않았다.
//			{
//				npp->rchild = np->rchild; //이럴땐 자식이 없었으므로 오른쪽에 붙혀준것.
//			}
//			else
//			{
//				npp->lchild = np->rchild;//np의 부모 , 즉 np를 지워주기위해 rchild를 붙힌것.
//			}
//			delete np; //붙혔기때문에 지워줌
//			return p;
//
//		}
//		return NULL;
//	}
//	return p;
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50);
//	AddNode(root, 30);
//	AddNode(root, 10);
//	AddNode(root, 40);
//	AddNode(root, 70);
//	AddNode(root, 90);
//	AddNode(root, 79);
//	AddNode(root, 78);
//	AddNode(root, 76);
//
//	root = RemoveNode(root, 30); //자식이 부족한 2차를 제거
//
//	Inorder(root);
//	Destroy(root);//다 사용했으면 new가 나왓엇기때문에 지워줘야함. 탐색하는 이유가 출력보단 지우기위함.
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Inorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		cout << p->data << " ";
//		Inorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Preorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		cout << p->data << " ";
//		Preorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Preorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Postorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Postorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Postorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//		cout << p->data << " ";
//
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		cout << cur->data << " ";
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//	}
//}
//void Destroy(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//		delete cur;
//	}
//}
//void AddNode(Node*& root, int data)
//{
//	if (root == NULL)//종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;
//		while (p)
//		{
//			pp = p;
//			if (p->data > data)//작으면 왼쪽 선택 
//			{
//				p = p->lchild;
//			}
//			else
//			{
//				p = p->rchild;
//			}
//		}
//		if (pp->data > data)//pp는 부모
//		{
//			pp->lchild = AllocNode(data);
//		}
//		else
//		{
//			pp->rchild = AllocNode(data);
//		}
//	}
//}
//void SearchNode(Node* proot, int data) //재귀함수로 만듬
//{
//	if (proot == NULL) //종료조건1 
//	{
//		cout << "없음" << endl;
//		return;
//	}
//	if (proot->data == data) //종료조건2
//	{
//		cout << "찾음 : " << data << endl;
//		return; //계속 돌기때문에 종료하기위해 끝낸다.
//	}
//	if (proot->data > data)
//	{
//		SearchNode(proot->lchild, data); //왼쪽으로 이동할시  루프의 역할 , 반복적인 재귀적인 기능 실행 , 내 자식을줄테니 40을 찾아줘라는 의미
//	} //찾은후 호출했던 처음놈에게 반드시 반환해줘야한다.
//	else
//	{
//		SearchNode(proot->rchild, data); //오른쪽으로 이동
//	}
//}
//Node* RemoveNode(Node* root, int data) //재귀함수
//{
//	Node* p = root;
//	if (p == NULL) //종료조건
//	{
//		return NULL; //삭제하고자하는 데이터를 못찾았을때
//	}
//	if (p->data > data)
//	{
//		p->lchild = RemoveNode(p->lchild, data);
//	}
//	else if (p->data < data)
//	{
//		p->rchild = RemoveNode(p->rchild, data);
//	}
//	else//1.차수가 0인 경우, 2.차수가 1인데 왼쪽,오른쪽 따로 만들어서 3. 차수가 2인경우 즉 찾았다라는 코드
//	{
//		//1.번 경우 
//		if (p->lchild == NULL && p->rchild == NULL)
//		{
//			delete p;
//			return NULL;
//		}
//		//2번 경우
//		else if (p->lchild != NULL && p->rchild == NULL)
//		{
//			Node* lchild = p->lchild; //p는 60
//			delete p;
//			return lchild; //70에게 반환해도록 해주었기 때문에 
//		}
//		else if (p->lchild == NULL && p->rchild != NULL) //오른쪽이 있는 경우, 현재는 없음
//		{
//			Node* rchild = p->rchild; //p는 60
//			delete p;
//			return rchild; //70에게 반환해도록 해주었기 때문에 
//		}
//		//3번의 경우,삭제되는 노드의 왼쪽 자식들중에 가중 큰 원소, 오른족 자식들 중에 가장 작은원소중 하나를 올려줘야함.
//		else //p는 삭제하고자 하는 노드임 즉 70, 이번에 오른쪽자식중 가장 작은 원소를 올리겠음
//		{
//			Node* np = p->rchild; //np는 p의 오른자식에서 부터 출발해라 라는 뜻.
//			Node* npp = p; //즉 위에 np의 부모
//			while (np->lchild) //가장 작은 놈을 찾아야하므로 왼쪽자식이 NULL일때까지 돌리는것.
//			{
//				npp = np; //한번씩 이동할때마다 바꿔줌.
//				np = np->lchild; //젤 작은놈을 찾음
//			}
//				p->data = np->data; //즉 제일 작은놈을 p와 바꿔준것.
//				if (p == npp) //한번이라도 이동을 하지않았다.
//				{
//					npp->rchild = np->rchild; //이럴땐 자식이 없었으므로 오른쪽에 붙혀준것.
//				}
//				else
//				{
//					npp->lchild = np->rchild;//np의 부모 , 즉 np를 지워주기위해 rchild를 붙힌것.
//				}
//				delete np; //붙혔기때문에 지워줌
//					return p;
//			
//		}
//		return NULL;
//	}
//	return p;
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50);
//	AddNode(root, 30);
//	AddNode(root, 10);
//	AddNode(root, 40);
//	AddNode(root, 70);
//	AddNode(root, 90);
//	AddNode(root, 60);
//	AddNode(root, 79);
//	AddNode(root, 78);
//	AddNode(root, 76);
//
//	root = RemoveNode(root, 70); //2차를 제거
//
//	Inorder(root);
//	Destroy(root);//다 사용했으면 new가 나왓엇기때문에 지워줘야함. 탐색하는 이유가 출력보단 지우기위함.
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Inorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		cout << p->data << " ";
//		Inorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Preorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		cout << p->data << " ";
//		Preorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Preorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Postorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Postorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Postorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//		cout << p->data << " ";
//
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		cout << cur->data << " ";
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//	}
//}
//void Destroy(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//		delete cur;
//	}
//}
//void AddNode(Node*& root, int data)
//{
//	if (root == NULL)//종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;
//		while (p)
//		{
//			pp = p;
//			if (p->data > data)//작으면 왼쪽 선택 
//			{
//				p = p->lchild;
//			}
//			else
//			{
//				p = p->rchild;
//			}
//		}
//		if (pp->data > data)//pp는 부모
//		{
//			pp->lchild = AllocNode(data);
//		}
//		else
//		{
//			pp->rchild = AllocNode(data);
//		}
//	}
//}
//void SearchNode(Node* proot, int data) //재귀함수로 만듬
//{
//	if (proot == NULL) //종료조건1 
//	{
//		cout << "없음" << endl;
//		return;
//	}
//	if (proot->data == data) //종료조건2
//	{
//		cout << "찾음 : " << data << endl;
//		return; //계속 돌기때문에 종료하기위해 끝낸다.
//	}
//	if (proot->data > data)
//	{
//		SearchNode(proot->lchild, data); //왼쪽으로 이동할시  루프의 역할 , 반복적인 재귀적인 기능 실행 , 내 자식을줄테니 40을 찾아줘라는 의미
//	} //찾은후 호출했던 처음놈에게 반드시 반환해줘야한다.
//	else
//	{
//		SearchNode(proot->rchild, data); //오른쪽으로 이동
//	}
//}
//Node* RemoveNode(Node* root, int data) //재귀함수
//{
//	Node* p = root;
//	if (p == NULL) //종료조건
//	{
//		return NULL; //삭제하고자하는 데이터를 못찾았을때
//	}
//	if (p->data > data)
//	{
//		p->lchild = RemoveNode(p->lchild, data);
//	}
//	else if (p->data < data)
//	{
//		p->rchild = RemoveNode(p->rchild, data);
//	}
//	else//1.차수가 0인 경우, 2.차수가 1인데 왼쪽,오른쪽 따로 만들어서 3. 차수가 2인경우 
//	{
//		//1.번 경우 
//		if (p->lchild == NULL && p->rchild == NULL)
//		{
//			delete p;
//			return NULL;
//		}
//		//2번 경우
//		if (p->lchild != NULL && p->rchild == NULL)
//		{
//			Node* lchild = p->lchild; //p는 60
//			delete p;
//			return lchild; //70에게 반환해도록 해주었기 때문에 
//		}
//		if (p->lchild == NULL && p->rchild != NULL) //오른쪽이 있는 경우, 현재는 없음
//		{
//			Node* rchild = p->rchild; //p는 60
//			delete p;
//			return rchild; //70에게 반환해도록 해주었기 때문에 
//		}
//
//
//		return NULL;
//	}
//	return p;
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50);
//	AddNode(root, 30);
//	AddNode(root, 10);
//	AddNode(root, 40);
//	AddNode(root, 70);
//	AddNode(root, 90);
//	AddNode(root, 60);
//	AddNode(root, 55);
//	AddNode(root, 52);
//	AddNode(root, 57);
//
//	root = RemoveNode(root, 60); //왼쪽은 있는데 오른쪽이 없는 60제거
//
//	Inorder(root);
//	Destroy(root);//다 사용했으면 new가 나왓엇기때문에 지워줘야함. 탐색하는 이유가 출력보단 지우기위함.
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Inorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		cout << p->data << " ";
//		Inorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Preorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		cout << p->data << " ";
//		Preorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Preorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Postorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Postorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Postorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//		cout << p->data << " ";
//
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		cout << cur->data << " ";
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//	}
//}
//void Destroy(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//		delete cur;
//	}
//}
//void AddNode(Node*& root, int data)
//{
//	if (root == NULL)//종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;
//		while (p)
//		{
//			pp = p;
//			if (p->data > data)//작으면 왼쪽 선택 
//			{
//				p = p->lchild;
//			}
//			else
//			{
//				p = p->rchild;
//			}
//		}
//		if (pp->data > data)//pp는 부모
//		{
//			pp->lchild = AllocNode(data);
//		}
//		else
//		{
//			pp->rchild = AllocNode(data);
//		}
//	}
//}
//void SearchNode(Node* proot, int data) //재귀함수로 만듬
//{
//	if (proot == NULL) //종료조건1 
//	{
//		cout << "없음" << endl;
//		return;
//	}
//	if (proot->data == data) //종료조건2
//	{
//		cout << "찾음 : " << data << endl;
//		return; //계속 돌기때문에 종료하기위해 끝낸다.
//	}
//	if (proot->data > data)
//	{
//		SearchNode(proot->lchild, data); //왼쪽으로 이동할시  루프의 역할 , 반복적인 재귀적인 기능 실행 , 내 자식을줄테니 40을 찾아줘라는 의미
//	} //찾은후 호출했던 처음놈에게 반드시 반환해줘야한다.
//	else
//	{
//		SearchNode(proot->rchild, data); //오른쪽으로 이동
//	}
//}
//Node* RemoveNode(Node* root, int data) //재귀함수
//{
//	Node* p = root;
//	if (p == NULL) //종료조건
//	{
//		return NULL; //삭제하고자하는 데이터를 못찾았을때
//	}
//	if (p->data > data)
//	{
//		p->lchild= RemoveNode(p->lchild,data);
//	}
//	else if (p->data < data)
//	{
//		p->rchild= RemoveNode(p->rchild,data);
//	}
//	else//1.차수가 0인 경우, 2.차수가 1인데 왼쪽,오른쪽 따로 만들어서 3. 차수가 2인경우 
//	{
//		//1.번 경우 즉 단말노드 삭제
//		if (p->lchild == NULL && p->rchild == NULL)
//		{
//			delete p;
//			return NULL;
//		}
//		return NULL;
//	}
//	return p;
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50);
//	AddNode(root, 30);
//	AddNode(root, 10);
//	AddNode(root, 40);
//	AddNode(root, 70);
//	AddNode(root, 90);
//	AddNode(root, 60);
//
//	root = RemoveNode(root, 40);
//	
//	Inorder(root);
//	Destroy(root);//다 사용했으면 new가 나왓엇기때문에 지워줘야함. 탐색하는 이유가 출력보단 지우기위함.
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Inorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		cout << p->data << " ";
//		Inorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Preorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		cout << p->data << " ";
//		Preorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Preorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Postorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Postorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Postorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//		cout << p->data << " ";
//
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		cout << cur->data << " ";
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//	}
//}
//void Destroy(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//		delete cur;
//	}
//}
//void AddNode(Node*& root, int data)
//{
//	if (root == NULL)//종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;
//		while (p)
//		{
//			pp = p;
//			if (p->data > data)//작으면 왼쪽 선택 
//			{
//				p = p->lchild;
//			}
//			else
//			{
//				p = p->rchild;
//			}
//		}
//		if (pp->data > data)//pp는 부모
//		{
//			pp->lchild = AllocNode(data);
//		}
//		else
//		{
//			pp->rchild = AllocNode(data);
//		}
//	}
//}
//void SearchNode(Node* proot, int data) //재귀함수로 만듬
//{
//	if (proot == NULL) //종료조건1 
//	{
//		cout << "없음" << endl;
//		return;
//	}
//	if (proot->data == data) //종료조건2
//	{
//		cout << "찾음 : " << data << endl;
//		return; //계속 돌기때문에 종료하기위해 끝낸다.
//	}
//	if (proot->data > data)
//	{
//		SearchNode(proot->lchild, data); //왼쪽으로 이동할시  루프의 역할 , 반복적인 재귀적인 기능 실행 , 내 자식을줄테니 40을 찾아줘라는 의미
//	} //찾은후 호출했던 처음놈에게 반드시 반환해줘야한다.
//	else
//	{
//		SearchNode(proot->rchild, data); //오른쪽으로 이동
//	}
//}
//void RemoveNode(Node* root, int data) //단말 노드 지우는데 너무 복잡함.
//{
//	Node* p = root;
//	if (p == NULL)
//	{
//		return;
//	}
//	Node* pp = p;
//	while (p)
//	{
//		if (p->data == data)
//		{
//			delete p;//삭제 코드
//			if (pp->data > data)
//			{
//				pp->lchild = NULL; //삭제하고난후 NULL로 만들어줘야한다.
//			}
//			else
//			{
//				pp->rchild = NULL;
//			}
//			return;
//		}
//		pp = p;//pp는 p로 이동
//		if (p->data > data)
//		{
//			p = p->lchild;
//		}
//		else
//		{
//			p = p->rchild;
//		}
//	}
//
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50);
//	AddNode(root, 30);
//	AddNode(root, 10);
//	AddNode(root, 40);
//	AddNode(root, 70);
//	AddNode(root, 90);
//	AddNode(root, 60);
//
//	RemoveNode(root, 40);
//	Inorder(root);
//	Destroy(root);//다 사용했으면 new가 나왓엇기때문에 지워줘야함. 탐색하는 이유가 출력보단 지우기위함.
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Inorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		cout << p->data << " ";
//		Inorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Preorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		cout << p->data << " ";
//		Preorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Preorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Postorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Postorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Postorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//		cout << p->data << " ";
//
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		cout << cur->data << " ";
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//	}
//}
//void Destroy(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//		delete cur;
//	}
//}
//void AddNode(Node*& root, int data)
//{
//	if (root == NULL)//종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;
//		while (p)
//		{
//			pp = p;
//			if (p->data > data)//작으면 왼쪽 선택 
//			{
//				p = p->lchild;
//			}
//			else
//			{
//				p = p->rchild;
//			}
//		}
//		if (pp->data > data)//pp는 부모
//		{
//			pp->lchild = AllocNode(data);
//		}
//		else
//		{
//			pp->rchild = AllocNode(data);
//		}
//	}
//}
//void SearchNode(Node* proot, int data) //재귀함수로 만듬
//{
//	if (proot == NULL) //종료조건1 
//	{
//		cout << "없음" << endl;
//		return;
//	}
//	if (proot->data == data) //종료조건2
//	{
//		cout << "찾음 : " <<data<< endl;
//		return; //계속 돌기때문에 종료하기위해 끝낸다.
//	}
//	if (proot->data > data)
//	{
//		SearchNode(proot->lchild, data); //왼쪽으로 이동할시  루프의 역할 , 반복적인 재귀적인 기능 실행 , 내 자식을줄테니 40을 찾아줘라는 의미
//	} //찾은후 호출했던 처음놈에게 반드시 반환해줘야한다.
//	else
//	{
//		SearchNode(proot->rchild, data); //오른쪽으로 이동
//	} 
//}
//void RemoveNode(Node* root, int data)
//{
//	Node* p = root;
//	if (p == NULL)
//	{
//		return;
//	}
//	while (p)
//	{
//		if (p->data == data)
//		{
//			cout << "삭제" << p->data << endl;//삭제 코드
//		}
//		if (p->data > data)
//		{
//			p = p->lchild;
//		}
//		else
//		{
//			p = p->rchild;
//		}
//	}
//
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50);
//	AddNode(root, 30);
//	AddNode(root, 10);
//	AddNode(root, 40);
//	AddNode(root, 70);
//	AddNode(root, 90);
//	AddNode(root, 60);
//
//	RemoveNode(root, 40); 
//	
//	Destroy(root);//다 사용했으면 new가 나왓엇기때문에 지워줘야함. 탐색하는 이유가 출력보단 지우기위함.
//	system("pause");
//}



//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//#include <cstring>
//using namespace std;
//void PrintString(const char* s,char* buf) //s는 NULL문자이면 끝남
//{
//	if (*s) 
//	{
//		int size = strlen(s);
//		cout << "+" << *s << ":" << size - 1 << endl;
//		buf[size - 1] = *s;
//		PrintString(s + 1,buf);
//		cout << "-" << *s << ":" << size - 1 << endl;
//	}
//}
//int main() //리버스
//{
//	char buf[100] = {0};
//	PrintString("ABCDEF",buf); //리버스가 됨
//	cout << buf << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//#include <cstring>
//using namespace std;
//void PrintString(const char* s) //s는 NULL문자이면 끝남
//{
//	if (*s) //NULL문자가 아니면 실행해라
//	{
//		int size = strlen(s);
//		cout << "+" << *s << ":" << size - 1 << endl;
//		PrintString(s + 1);
//		cout << "-" << *s << ":" << size - 1 << endl;
//	}
//}
//int main() //문자를 출력하고 싶다.
//{
//	PrintString("ABCDEF");
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//#include <cstring>
//using namespace std;
//void PrintString(const char* s) //s는 NULL문자이면 끝남
//{
//	if (*s) //NULL문자가 아니면 실행해라
//	{
//		int size = strlen(s);
//		cout << "+" << s << ":" << size - 1 << endl; 
//		PrintString(s + 1); 
//		cout << "-" << s << ":" << size - 1 << endl;
//	}
//}
//int main() //last값 안주고 문자열로만
//{
//	PrintString("ABCDEF");
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//#include <cstring>
//using namespace std;
//void PrintString(const char* s, int last) //s는 NULL문자이면 끝남
//{
//	if (last >= 0) //0보다 이상이면 실행해라. 도 종료조건도 될수잇음
//	{
//		int size = strlen(s);
//		cout << "+" << s << ":" << size-1<< endl; 
//		PrintString(s + 1, (size-1) - 1); 
//		cout << "-" << s << ":" << size-1<< endl;
//	}
//}
//int main()
//{
//	PrintString("ABCDEF", 5);
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//using namespace std;
//void PrintString(const char* s, int last) //s는 NULL문자이면 끝남
//{
//	if (last<0) //종료조건을 문자에서 정수로 바꿔준것 뿐
//	{
//		return; //끝내라
//	}
//	cout << "+" << s << ":" << last << endl; //s는 A의 시작주소
//	PrintString(s + 1, last - 1); //+1되니까 B의 시작주소 // 위에 문장 끝낸뒤 다시 돌아와서 아래것을 출력한다.
//	cout << "-" << s << ":" << last << endl;
//}
//int main()
//{
//	PrintString("ABCDEF", 5);
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//using namespace std;
//void PrintString(const char* s, int last) //s는 NULL문자이면 끝남
//{
//	if (*s == '\0') //*S가 NULL문자면 
//	{
//		return; //끝내라
//	}
//	cout << "+" << s << ":" << last << endl; //s는 A의 시작주소
//	PrintString(s + 1, last - 1); //+1되니까 B의 시작주소 // 위에 문장 끝낸뒤 다시 돌아와서 아래것을 출력한다.
//	cout << "-" << s << ":" << last << endl;
//}
//int main()
//{
//	PrintString("ABCDEF", 5);
//	system("pause");
//}

//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//using namespace std;
//void PrintString(const char* s, int last) //s는 NULL문자이면 끝남
//{
//	if (*s == '\0') //*S가 NULL문자냐
//	{
//		return; //끝내라
//	}
//	cout <<"+"<< s << ":" << last << endl;
//	PrintString(s + 1, last - 1);
//	cout <<"-"<< s << ":" << last << endl;
//}
//int main()
//{
//	PrintString("ABCDEF",5);
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Inorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		cout << p->data << " ";
//		Inorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Preorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		cout << p->data << " ";
//		Preorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Preorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Postorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Postorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Postorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//		cout << p->data << " ";
//
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		cout << cur->data << " ";
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//	}
//}
//void Destroy(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//		delete cur;
//	}
//}
//void AddNode(Node*& root, int data)
//{
//	if (root == NULL)//종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;
//		while (p)
//		{
//			pp = p;
//			if (p->data > data)//작으면 왼쪽 선택 
//			{
//				p = p->lchild;
//			}
//			else
//			{
//				p = p->rchild;
//			}
//		}
//		if (pp->data > data)//pp는 부모
//		{
//			pp->lchild = AllocNode(data);
//		}
//		else
//		{
//			pp->rchild = AllocNode(data);
//		}
//	}
//}
//void SearchNode(Node* proot, int data) //재귀함수로 만듬
//{
//	if (proot == NULL) //종료조건1 
//	{
//		cout << "없음" << endl;
//		return;
//	}
//	if (proot->data == data) //종료조건2
//	{
//		cout << "찾음 : " <<data<< endl;
//		return; //계속 돌기때문에 종료하기위해 끝낸다.
//	}
//	if (proot->data > data)
//	{
//		SearchNode(proot->lchild, data); //왼쪽으로 이동할시  루프의 역할 , 반복적인 재귀적인 기능 실행 , 내 자식을줄테니 40을 찾아줘라는 의미
//	} //찾은후 호출했던 처음놈에게 반드시 반환해줘야한다.
//	else
//	{
//		SearchNode(proot->rchild, data); //오른쪽으로 이동
//	} 
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50);
//	AddNode(root, 30);
//	AddNode(root, 10);
//	AddNode(root, 40);
//	AddNode(root, 70);
//	AddNode(root, 90);
//	AddNode(root, 60);
//
//	SearchNode(root, 40); //return값을 안갖고잇음.
//	
//	Destroy(root);//다 사용했으면 new가 나왓엇기때문에 지워줘야함. 탐색하는 이유가 출력보단 지우기위함.
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Inorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		cout << p->data << " ";
//		Inorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Preorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		cout << p->data << " ";
//		Preorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Preorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Postorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Postorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Postorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//		cout << p->data << " ";
//
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		cout << cur->data << " ";
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//	}
//}
//void Destroy(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//		delete cur;
//	}
//}
//void AddNode(Node*& root, int data)
//{
//	if (root == NULL)//종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;
//		while (p)
//		{
//			pp = p;
//			if (p->data > data)//작으면 왼쪽 선택 
//			{
//				p = p->lchild;
//			}
//			else
//			{
//				p = p->rchild;
//			}
//		}
//		if (pp->data > data)//pp는 부모
//		{
//			pp->lchild = AllocNode(data);
//		}
//		else
//		{
//			pp->rchild = AllocNode(data);
//		}
//	}
//}
//Node* SearchNode(Node* proot, int data) //재귀함수로 만듬
//{
//	if (proot == NULL) //종료조건1 
//	{
//		return NULL;
//	}
//	if (proot->data == data) //종료조건2
//	{
//		return proot;
//	}
//	if (proot->data > data)
//	{
//		proot= SearchNode(proot->lchild, data); //왼쪽으로 이동할시  루프의 역할 , 반복적인 재귀적인 기능 실행 , 내 자식을줄테니 40을 찾아줘라는 의미
//	} //찾은후 호출했던 처음놈에게 반드시 반환해줘야한다.
//	else
//	{
//		proot =SearchNode(proot->rchild, data); //오른쪽으로 이동
//	}
//	cout << proot->data << " ";
//	return proot;  //출력하면 위로 올라가면서 거쳐온 경로가 보인다. 
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50);
//	AddNode(root, 30);
//	AddNode(root, 10);
//	AddNode(root, 40);
//	AddNode(root, 70);
//	AddNode(root, 90);
//	AddNode(root, 60);
//
//	Node* p = SearchNode(root, 40); //검색
//	if (NULL != p)
//	{
//		cout << p->data << endl;
//	}
//
//	Destroy(root);//다 사용했으면 new가 나왓엇기때문에 지워줘야함. 탐색하는 이유가 출력보단 지우기위함.
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Inorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		cout << p->data << " ";
//		Inorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Preorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		cout << p->data << " ";
//		Preorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Preorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Postorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Postorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Postorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//		cout << p->data << " ";
//
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		cout << cur->data << " ";
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//	}
//}
//void Destroy(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//		delete cur;
//	}
//}
//void AddNode(Node*& root, int data)
//{
//	if (root == NULL)//종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;
//		while (p)
//		{
//			pp = p;
//			if (p->data > data)//작으면 왼쪽 선택 
//			{
//				p = p->lchild;
//			}
//			else
//			{
//				p = p->rchild;
//			}
//		}
//		if (pp->data > data)//pp는 부모
//		{
//			pp->lchild = AllocNode(data);
//		}
//		else
//		{
//			pp->rchild = AllocNode(data);
//		}
//	}
//}
//Node* SearchNode(Node* proot, int data) //재귀함수로 만듬
//{
//	if (proot == NULL) //종료조건1 
//	{
//		return NULL;
//	}
//	if (proot->data == data) //종료조건2
//	{
//		return proot;
//	}
//	if (proot->data > data)
//	{
//		return SearchNode(proot->lchild, data); //왼쪽으로 이동할시  루프의 역할 , 반복적인 재귀적인 기능 실행 , 내 자식을줄테니 40을 찾아줘라는 의미
//	} //찾은후 호출했던 처음놈에게 반드시 반환해줘야한다.
//	else
//	{
//		return SearchNode(proot->rchild, data); //오른쪽으로 이동
//	}
//	return NULL;
//
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50);
//	AddNode(root, 30);
//	AddNode(root, 10);
//	AddNode(root, 40);
//	AddNode(root, 70);
//	AddNode(root, 90);
//	AddNode(root, 60);
//
//	Node* p = SearchNode(root, 40); //검색
//	if (NULL != p)
//	{
//		cout << p->data << endl;
//	}
//
//	Destroy(root);//다 사용했으면 new가 나왓엇기때문에 지워줘야함. 탐색하는 이유가 출력보단 지우기위함.
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Inorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		cout << p->data << " ";
//		Inorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Preorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		cout << p->data << " ";
//		Preorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Preorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//	}
//}
//void Postorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Postorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Postorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//		cout << p->data << " ";
//
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		cout << cur->data << " ";
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//	}
//}
//void Destroy(Node* root)
//{
//	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
//	{
//		return;
//	}
//	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
//	q.push(root); //루트 먼저 보관
//	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//		delete cur;
//	}
//}
//void AddNode(Node*& root, int data)
//{
//	if (root == NULL)//종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;
//		while (p)
//		{
//			pp = p;
//			if (p->data > data)//작으면 왼쪽 선택 
//			{
//				p = p->lchild;
//			}
//			else
//			{
//				p = p->rchild;
//			}
//		}
//		if (pp->data > data)//pp는 부모
//		{
//			pp->lchild = AllocNode(data);
//		}
//		else
//		{
//			pp->rchild = AllocNode(data);
//		}
//	}
//}
//Node* SearchNode(Node* proot, int data)
//{
//	if (proot == NULL)
//	{
//		return NULL;
//	}
//	while (proot) //proot가 널이 아닌경우 , 이동코드, 
//	{
//		if (proot->data == data) //pproot->data는 선택하는 모든 원소에 대해서 라는 뜻.
//		{
//			return proot;
//		}
//		if (proot->data > data)
//		{
//			proot = proot->lchild;
//		}
//		else
//		{
//			proot = proot->rchild;
//		}
//	}
//	return NULL;
//	
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50);
//	AddNode(root, 30);
//	AddNode(root, 10);
//	AddNode(root, 40);
//	AddNode(root, 70);
//	AddNode(root, 90);
//	AddNode(root, 60);
//
//	Node* p = SearchNode(root, 40); //검색
//	if (NULL != p)
//	{
//		cout << p->data << endl;
//	}
//
//	Destroy(root);//다 사용했으면 new가 나왓엇기때문에 지워줘야함. 탐색하는 이유가 출력보단 지우기위함.
//	system("pause");
//}