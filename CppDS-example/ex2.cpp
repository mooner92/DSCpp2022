#include <iostream>
#include <algorithm>
using namespace std;

struct singly_ll_node
{
    int data;             //객체 추가
    singly_ll_node *next; //단일 노드 클래스 생성
};

class singly_ll // singly_ll_node를 사용하는 연결리스트클래스
{
public:
    using node = singly_ll_node;
    using node_ptr = node *;

private:
    node_ptr head;

public:
    void push_front(int val)
    {
        auto new_node = new node{val, NULL};
        if (head != NULL)
            new_node->next = head;
    }
    void pop_front()
    {
        auto first = head;
        if (head)
        {
            head = head->next;
            delete first;
        }
    }
};

int main()
{
}