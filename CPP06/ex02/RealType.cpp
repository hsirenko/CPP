#include "RealType.hpp"

//Base::Base() throw() {};
Base::~Base() {}
A::~A() {}
B::~B() {}
C::~C() {}

Base *generate(void)
{
    std::srand(std::time(0)); //seed random # generator
    int random = std::rand() % 3; // generate a random # btwn 0 and 2

    switch(random)
    {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return nullptr; // should never happen
    }
};

void identify(Base *p)
{
    if (dynamic_cast<A*>(p) != nullptr)
        std::cout << "Type by pointer: A" << std::endl;
    else if (dynamic_cast<B*>(p) != nullptr)
        std::cout << "Type by pointer: B" << std::endl;
    else if (dynamic_cast<C*>(p) != nullptr)
        std::cout << "Type by pointer: C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
};

void identify(Base &p)
{
    //identify(&p);
    try
    {
        (void)dynamic_cast<A&>(p); // try casting to A
        std::cout << "Type by reference: A" << std::endl;
        return ; 
    }
    catch(const std::bad_cast&) // The catch block catches the exception thrown by the failed cast, allowing the function to attempt the next type.
    {
        //if not A, continue
    }
     
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "Type by reference: B" << std::endl;
        return ;
    }
    catch(const std::bad_cast&)
    {
        //if not B, continue
    }
        
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "Type by reference: C" << std::endl;
        return ;
    }
    catch(const std::bad_cast&)
    {
        //if not C, continue
    }
};

// dynamic_cast is used here to:

// Safely and correctly determine the runtime type of the object.
// Avoid unsafe type conversions.
// Handle polymorphic hierarchies effectively.