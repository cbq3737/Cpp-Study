//#include <iostream>  
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//protected:
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{
//		cout << "Person()" << endl;
//	}
//	virtual void Print()const //������ �޼ҵ忣 ������� �ʿ��ϰ� ������̸� �������ε�, ������� �ƴϸ� �������ε�
//	{
//		cout << "name:" << name << ',' << "age:" << age << endl;
//	}
//	virtual ~Person() 
//	{
//		cout << "~Person()" << endl;
//	}
//};
//class Student :public Person
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g)
//	{
//		cout << "student()" << endl;
//	}
//	~Student()
//	{
//		cout << "~student()" << endl;
//	}
//	void print()const
//	{
//		cout << "name:" << name << "age: " << age << "grade:" << grade << endl;
//	}
//};
//class Professor :public Person
//{
//	string position;
//public:
//	Professor(const string& n = "", int a = 0, const string&  pos = 0) :Person(n, a), position(pos)
//	{
//		cout << "Professor()" << endl;
//	}
//	~Professor()
//	{
//		cout << "~Professor()" << endl;
//	}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "position:" << position << endl;
//	}
//};
//void main()
//{
//	{
//		Person* p = NULL;
//		p = new Student("�̸���", 21, 2);
//		(*p).Print(); //������ �ڵ� , 
//		delete p;
//
//		p = new Professor("����", 50, "����");
//		(*p).Print();
//		delete p;
//	}
//	system("pause");
//}


//#include <iostream>  
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//protected:
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{
//		cout << "Person()" << endl;
//	}
//	virtual void Print()const //������ �޼ҵ�
//	{
//		cout << "name:" << name << ',' << "age:" << age << endl;
//	}
//	virtual ~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//};
//class Student :public Person
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g)
//	{
//		cout << "student()" << endl;
//	}
//	~Student()
//	{
//		cout << "~student()" << endl;
//	}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "grade:" << grade << endl;
//	}
//};
//class Professor :public Person
//{
//	string position;
//public:
//	Professor(const string& n = "", int a = 0, const string&  pos = 0) :Person(n, a), position(pos)
//	{
//		cout << "Professor()" << endl;
//	}
//	~Professor()
//	{
//		cout << "~Professor()" << endl;
//	}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "position:" << position << endl;
//	}
//};
//void main()
//{
//	{
//		Person* p = new Student("�̸���", 21, 2);
//		(*p).Print(); //������ �ڵ� , 
//		delete p; 
//
//		p = new Professor("����", 50, "����");
//		(*p).Print();
//		delete p;
//	}
//	system("pause");
//}


//#include <iostream>  
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//protected:
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{
//		cout << "Person()" << endl;
//	}
//	virtual void Print()const //������ �޼ҵ�
//	{
//		cout << "name:" << name << ',' << "age:" << age << endl;
//	}
//	virtual ~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//};
//class Student :public Person
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g)
//	{
//		cout << "student()" << endl;
//	}
//	~Student()
//	{
//		cout << "~student()" << endl;
//	}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "grade:" << grade << endl;
//	}
//};
//class Professor :public Person
//{
//	string position;
//public:
//	Professor(const string& n = "", int a = 0, const string&  pos = 0) :Person(n, a), position(pos)
//	{
//		cout << "Professor()" << endl;
//	}
//	~Professor()
//	{
//		cout << "~Professor()" << endl;
//	}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "position:" << position << endl;
//	}
//};
//void main()
//{
//	{
//		Person* p = new Student("�̸���", 21, 2);  //upcasting,�ڽ���Ÿ���� �θ�Ŭ������Ÿ������ �����
//		(*p).Print();
//
//		delete p; //�Ҹ��ڸ� ȣ���ϴ� ��ɰ� �޸𸮸� �����ϴ� ����� ����. �� p�� Ÿ���� �Ҹ��ڸ� ȣ����. �׷��� virtual�� person�Ҹ��ڿ� �����ش�.�׷����� student�Ҹ��ڰ� ȣ���̵�. �θ�Ÿ������ ���� ��� �Ҹ��ڴ� ������ ����Ҹ��ڿ��� �Ѵ�. 
//	}
//	system("pause");
//}



