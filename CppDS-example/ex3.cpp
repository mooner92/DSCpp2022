#include <iostream>
#include <list>
using namespace std;

struct doubly_linked_list_node
{
    int data;
    doubly_linked_list_node *next; //앞 포인터
    doubly_linked_list_node *prev; //뒷 포인터
};

int main()
{
    list<int> list1 = {1, 2, 3, 4, 5};
    list1.push_back(6);
    list1.insert(next(list1.begin()), 0); // fwdl와 비슷하게 insert(index,parameter)로 사용함
    list1.insert(list1.end(), 7);         // end는 6바로 다음의 공간임 prev* = end()? ----- result list1 = {1,0,2,3,4,5,6,7};
    list1.pop_back();                     // fwdl에서는 제공하지 않는 맨뒤를 제거하는 함수
}