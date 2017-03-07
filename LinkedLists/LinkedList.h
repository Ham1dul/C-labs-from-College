#pragma once
#include <iostream>
#include <cstddef>
using namespace std;
struct  node //node type
{
	int data;
	node* next;
};
class LinkedList
{
public:
	LinkedList() //constructor, set all to 0
	{
		size = 0;
		head = nullptr;
		tail = nullptr;
	}
	LinkedList(int val) //to se the value of head
	{
		head->data = val;
		head->next = nullptr;
	}
	~LinkedList() 
	{
		struct node *tmpNode;
		while (head) {
			tmpNode = head;
			head = tmpNode->next;
			delete tmpNode;
		}
	}
	void print() //print list
	{
		node *p = head;
		while (p) {
			cout << p->data << " ";
			p = p->next;
		}
		cout << endl;
	}
	void push(int val)
	{
		node *newNode = new node;
		newNode->data = val;
		newNode->next = NULL;

		tail = head;
		while (tail) {
			if (tail->next == NULL) {
				tail->next = newNode;
				return;
			}
			tail = tail->next;
		}

	}
	protected:
		int size; //variables
		node* head=new node;
		node* tail= new node;
};