//#include <iostream>  
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//protected:
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{
//		cout << "Person()" << endl;
//	}
//	virtual void Print()const //������ �޼ҵ�
//	{
//		cout << "name:" << name << ',' << "age:" << age << endl;
//	}
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//};
//class Student :public Person
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g)
//	{
//		cout << "student()" << endl;
//	}
//	~Student()
//	{
//		cout << "~student()" << endl;
//	}
//	void print()const
//	{
//		cout << "name:" << name << "age: " << age << "grade:" << grade << endl;
//	}
//};
//class Professor :public Person
//{
//	string position;
//public:
//	Professor(const string& n = "", int a = 0, const string&  pos = 0) :Person(n, a), position(pos)
//	{
//		cout << "Professor()" << endl;
//	}
//	~Professor()
//	{
//		cout << "~Professor()" << endl;
//	}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "position:" << position << endl;
//	}
//};
//void main()
//{
//	{
//		Student s1("�̸���", 21, 2);
//		Professor pf1("����", 50, "����");
//		Person* p = &s1;
//		p->Print();
//	}
//	system("pause");
//}





//#include <iostream>  
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//protected:
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{
//		cout << "Person()" << endl;
//	}
//	virtual void Print()const //������ �޼ҵ�
//	{
//		cout << "name:" << name << ',' << "age:" << age << endl;
//	}
//	~Person()
//	{
//
//	}
//};
//class Student :public Person
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g)
//	{
//		cout << "student()" << endl;
//	}
//	~Student()
//	{
//		cout << "~~~~~~student()" << endl;
//	}
//	void print()const
//	{
//		cout << "name:" << name << "age: " << age << "grade:" << grade << endl;
//	}
//};
//class Professor :public Person
//{
//	string position;
//public:
//	Professor(const string& n = "", int a = 0, const string&  pos = 0) :Person(n, a), position(pos)
//	{
//		cout << "Professor()" << endl;
//	}
//	~Professor()
//	{
//		cout << "~~~~Professor()" << endl;
//	}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "position:" << position << endl;
//	}
//};
//void main()
//{
//	Student s1("�̸���", 21, 2);
//	Professor pf1("����", 50, "����");
//	Person* p = NULL;
//
//	int input;
//	cin >> input;
//	if (input == 0)
//	{
//		p = &s1;
//	}
//	else
//	{
//		p = &pf1;
//	}
//	(*p).Print();
//	system("pause");
//}


//#include <iostream>  
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//protected:
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{
//		cout << "Persona()" << endl;
//	}
//	virtual void Print()const //������ �޼ҵ�
//	{
//		cout << "name:" << name << ',' << "age:" << age << endl;
//	}
//	~Person()
//	{
//		cout << "~~~PErson()" << endl;
//	}
//};
//class Student :public Person
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g)
//	{
//		cout << "student()" << endl;
//	}
//	~Student()
//	{
//		cout << "~~~student()" << endl;
//	}
//	void print()const 
//	{
//		cout << "name:" << name << "age: " << age << "grade:" << grade << endl;
//	}
//};
//class Professor :public Person
//{
//	string position;
//public:
//	Professor(const string& n = "", int a = 0, const string&  pos = 0) :Person(n, a), position(pos)
//	{
//		cout << "Professor()" << endl;
//	}
//	~Professor()
//	{
//		cout << "~~~~~Professor()" << endl;
//	}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "position:" << position << endl;
//	}
//};
//void main()
//{
//	{
//		Student s1("�̸���", 21, 2);
//		Professor pf1("����", 50, "����");
//
//		Person* p = &pf1; // &s1,&pf1 ���� �ϳ�, �� ������ upcasting 
//		(*p).Print(); //���� ����,50�� ����̵Ǿ���ϴµ� Person�� virtual�� �������Ƿ� �� ��°���
//	}
//	system("pause");
//}



