#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> deq = {1, 2, 3, 4, 5};
    deq.push_front(0);                     //{0,1,2,3,4,5}
    deq.push_back(6);                      //{0,1,2,3,4,5,6}
    deq.insert(deq.begin() + 2, 10);       // 2번째 인덱스 뒤에 0 추가 {0,1,10,2,3,4,5,6}
    deq.pop_back();                        //맨 뒤 원소 삭제
    deq.pop_front();                       //맨 앞 원소 삭제
    deq.erase(deq.begin() + 1);            // 첫 번째 인덱스 뒷값을 삭제 (두번째 인덱스 라고도 볼 수 있음)
    deq.erase(deq.begin() + 3, deq.end()); // 3번째 인덱스의 뒷값(4번째 인덱스값) 부터 deq.end()까지 삭제
    //덱 구조는 항공기 탑승 대기열과 같은 곳에서 사용될 수 있음.
}