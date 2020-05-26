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
void Inorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
{
	if (p) //p(������ġ)�� NULL�̸� �����ض�
	{
		Inorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
		cout << p->data << " ";
		Inorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
	}
}
void Preorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
{
	if (p) //p(������ġ)�� NULL�̸� �����ض�
	{
		cout << p->data << " ";
		Preorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
		Preorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
	}
}
void Postorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
{
	if (p) //p(������ġ)�� NULL�̸� �����ض�
	{
		Postorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
		Postorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
		cout << p->data << " ";

	}
}
void Levelorder(Node* root)
{
	if (root == NULL) //root�� ���̸� �������� �� �ʿ䰡 ����.
	{
		return;
	}
	queue<Node*> q; //int�� ���ϻ��̱⿡ �ڽ������� ��.�׷��� root�� ������ �˾ƾ��ϱ⶧���� Node*�̿��� �Ѵ�.
	q.push(root); //��Ʈ ���� ����
	while (!q.empty()) //queue�� �������� ť�� ����İ� ����°�.
	{
		Node* cur = q.front();//front�� ����
		q.pop(); //��������
		cout << cur->data << " ";
		if (cur->lchild)
		{
			q.push(cur->lchild); //cur�� lchild�� ��ƶ�
		}
		if (cur->rchild)
		{
			q.push(cur->rchild);
		}
	}
}
void Destroy(Node* root)
{
	if (root == NULL) //root�� ���̸� �������� �� �ʿ䰡 ����.
	{
		return;
	}
	queue<Node*> q; //int�� ���ϻ��̱⿡ �ڽ������� ��.�׷��� root�� ������ �˾ƾ��ϱ⶧���� Node*�̿��� �Ѵ�.
	q.push(root); //��Ʈ ���� ����
	while (!q.empty()) //queue�� �������� ť�� ����İ� ����°�.
	{
		Node* cur = q.front();//front�� ����
		q.pop(); //��������
		if (cur->lchild)
		{
			q.push(cur->lchild); //cur�� lchild�� ��ƶ�
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
	if (root == NULL)//��������
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
			if (p->data > data)//������ ���� ���� 
			{
				p = p->lchild;
			}
			else
			{
				p = p->rchild;
			}
		}
		if (pp->data > data)//pp�� �θ�
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


	Destroy(root);//�� ��������� new�� ���Ӿ��⶧���� ���������. Ž���ϴ� ������ ��º��� ���������.
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
//void Inorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		Inorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		cout << p->data << " ";
//		Inorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//	}
//}
//void Preorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		cout << p->data << " ";
//		Preorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		Preorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//	}
//}
//void Postorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		Postorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		Postorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//		cout << p->data << " ";
//
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL) //root�� ���̸� �������� �� �ʿ䰡 ����.
//	{
//		return;
//	}
//	queue<Node*> q; //int�� ���ϻ��̱⿡ �ڽ������� ��.�׷��� root�� ������ �˾ƾ��ϱ⶧���� Node*�̿��� �Ѵ�.
//	q.push(root); //��Ʈ ���� ����
//	while (!q.empty()) //queue�� �������� ť�� ����İ� ����°�.
//	{
//		Node* cur = q.front();//front�� ����
//		q.pop(); //��������
//		cout << cur->data << " ";
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur�� lchild�� ��ƶ�
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//	}
//}
//void Destroy(Node* root)
//{
//	if (root == NULL) //root�� ���̸� �������� �� �ʿ䰡 ����.
//	{
//		return;
//	}
//	queue<Node*> q; //int�� ���ϻ��̱⿡ �ڽ������� ��.�׷��� root�� ������ �˾ƾ��ϱ⶧���� Node*�̿��� �Ѵ�.
//	q.push(root); //��Ʈ ���� ����
//	while (!q.empty()) //queue�� �������� ť�� ����İ� ����°�.
//	{
//		Node* cur = q.front();//front�� ����
//		q.pop(); //��������
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur�� lchild�� ��ƶ�
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
//	if (root == NULL)//��������
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
//			if (p->data > data)//������ ���� ���� 
//			{
//				p = p->lchild;
//			}
//			else
//			{
//				p = p->rchild;
//			}
//		}
//		if (pp->data > data)//pp�� �θ�
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
//	Destroy(root);//�� ��������� new�� ���Ӿ��⶧���� ���������. Ž���ϴ� ������ ��º��� ���������.
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
//void Inorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		Inorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		cout << p->data << " ";
//		Inorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//	}
//}
//void Preorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		cout << p->data << " ";
//		Preorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		Preorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//	}
//}
//void Postorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		Postorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		Postorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//		cout << p->data << " ";
//
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL) //root�� ���̸� �������� �� �ʿ䰡 ����.
//	{
//		return;
//	}
//	queue<Node*> q; //int�� ���ϻ��̱⿡ �ڽ������� ��.�׷��� root�� ������ �˾ƾ��ϱ⶧���� Node*�̿��� �Ѵ�.
//	q.push(root); //��Ʈ ���� ����
//	while (!q.empty()) //queue�� �������� ť�� ����İ� ����°�.
//	{
//		Node* cur = q.front();//front�� ����
//		q.pop(); //��������
//		cout << cur->data << " ";
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur�� lchild�� ��ƶ�
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//	}
//}
//void Destroy(Node* root)
//{
//	if (root == NULL) //root�� ���̸� �������� �� �ʿ䰡 ����.
//	{
//		return;
//	}
//	queue<Node*> q; //int�� ���ϻ��̱⿡ �ڽ������� ��.�׷��� root�� ������ �˾ƾ��ϱ⶧���� Node*�̿��� �Ѵ�.
//	q.push(root); //��Ʈ ���� ����
//	while (!q.empty()) //queue�� �������� ť�� ����İ� ����°�.
//	{
//		Node* cur = q.front();//front�� ����
//		q.pop(); //��������
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur�� lchild�� ��ƶ�
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
//	if (root == NULL)//��������
//	{
//		root = AllocNode(data);
//		return;
//	}
//	if (root->data > data) //��Ʈ�� �����Ͱ� �� ū�� ���ʿ� ��ġ�� �Ǿߵȴٴ� ��
//	{
//		AddNode(root->lchild, data); //�������� ������ �ȴ�.
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
//	Destroy(root);//�� ��������� new�� ���Ӿ��⶧���� ���������. Ž���ϴ� ������ ��º��� ���������.
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
//void Inorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		Inorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		cout << p->data << " ";
//		Inorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//	}
//}
//void Preorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		cout << p->data << " ";
//		Preorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		Preorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//	}
//}
//void Postorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		Postorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		Postorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//		cout << p->data << " ";
//
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL) //root�� ���̸� �������� �� �ʿ䰡 ����.
//	{
//		return;
//	}
//	queue<Node*> q; //int�� ���ϻ��̱⿡ �ڽ������� ��.�׷��� root�� ������ �˾ƾ��ϱ⶧���� Node*�̿��� �Ѵ�.
//	q.push(root); //��Ʈ ���� ����
//	while (!q.empty()) //queue�� �������� ť�� ����İ� ����°�.
//	{
//		Node* cur = q.front();//front�� ����
//		q.pop(); //��������
//		cout << cur->data << " ";
//		if (cur->lchild !=NULL)
//		{
//			q.push(cur->lchild); //cur�� lchild�� ��ƶ�
//		}
//		if (cur->rchild !=NULL)
//		{
//			q.push(cur->rchild);
//		}
//	}
//}
//void Destroy(Node* root)
//{
//	if (root == NULL) //root�� ���̸� �������� �� �ʿ䰡 ����.
//	{
//		return;
//	}
//	queue<Node*> q; //int�� ���ϻ��̱⿡ �ڽ������� ��.�׷��� root�� ������ �˾ƾ��ϱ⶧���� Node*�̿��� �Ѵ�.
//	q.push(root); //��Ʈ ���� ����
//	while (!q.empty()) //queue�� �������� ť�� ����İ� ����°�.
//	{
//		Node* cur = q.front();//front�� ����
//		q.pop(); //��������
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur�� lchild�� ��ƶ�
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
//	if (root == NULL)//��������
//	{
//		return AllocNode(data);
//	}
//	if (root->data > data ) //��Ʈ�� �����Ͱ� �� ū�� ���ʿ� ��ġ�� �Ǿߵȴٴ� ��
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
//	Destroy(root);//�� ��������� new�� ���Ӿ��⶧���� ���������. Ž���ϴ� ������ ��º��� ���������.
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
//void Inorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		Inorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		cout << p->data << " ";
//		Inorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//	}
//}
//void Preorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		cout << p->data << " ";
//		Preorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		Preorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//	}
//}
//void Postorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		Postorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		Postorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//		cout << p->data << " ";
//
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL) //root�� ���̸� �������� �� �ʿ䰡 ����.
//	{
//		return;
//	}
//	queue<Node*> q; //int�� ���ϻ��̱⿡ �ڽ������� ��.�׷��� root�� ������ �˾ƾ��ϱ⶧���� Node*�̿��� �Ѵ�.
//	q.push(root); //��Ʈ ���� ����
//	while (!q.empty()) //queue�� �������� ť�� ����İ� ����°�.
//	{
//		Node* cur = q.front();//front�� ����
//		q.pop(); //��������
//		cout << cur->data << " ";
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur�� lchild�� ��ƶ�
//		}
//		if (cur->rchild)
//		{
//			q.push(cur->rchild);
//		}
//	}
//}
//void Destroy(Node* root)
//{
//	if (root == NULL) //root�� ���̸� �������� �� �ʿ䰡 ����.
//	{
//		return;
//	}
//	queue<Node*> q; //int�� ���ϻ��̱⿡ �ڽ������� ��.�׷��� root�� ������ �˾ƾ��ϱ⶧���� Node*�̿��� �Ѵ�.
//	q.push(root); //��Ʈ ���� ����
//	while (!q.empty()) //queue�� �������� ť�� ����İ� ����°�.
//	{
//		Node* cur = q.front();//front�� ����
//		q.pop(); //��������
//		if (cur->lchild)
//		{
//			q.push(cur->lchild); //cur�� lchild�� ��ƶ�
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
//	if (root == NULL)//��������
//	{
//		return AllocNode(data);
//	}
//	if (root->data > data) //��Ʈ�� �����Ͱ� �� ū�� ���ʿ� ��ġ�� �Ǿߵȴٴ� ��
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
//	Destroy(root);//�� ��������� new�� ���Ӿ��⶧���� ���������. Ž���ϴ� ������ ��º��� ���������.
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
//void Inorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		Inorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		cout << p->data << " ";
//		Inorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//	}
//}
//void Preorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		cout << p->data << " ";
//		Preorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		Preorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//	}
//}
//void Postorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		Postorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		Postorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//		cout << p->data << " ";
//
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL) //root�� ���̸� �������� �� �ʿ䰡 ����.
//	{
//		return;
//	}
//	queue<Node*> q; //int�� ���ϻ��̱⿡ �ڽ������� ��.�׷��� root�� ������ �˾ƾ��ϱ⶧���� Node*�̿��� �Ѵ�.
//	q.push(root); //��Ʈ ���� ����
//	while (q.empty()) //queue�� �������� ť�� ����İ� ����°�.
//	{
//		Node* cur = q.front();//front�� ����
//		q.pop(); //��������
//		cout << cur->data << " ";
//		if (cur->lchild != NULL)
//		{
//			q.push(cur->lchild); //cur�� lchild�� ��ƶ�
//		}
//		if (cur->rchild != NULL)
//		{
//			q.push(cur->rchild);
//		}
//	}
//}
//void Destroy(Node* root)
//{
//	if (root == NULL) //root�� ���̸� �������� �� �ʿ䰡 ����.
//	{
//		return;
//	}
//	queue<Node*> q; //int�� ���ϻ��̱⿡ �ڽ������� ��.�׷��� root�� ������ �˾ƾ��ϱ⶧���� Node*�̿��� �Ѵ�.
//	q.push(root); //��Ʈ ���� ����
//	while (!q.empty()) //queue�� �������� ť�� ����İ� ����°�.
//	{
//		Node* cur = q.front();//front�� ����
//		q.pop(); //��������
//		if (cur->lchild != NULL)
//		{
//			q.push(cur->lchild); //cur�� lchild�� ��ƶ�
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
//	if (root == NULL)//��������
//	{
//		return AllocNode(data);
//	}
//	if (root->data > data) //��Ʈ�� �����Ͱ� �� ū�� ���ʿ� ��ġ�� �Ǿߵȴٴ� ��
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
//	Destroy(root);//�� ��������� new�� ���Ӿ��⶧���� ���������. Ž���ϴ� ������ ��º��� ���������.
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
//void Inorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		Inorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		cout << p->data << " ";
//		Inorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//	}
//}
//void Preorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		cout << p->data << " ";
//		Preorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		Preorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//	}
//}
//void Postorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		Postorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		Postorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//		cout << p->data << " ";
//
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL) //root�� ���̸� �������� �� �ʿ䰡 ����.
//	{
//		return;
//	}
//	queue<Node*> q; //int�� ���ϻ��̱⿡ �ڽ������� ��.�׷��� root�� ������ �˾ƾ��ϱ⶧���� Node*�̿��� �Ѵ�.
//	q.push(root); //��Ʈ ���� ����
//	while (!q.empty()) //queue�� �������� ť�� ����İ� ����°�.
//	{
//		Node* cur = q.front();//front�� ����
//		q.pop(); //��������
//		cout << cur->data << " ";
//		if (cur->lchild != NULL)
//		{
//			q.push(cur->lchild); //cur�� lchild�� ��ƶ�
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
//		Destroy(root->lchild); //���� ��� �湮
//		Destroy(root->rchild); //������ ��� �湮
//		delete root; //���� ��� ����
//	}
//
//	if (root == NULL) //root�� ���̸� �������� �� �ʿ䰡 ����.
//	{
//		return;
//	}
//	queue<Node*> q; //int�� ���ϻ��̱⿡ �ڽ������� ��.�׷��� root�� ������ �˾ƾ��ϱ⶧���� Node*�̿��� �Ѵ�.
//	q.push(root); //��Ʈ ���� ����
//	while (!q.empty()) //queue�� �������� ť�� ����İ� ����°�.
//	{
//		Node* cur = q.front();//front�� ����
//		q.pop(); //��������
//		if (cur->lchild != NULL)
//		{
//			q.push(cur->lchild); //cur�� lchild�� ��ƶ�
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
//	Destroy(root);//�� ��������� new�� ���Ӿ��⶧���� ���������. Ž���ϴ� ������ ��º��� ���������.
//	system("pause");
//}


