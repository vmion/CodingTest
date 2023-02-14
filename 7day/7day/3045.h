#pragma once
struct Node
{
    int data;
    Node* pPrev;
    Node* pNext;
};
class doublyList
{
public:
    Node* pHead;
    Node* pTail;
public:
    doublyList();
    ~doublyList();
    void Insert(int data, Node* t);
    Node* Find(int data);
    void PushFront(int data);
    void PushBack(int data);
    void DisplayData();
    void Remove(Node* p);
    void Remove(int data);
    void Clear();
};