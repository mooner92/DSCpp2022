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
    using node = singly_ll_node; // using 지시문을 사용하여 node를 정의해줌
    using node_ptr = node *;     // node_ptr은 node의 포인터값임

private:
    node_ptr head;

public:
    void push_front(int val)
    {
        auto new_node = new node{val, NULL}; //링크드리스트 value,ptr   ----   auto = node*
        if (head != NULL)
            new_node->next = head; // new-node를 ptr로 사용중이기 때문에 ->로 next*를 받아 head에 넣어줌
        head = new_node;
    }
    void pop_front()
    {
        auto first = head; //여기서 auto는 node*포인터로 사용중 == node* first = head
        if (head)          // head!=0
        {
            head = head->next; // head 다음 블럭의 포인터값을 head에 node*의 형태로 저장
            delete first;      // 처음 head의 주소를 저장했던 first를 delete를 사용하여 메모리블록 할당취소를 해줌
        }
    }

    struct singly_ll_iterator
    {
    private:
        node_ptr ptr;

    public:
        singly_ll_iterator(node_ptr p) : ptr(p) {} // node*형식
        int &operator*() { return ptr->data; }
        node_ptr get() { return ptr; }

        singly_ll_iterator &operator++() //선행증가
        {
            ptr = ptr->next;
            return *this;
        }
        singly_ll_iterator operator++(int) //후행증가
        {
            singly_ll_iterator result = *this;
            ++(*this);
            return result;
        }
        friend bool operator==(const singly_ll_iterator &left, const singly_ll_iterator &right)
        {
            return left.ptr == right.ptr;
        }
        friend bool operator!=(const singly_ll_iterator &left, const singly_ll_iterator &right)
        {
            return left.ptr != right.ptr;
        }
    };
};

int main()
{
}