//#include <iostream> //levelorder�� �θ� ����Ҷ� �ڽ��� �����Ͽ� ����Ѵ�. �� ť �ڷᱸ�����̴�.
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
//void Inorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		Inorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		cout << p->data << " ";
//		Inorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//	}
//}
//void Preorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		cout << p->data << " ";
//		Preorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		Preorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//	}
//}
//void Postorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		Postorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		Postorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//		cout << p->data << " ";
//
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL) //root�� ���̸� �������� �� �ʿ䰡 ����.
//	{
//		return;
//	}
//	queue<Node*> q; //int�� ���ϻ��̱⿡ �ڽ������� ��.�׷��� root�� ������ �˾ƾ��ϱ⶧���� Node*�̿��� �Ѵ�.
//	q.push(root); //��Ʈ ���� ����
//	while(!q.empty()) //queue�� �������� ť�� ����İ� ����°�.
//	{
//		Node* cur = q.front();//front�� ����
//		q.pop(); //��������
//		cout << cur->data << " ";
//		if (cur->lchild != NULL)
//		{
//			q.push(cur->lchild); //cur�� lchild�� ��ƶ�
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
//void Postorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		Postorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		Postorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//		cout << p->data << endl;//����� Postorder�����
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
//void Preorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		cout << p->data << endl;//����� Preorder�����
//		Preorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		Preorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
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
//void Inorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		Inorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		cout << p->data << endl;//����� inorder�����
//		Inorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
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
//void PrintNode(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//{
//	if (p) //p(������ġ)�� NULL�̸� �����ض�
//	{
//		PrintNode(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//		PrintNode(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//		 //����� inorder�����
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


