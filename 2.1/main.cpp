#include <iostream>

using namespace std;

class Node
{
public:
	Node(int n)
	{
		data = n;
	}
	Node * next = nullptr;
	int data;
};

class LinkedList
{
public:
	LinkedList(int n)
	{
		head = new Node(n);
	}

	void AddToTail(int n)
	{
		Node * new_node = new Node(n);
		Node * node = head;
		while (node->next != nullptr)
		{
			node = node->next;
		}
		node->next = new_node;
	}

	void Delete(int n)
	{
		Node * node = head;

		if (head->data == n && head->next != nullptr)
		{
			head = head->next;
			return;
		}

		while (node->next != nullptr)
		{
			if (node->next->data == n)
			{
				node->next = node->next->next;				
				return;
			}
			node = node->next;
		}
	}

	void PrintAllNode()
	{
		Node * node = head;
		while (node != nullptr)
		{
			cout << node->data << endl;
			node = node->next;
		}
	}
private:
	Node * head = nullptr;
};

int main()
{
	LinkedList * list = new LinkedList(0);
	list->AddToTail(1);
	list->AddToTail(2);
	list->AddToTail(3);
	list->AddToTail(4);
	list->PrintAllNode();
	cout << "----------------------" << endl;
	list->Delete(2);
	list->PrintAllNode();
}