//#include <iostream>  //function overriding �Լ� ������
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//protected:
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{
//
//	}
//	virtual void Print()const //������ �޼ҵ�
//	{
//		cout << "name:" << name << ',' << "age:" << age << endl;
//	}
//	~Person()
//	{
//
//	}
//};
//class Student :public Person
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g)
//	{
//		cout << "Student()" << endl;
//	}
//	~Student()
//	{
//		cout << "~~~~~~Student()" << endl;
//	}
//	void Print()const 
//	{
//		cout << "name:" << name << "age: " << age << "grade:" << grade << endl;
//	}
//};
//void main()
//{
//	Person p1("ȫ�浿");
//	Student s1("�̸���", 21, 2);
//
//	Person& r = s1;  //�������� �޼ҵ�� ��Ȯ�� Ÿ���� �޼ҵ�� ȣ��Ǳ����ؼ� virual�� �����ǰ� �Ǿ����.
//	Person* p = &s1;  
//
//	r.Print(); 
//	(*p).Print(); 
//	system("pause");
//}


//#include <iostream>  //function overriding �Լ� ������
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//protected:
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{
//
//	}
//	void Print()const
//	{
//		cout << "name:" << name << ',' << "age:" << age << endl;
//	}
//	~Person()
//	{
//
//	}
//};
//class Student :public Person
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g)
//	{
//		cout << "Student()" << endl;
//	}
//	~Student()
//	{
//		cout << "~~~~~~Student()" << endl;
//	}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "grade:" << grade << endl;
//	}
//};
//void main()
//{
//	Person p1("ȫ�浿");
//	Student s1("�̸���", 21, 2);
//
//	Person& r = s1;
//	Person* p = &s1;  //personŸ���� �ܼ��� ǥ���̰����ϱ� ����
//
//	r.Print(); //s1���� ����϶�� �޼����� �����ذ�.
//	(*p).Print(); // r,p�� ��¥�δ� s1��ü�ε� Ÿ�Ը� personŸ���ΰ�. 
//	//Ÿ���� person�̹Ƿ� person���� ����ع���.
//	system("pause");
//}



//#include <iostream>  //function overriding �Լ� ������
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//protected:
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{
//
//	}
//	void Print()const
//	{
//		cout << "name:" << name << ',' << "age:" << age << endl;
//	}
//	~Person()
//	{
//
//	}
//};
//class Student :public Person
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g)
//	{
//		cout << "Student()" << endl;
//	}
//	~Student()   
//	{
//		cout << "~~~~~~Student()" << endl;
//	}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "grade:" << grade << endl;
//	}
//};
//void main()
//{
//	Person p1("ȫ�浿");
//	Student s1("�̸���", 21, 2);
//
//	s1.Print(); //s1�� Print�޼ҵ带 �ּ�ó�����ָ� �θ��� Print�޼ҵ尡 ��µȴ�.�� �����ǰ� ���� ������.
//
//	Person& r = s1; 
//	Person* p = &s1;
//	system("pause");
//}

//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//protected:  
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{}
//	void Print()const
//	{
//		cout << "name:" << name << ',' << "age:" << age << endl;
//	}
//};
//class Student :public Person
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) 
//	{
//		cout << "Student()" << endl; 
//	}
//	~Student()   //������ �Ҹ��ڷ� ���ؼ� ��������� �ڽ��� ���� �������.
//	{
//		cout << "~~~~~~Student()" << endl;
//	}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "grade:" << grade << endl;
//	}
//};
//void main()  
//{
//	Person p1("ȫ�浿");
//	Student s1("�̸���", 21, 2);
//	//Person* p1 = new Student("�̸���",21,2);//��ĳ���� Person�� Student�� �ٲ��
//	////�ڽ�Ÿ������ �θ����� �ٲٴ� ���
//	//p1 = s1; //���������� ���������� �ȵȴ�.
//	Person& r = s1; //���� s1�� r�� ����Ų��.
//	Person* p = &s1;//���� s1�� �ּҸ� �����Ͱ� ����Ų��.
//	system("pause");
//}


