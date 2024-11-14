// Smart Pointer
// SmartPtr.h

template <typename T>
class SmartPtr
{
    T* p{ nullptr };// pointer of type T

public:

    SmartPtr(T* ptr) : p(ptr) { 
    };

    // disable copy constructor and copy assignment
    SmartPtr(const SmartPtr&) = delete;
    SmartPtr& operator=(const SmartPtr&) = delete;

    // move constructor
    SmartPtr(SmartPtr&& s) noexcept
    {
        p = s.p;
        s.p = nullptr;
    }

    // move assignment
    SmartPtr& operator=(SmartPtr&& s) noexcept
    {
        if (this != &s)
        {
            delete p;
            p = s.p;
            s.p = nullptr;
        }
        return *this;
    }

    ~SmartPtr()
    {
        delete p;
    }

    T& operator*() // SmartPointer abc; *abc -> *(abc.p)
    {
        return *p;
    }

    // SmartPointer abc; abc->someFunction() -> abc.p->someFunction()
    T* operator->()
    {
        return p;
    }
};