//#include <iostream> //Ʈ���� ���� ����: 1. �������� �ڷḦ ����ȭ �Ҷ� 2.�˻� ������ ���̰��� �ؼ� ��� 
//#include <cstdlib> //����Ʈ���� ��� ��尡 ������ 2���ϸ� ��������� �Ѵ�. ����Ʈ���� 2�� ������ �����.
////����� �ִ밳���� 2��(i-1)�� �̰� �� ����� ���̱����� �ִ밹���� 2�� i��-1���̴�.
//using namespace std;
////�ܸ����� �׻� ������ 2�� ��庸�� +1�� �ȴ�.  �θ��带 �߰��� ������ inorder, �տ� ������ pre , �ڿ� ������ post �׻� �θ��� �߽���
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

//#include <iostream> //���� Ž��
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
//	if (left > right)//��������
//	{
//		return -1;//��ã������
//	}
//	int middle = (left + right) / 2; //�̵��� ����
//	switch (Compare(data, list[middle])) //�̵�� �����͸� ��
//	{
//	case 1:
//		return _Find(list, middle + 1, right, data);
//	case -1:
//		return _Find(list, left, middle - 1, data);
//	case 0:
//		return middle; //���� ����
//	default:
//		throw "����?";
//	}
//}
//int Find(int list[], int size, int data) //����Լ� �ƴ� ���������°�.
//{
//	int left = 0;
//	int right = size - 1;
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;//middle ����
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
//		case 0: //ã�Ѵ� ��
//			return middle;
//		default:
//			throw "�ȉ�";
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



