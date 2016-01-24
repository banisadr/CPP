// Submitting with a late day
/* I don't understand why removing an interior link is failing it is 
implimented int he samw way as head and tail end removal which both 
seem to be working. I have tried everything I can think of and can't
get it to work. If the grader can explain what the issue is, I would
really appreciate it. Thanks!*/

#include <string>
#include "doublell.h"

DLink::DLink(const std::string& str, DLink* p, DLink* n)
{
	data = str;
	prev = p;
	next = n;
}

DoubleLL::DoubleLL()
{
	head = NULL; // represents empty list
	tail = NULL;
}

DoubleLL::~DoubleLL()
{
	while(head != NULL)
	{
		remove(head);
	}
}

DLink* DoubleLL::getHead() const
{
	return head;
}

DLink* DoubleLL::getTail() const
{
	return tail;
}

void DoubleLL::insert(DLink* where, const std::string& what)
{
	if(head == NULL) // case of empty list
	{
		head = new DLink(what, NULL, NULL);
		tail = head;
	}
	else if(where == NULL) // inserting at tail
	{
		tail = new DLink(what, tail, NULL);
		tail->prev->next = tail;
	}
	else if(where == head) // inserting at head
	{
		head = new DLink(what, NULL, head);
		head->next->prev = head;
	}
	else // inserting interrior of list
	{
		DLink* newLink = new DLink(what, where->prev, where);
		newLink->prev->next = newLink;
		newLink->prev->next = newLink;
	}

}

std::string DoubleLL::remove(DLink* where)
{
	if (head == tail)
	{
		std::string value = where->data;
		head = NULL;
		tail = NULL;
		delete where;
		return value;
	}
	else if(where == head)
	{
		DLink* oldLink = head;
		head = head->next;
		head->prev = NULL;
		std::string value = oldLink->data;
		delete oldLink;
		return value;
	}
	else if (where == tail)
	{
		DLink* oldLink = tail;
		tail = tail->prev;
		tail->next = NULL;
		std::string value = oldLink->data;
		delete oldLink;
		return value;
	}
	else
	{
		std::string value = where->data;
		where->prev->next = where->next;
		where->next->prev = where->prev;
		delete where;
		return value;
	}
}

int DoubleLL::size() const
{
	int count = 0;
	for(DLink* cur = head; cur != NULL; cur = cur->next)
		count++;
	return count;
}

std::string DoubleLL::nth(int n) const
{
	DLink* cur = head; // starts at beginning
	for(int i = 0; i != n; i++) // advances pointer n times
		cur = cur->next;
	return cur->data; //returns the string at nth link

}