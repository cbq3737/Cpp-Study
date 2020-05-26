#include <iostream> 
#include <cstdlib> 
#include <Queue>
using namespace std;
struct Node
{
	int data;
	Node* lchild;
	Node* rchild;
};
Node* AllocNode(int data)
{
	Node* p = new Node;
	p->data = data;
	p->lchild = p->rchild = NULL;

	return p;
}
void Inorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
{
	if (p) //p(현재위치)가 NULL이면 종료해라
	{
		Inorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
		cout << p->data << " ";
		Inorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
	}
}
void Preorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
{
	if (p) //p(현재위치)가 NULL이면 종료해라
	{
		cout << p->data << " ";
		Preorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
		Preorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
	}
}
void Postorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
{
	if (p) //p(현재위치)가 NULL이면 종료해라
	{
		Postorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
		Postorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
		cout << p->data << " ";

	}
}
void Levelorder(Node* root)
{
	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
	{
		return;
	}
	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
	q.push(root); //루트 먼저 보관
	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
	{
		Node* cur = q.front();//front는 참조
		q.pop(); //원소제거
		cout << cur->data << " ";
		if (cur->lchild)
		{
			q.push(cur->lchild); //cur의 lchild를 담아라
		}
		if (cur->rchild)
		{
			q.push(cur->rchild);
		}
	}
}
void Destroy(Node* root)
{
	if (root == NULL) //root가 널이면 시작조자 할 필요가 없다.
	{
		return;
	}
	queue<Node*> q; //int는 값일뿐이기에 자식정보를 모름.그래서 root의 정보를 알아야하기때문에 Node*이여야 한다.
	q.push(root); //루트 먼저 보관
	while (!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
	{
		Node* cur = q.front();//front는 참조
		q.pop(); //원소제거
		if (cur->lchild)
		{
			q.push(cur->lchild); //cur의 lchild를 담아라
		}
		if (cur->rchild)
		{
			q.push(cur->rchild);
		}
		delete cur;
	}
}
void AddNode(Node*& root, int data)
{
	if (root == NULL)//종료조건
	{
		root = AllocNode(data);
		return;
	}
	{
		Node* p = root;
		Node* pp = p;
		while (p)
		{
			pp = p;
			if (p->data > data)//작으면 왼쪽 선택 
			{
				p = p->lchild;
			}
			else
			{
				p = p->rchild;
			}
		}
		if (pp->data > data)//pp는 부모
		{
			pp->lchild = AllocNode(data);
		}
		else
		{
			pp->rchild = AllocNode(data);
		}
	}
}
int main()
{
	Node* root = NULL;
	for (int i = 0; i < 100; ++i)
	{
		AddNode(root, rand() % 100);
	}

	Inorder(root); cout << endl;
	Preorder(root); cout << endl;
	Postorder(root); cout << endl;
	Levelorder(root); cout << endl;


	Destroy(root);//다 사용했으면 new가 나왓엇기때문에 지워줘야함. 탐색하는 이유가 출력보단 지우기위함.
	system("pause");
}

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
//int main()
//{
//	Node* root = NULL;
//
//	AddNode(root, 50);
//	AddNode(root, 30);
//	AddNode(root, 70);
//	AddNode(root, 40);
//	AddNode(root, 10);
//	AddNode(root, 60);
//	AddNode(root, 90);
//
//	Inorder(root); cout << endl;
//	Preorder(root); cout << endl;
//	Postorder(root); cout << endl;
//	Levelorder(root); cout << endl;
//
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
//	if (root->data > data) //루트의 데이터가 더 큰건 왼쪽에 배치가 되야된다는 말
//	{
//		AddNode(root->lchild, data); //참조여서 지워도 된다.
//	}
//	else
//	{
//		AddNode(root->rchild, data);
//	}
//}
//int main()
//{
//	Node* root = NULL;
//
//	AddNode(root, 50);
//	AddNode(root, 30);
//	AddNode(root, 70);
//	AddNode(root, 40);
//	AddNode(root, 10);
//	AddNode(root, 60);
//	AddNode(root, 90);
//
//	Inorder(root); cout << endl;
//	Preorder(root); cout << endl;
//	Postorder(root); cout << endl;
//	Levelorder(root); cout << endl;
//
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
//		if (cur->lchild !=NULL)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild !=NULL)
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
//Node* AddNode(Node* root, int data)
//{
//	if (root == NULL)//종료조건
//	{
//		return AllocNode(data);
//	}
//	if (root->data > data ) //루트의 데이터가 더 큰건 왼쪽에 배치가 되야된다는 말
//	{
//		root->lchild = AddNode(root->lchild, data);
//	}
//	else
//	{
//		root->rchild = AddNode(root->rchild, data);
//	}
//	return root;
//}
//int main()
//{
//	Node* root = NULL;
//
//	root = AddNode(root, 50);
//	root = AddNode(root, 30);
//	root = AddNode(root, 70);
//	root = AddNode(root, 40);
//	root = AddNode(root, 10);
//	root = AddNode(root, 60);
//	root = AddNode(root, 90);
//
//	Inorder(root); cout << endl;
//	Preorder(root); cout << endl;
//	Postorder(root); cout << endl;
//	Levelorder(root); cout << endl;
//
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
//Node* AddNode(Node* root,int data)
//{
//	if (root == NULL)//종료조건
//	{
//		return AllocNode(data);
//	}
//	if (root->data > data) //루트의 데이터가 더 큰건 왼쪽에 배치가 되야된다는 말
//	{
//		root->lchild = AddNode(root->lchild, data);
//	}
//	else
//	{
//		root->rchild = AddNode(root->rchild, data);
//	}
//	return root;
//}
//int main()
//{
//	Node* root = NULL;
//
//	root = AddNode(root, 50);
//	root = AddNode(root, 30);
//	root = AddNode(root, 70);
//	root = AddNode(root, 40);
//	root = AddNode(root, 10);
//	root = AddNode(root, 60); 
//	root = AddNode(root, 90);
//
//	Inorder(root); cout << endl;
//	Preorder(root); cout << endl;
//	Postorder(root); cout << endl;
//	Levelorder(root); cout << endl;
//
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
//	while (q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		cout << cur->data << " ";
//		if (cur->lchild != NULL)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild != NULL)
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
//		if (cur->lchild != NULL)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild != NULL)
//		{
//			q.push(cur->rchild);
//		}
//		delete cur;
//	}
//}
//Node* AddNode(Node* root,int data)
//{
//	if (root == NULL)//종료조건
//	{
//		return AllocNode(data);
//	}
//	if (root->data > data) //루트의 데이터가 더 큰건 왼쪽에 배치가 되야된다는 말
//	{
//		root->lchild = AddNode(root->lchild, data);
//	}
//	else
//	{
//		root->rchild = AddNode(root->rchild, data);
//	}
//	return root;
//}
//int main()
//{
//	Node* root = NULL;
//
//	root = AddNode(root, 50);
//	root = AddNode(root, 30);
//
//	Inorder(root); cout << endl;
//	Preorder(root); cout << endl;
//	Postorder(root); cout << endl;
//	Levelorder(root); cout << endl;
//
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
//		if (cur->lchild != NULL)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild != NULL)
//		{
//			q.push(cur->rchild);
//		}
//	}
//}
//void Destroy(Node* root)
//{
//	if (root)
//	{
//		Destroy(root->lchild); //왼쪽 노드 방문
//		Destroy(root->rchild); //오른쪽 노드 방문
//		delete root; //현재 노드 제거
//	}
//
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
//		if (cur->lchild != NULL)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild != NULL)
//		{
//			q.push(cur->rchild);
//		}
//		delete cur;
//	}
//}
//int main()
//{
//	Node* root = NULL;
//	root = AllocNode(50);
//	root->lchild = AllocNode(30);
//	root->rchild = AllocNode(70);
//
//	root->lchild->lchild = AllocNode(10);
//	root->lchild->rchild = AllocNode(40);
//	root->rchild->lchild = AllocNode(60);
//	root->rchild->rchild = AllocNode(90);
//
//	Inorder(root); cout << endl;
//	Preorder(root); cout << endl;
//	Postorder(root); cout << endl;
//	Levelorder(root); cout << endl;
//
//
//	Destroy(root);//다 사용했으면 new가 나왓엇기때문에 지워줘야함. 탐색하는 이유가 출력보단 지우기위함.
//	system("pause");
//}


//#include <iostream> //levelorder는 부모를 출력할때 자식을 저장하여 출력한다. 즉 큐 자료구조형이다.
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
//	while(!q.empty()) //queue가 빌때까지 큐가 비엇냐고 물어보는것.
//	{
//		Node* cur = q.front();//front는 참조
//		q.pop(); //원소제거
//		cout << cur->data << " ";
//		if (cur->lchild != NULL)
//		{
//			q.push(cur->lchild); //cur의 lchild를 담아라
//		}
//		if (cur->rchild != NULL)
//		{
//			q.push(cur->rchild);
//		}
//	}
//}
//int main()
//{
//	Node* root = NULL;
//	root = AllocNode(50);
//	root->lchild = AllocNode(30);
//	root->rchild = AllocNode(70);
//
//	root->lchild->lchild = AllocNode(10);
//	root->lchild->rchild = AllocNode(40);
//	root->rchild->lchild = AllocNode(60);
//	root->rchild->rchild = AllocNode(90);
//	
//	Inorder(root); cout << endl;
//	Preorder(root); cout << endl;
//	Postorder(root); cout << endl;
//	Levelorder(root); cout << endl;
//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib> 
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//void Postorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Postorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Postorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//		cout << p->data << endl;//방식은 Postorder방식임
//	}
//
//}
//int main()
//{
//	Node n1 = { 10,NULL,NULL };
//	Node n2 = { 20,NULL,NULL };
//	Node n3 = { 30,NULL,NULL };
//	Node n4 = { 40,NULL,NULL };
//	Node n5 = { 50,NULL,NULL };
//	Node n6 = { 60,NULL,NULL };
//	Node n7 = { 70,NULL,NULL };
//
//	n1.lchild = &n2;
//	n1.rchild = &n3;
//
//	n2.lchild = &n4;
//	n2.rchild = &n5;
//
//	n3.lchild = &n6;
//	n3.rchild = &n7;
//	Node* root = &n1;
//	Postorder(root);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib> 
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//void Preorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		cout << p->data << endl;//방식은 Preorder방식임
//		Preorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		Preorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//
//	}
//
//}
//int main()
//{
//	Node n1 = { 10,NULL,NULL };
//	Node n2 = { 20,NULL,NULL };
//	Node n3 = { 30,NULL,NULL };
//	Node n4 = { 40,NULL,NULL };
//	Node n5 = { 50,NULL,NULL };
//	Node n6 = { 60,NULL,NULL };
//	Node n7 = { 70,NULL,NULL };
//
//	n1.lchild = &n2;
//	n1.rchild = &n3;
//
//	n2.lchild = &n4;
//	n2.rchild = &n5;
//
//	n3.lchild = &n6;
//	n3.rchild = &n7;
//	Node* root = &n1;
//	Preorder(root);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib> 
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//void Inorder(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		Inorder(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		cout << p->data << endl;//방식은 inorder방식임
//		Inorder(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//							 
//	}
//
//}
//int main()
//{
//	Node n1 = { 10,NULL,NULL };
//	Node n2 = { 20,NULL,NULL };
//	Node n3 = { 30,NULL,NULL };
//	Node n4 = { 40,NULL,NULL };
//	Node n5 = { 50,NULL,NULL };
//	Node n6 = { 60,NULL,NULL };
//	Node n7 = { 70,NULL,NULL };
//
//	n1.lchild = &n2;
//	n1.rchild = &n3;
//
//	n2.lchild = &n4;
//	n2.rchild = &n5;
//
//	n3.lchild = &n6;
//	n3.rchild = &n7;
//	Node* root = &n1;
//	Inorder(root);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib> 
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//void PrintNode(Node* p) //재귀함수 , 이진트리는 선형이 아님, 종료조건은 자식이 없을때
//{
//	if (p) //p(현재위치)가 NULL이면 종료해라
//	{
//		PrintNode(p->lchild);//NULL이 아니면 왼쪽 자식으로 방문하라
//		PrintNode(p->rchild);//왼쪽 자식 다 방문했으면 오른쪽을 방문하라
//		 //방식은 inorder방식임
//	}
//	
//}
//int main()
//{
//	Node n1 = { 10,NULL,NULL };
//	Node n2 = { 20,NULL,NULL };
//	Node n3 = { 30,NULL,NULL };
//	Node n4 = { 40,NULL,NULL };
//	Node n5 = { 50,NULL,NULL };
//	Node n6 = { 60,NULL,NULL };
//	Node n7 = { 70,NULL,NULL };
//
//	n1.lchild = &n2;
//	n1.rchild = &n3;
//
//	n2.lchild = &n4;
//	n2.rchild = &n5;
//
//	n3.lchild = &n6;
//	n3.rchild = &n7;
//	Node* root = &n1;
//	PrintNode(root); 
//	system("pause");
//}


//#include <iostream> //트리를 쓰는 이유: 1. 계층적인 자료를 조직화 할때 2.검색 성능을 높이고자 해서 사용 
//#include <cstdlib> //이진트리란 모든 노드가 차수가 2이하만 만들어져야 한다. 이진트리는 2번 때문에 사용함.
////노드의 최대개수는 2의(i-1)승 이고 그 노드의 깊이까지의 최대갯수는 2의 i승-1개이다.
//using namespace std;
////단말노드는 항상 차수가 2인 노드보다 +1이 된다.  부모노드를 중간에 넣으면 inorder, 앞에 나오면 pre , 뒤에 나오면 post 항상 부모노드 중심임
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//
//int main()
//{
//	Node n1 = { 10,NULL,NULL };
//	Node n2 = { 20,NULL,NULL };
//	Node n3 = { 30,NULL,NULL };
//	Node n4 = { 40,NULL,NULL };
//	Node n5 = { 50,NULL,NULL };
//	Node n6 = { 60,NULL,NULL };
//	Node n7 = { 70,NULL,NULL };
//	
//	n1.lchild = &n2;
//	n1.rchild = &n3;
//	
//	n2.lchild = &n4;
//	n2.rchild = &n5;
//
//	n3.lchild = &n6;
//	n3.rchild = &n7;
//	Node* root = &n1;
//	cout << root->data << endl;
//	cout << root->lchild->data << endl;
//	cout << root->rchild->data << endl;
//
//	cout << root->lchild->lchild->data << endl;
//	cout << root->lchild->rchild->data << endl;
//
//	cout << root->rchild->lchild->data << endl;
//	cout << root->rchild->rchild->data << endl;
//	system("pause");
//}

//#include <iostream> //이진 탐색
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//int Compare(int a, int b)
//{
//	if (a > b)
//	{
//		return 1;
//	}
//	else if (a < b)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int _Find(int list[], int left, int right, int data)
//{
//	if (left > right)//종료조건
//	{
//		return -1;//못찾았을때
//	}
//	int middle = (left + right) / 2; //미들을 구함
//	switch (Compare(data, list[middle])) //미들과 데이터를 비교
//	{
//	case 1:
//		return _Find(list, middle + 1, right, data);
//	case -1:
//		return _Find(list, left, middle - 1, data);
//	case 0:
//		return middle; //종료 조건
//	default:
//		throw "설마?";
//	}
//}
//int Find(int list[], int size, int data) //재귀함수 아님 루프돌리는것.
//{
//	int left = 0;
//	int right = size - 1;
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;//middle 선택
//		switch (Compare(data, list[middle]))
//		{
//		case 1:
//			left = middle + 1;
//			right = right;
//			break;
//		case 2:
//			left = left;
//			right = middle - 1;
//			break;
//		case 0: //찾앗단 말
//			return middle;
//		default:
//			throw "안됌";
//
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int list[10] = { 20,35,64,38,95,75,68,56,42,51 };
//
//	sort(list, list + 10);
//	int idx = Find(list, 10, 75);
//	if (idx >= 0)
//	{
//		cout << "[" << idx << "]" << list[idx] << endl;
//	}
//	system("pause");
//}



//#include <iostream> //이진 탐색
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//int Compare(int a, int b)
//{
//	if (a > b)
//	{
//		return 1;
//	}
//	else if (a < b)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int _Find(int list[], int left, int right, int data)
//{
//	if (left > right)//종료조건
//	{
//		return -1;//못찾았을때
//	}
//	int middle = (left + right) / 2; //미들을 구함
//	switch (Compare(data, list[middle])) //미들과 데이터를 비교
//	{
//	case 1:
//		return _Find(list, middle + 1, right, data);
//	case -1:
//		return _Find(list, left, middle - 1, data);
//	case 0:
//		return middle; //종료 조건
//	default:
//		throw "설마?";
//	}
//}
//int Find(int list[], int size, int data) //재귀함수 아님 루프돌리는것.
//{
//	int left = 0;
//	int right = size - 1;
//	while(left <= right)
//	{
//		int middle = (left + right) / 2;//middle 선택
//		switch (Compare(data, list[middle]))
//		{
//		case 1:
//			left = middle + 1;
//			right = right;
//			break;
//		case 2:
//			left = left;
//			right = middle - 1;
//			break;
//		case 0: //찾앗단 말
//			return middle;
//		default:
//			throw "안됌";
//
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int list[10] = { 20,35,64,38,95,75,68,56,42,51 };
//
//	sort(list, list + 10);
//	int idx = Find(list, 10, 75);
//	if (idx >= 0)
//	{
//		cout << "[" << idx << "]" << list[idx] << endl;
//	}
//	system("pause");
//}


//#include <iostream> //이진 탐색
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//int Compare(int a, int b)
//{
//	if (a > 0)
//	{
//		return 1;
//	}
//	else if (a < b)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int _Find(int list[], int left, int right, int data)
//{
//	if (left > right)//종료조건
//	{
//		return -1;//못찾았을때
//	}
//	int middle = (left + right) / 2; //미들을 구함
//		switch (Compare(data,list[middle])) //미들과 데이터를 비교
//		{
//		case 1:
//			return _Find(list,middle+1,right,data);
//		case -1:
//			return _Find(list,left,middle-1,data);
//		case 0:
//			return middle; //종료 조건
//		default:
//			throw "설마?";
//		}	
//}
//int Find(int list[], int size, int data)
//{
//	return _Find(list, 0, size - 1, data); //
//	return -1;
//}
//int main()
//{
//	int list[10] = { 20,35,64,38,95,75,68,56,42,51 };
//
//	sort(list, list + 10);
//	int idx = Find(list, 10, 75);
//	if (idx >= 0)
//	{
//		cout << "[" << idx << "]" << list[idx] << endl;
//	}
//	system("pause");
//}

//#include <iostream> // 탐색
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size,int data)
//{
//	for(int i=0;i<size;++i) //모든 원소에 대해서
//		{
//			if (list[i] == data)
//			{
//			 return i;
//			}
//		}
//	return -1;
//}
//int main()
//{
//	int list[10] = { 20,35,64,38,95,75,68,56,42,51 };
//
//	int idx = Find(list, 10, 75);
//	if (idx >= 0)
//	{
//		cout << "[" << idx << "]" << list[idx] << endl;
//	}
//	system("pause");
//}