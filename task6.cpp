#include <iostream>
#include <stdexcept>
using namespace std;

template<typename T>
class SmartPtr {
private:
    T* ptr;            // Pointer to the managed object
    int* ref_count;    // Pointer to the reference count

    void release() {
        if(ref_count) {
            (*ref_count)--;
            if(*ref_count == 0) {
                delete ptr;
                delete ref_count;
                ptr = nullptr;
                ref_count = nullptr;
            }
        }
    }

public:
    // Constructor
    explicit SmartPtr(T* p = nullptr) : ptr(p), ref_count(nullptr) {
        if(ptr) {
            ref_count = new int(1);
        }
    }

    // Copy Constructor
    SmartPtr(const SmartPtr<T>& sp) : ptr(sp.ptr), ref_count(sp.ref_count) {
        if(ref_count)
            ++(*ref_count);
    }

    // Assignment Operator
    SmartPtr<T>& operator=(const SmartPtr<T>& sp) {
        if(this != &sp) {
            release();
            ptr = sp.ptr;
            ref_count = sp.ref_count;
            if(ref_count)
                ++(*ref_count);
        }
        return *this;
    }

    // Destructor
    ~SmartPtr() {
        release();
    }

    // get() function
    T* get() const {
        return ptr;
    }

    // reset() function
    void reset(T* p = nullptr) {
        release();
        ptr = p;
        if(ptr)
            ref_count = new int(1);
        else
            ref_count = nullptr;
    }

    // use_count() function
    int use_count() const {
        return ref_count ? *ref_count : 0;
    }

    // Overload * and -> operators
    T& operator*() const {
        if (!ptr) throw runtime_error("Dereferencing nullptr");
        return *ptr;
    }
    T* operator->() const {
        return ptr;
    }
};
