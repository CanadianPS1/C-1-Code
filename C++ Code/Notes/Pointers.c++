#include <iostream>
#define _CRT  DBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <memory>
using namespace std;
template<typename T>
class smart_ptr{
public:
    smart_ptr(T* ptr = nullptr) : _ptr{ ptr }{}
    smart_ptr(const smart_ptr&) = delete;
    smart_ptr& operator = (const smart_ptr&) = delete;
    ~smart_ptr(){ if (_ptr) delete _ptr; }
    T& operator * (){ return *_ptr; }
    T* operator & (){ return  _ptr; }
    T* operator -> (){ return  _ptr; }
    T* get(){ return _ptr; }
private:
    T* _ptr{};
};
int main(){
    int a[] = {1,2,3,4,5};
    int* p = a;
    cout<< p << endl;
    p++;
    p++;
    p--;
    p = p + 2;
    cout<< *p << endl;
    int* ptHeap = new int{5};
    cout<< *ptHeap << endl;
    delete ptHeap;
    {
        smart_ptr<int> sp(new int{5});
        //smart_ptr<int> spc(sp);
        unique_ptr<int> uo(new int{10});
    }
    _CrtDumpMemoryLeaks();
    return 0;
}