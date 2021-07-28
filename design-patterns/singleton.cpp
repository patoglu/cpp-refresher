#include <iostream>
#include <thread>

class Singleton
{
protected:
    Singleton(const std::string &value) :m_value(value)
    {
        
    }
    
    static Singleton * m_singleton;
    std::string m_value;
public:
    Singleton (Singleton &other) = delete;
    void operator=(const Singleton &) = delete;
    static Singleton *getInstance(const std::string& value);
    std::string value()const
    {
        return m_value;
    }
};

Singleton* Singleton::m_singleton = nullptr;

Singleton *Singleton::getInstance(const std::string &value)
{
    if(m_singleton == nullptr)
    {
        m_singleton = new Singleton(value);
    }
    return m_singleton;
}


void ThreadFoo(){
    // Following code emulates slow initialization.
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton* singleton = Singleton::getInstance("FOO");
    std::cout << singleton->value() << "\n";
}

void ThreadBar(){
    // Following code emulates slow initialization.
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton* singleton = Singleton::getInstance("BAR");
    std::cout << singleton->value() << "\n";
}



int main()
{
    std::cout <<"If you see the same value, then singleton was reused (yay!\n" <<
                "If you see different values, then 2 singletons were created (booo!!)\n\n" <<
                "RESULT:\n";
    std::thread t1(ThreadFoo);
    std::thread t2(ThreadBar);
    t1.join();
    t2.join();
    /*Singleton* singleton = Singleton::getInstance("1");
    std::cout << singleton->value() << "\n";
    Singleton* singleton2 = Singleton::getInstance("2");
    std::cout << singleton->value() << "\n";
    Singleton* singleton3 = Singleton::getInstance("3");
    std::cout << singleton->value() << "\n";*/
    return 0;
}
