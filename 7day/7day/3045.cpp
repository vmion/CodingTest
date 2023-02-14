#include "3045.h"
#include <iostream>
using namespace std;
doublyList::doublyList()
{
	pHead = new Node;
	pTail = new Node;
	pHead->pNext = pTail;
	pHead->pPrev = pHead;
	pTail->pNext = pTail;
	pTail->pPrev = pHead;
}
doublyList::~doublyList()
{
	delete pHead;
	delete pTail;
}
void doublyList::Insert(int data, Node* t)
{
	Node* pNewNode = new Node;
	pNewNode->data = data;
	t->pPrev->pNext = pNewNode;
	pNewNode->pPrev = t->pPrev;
	t->pPrev = pNewNode;
	pNewNode->pNext = t;
}
Node* doublyList::Find(int data)
{
	Node* tmp = pHead->pNext;
	while (tmp != pTail)
	{
		if (tmp->data == data)
		{
			cout << "찾은 data = " << tmp->data << endl;
			return tmp;
		}
		tmp = tmp->pNext;
	}
	return nullptr;
}
void doublyList::PushFront(int data)
{
	Node* pNewNode = new Node;
	pNewNode->data = data;
	pHead->pNext->pPrev = pNewNode;
	pNewNode->pNext = pHead->pNext;
	pHead->pNext = pNewNode;
	pNewNode->pPrev = pHead;
}
void doublyList::PushBack(int data)
{
	Node* pNewNode = new Node;
	pNewNode->data = data;
	pTail->pPrev->pNext = pNewNode;
	pNewNode->pPrev = pTail->pPrev;
	pTail->pPrev = pNewNode;
	pNewNode->pNext = pTail;
}
void doublyList::Remove(Node* p)
{
	if (p == pHead || p == pTail)
		return;
	p->pPrev->pNext = p->pNext;
	p->pNext->pPrev = p->pPrev;
	delete p;
}
void doublyList::Remove(int data)
{
	Node* tmp = pHead->pNext;
	while (tmp != pTail)
	{
		if (tmp->data == data)
		{
			cout << "삭제한 데이터 = " << tmp->data << endl;
			//삭제 후의 연결부분을 미리 관계정리를 함
			tmp->pPrev->pNext = tmp->pNext;
			tmp->pNext->pPrev = tmp->pPrev;
			delete tmp;
			break;
		}
		tmp = tmp->pNext;
	}
}
void doublyList::Clear()
{
	Node* s;
	Node* tmp;
	s = pHead->pNext;
	while (s != pTail)
	{
		tmp = s;
		s = s->pNext;
		cout << "삭제한 데이터 = " << tmp->data << endl;
		tmp->pPrev->pNext = tmp->pNext;
		tmp->pNext->pPrev = tmp->pPrev;
		delete tmp;
	}
	pHead->pNext = pTail;
	pTail->pPrev = pHead;
}
void doublyList::DisplayData()
{
	Node* tmp = pHead->pNext;
	while (tmp != pTail)
	{
		cout << tmp->data << endl;
		tmp = tmp->pNext;
	}
}