//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//protected: //��ӱ��������� ��밡���ϰ��Ѵ�.��� ��,�������ָ� �ڽ�Ŭ�������� name,age�� ����������Ѵ�. 
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{
//		cout << "Person()" << endl;
//	}
//	void Print()const
//	{
//		cout << "name:" << name << ',' << "age:" << age << endl;
//	}
//	~Person()
//	{
//		cout << "~~~~~~Person()" << endl;
//	}
//};
//class Student :public Person
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) //�θ𿡰� �ʱ�ȭ�� ��Ź��. �θ������ ȣ��, ������ �޵�� �θ𲨸� ���� �ʱ�ȭ���Ŀ� ������ �ʱ�ȭ��Ŵ
//	{
//		cout << "Student()" << endl; 
//	}
//	~Student()   
//	{
//		cout << "~~~~~~Student()" << endl;
//	}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "grade:" << grade << endl;
//	}
//};
//void main()  //�ڽ�Ÿ���� �θ�Ÿ���̴�. �� p1 = s1�� ���� ����. �ڽ��� �θ�ٶ�� �ٲٴ� �۾��� upcasting�̶�� �θ� �� �ڽ��� ������ �θ����������� �ҷ�����.�Ʒ����� ���ĺ�ȯ�� downcasting�ε� �θ��������� �θ��°� �ƴ϶� �ڱ��ڽ��� �������� �ٽ� �θ��°��� �ǹ�. �ڽ�Ÿ�Ե��� ����Ÿ������ ��ȯ�ɼ������� ����Ÿ�Կ��� �ٽ� �ڽ�Ÿ������ ���� �ݵ�� �ڽ��� �������� �����Ѵ�.
//{
//	
//	Person p1("ȫ�浿");
//	p1.Print();
//
//    Student s1("�̸���", 21, 2);
//	s1.Print();
//	
//	system("pause");
//}


//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//protected: //��ӱ��������� ��밡���ϰ��Ѵ�.��� ��,�������ָ� �ڽ�Ŭ�������� name,age�� ����������Ѵ�. 
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{
//		cout << "Person()" << endl;
//	}
//	void Print()const
//	{
//		cout << "name:" << name << ',' << "age:" << age << endl;
//	}
//	~Person()
//	{
//		cout << "~~~~~~Person()" << endl;
//	}
//};
//class Student :public Person 
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) //�θ𿡰� �ʱ�ȭ�� ��Ź��. �θ������ ȣ��, ������ �޵�� �θ𲨸� ���� �ʱ�ȭ���Ŀ� ������ �ʱ�ȭ��Ŵ
//	{
//		cout << "Student()" << endl; //��������� Student ���� �θ�Ŭ������ Person�� ���� ȣ���.
//	}
//	~Student()   //������ �Ҹ��ڷ� ���ؼ� ��������� �ڽ��� ���� �������.
//	{
//		cout << "~~~~~~Student()" << endl;
//	}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "grade:" << grade << endl;
//	}
//};
//void main()
//{
//	Person p1("ȫ�浿");
//	p1.Print();
//	{
//		Student s1("�̸���", 21, 2);
//		s1.Print();
//	}
//	system("pause");
//}


