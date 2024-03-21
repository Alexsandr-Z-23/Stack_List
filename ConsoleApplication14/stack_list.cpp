//#include <iostream>
//#include <string>
//
//template<typename T>
//class List
//{
//public:
//    List();
//    List(const List<T>& copy) : Size(0), head(nullptr)
//    {
//        if (!copy.head) return;
//
//        Node<T>* tail = head = new Node<T>(copy.head->data);
//        Size++;
//
//        for (Node<T>* p = copy.head->pNext; p; p = p->pNext)
//        {
//            tail = tail->pNext = new  Node<T>*(p->data);
//            Size++;
//        }
//    };
//    ~List();
//    void pop_front();
//    void push_back(T data);
//    void clear();
//    int getSize() { return Size; }
//    void push_front(T data);
//    void insert(T value, int index);
//    void remoweAt(int index);
//    void pop_back();
//    T& operator [](const int index);
//private:
//    template<typename T>
//    class Node
//    {
//    public:
//        Node* pNext;
//        T date;
//        Node(T date = T(), Node* pNext = nullptr)
//        {
//            this->date = date;
//            this->pNext = pNext;
//        }
//    };
//    Node<T>* head;
//    int Size;
//};
//
//template<typename T>
//List<T>::List()
//{
//    Size = 0;
//    head = nullptr;
//}
//
////template<typename T>
////List<T>::List(const List<T>& copy)
////{
////    if (!copy.head) return;
////
////    Node<T>* tail = head = new Node<T>(copy.head->data);
////    Size++;
////
////    for (Node<T>* p = copy.head->pNext; p; p = p->pNext)
////    {
////        tail = tail->pNext = new  Node<T>*(p->data);
////        Size++;
////    }
////}
//
//template<typename T>
//List<T>::~List()
//{
//    clear();
//}
//
//template<typename T>
//void List<T>::pop_front()
//{
//    Node<T>* temp = head;
//    head = head->pNext;
//    delete temp;
//    Size--;
//}
//
//template<typename T>
//void List<T>::push_back(T data)
//{
//    if (head == nullptr)
//    {
//        head = new Node<T>(data);
//    }
//    else
//    {
//        Node<T>* current = this->head;
//        while (current->pNext != nullptr)
//        {
//            current = current->pNext;
//        }
//        current->pNext = new Node<T>(data);
//    }
//    Size++;
//}
//
//template<typename T>
//void List<T>::clear()
//{
//    while (Size)
//    {
//        pop_front();
//    }
//}
//
//template<typename T>
//void List<T>::push_front(T data)
//{
//    head = new Node<T>(data, head);
//    Size++;
//}
//
//template<typename T>
//void List<T>::insert(T value, int index)
//{
//    if (index == 0)
//    {
//        push_front(value);
//    }
//    else
//    {
//
//        Node<T>* previous = this->head;
//        for (int i = 0; i < index - 1; i++)
//        {
//            previous = previous->pNext;
//        }
//        Node<T>* newNode = new Node<T>(value, previous->pNext);
//        previous->pNext = newNode;
//        Size++;
//    }
//}
//
//template<typename T>
//void List<T>::remoweAt(int index)
//{
//    if (index == 0)
//    {
//        pop_front();
//    }
//    else
//    {
//
//        Node<T>* previous = this->head;
//        for (int i = 0; i < index - 1; i++)
//        {
//            previous = previous->pNext;
//        }
//        Node<T>* toDelete = previous->pNext;
//        previous->pNext = toDelete->pNext;
//        delete toDelete;
//        Size--;
//    }
//}
//
//template<typename T>
//void List<T>::pop_back()
//{
//    remoweAt(Size - 1);
//}
//
//template<typename T>
//T& List<T>::operator[](const int index)
//{
//    int counter = 0;
//    Node<T>* current = this->head;
//    while (current != nullptr)
//    {
//        if (counter == index) { return current->date; }
//        current = current->pNext;
//        counter++;
//    }
//}
//
//
//
//
//int main()
//{
//    setlocale(LC_ALL, "ru");
//    List < int> lst;
//    /* lst.push_back(5);
//     lst.push_back(10);
//     lst.push_back(110);*/
//    int number;
//    std::cout << "Количество элементов " << std::endl;
//    std::cin >> number;
//    std::cout << "****************************" << std::endl;
//    for (int i = 0; i < number; i++)
//    {
//        lst.push_back(rand() % 10);
//    }
//    for (int i = 0; i < lst.getSize(); i++)
//    {
//        std::cout << lst[i] << std::endl;
//    }
//    ///////////////////////////////////////////////////////////////
//    List<int> lst2;
//
//    lst2 = lst;
//    std::cout << "lst2----------------- " << std::endl;
//    for (int i = 0; i < lst2.getSize(); i++)
//    {
//
//        std::cout << lst2[i] << std::endl;
//    }
//
//    std::cout << "\n" << "Элементов в списке " << lst.getSize() << std::endl << "выполнение pop_front " << std::endl;
//    lst.pop_front();
//
//    for (int i = 0; i < lst.getSize(); i++)
//    {
//        std::cout << lst[i] << std::endl;
//    }
//    std::cout << "\n" << "Элементов в списке " << lst.getSize() << std::endl;
//
//    /////////////////////////////////////////////////////////////////////////////////
//
//    std::cout << "****************************" << std::endl;
//
//    std::cout << "\n" << "Выполнение Clear " << std::endl;
//    lst.clear();
//    std::cout << "\n" << "Элементов в списке " << lst.getSize() << std::endl;
//
//    ////////////////////////////////////////////////////////////////
//    std::cout << "****************************" << std::endl;
//    std::cout << "выполнение push_front" << std::endl;
//    lst.push_front(5);
//    lst.push_front(6);
//    lst.push_front(7);
//    for (int i = 0; i < lst.getSize(); i++)
//    {
//        std::cout << lst[i] << std::endl;
//    }
//    ////////////////////////////////////////////////////////////////
//    std::cout << "****************************" << std::endl;
//    std::cout << "выполнение insert" << std::endl;
//    lst.insert(99, 1);
//    for (int i = 0; i < lst.getSize(); i++)
//    {
//        std::cout << lst[i] << std::endl;
//    }
//    ////////////////////////////////////////////////////////////////
//    std::cout << "****************************" << std::endl;
//    std::cout << "выполнение remove" << std::endl;
//    lst.remoweAt(1);
//    for (int i = 0; i < lst.getSize(); i++)
//    {
//        std::cout << lst[i] << std::endl;
//    }
//    ////////////////////////////////////////////////////////////////
//    std::cout << "****************************" << std::endl;
//    std::cout << "выполнение pop_back" << std::endl;
//    lst.pop_back();
//    for (int i = 0; i < lst.getSize(); i++)
//    {
//        std::cout << lst[i] << std::endl;
//    }
//    std::cout << "****************************" << std::endl;
//    //lst2.clear();
//    return 0;
//}
#include<iostream>
#include<stack>
using namespace std;

