#include <iostream>
#ifndef MYPTR_H
#define MYPTR_H
#define UBCHECK
#define OPBOOL
#define OPDREF
#endif

template <typename T>
class my_ptr{
public:
    explicit my_ptr(T* p = nullptr) : rptr(p) {
        std::cout << "new my_ptr instance (" << rptr << ") is borning..\n";
    }
    ~my_ptr() {
        if (this->operator bool()) UBCHECK {
            std::cout << "rptr = " << rptr << " is dying..\n";
            delete rptr;
        }
        std::cout << "this = " << this << " is dying..\n";
    }
    OPBOOL explicit operator bool () const {
        return rptr != nullptr;
    }
    OPDREF T operator*() const {
        return *rptr;
    }

    T* get() const {
        return rptr;
    }

    T* release() noexcept {
        auto temp = rptr;
        rptr = nullptr;
        return temp;
    }

    void reset(T* ptr = nullptr) noexcept {
        std::cout << "rptr = " << rptr << " is dying..\n";
        // delete rptr;
        rptr = ptr;
    }

    template<typename ...Args>
    void emplace(Args&& ...args){
        std::cout << "rptr = " << rptr << " is dying..\n";
        auto _ptr = this->release();
        // delete _ptr
        rptr = new T(std::forward<Args>(args)...);
    }
private:
    T* rptr;
};
