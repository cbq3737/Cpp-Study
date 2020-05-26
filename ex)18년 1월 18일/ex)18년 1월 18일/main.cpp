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
//	virtual void Print()const //재정의 메소드엔 버츄얼이 필요하고 버츄얼이면 동적바인딩, 버츄얼이 아니면 정적바인딩
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
//		p = new Student("이몽룡", 21, 2);
//		(*p).Print(); //다형성 코드 , 
//		delete p;
//
//		p = new Professor("장길산", 50, "교수");
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
//	virtual void Print()const //재정의 메소드
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
//		Person* p = new Student("이몽룡", 21, 2);
//		(*p).Print(); //다형성 코드 , 
//		delete p; 
//
//		p = new Professor("장길산", 50, "교수");
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
//	virtual void Print()const //재정의 메소드
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
//		Person* p = new Student("이몽룡", 21, 2);  //upcasting,자신의타입을 부모클래스의타입으로 사용함
//		(*p).Print();
//
//		delete p; //소멸자를 호출하는 기능과 메모리를 제거하는 기능이 있음. 즉 p의 타입의 소멸자를 호출함. 그래서 virtual을 person소멸자에 붙혀준다.그래야지 student소멸자가 호출이됨. 부모타입으로 사용될 모든 소멸자는 무조건 가상소멸자여야 한다. 
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
//	virtual void Print()const //재정의 메소드
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
//		Student s1("이몽룡", 21, 2);
//		Professor pf1("장길산", 50, "교수");
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
//	virtual void Print()const //재정의 메소드
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
//	Student s1("이몽룡", 21, 2);
//	Professor pf1("장길산", 50, "교수");
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
//	virtual void Print()const //재정의 메소드
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
//		Student s1("이몽룡", 21, 2);
//		Professor pf1("장길산", 50, "교수");
//
//		Person* p = &pf1; // &s1,&pf1 둘중 하나, 이 과정이 upcasting 
//		(*p).Print(); //원랜 장길산,50만 출력이되어야하는데 Person에 virtual을 붙혓으므로 다 출력가능
//	}
//	system("pause");
//}



//#include <iostream>  //function overriding 함수 재정의
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
//	virtual void Print()const //재정의 메소드
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
//	Person p1("홍길동");
//	Student s1("이몽룡", 21, 2);
//
//	Person& r = s1;  //재정의한 메소드는 정확한 타입의 메소드로 호출되기위해선 virual로 재정의가 되어야함.
//	Person* p = &s1;  
//
//	r.Print(); 
//	(*p).Print(); 
//	system("pause");
//}


//#include <iostream>  //function overriding 함수 재정의
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
//	Person p1("홍길동");
//	Student s1("이몽룡", 21, 2);
//
//	Person& r = s1;
//	Person* p = &s1;  //person타입은 단순히 표현이가능하기 때문
//
//	r.Print(); //s1에게 출력하라고 메세지를 보내준것.
//	(*p).Print(); // r,p는 진짜로는 s1객체인데 타입만 person타입인것. 
//	//타입이 person이므로 person것을 출력해버림.
//	system("pause");
//}



//#include <iostream>  //function overriding 함수 재정의
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
//	Person p1("홍길동");
//	Student s1("이몽룡", 21, 2);
//
//	s1.Print(); //s1의 Print메소드를 주석처리해주면 부모의 Print메소드가 출력된다.즉 재정의가 되지 않은것.
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
//	~Student()   //하지만 소멸자로 인해서 사라질때는 자식이 먼저 사라진다.
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
//	Person p1("홍길동");
//	Student s1("이몽룡", 21, 2);
//	//Person* p1 = new Student("이몽룡",21,2);//업캐스팅 Person이 Student로 바뀐것
//	////자식타입형을 부모형을 바꾸는 방법
//	//p1 = s1; //문법적으로 가능하지만 안된다.
//	Person& r = s1; //가능 s1을 r이 가르킨다.
//	Person* p = &s1;//가능 s1의 주소를 포인터가 가르킨다.
//	system("pause");
//}