//#include <iostream> //���� Ž��
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
//	if (left > right)//��������
//	{
//		return -1;//��ã������
//	}
//	int middle = (left + right) / 2; //�̵��� ����
//	switch (Compare(data, list[middle])) //�̵�� �����͸� ��
//	{
//	case 1:
//		return _Find(list, middle + 1, right, data);
//	case -1:
//		return _Find(list, left, middle - 1, data);
//	case 0:
//		return middle; //���� ����
//	default:
//		throw "����?";
//	}
//}
//int Find(int list[], int size, int data) //����Լ� �ƴ� ���������°�.
//{
//	int left = 0;
//	int right = size - 1;
//	while(left <= right)
//	{
//		int middle = (left + right) / 2;//middle ����
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
//		case 0: //ã�Ѵ� ��
//			return middle;
//		default:
//			throw "�ȉ�";
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


//#include <iostream> //���� Ž��
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
//	if (left > right)//��������
//	{
//		return -1;//��ã������
//	}
//	int middle = (left + right) / 2; //�̵��� ����
//		switch (Compare(data,list[middle])) //�̵�� �����͸� ��
//		{
//		case 1:
//			return _Find(list,middle+1,right,data);
//		case -1:
//			return _Find(list,left,middle-1,data);
//		case 0:
//			return middle; //���� ����
//		default:
//			throw "����?";
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

//#include <iostream> // Ž��
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size,int data)
//{
//	for(int i=0;i<size;++i) //��� ���ҿ� ���ؼ�
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