//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//protected: //��ӱ��������� ��밡���ϰ��Ѵ�.��� ��,�������ָ� �ڽ�Ŭ�������� name,age�� ����������Ѵ�. 
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{}
//	void Print()const
//	{
//		cout << "name:" << name << ',' << "age:" << age << endl;
//	}
//};
//class Student :public Person //Person�� �����޴� Student�� ����ϰڴ�.
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) //�θ𿡰� �ʱ�ȭ�� ��Ź��. �θ������ ȣ��, ������ �޵�� �θ𲨸� ���� �ʱ�ȭ���Ŀ� ������ �ʱ�ȭ��Ŵ
//	{}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "grade:" << grade << endl;
//	}
//};
//void main()
//{
//	Person p1("ȫ�浿");
//	p1.Print();
//
//	Student s1("�̸���", 21, 2);
//	s1.Print();
//	system("pause");
//}


//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//protected:
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{}
//	void Print()const
//	{
//		cout << "name:" << name << ',' << "age:" << age << endl;
//	}
//};
//class Student :public Person //Person�� �����޴� Student�� ����ϰڴ�.
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n,a), grade(g) //�θ𿡰� �ʱ�ȭ�� ��Ź��. �θ������ ȣ��, ������ �޵�� �θ𲨸� ���� �ʱ�ȭ���Ŀ� ������ �ʱ�ȭ��Ŵ
//	{}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "grade:" << grade << endl;
//	}
//};
//void main()
//{
//	Person p1("ȫ�浿",28);
//	p1.Print();
//
//	Student s1("�̸���", 21, 2);
//	s1.Print();
//	system("pause");
//}



//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{}
//	void Print()const
//	{
//		cout << "name:" << name << ',' << "age:" << age << endl;
//	}
//};
//class Student
//{
//	string name;
//	int age;
//	int grade;
//public :
//	Student(const string& n="",int a =0, int g =0):name(n),age(a),grade(g)
//	{}
//		void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "grade:" << grade << endl;
//	}
//};
//void main()
//{
//	Person p1("ȫ�浿");
//	p1.Print();
//
//	Student s1("�̸���",21, 2);
//	s1.Print();
//	system("pause");
//}



//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{}
//	void Print()const
//	{
//		cout << "name:" << name << ',' << "age:" << age << endl;
//	}
//	const string& GetName()const  //Get�� �б����� �������̽� �� getter
//	{
//		return name;
//	}
//	int GetAge() const
//	{
//		return age;
//	}
//	void SetName(const string& n)  //Set�� ��������, �� �����ϱ� ���� �������̽�, �� setter
//	{
//		name = n;
//	}
//	void SetAge(int a)
//	{
//		age = a;
//	}
//};
//void main()
//{
//	Person p1("ȫ�浿", 25);
//	p1.Print();
//
//	p1.SetName("����"); //�̸��� �ٲ۴�.
//	p1.SetAge(30);
//	cout << "name:" << p1.GetName() << endl;
//	cout << "age:" << p1.GetAge() << endl;
//	system("pause");
//}


//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) : name(n), age(a)
//	{}
//	void Print()const
//	{
//		cout << "name:" << name << ',' << "age:" << age << endl;
//	}
//	const string& GetName()const
//	{
//		return name;
//	}
//	int GetAge() const
//	{
//		return age;
//	}
//	void SetName(const string& n)
//	{
//		name = n;
//	}
//};
//void main()
//{
//	Person p1("ȫ�浿", 25);
//	p1.Print();
//
//	p1.SetName("����"); //�̸��� �ٲ۴�. 
//	cout << "name:" << p1.GetName() << endl;
//	cout << "age:" << p1.GetAge() << endl;
//	system("pause");
//}



//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//	string name;
//	int age;
//public: 
//	Person(const string& n="",int a=0) : name(n),age(a)
//	{}
//	void Print()const
//	{
//		cout << "name:" << name << ',' << "age:" << age << endl;
//	}
//	const string& GetName()const
//	{
//		return name;
//	}
//	int GetAge() const
//	{
//		return age;
//	}
//};
//void main()
//{
//	Person p1("ȫ�浿", 25);
//	p1.Print();
//	cout << "name:" << p1.GetName() << endl;
//	cout << "age:" << p1.GetAge() << endl;
//	system("pause");
//}