//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//protected: //상속구조내에서 사용가능하게한다.라는 뜻,안적어주면 자식클래스에선 name,age를 사용하지못한다. 
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
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) //부모에게 초기화를 부탁함. 부모생성자 호출, 순서도 받드시 부모꺼를 먼저 초기화한후에 내꺼를 초기화시킴
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
//void main()  //자식타입은 부모타입이다. 즉 p1 = s1이 성립 가능. 자식은 부모다라고 바꾸는 작업을 upcasting이라고 부름 즉 자식의 변수를 부모의형식으로 불러도됌.아래로의 형식변환은 downcasting인데 부모형식으로 부르는게 아니라 자기자신의 형식으로 다시 부르는것을 의미. 자식타입들은 상위타입으로 변환될수있지만 상위타입에서 다시 자식타입으로 갈때 반드시 자신의 형식으로 가야한다.
//{
//	
//	Person p1("홍길동");
//	p1.Print();
//
//    Student s1("이몽룡", 21, 2);
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
//protected: //상속구조내에서 사용가능하게한다.라는 뜻,안적어주면 자식클래스에선 name,age를 사용하지못한다. 
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
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) //부모에게 초기화를 부탁함. 부모생성자 호출, 순서도 받드시 부모꺼를 먼저 초기화한후에 내꺼를 초기화시킴
//	{
//		cout << "Student()" << endl; //출력했을때 Student 보다 부모클래스인 Person이 먼저 호출됨.
//	}
//	~Student()   //하지만 소멸자로 인해서 사라질때는 자식이 먼저 사라진다.
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
//	Person p1("홍길동");
//	p1.Print();
//	{
//		Student s1("이몽룡", 21, 2);
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
//protected: //상속구조내에서 사용가능하게한다.라는 뜻,안적어주면 자식클래스에선 name,age를 사용하지못한다. 
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
//class Student :public Person //Person을 물려받는 Student를 사용하겠다.
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n, a), grade(g) //부모에게 초기화를 부탁함. 부모생성자 호출, 순서도 받드시 부모꺼를 먼저 초기화한후에 내꺼를 초기화시킴
//	{}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "grade:" << grade << endl;
//	}
//};
//void main()
//{
//	Person p1("홍길동");
//	p1.Print();
//
//	Student s1("이몽룡", 21, 2);
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
//class Student :public Person //Person을 물려받는 Student를 사용하겠다.
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :Person(n,a), grade(g) //부모에게 초기화를 부탁함. 부모생성자 호출, 순서도 받드시 부모꺼를 먼저 초기화한후에 내꺼를 초기화시킴
//	{}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "grade:" << grade << endl;
//	}
//};
//void main()
//{
//	Person p1("홍길동",28);
//	p1.Print();
//
//	Student s1("이몽룡", 21, 2);
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
//	Person p1("홍길동");
//	p1.Print();
//
//	Student s1("이몽룡",21, 2);
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
//	const string& GetName()const  //Get은 읽기위한 인터페이스 즉 getter
//	{
//		return name;
//	}
//	int GetAge() const
//	{
//		return age;
//	}
//	void SetName(const string& n)  //Set은 쓰기위한, 즉 변경하기 위한 인터페이스, 즉 setter
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
//	Person p1("홍길동", 25);
//	p1.Print();
//
//	p1.SetName("장길산"); //이름을 바꾼다.
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
//	Person p1("홍길동", 25);
//	p1.Print();
//
//	p1.SetName("장길산"); //이름을 바꾼다. 
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
//	Person p1("홍길동", 25);
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
//	Person p1("홍길동", 25);
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
//	void assign(const char* s) //바꿔주기
//	{
//		delete[] buf;
//		buf = new char[strlen(s) + 1];
//		strcpy_s(buf, strlen(s) + 1, s);
//
//	}
//	void append(const char* s) //이어붙히기
//	{
//		char* t = new char[strlen(buf) + strlen(s) + 1]; 
//			strcpy_s(t, strlen(buf) + 1, buf);
//			strcat_s(t, strlen(buf) + strlen(s) + 1, s);  //buf에 hi가있는 상태 /이어붙히기
//			delete[] buf;  //buf에있는 문자열을 사용해야하기 때문에 앞에다가 적으면 안되고 이미 작업이 끝난후 지워줘야한다.
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
//	cout << s.c_str() << endl; //c스타일의 문자열을 줘라.즉 시작주소를 달라는뜻. 문자열을 호출하는 함수:c_str임 원래 s만 쓰면 안됨.
//
//	s.assign("Hi"); //hi로 바꿔라.
//	cout << s.c_str() << endl;
//
//	s.append("abcd");//문자열을 붙혀라 
//	cout << s.c_str() << endl;
//
//	cout << s.size() << endl; //몇개인지 크기랑 말해라
//
//	cout << s.compare("Hiabcd") << endl; //둘의 같으면 0 앞에가 크면 1 뒤에가 문자열이 크면 -1이 나온다. 
//	system("pause");
//}


//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//void main()
//{
//	string s("Hello");
//	cout << s.c_str() << endl; //c스타일의 문자열을 줘라.즉 시작주소를 달라는뜻.
//
//	s.assign("Hi"); //hi로 바꿔라.
//	cout << s.c_str() << endl;
//
//	s.append("abcd");//문자열을 붙혀라 
//	cout << s.c_str() << endl;
//
//	cout << s.size() << endl; //몇개인지 크기랑 말해라
//
//	cout << s.compare("Hiabcd") << endl; //둘의 같으면 0 앞에가 크면 1 뒤에가 문자열이 크면 -1이 나온다. 
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
//s.assign("hi"); //hi로 바꿔라.
//cout << s << endl;
//
//s.append("abcd");//문자열을 붙혀라 
//cout << s << endl;
//
//cout << s.size() << endl; //몇개인지 크기랑 말해라
//
//cout << s.compare("hiabcd") << endl; //둘의 같으면 0 앞에가 크면 1 뒤에가 문자열이 크면 -1이 나온다. 
//system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Array  //일단 정수만 보관하는 array라고 가정하고 작성
//{
//	int* buf; 
//	int size;
//public:
//	//생성자
//	Array() :size(0) //size를 0으로 초기화 
//	{
//		buf = new int[100];  //메모리저장공간을 만들어줌.
//	}
//	//복사생성자
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
//	Array arr2(arr); //복사생성자를 만들어야한다.
//	for (i = 0; i < arr2.Size(); ++i)
//	{
//		cout << arr2.at(i) << endl;
//	}
//	system("pause");
//}
