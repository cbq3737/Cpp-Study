#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std; //�ִ��� ����, stl �� �˰����̱⿡ �̷� ������ ��Ÿ����.
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
	int size = 0; //�迭�� ��������Ʈ���� ������ִٴ°��� ������

	size = 10;
	make_heap(list, list + size); //���Ҹ� �������� ������. push�� 10���ض�
	PrintList(list, size);

	sort_heap(list, list + size); //pop�� 10���ߴ�.
	PrintList(list, size);
	size = 0;
	PrintList(list,size);
	system("pause");
}


//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std; //�ִ��� ����, stl �� �˰����̱⿡ �̷� ������ ��Ÿ����.
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
//	push_heap(list, list + size); //list+1�� �����ٰ� ��� ���Ҹ� 1����� ���Ѱ�. 
//	++size;
//	push_heap(list, list + size); //50�� �߰��ϴµ� 50�� 40���� ũ�Ƿ� �ִ� ���̶�� ���������Ƿ� 40,50�� ������ �ٲ� 50,40���� ����̵ȴ�.
//	++size;
//	push_heap(list, list + size);
//	++size;
//	push_heap(list, list + size);//90�� ���� ũ�Ƿ� 40Ÿ�� �ö󰡰� 50Ÿ�� �ö󰡼� ���� ���� ���� 20�� �´� �����̹Ƿ� �����Ǽ� 90 50 20 40 ���� ����ġ����.
//	++size;
//	push_heap(list, list + size);
//	
//	PrintList(list, size);
//	pop_heap(list, list + size); //pop�� ���Ҹ� ����� �ǹ��ε� �ִ� heap�� root�� ����
//	PrintList(list, size); //�׷��� ��µɶ� root���� �����ǵڷ� ����
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
//using namespace std; //�ִ��� ����, �˰����̱⿡ �̷� ������ ��Ÿ����.
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
//	push_heap(list, list + size); //list+1�� �����ٰ� ��� ���Ҹ� 1����� ���Ѱ�. 
//	++size;
//	push_heap(list, list + size); //50�� �߰��ϴµ� 50�� 40���� ũ�Ƿ� �ִ� ���̶�� ���������Ƿ� 40,50�� ������ �ٲ� 50,40���� ����̵ȴ�.
//	++size;
//	push_heap(list, list + size); 
//	++size;
//	push_heap(list, list + size);//90�� ���� ũ�Ƿ� 40Ÿ�� �ö󰡰� 50Ÿ�� �ö󰡼� ���� ���� ���� 20�� �´� �����̹Ƿ� �����Ǽ� 90 50 20 40 ���� ����ġ����.
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
//	push_heap(list, list+1); //list�� ������ ���� ��� , �ι�° ��ġ
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
//	void Inorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//	{
//		if (p) //p(������ġ)�� NULL�̸� �����ض�
//		{
//			Inorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//			cout << p->data << " ";
//			Inorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//		}
//	}
//	void Preorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//	{
//		if (p) //p(������ġ)�� NULL�̸� �����ض�
//		{
//			cout << p->data << " ";
//			Preorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//			Preorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//		}
//	}
//	void Postorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//	{
//		if (p) //p(������ġ)�� NULL�̸� �����ض�
//		{
//			Postorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//			Postorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//			cout << p->data << " ";
//
//		}
//	}
//	void Levelorder(Node* root)
//	{
//		if (root == NULL) //root�� ���̸� �������� �� �ʿ䰡 ����.
//		{
//			return;
//		}
//		queue<Node*> q; //int�� ���ϻ��̱⿡ �ڽ������� ��.�׷��� root�� ������ �˾ƾ��ϱ⶧���� Node*�̿��� �Ѵ�.
//		q.push(root); //��Ʈ ���� ����
//		while (!q.empty()) //queue�� �������� ť�� ����İ� ����°�.
//		{
//			Node* cur = q.front();//front�� ����
//			q.pop(); //��������
//			cout << cur->data << " ";
//			if (cur->lchild)
//			{
//				q.push(cur->lchild); //cur�� lchild�� ��ƶ�
//			}
//			if (cur->rchild)
//			{
//				q.push(cur->rchild);
//			}
//		}
//	}
//	void Destroy(Node* root)
//	{
//		if (root == NULL) //root�� ���̸� �������� �� �ʿ䰡 ����.
//		{
//			return;
//		}
//		queue<Node*> q; //int�� ���ϻ��̱⿡ �ڽ������� ��.�׷��� root�� ������ �˾ƾ��ϱ⶧���� Node*�̿��� �Ѵ�.
//		q.push(root); //��Ʈ ���� ����
//		while (!q.empty()) //queue�� �������� ť�� ����İ� ����°�.
//		{
//			Node* cur = q.front();//front�� ����
//			q.pop(); //��������
//			if (cur->lchild)
//			{
//				q.push(cur->lchild); //cur�� lchild�� ��ƶ�
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
//		if (root == NULL)//��������
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
//				if (p->data > data)//������ ���� ���� 
//				{
//					p = p->lchild;
//				}
//				else
//				{
//					p = p->rchild;
//				}
//			}
//			if (pp->data > data)//pp�� �θ�
//			{
//				pp->lchild = AllocNode(data);
//			}
//			else
//			{
//				pp->rchild = AllocNode(data);
//			}
//		}
//	}
//	void SearchNode(Node* proot, int data) //����Լ��� ����
//	{
//		if (proot == NULL) //��������1 
//		{
//			cout << "����" << endl;
//			return;
//		}
//		if (proot->data == data) //��������2
//		{
//			cout << "ã�� : " << data << endl;
//			return; //��� ���⶧���� �����ϱ����� ������.
//		}
//		if (proot->data > data)
//		{
//			SearchNode(proot->lchild, data); //�������� �̵��ҽ�  ������ ���� , �ݺ����� ������� ��� ���� , �� �ڽ������״� 40�� ã������ �ǹ�
//		} //ã���� ȣ���ߴ� ó���𿡰� �ݵ�� ��ȯ������Ѵ�.
//		else
//		{
//			SearchNode(proot->rchild, data); //���������� �̵�
//		}
//	}
//	Node* RemoveNode(Node* root, int data) //����Լ�
//	{
//		Node* p = root;
//		if (p == NULL) //��������
//		{
//			return NULL; //�����ϰ����ϴ� �����͸� ��ã������
//		}
//		if (p->data > data)
//		{
//			p->lchild = RemoveNode(p->lchild, data);
//		}
//		else if (p->data < data)
//		{
//			p->rchild = RemoveNode(p->rchild, data);
//		}
//		else//1.������ 0�� ���, 2.������ 1�ε� ����,������ ���� ���� 3. ������ 2�ΰ�� �� ã�Ҵٶ�� �ڵ�
//		{
//			//1.�� ��� 
//			if (p->lchild == NULL && p->rchild == NULL)
//			{
//				delete p;
//				return NULL;
//			}
//			//2�� ���
//			else if (p->lchild != NULL && p->rchild == NULL)
//			{
//				Node* lchild = p->lchild; //p�� 60
//				delete p;
//				return lchild; //70���� ��ȯ�ص��� ���־��� ������ 
//			}
//			else if (p->lchild == NULL && p->rchild != NULL) //�������� �ִ� ���, ����� ����
//			{
//				Node* rchild = p->rchild; //p�� 60
//				delete p;
//				return rchild; //70���� ��ȯ�ص��� ���־��� ������ 
//			}
//			//3���� ���,�����Ǵ� ����� ���� �ڽĵ��߿� ���� ū ����, ������ �ڽĵ� �߿� ���� ���������� �ϳ��� �÷������.
//			else //p�� �����ϰ��� �ϴ� ����� �� 70, �̹��� �������ڽ��� ���� ���� ���Ҹ� �ø�����
//			{
//				Node* np = p->rchild; //np�� p�� �����ڽĿ��� ���� ����ض� ��� ��.
//				Node* npp = p; //�� ���� np�� �θ�
//				while (np->lchild) //���� ���� ���� ã�ƾ��ϹǷ� �����ڽ��� NULL�϶����� �����°�.
//				{
//					npp = np; //�ѹ��� �̵��Ҷ����� �ٲ���.
//					np = np->lchild; //�� �������� ã��
//				}
//				p->data = np->data; //�� ���� �������� p�� �ٲ��ذ�.
//				if (p == npp) //�ѹ��̶� �̵��� �����ʾҴ�.
//				{
//					npp->rchild = np->rchild; //�̷��� �ڽ��� �������Ƿ� �����ʿ� �����ذ�.
//				}
//				else
//				{
//					npp->lchild = np->rchild;//np�� �θ� , �� np�� �����ֱ����� rchild�� ������.
//				}
//				delete np; //�����⶧���� ������
//				return p;
//
//			}
//			return NULL;
//		}
//		return p;
//	}
//	//////////////////////////// �����ϴ°���
//public:
//	Btree() :root(NULL) {} //������ �Ҹ��ڴ� �������̽��ϱ� public���� ������ ���� �Լ��� �� private��
//	~Btree()
//	{
//		Destroy(root); //�������۾��� �ϵ��� ȣ������
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
//int main() //C++��Ÿ�Ϸ�
//{ //Ŭ�����ȿ� �ִ� �Լ��� ����Լ��̹Ƿ� �μ��� �޾Ҿ���.������ ������ �ʿ��������� �׷��� ������ ���
//	Btree t;
//	t.Add(50);
//	t.Add(30);
//	t.Add(10);
//	t.Add(40);
//	t.Add(70);
//	t.Add(90);
//
//	t.Remove(30); //�ڽ��� ������ 2���� ����
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
//	void Inorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//	{
//		if (p) //p(������ġ)�� NULL�̸� �����ض�
//		{
//			Inorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//			cout << p->data << " ";
//			Inorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//		}
//	}
//	void Preorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//	{
//		if (p) //p(������ġ)�� NULL�̸� �����ض�
//		{
//			cout << p->data << " ";
//			Preorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//			Preorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//		}
//	}
//	void Postorder(Node* p) //����Լ� , ����Ʈ���� ������ �ƴ�, ���������� �ڽ��� ������
//	{
//		if (p) //p(������ġ)�� NULL�̸� �����ض�
//		{
//			Postorder(p->lchild);//NULL�� �ƴϸ� ���� �ڽ����� �湮�϶�
//			Postorder(p->rchild);//���� �ڽ� �� �湮������ �������� �湮�϶�
//			cout << p->data << " ";
//
//		}
//	}
//	void Levelorder(Node* root)
//	{
//		if (root == NULL) //root�� ���̸� �������� �� �ʿ䰡 ����.
//		{
//			return;
//		}
//		queue<Node*> q; //int�� ���ϻ��̱⿡ �ڽ������� ��.�׷��� root�� ������ �˾ƾ��ϱ⶧���� Node*�̿��� �Ѵ�.
//		q.push(root); //��Ʈ ���� ����
//		while (!q.empty()) //queue�� �������� ť�� ����İ� ����°�.
//		{
//			Node* cur = q.front();//front�� ����
//			q.pop(); //��������
//			cout << cur->data << " ";
//			if (cur->lchild)
//			{
//				q.push(cur->lchild); //cur�� lchild�� ��ƶ�
//			}
//			if (cur->rchild)
//			{
//				q.push(cur->rchild);
//			}
//		}
//	}
//	void Destroy(Node* root)
//	{
//		if (root == NULL) //root�� ���̸� �������� �� �ʿ䰡 ����.
//		{
//			return;
//		}
//		queue<Node*> q; //int�� ���ϻ��̱⿡ �ڽ������� ��.�׷��� root�� ������ �˾ƾ��ϱ⶧���� Node*�̿��� �Ѵ�.
//		q.push(root); //��Ʈ ���� ����
//		while (!q.empty()) //queue�� �������� ť�� ����İ� ����°�.
//		{
//			Node* cur = q.front();//front�� ����
//			q.pop(); //��������
//			if (cur->lchild)
//			{
//				q.push(cur->lchild); //cur�� lchild�� ��ƶ�
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
//		if (root == NULL)//��������
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
//				if (p->data > data)//������ ���� ���� 
//				{
//					p = p->lchild;
//				}
//				else
//				{
//					p = p->rchild;
//				}
//			}
//			if (pp->data > data)//pp�� �θ�
//			{
//				pp->lchild = AllocNode(data);
//			}
//			else
//			{
//				pp->rchild = AllocNode(data);
//			}
//		}
//	}
//	void SearchNode(Node* proot, int data) //����Լ��� ����
//	{
//		if (proot == NULL) //��������1 
//		{
//			cout << "����" << endl;
//			return;
//		}
//		if (proot->data == data) //��������2
//		{
//			cout << "ã�� : " << data << endl;
//			return; //��� ���⶧���� �����ϱ����� ������.
//		}
//		if (proot->data > data)
//		{
//			SearchNode(proot->lchild, data); //�������� �̵��ҽ�  ������ ���� , �ݺ����� ������� ��� ���� , �� �ڽ������״� 40�� ã������ �ǹ�
//		} //ã���� ȣ���ߴ� ó���𿡰� �ݵ�� ��ȯ������Ѵ�.
//		else
//		{
//			SearchNode(proot->rchild, data); //���������� �̵�
//		}
//	}
//	Node* RemoveNode(Node* root, int data) //����Լ�
//	{
//		Node* p = root;
//		if (p == NULL) //��������
//		{
//			return NULL; //�����ϰ����ϴ� �����͸� ��ã������
//		}
//		if (p->data > data)
//		{
//			p->lchild = RemoveNode(p->lchild, data);
//		}
//		else if (p->data < data)
//		{
//			p->rchild = RemoveNode(p->rchild, data);
//		}
//		else//1.������ 0�� ���, 2.������ 1�ε� ����,������ ���� ���� 3. ������ 2�ΰ�� �� ã�Ҵٶ�� �ڵ�
//		{
//			//1.�� ��� 
//			if (p->lchild == NULL && p->rchild == NULL)
//			{
//				delete p;
//				return NULL;
//			}
//			//2�� ���
//			else if (p->lchild != NULL && p->rchild == NULL)
//			{
//				Node* lchild = p->lchild; //p�� 60
//				delete p;
//				return lchild; //70���� ��ȯ�ص��� ���־��� ������ 
//			}
//			else if (p->lchild == NULL && p->rchild != NULL) //�������� �ִ� ���, ����� ����
//			{
//				Node* rchild = p->rchild; //p�� 60
//				delete p;
//				return rchild; //70���� ��ȯ�ص��� ���־��� ������ 
//			}
//			//3���� ���,�����Ǵ� ����� ���� �ڽĵ��߿� ���� ū ����, ������ �ڽĵ� �߿� ���� ���������� �ϳ��� �÷������.
//			else //p�� �����ϰ��� �ϴ� ����� �� 70, �̹��� �������ڽ��� ���� ���� ���Ҹ� �ø�����
//			{
//				Node* np = p->rchild; //np�� p�� �����ڽĿ��� ���� ����ض� ��� ��.
//				Node* npp = p; //�� ���� np�� �θ�
//				while (np->lchild) //���� ���� ���� ã�ƾ��ϹǷ� �����ڽ��� NULL�϶����� �����°�.
//				{
//					npp = np; //�ѹ��� �̵��Ҷ����� �ٲ���.
//					np = np->lchild; //�� �������� ã��
//				}
//				p->data = np->data; //�� ���� �������� p�� �ٲ��ذ�.
//				if (p == npp) //�ѹ��̶� �̵��� �����ʾҴ�.
//				{
//					npp->rchild = np->rchild; //�̷��� �ڽ��� �������Ƿ� �����ʿ� �����ذ�.
//				}
//				else
//				{
//					npp->lchild = np->rchild;//np�� �θ� , �� np�� �����ֱ����� rchild�� ������.
//				}
//				delete np; //�����⶧���� ������
//				return p;
//
//			}
//			return NULL;
//		}
//		return p;
//	}
////////////////////////////// �����ϴ°���
//	public:
//		Btree() :root(NULL) {} //������ �Ҹ��ڴ� �������̽��ϱ� public���� ������ ���� �Լ��� �� private��
//		~Btree()
//		{
//			Destroy(root); //�������۾��� �ϵ��� ȣ������
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
//int main() //C++��Ÿ�Ϸ�
//{ //Ŭ�����ȿ� �ִ� �Լ��� ����Լ��̹Ƿ� �μ��� �޾Ҿ���.������ ������ �ʿ��������� �׷��� ������ ���
//	Btree t;
//	t.Add(50);
//	t.Add(30);
//	t.Add(10);
//	t.Add(40);
//	t.Add(70);
//	t.Add(90);
//
//	t.Remove(30); //�ڽ��� ������ 2���� ����
//
//	t.Inorder();
//	//c++�̱⿡ ������ �Ҹ��ڰ� ����⿡ destory ����
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
//void SearchNode(Node* proot, int data) //����Լ��� ����
//{
//	if (proot == NULL) //��������1 
//	{
//		cout << "����" << endl;
//		return;
//	}
//	if (proot->data == data) //��������2
//	{
//		cout << "ã�� : " << data << endl;
//		return; //��� ���⶧���� �����ϱ����� ������.
//	}
//	if (proot->data > data)
//	{
//		SearchNode(proot->lchild, data); //�������� �̵��ҽ�  ������ ���� , �ݺ����� ������� ��� ���� , �� �ڽ������״� 40�� ã������ �ǹ�
//	} //ã���� ȣ���ߴ� ó���𿡰� �ݵ�� ��ȯ������Ѵ�.
//	else
//	{
//		SearchNode(proot->rchild, data); //���������� �̵�
//	}
//}
//Node* RemoveNode(Node* root, int data) //����Լ�
//{
//	Node* p = root;
//	if (p == NULL) //��������
//	{
//		return NULL; //�����ϰ����ϴ� �����͸� ��ã������
//	}
//	if (p->data > data)
//	{
//		p->lchild = RemoveNode(p->lchild, data);
//	}
//	else if (p->data < data)
//	{
//		p->rchild = RemoveNode(p->rchild, data);
//	}
//	else//1.������ 0�� ���, 2.������ 1�ε� ����,������ ���� ���� 3. ������ 2�ΰ�� �� ã�Ҵٶ�� �ڵ�
//	{
//		//1.�� ��� 
//		if (p->lchild == NULL && p->rchild == NULL)
//		{
//			delete p;
//			return NULL;
//		}
//		//2�� ���
//		else if (p->lchild != NULL && p->rchild == NULL)
//		{
//			Node* lchild = p->lchild; //p�� 60
//			delete p;
//			return lchild; //70���� ��ȯ�ص��� ���־��� ������ 
//		}
//		else if (p->lchild == NULL && p->rchild != NULL) //�������� �ִ� ���, ����� ����
//		{
//			Node* rchild = p->rchild; //p�� 60
//			delete p;
//			return rchild; //70���� ��ȯ�ص��� ���־��� ������ 
//		}
//		//3���� ���,�����Ǵ� ����� ���� �ڽĵ��߿� ���� ū ����, ������ �ڽĵ� �߿� ���� ���������� �ϳ��� �÷������.
//		else //p�� �����ϰ��� �ϴ� ����� �� 70, �̹��� �������ڽ��� ���� ���� ���Ҹ� �ø�����
//		{
//			Node* np = p->rchild; //np�� p�� �����ڽĿ��� ���� ����ض� ��� ��.
//			Node* npp = p; //�� ���� np�� �θ�
//			while (np->lchild) //���� ���� ���� ã�ƾ��ϹǷ� �����ڽ��� NULL�϶����� �����°�.
//			{
//				npp = np; //�ѹ��� �̵��Ҷ����� �ٲ���.
//				np = np->lchild; //�� �������� ã��
//			}
//			p->data = np->data; //�� ���� �������� p�� �ٲ��ذ�.
//			if (p == npp) //�ѹ��̶� �̵��� �����ʾҴ�.
//			{
//				npp->rchild = np->rchild; //�̷��� �ڽ��� �������Ƿ� �����ʿ� �����ذ�.
//			}
//			else
//			{
//				npp->lchild = np->rchild;//np�� �θ� , �� np�� �����ֱ����� rchild�� ������.
//			}
//			delete np; //�����⶧���� ������
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
//	root = RemoveNode(root, 30); //�ڽ��� ������ 2���� ����
//
//	Inorder(root);
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
//void SearchNode(Node* proot, int data) //����Լ��� ����
//{
//	if (proot == NULL) //��������1 
//	{
//		cout << "����" << endl;
//		return;
//	}
//	if (proot->data == data) //��������2
//	{
//		cout << "ã�� : " << data << endl;
//		return; //��� ���⶧���� �����ϱ����� ������.
//	}
//	if (proot->data > data)
//	{
//		SearchNode(proot->lchild, data); //�������� �̵��ҽ�  ������ ���� , �ݺ����� ������� ��� ���� , �� �ڽ������״� 40�� ã������ �ǹ�
//	} //ã���� ȣ���ߴ� ó���𿡰� �ݵ�� ��ȯ������Ѵ�.
//	else
//	{
//		SearchNode(proot->rchild, data); //���������� �̵�
//	}
//}
//Node* RemoveNode(Node* root, int data) //����Լ�
//{
//	Node* p = root;
//	if (p == NULL) //��������
//	{
//		return NULL; //�����ϰ����ϴ� �����͸� ��ã������
//	}
//	if (p->data > data)
//	{
//		p->lchild = RemoveNode(p->lchild, data);
//	}
//	else if (p->data < data)
//	{
//		p->rchild = RemoveNode(p->rchild, data);
//	}
//	else//1.������ 0�� ���, 2.������ 1�ε� ����,������ ���� ���� 3. ������ 2�ΰ�� �� ã�Ҵٶ�� �ڵ�
//	{
//		//1.�� ��� 
//		if (p->lchild == NULL && p->rchild == NULL)
//		{
//			delete p;
//			return NULL;
//		}
//		//2�� ���
//		else if (p->lchild != NULL && p->rchild == NULL)
//		{
//			Node* lchild = p->lchild; //p�� 60
//			delete p;
//			return lchild; //70���� ��ȯ�ص��� ���־��� ������ 
//		}
//		else if (p->lchild == NULL && p->rchild != NULL) //�������� �ִ� ���, ����� ����
//		{
//			Node* rchild = p->rchild; //p�� 60
//			delete p;
//			return rchild; //70���� ��ȯ�ص��� ���־��� ������ 
//		}
//		//3���� ���,�����Ǵ� ����� ���� �ڽĵ��߿� ���� ū ����, ������ �ڽĵ� �߿� ���� ���������� �ϳ��� �÷������.
//		else //p�� �����ϰ��� �ϴ� ����� �� 70, �̹��� �������ڽ��� ���� ���� ���Ҹ� �ø�����
//		{
//			Node* np = p->rchild; //np�� p�� �����ڽĿ��� ���� ����ض� ��� ��.
//			Node* npp = p; //�� ���� np�� �θ�
//			while (np->lchild) //���� ���� ���� ã�ƾ��ϹǷ� �����ڽ��� NULL�϶����� �����°�.
//			{
//				npp = np; //�ѹ��� �̵��Ҷ����� �ٲ���.
//				np = np->lchild; //�� �������� ã��
//			}
//				p->data = np->data; //�� ���� �������� p�� �ٲ��ذ�.
//				if (p == npp) //�ѹ��̶� �̵��� �����ʾҴ�.
//				{
//					npp->rchild = np->rchild; //�̷��� �ڽ��� �������Ƿ� �����ʿ� �����ذ�.
//				}
//				else
//				{
//					npp->lchild = np->rchild;//np�� �θ� , �� np�� �����ֱ����� rchild�� ������.
//				}
//				delete np; //�����⶧���� ������
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
//	root = RemoveNode(root, 70); //2���� ����
//
//	Inorder(root);
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
//void SearchNode(Node* proot, int data) //����Լ��� ����
//{
//	if (proot == NULL) //��������1 
//	{
//		cout << "����" << endl;
//		return;
//	}
//	if (proot->data == data) //��������2
//	{
//		cout << "ã�� : " << data << endl;
//		return; //��� ���⶧���� �����ϱ����� ������.
//	}
//	if (proot->data > data)
//	{
//		SearchNode(proot->lchild, data); //�������� �̵��ҽ�  ������ ���� , �ݺ����� ������� ��� ���� , �� �ڽ������״� 40�� ã������ �ǹ�
//	} //ã���� ȣ���ߴ� ó���𿡰� �ݵ�� ��ȯ������Ѵ�.
//	else
//	{
//		SearchNode(proot->rchild, data); //���������� �̵�
//	}
//}
//Node* RemoveNode(Node* root, int data) //����Լ�
//{
//	Node* p = root;
//	if (p == NULL) //��������
//	{
//		return NULL; //�����ϰ����ϴ� �����͸� ��ã������
//	}
//	if (p->data > data)
//	{
//		p->lchild = RemoveNode(p->lchild, data);
//	}
//	else if (p->data < data)
//	{
//		p->rchild = RemoveNode(p->rchild, data);
//	}
//	else//1.������ 0�� ���, 2.������ 1�ε� ����,������ ���� ���� 3. ������ 2�ΰ�� 
//	{
//		//1.�� ��� 
//		if (p->lchild == NULL && p->rchild == NULL)
//		{
//			delete p;
//			return NULL;
//		}
//		//2�� ���
//		if (p->lchild != NULL && p->rchild == NULL)
//		{
//			Node* lchild = p->lchild; //p�� 60
//			delete p;
//			return lchild; //70���� ��ȯ�ص��� ���־��� ������ 
//		}
//		if (p->lchild == NULL && p->rchild != NULL) //�������� �ִ� ���, ����� ����
//		{
//			Node* rchild = p->rchild; //p�� 60
//			delete p;
//			return rchild; //70���� ��ȯ�ص��� ���־��� ������ 
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
//	root = RemoveNode(root, 60); //������ �ִµ� �������� ���� 60����
//
//	Inorder(root);
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
//void SearchNode(Node* proot, int data) //����Լ��� ����
//{
//	if (proot == NULL) //��������1 
//	{
//		cout << "����" << endl;
//		return;
//	}
//	if (proot->data == data) //��������2
//	{
//		cout << "ã�� : " << data << endl;
//		return; //��� ���⶧���� �����ϱ����� ������.
//	}
//	if (proot->data > data)
//	{
//		SearchNode(proot->lchild, data); //�������� �̵��ҽ�  ������ ���� , �ݺ����� ������� ��� ���� , �� �ڽ������״� 40�� ã������ �ǹ�
//	} //ã���� ȣ���ߴ� ó���𿡰� �ݵ�� ��ȯ������Ѵ�.
//	else
//	{
//		SearchNode(proot->rchild, data); //���������� �̵�
//	}
//}
//Node* RemoveNode(Node* root, int data) //����Լ�
//{
//	Node* p = root;
//	if (p == NULL) //��������
//	{
//		return NULL; //�����ϰ����ϴ� �����͸� ��ã������
//	}
//	if (p->data > data)
//	{
//		p->lchild= RemoveNode(p->lchild,data);
//	}
//	else if (p->data < data)
//	{
//		p->rchild= RemoveNode(p->rchild,data);
//	}
//	else//1.������ 0�� ���, 2.������ 1�ε� ����,������ ���� ���� 3. ������ 2�ΰ�� 
//	{
//		//1.�� ��� �� �ܸ���� ����
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
//void SearchNode(Node* proot, int data) //����Լ��� ����
//{
//	if (proot == NULL) //��������1 
//	{
//		cout << "����" << endl;
//		return;
//	}
//	if (proot->data == data) //��������2
//	{
//		cout << "ã�� : " << data << endl;
//		return; //��� ���⶧���� �����ϱ����� ������.
//	}
//	if (proot->data > data)
//	{
//		SearchNode(proot->lchild, data); //�������� �̵��ҽ�  ������ ���� , �ݺ����� ������� ��� ���� , �� �ڽ������״� 40�� ã������ �ǹ�
//	} //ã���� ȣ���ߴ� ó���𿡰� �ݵ�� ��ȯ������Ѵ�.
//	else
//	{
//		SearchNode(proot->rchild, data); //���������� �̵�
//	}
//}
//void RemoveNode(Node* root, int data) //�ܸ� ��� ����µ� �ʹ� ������.
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
//			delete p;//���� �ڵ�
//			if (pp->data > data)
//			{
//				pp->lchild = NULL; //�����ϰ��� NULL�� ���������Ѵ�.
//			}
//			else
//			{
//				pp->rchild = NULL;
//			}
//			return;
//		}
//		pp = p;//pp�� p�� �̵�
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
//void SearchNode(Node* proot, int data) //����Լ��� ����
//{
//	if (proot == NULL) //��������1 
//	{
//		cout << "����" << endl;
//		return;
//	}
//	if (proot->data == data) //��������2
//	{
//		cout << "ã�� : " <<data<< endl;
//		return; //��� ���⶧���� �����ϱ����� ������.
//	}
//	if (proot->data > data)
//	{
//		SearchNode(proot->lchild, data); //�������� �̵��ҽ�  ������ ���� , �ݺ����� ������� ��� ���� , �� �ڽ������״� 40�� ã������ �ǹ�
//	} //ã���� ȣ���ߴ� ó���𿡰� �ݵ�� ��ȯ������Ѵ�.
//	else
//	{
//		SearchNode(proot->rchild, data); //���������� �̵�
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
//			cout << "����" << p->data << endl;//���� �ڵ�
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
//	Destroy(root);//�� ��������� new�� ���Ӿ��⶧���� ���������. Ž���ϴ� ������ ��º��� ���������.
//	system("pause");
//}



