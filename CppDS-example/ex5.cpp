#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    stack<int> stk1;              //기본적인 deque를 기본 컨테이너로 하는 stk1을 선언
    stack<int, vector<int>> skt2; // stack 객체 생성시에 템플릿 매개변수로 사용할 컨테이너를 vector로 지정한 경우임
    stack<int> stk3;
    stk1.pop();            //맨 뒤의 원소를 삭제
    bool a = stk1.empty(); // empty()함수는 비어있으면 true를 아니라면 false를 반환함
    stk1.size();           // size를 나타냄
    stk1.push(7);          // 7을 맨 뒤에 삽입
    stk1.top();            //맨 위의 값 반환
    stk1.emplace(0, 2);    //기본 자료형이 아닌 특정 클래스의 Stack이라면 해당 args를 그 클래스의 생성자로 넘겨 해당 클래스의 객체를 생성해서 Stack에 Push
    stk1.swap(stk3);       //두 Stack의 내용을 서로 바꿈.
}