/*#include <iostream>
using namespace std;
int main(){
    array<,5> arr = {1,2,3,4,5};
    for(auto element : arr)
    cout<<element<<' ';


}*/
/*
void print(int arr[5]){
    for(auto ele = arr.be)
    cout<<ele<<' ';
}
int main(){
    array<int,5> arr = {1,2,3,4,5};
    print(arr);
}
*/
#include <iostream>
#include <sstream>
#include <algorithm>
#include <forward_list>
using namespace std;

template <typename T>
class dynamic_array
{
    T *data;
    sizt_t n;

public:
    dynamic_array(int n)
    {
        this->n = n;
        data = new T[n];
    }
};
int main()
{
    forward_list<int> k = {1, 2, 3};
}