//#include<iostream>
//#include<string>
//#include<cstdlib>
//using namespace std;
//class Person
//{
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a)
//	{}
//	void Print()const
//	{
//		cout << "name:" << name << ',' << "age:" << age << endl;
//	}
//};
//void main()
//{
//	Person p1("ȫ�浿", 25);
//
//	p1.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstring>
//#include <cstdlib>
//using namespace std;
//class String
//{
//	char* buf;
//public:
//	String(const char* s = "")
//	{
//		buf = new char[strlen(s) + 1];
//		strcpy_s(buf, strlen(s) + 1, s);
//	}
//	const char* c_str()const
//	{
//		return buf;
//	}
//	void assign(const char* s)
//	{
//		delete[] buf;
//		buf = new char[strlen(s) + 1];
//		strcpy_s(buf, strlen(s) + 1, s);
//
//	}
//	void append(const char* s)
//	{
//		char* t = new char[strlen(buf) + strlen(s) + 1];
//		strcpy_s(t, strlen(buf) + 1, buf);
//		strcat_s(t, strlen(buf) + strlen(s) + 1, s);
//		delete[] buf;
//		buf = t;
//	}
//	int size()const
//	{
//		return strlen(buf);
//	}
//	int compare(const  char* s)const
//	{
//		return strcmp(buf,s);
//	}
//};
//void main()
//{
//	String s("Hello");
//	cout << s.c_str() << endl;
//
//	s.assign("Hi");
//	cout << s.c_str() << endl;
//
//	s.append("abcd");
//	cout << s.c_str() << endl;
//
//	cout << s.size() << endl;
//
//	cout << s.compare("Hiabcd") << endl;
//	system("pause");
//}



//#include <iostream>
//#include <cstring>
//#include <cstdlib>
//using namespace std;
//class String
//{
//	char* buf;
//public:
//	String(const char* s = "")
//	{
//		buf = new char[strlen(s) + 1];
//		strcpy_s(buf, strlen(s) + 1, s);
//	}
//	const char* c_str()const
//	{
//		return buf;
//	}
//	void assign(const char* s) //�ٲ��ֱ�
//	{
//		delete[] buf;
//		buf = new char[strlen(s) + 1];
//		strcpy_s(buf, strlen(s) + 1, s);
//
//	}
//	void append(const char* s) //�̾������
//	{
//		char* t = new char[strlen(buf) + strlen(s) + 1]; 
//			strcpy_s(t, strlen(buf) + 1, buf);
//			strcat_s(t, strlen(buf) + strlen(s) + 1, s);  //buf�� hi���ִ� ���� /�̾������
//			delete[] buf;  //buf���ִ� ���ڿ��� ����ؾ��ϱ� ������ �տ��ٰ� ������ �ȵǰ� �̹� �۾��� ������ ��������Ѵ�.
//			buf = t;
//	}
//	int size()const
//	{
//		return 0;
//	}
//	int compare(const  char* s)const
//	{
//		return 0;
//	}
//};
//void main()
//{
//	String s("Hello");
//	cout << s.c_str() << endl;
//
//	s.assign("Hi");
//	cout << s.c_str() << endl;
//
//	s.append("abcd");
//	cout << s.c_str() << endl;
//
//	cout << s.size() << endl;
//
//	cout << s.compare("Hiabcd") << endl;
//	system("pause");
//}


//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//class String
//{
//	char* buf;
//public:
//	String(const char* s = "")
//	{
//		buf = new char[strlen(s) + 1];
//		strcpy_s(buf, strlen(s) + 1, s);
//	}
//	const char* c_str()const
//	{
//		return buf;
//	}
//	void assign(const char* s)
//	{}
//	void append(const char* s)
//	{}
//	int size()const
//	{
//		return 0;
//	}
//	int compare(const  char* s)const
//	{
//		return 0;
//	}
//};
//void main()
//{
//	String s("Hello"); 
//	cout << s.c_str() << endl;  
//
//	s.assign("Hi"); 
//	cout << s.c_str() << endl;
//
//	s.append("abcd");
//	cout << s.c_str() << endl;
//
//	cout << s.size() << endl; 
//
//	cout << s.compare("Hiabcd") << endl;  
//	system("pause");
//}