struct Noda
{
	string value;
	Noda* next;
	Noda(string _value):value(_value),next(nullptr){}
};
struct list
{
	Noda* first;
	Noda* last;
	list() :first(nullptr), last(nullptr) {};

	bool is_empty()
	{
		return first == nullptr;
	}
	void push_back(string _value)
	{
		Noda* ptr = new Noda(_value);
		if (is_empty())
		{
			first = ptr;
			last = ptr;
		}
		last->next = ptr;
		last = ptr;
	}
	void print()
	{
		if (is_empty())return;
		Noda* ptr = first;
		while (ptr)
		{
			cout << ptr->value << "\t";
			ptr = ptr->next;
		}
		cout << endl;
	}
};

int main()
{
	setlocale(LC_ALL,"rus");

	//stack<string> Stack;
	//
	//if (Stack.empty())
	//{
	//	cout << " Стек пуст!!!" << endl;
	//}
	//
	//Stack.push("Tom______");
	//Stack.push("Bob ____ ");
	//Stack.push("Nik  __  ");
	//
	////cout << "Размер стека :" << Stack.size() << endl;
	//while (!Stack.empty())
	//{
	//	cout << "Top : " << Stack.top() << endl;
	//	Stack.pop();
	//}
	
	list stack_1;

	cout << stack_1.is_empty() << endl;
	stack_1.push_back("123");
	stack_1.push_back("987");
	stack_1.push_back("546");
	cout << stack_1.is_empty() << endl;

	stack_1.print();


	return 0;
}