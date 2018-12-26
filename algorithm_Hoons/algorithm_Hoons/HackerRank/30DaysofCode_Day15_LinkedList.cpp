#include"stdafx.h"

#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
	Node(int d) {
		data = d;
		next = NULL;
	}
};
class Solution {
public:
	Node* temp;
	Node* insert(Node *head, int data)
	{
		while (true)
		{
			if (head == NULL)
			{
				head = new Node(data);
				return head;
				//head->next = new Node*;
			}
			else if (head->next == NULL)
			{
				//temp->next = head;
				head->next = new Node(data);
				
			}
			else
			{
				temp = head;
				while (true)
				{
					if (temp->next != NULL)
					{
						temp = temp->next;
						continue;
					}
					temp->next = new Node(data);
					break;
				}
				
				//head = new Node(data);
				//break;
			}
			return head;
		}
		//Complete this method

	}
	void display(Node *head)
	{
		Node *start = head;
		while (start)
		{
			cout << start->data << " ";
			start = start->next;
		}
	}
};
int main()
{
	Node* head = NULL;
	Solution mylist;
	int T, data;
	cin >> T;
	while (T-->0) {
		cin >> data;
		head = mylist.insert(head, data);
	}
	mylist.display(head);

}