//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//class String
//{
// public  :
//	String(const char* s = "")
//	{
//	}
//	const char* c_str()const
//	{
//		return "";
//	}
//	void assign(const char* s)
//	{}
//	void append(const char* s)
//	{}
//	int size()const
//	{
//		return 0;
//	}
//	int compare(const  char* s)const
//	{
//		return 0;
//	}
//};
//void main()
//{
//	String s("Hello");
//	cout << s.c_str() << endl; //c��Ÿ���� ���ڿ��� ���.�� �����ּҸ� �޶�¶�. ���ڿ��� ȣ���ϴ� �Լ�:c_str�� ���� s�� ���� �ȵ�.
//
//	s.assign("Hi"); //hi�� �ٲ��.
//	cout << s.c_str() << endl;
//
//	s.append("abcd");//���ڿ��� ������ 
//	cout << s.c_str() << endl;
//
//	cout << s.size() << endl; //����� ũ��� ���ض�
//
//	cout << s.compare("Hiabcd") << endl; //���� ������ 0 �տ��� ũ�� 1 �ڿ��� ���ڿ��� ũ�� -1�� ���´�. 
//	system("pause");
//}


//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//void main()
//{
//	string s("Hello");
//	cout << s.c_str() << endl; //c��Ÿ���� ���ڿ��� ���.�� �����ּҸ� �޶�¶�.
//
//	s.assign("Hi"); //hi�� �ٲ��.
//	cout << s.c_str() << endl;
//
//	s.append("abcd");//���ڿ��� ������ 
//	cout << s.c_str() << endl;
//
//	cout << s.size() << endl; //����� ũ��� ���ض�
//
//	cout << s.compare("Hiabcd") << endl; //���� ������ 0 �տ��� ũ�� 1 �ڿ��� ���ڿ��� ũ�� -1�� ���´�. 
//	system("pause");
//}


//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//void main()
//{
//	string s("hello");
//cout << s << endl;
//
//s.assign("hi"); //hi�� �ٲ��.
//cout << s << endl;
//
//s.append("abcd");//���ڿ��� ������ 
//cout << s << endl;
//
//cout << s.size() << endl; //����� ũ��� ���ض�
//
//cout << s.compare("hiabcd") << endl; //���� ������ 0 �տ��� ũ�� 1 �ڿ��� ���ڿ��� ũ�� -1�� ���´�. 
//system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Array  //�ϴ� ������ �����ϴ� array��� �����ϰ� �ۼ�
//{
//	int* buf; 
//	int size;
//public:
//	//������
//	Array() :size(0) //size�� 0���� �ʱ�ȭ 
//	{
//		buf = new int[100];  //�޸���������� �������.
//	}
//	//���������
//	Array(const Array& arg) :size(arg.size)
//	{
//		buf = new int[100];
//		int i;
//		for (i = 0; i < size;  ++i)
//		{
//			buf[i] = arg.buf[i];
//		}
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(int data)
//	{
//		buf[size++] = data;
//	}
//	int Size()const
//	{
//		return size;
//	}
//	int at(int index)const
//	{
//		return buf[index];
//	}
//};
//int main()
//{
//	Array arr;
//
//	arr.Add(100);
//	arr.Add(200);
//	arr.Add(300);
//	arr.Add(400);
//	arr.Add(500);
//	int i;
//	for (i = 0; i < arr.Size(); ++i)
//	{
//		cout << arr.at(i) << endl;
//	}
//	Array arr2(arr); //��������ڸ� �������Ѵ�.
//	for (i = 0; i < arr2.Size(); ++i)
//	{
//		cout << arr2.at(i) << endl;
//	}
//	system("pause");
//}