//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//#include <cstring>
//using namespace std;
//void PrintString(const char* s,char* buf) //s�� NULL�����̸� ����
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
//int main() //������
//{
//	char buf[100] = {0};
//	PrintString("ABCDEF",buf); //�������� ��
//	cout << buf << endl;
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//#include <cstring>
//using namespace std;
//void PrintString(const char* s) //s�� NULL�����̸� ����
//{
//	if (*s) //NULL���ڰ� �ƴϸ� �����ض�
//	{
//		int size = strlen(s);
//		cout << "+" << *s << ":" << size - 1 << endl;
//		PrintString(s + 1);
//		cout << "-" << *s << ":" << size - 1 << endl;
//	}
//}
//int main() //���ڸ� ����ϰ� �ʹ�.
//{
//	PrintString("ABCDEF");
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//#include <cstring>
//using namespace std;
//void PrintString(const char* s) //s�� NULL�����̸� ����
//{
//	if (*s) //NULL���ڰ� �ƴϸ� �����ض�
//	{
//		int size = strlen(s);
//		cout << "+" << s << ":" << size - 1 << endl; 
//		PrintString(s + 1); 
//		cout << "-" << s << ":" << size - 1 << endl;
//	}
//}
//int main() //last�� ���ְ� ���ڿ��θ�
//{
//	PrintString("ABCDEF");
//	system("pause");
//}


