#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.push(3); //{1,2,3}
    q.pop();   //{1,2}  -----  먼저 들어간 값이 먼저 삭제됨 = 선입선출 FIFO
    q.push(4); //{1,2,4}
}