//#include <iostream> 
//#include <cstdlib> 
//#include <Queue>
//#include <cstring>
//using namespace std;
//void PrintString(const char* s, int last) //s�� NULL�����̸� ����
//{
//	if (last >= 0) //0���� �̻��̸� �����ض�. �� �������ǵ� �ɼ�����
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
//void PrintString(const char* s, int last) //s�� NULL�����̸� ����
//{
//	if (last<0) //���������� ���ڿ��� ������ �ٲ��ذ� ��
//	{
//		return; //������
//	}
//	cout << "+" << s << ":" << last << endl; //s�� A�� �����ּ�
//	PrintString(s + 1, last - 1); //+1�Ǵϱ� B�� �����ּ� // ���� ���� ������ �ٽ� ���ƿͼ� �Ʒ����� ����Ѵ�.
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
//void PrintString(const char* s, int last) //s�� NULL�����̸� ����
//{
//	if (*s == '\0') //*S�� NULL���ڸ� 
//	{
//		return; //������
//	}
//	cout << "+" << s << ":" << last << endl; //s�� A�� �����ּ�
//	PrintString(s + 1, last - 1); //+1�Ǵϱ� B�� �����ּ� // ���� ���� ������ �ٽ� ���ƿͼ� �Ʒ����� ����Ѵ�.
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
//void PrintString(const char* s, int last) //s�� NULL�����̸� ����
//{
//	if (*s == '\0') //*S�� NULL���ڳ�
//	{
//		return; //������
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
//void SearchNode(Node* proot, int data) //����Լ��� ����
//{
//	if (proot == NULL) //��������1 
//	{
//		cout << "����" << endl;
//		return;
//	}
//	if (proot->data == data) //��������2
//	{
//		cout << "ã�� : " <<data<< endl;
//		return; //��� ���⶧���� �����ϱ����� ������.
//	}
//	if (proot->data > data)
//	{
//		SearchNode(proot->lchild, data); //�������� �̵��ҽ�  ������ ���� , �ݺ����� ������� ��� ���� , �� �ڽ������״� 40�� ã������ �ǹ�
//	} //ã���� ȣ���ߴ� ó���𿡰� �ݵ�� ��ȯ������Ѵ�.
//	else
//	{
//		SearchNode(proot->rchild, data); //���������� �̵�
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
//	SearchNode(root, 40); //return���� �Ȱ�������.
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
//Node* SearchNode(Node* proot, int data) //����Լ��� ����
//{
//	if (proot == NULL) //��������1 
//	{
//		return NULL;
//	}
//	if (proot->data == data) //��������2
//	{
//		return proot;
//	}
//	if (proot->data > data)
//	{
//		proot= SearchNode(proot->lchild, data); //�������� �̵��ҽ�  ������ ���� , �ݺ����� ������� ��� ���� , �� �ڽ������״� 40�� ã������ �ǹ�
//	} //ã���� ȣ���ߴ� ó���𿡰� �ݵ�� ��ȯ������Ѵ�.
//	else
//	{
//		proot =SearchNode(proot->rchild, data); //���������� �̵�
//	}
//	cout << proot->data << " ";
//	return proot;  //����ϸ� ���� �ö󰡸鼭 ���Ŀ� ��ΰ� ���δ�. 
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
//	Node* p = SearchNode(root, 40); //�˻�
//	if (NULL != p)
//	{
//		cout << p->data << endl;
//	}
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
//Node* SearchNode(Node* proot, int data) //����Լ��� ����
//{
//	if (proot == NULL) //��������1 
//	{
//		return NULL;
//	}
//	if (proot->data == data) //��������2
//	{
//		return proot;
//	}
//	if (proot->data > data)
//	{
//		return SearchNode(proot->lchild, data); //�������� �̵��ҽ�  ������ ���� , �ݺ����� ������� ��� ���� , �� �ڽ������״� 40�� ã������ �ǹ�
//	} //ã���� ȣ���ߴ� ó���𿡰� �ݵ�� ��ȯ������Ѵ�.
//	else
//	{
//		return SearchNode(proot->rchild, data); //���������� �̵�
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
//	Node* p = SearchNode(root, 40); //�˻�
//	if (NULL != p)
//	{
//		cout << p->data << endl;
//	}
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
//Node* SearchNode(Node* proot, int data)
//{
//	if (proot == NULL)
//	{
//		return NULL;
//	}
//	while (proot) //proot�� ���� �ƴѰ�� , �̵��ڵ�, 
//	{
//		if (proot->data == data) //pproot->data�� �����ϴ� ��� ���ҿ� ���ؼ� ��� ��.
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
//	Node* p = SearchNode(root, 40); //�˻�
//	if (NULL != p)
//	{
//		cout << p->data << endl;
//	}
//
//	Destroy(root);//�� ��������� new�� ���Ӿ��⶧���� ���������. Ž���ϴ� ������ ��º��� ���������.
//	system("pause");
//}