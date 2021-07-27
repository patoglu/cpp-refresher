#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person
{
public:
    virtual void getdata()  = 0;
    virtual void putdata() const= 0;

protected:
    std::string name;
    int age;
};

class Professor : public Person
{
public:
    Professor()  {cur_id =  ++id;}
    virtual void getdata()  override
    {
        std::cin >> name >> age >> publications;
    }
    virtual void putdata() const override
    {
       std::cout << name << " " << age <<  " " << publications << " " << cur_id << endl;
    }
private:
    int publications;
    int cur_id;
    static int id;
};
int Professor::id = 0;
class Student : public Person
{
public:
    Student(){cur_id =  ++id;}
    virtual void getdata()  override
    {
        std::cin >> name >> age;
        for(int i = 0 ; i < 6 ; ++i)
        {
            std::cin >> grades[i];
        }
    }
    virtual void putdata() const override
    {
       std::cout << name << " " << age <<  " " << this->sum_of_grades()<< " "<< cur_id << endl;
       
       
    }
private:
    int sum_of_grades()const
    {
        int sum = 0;
        for(int i = 0 ; i < 6 ; ++i)
        {
            sum += grades[i];
        }
        return sum;
    }
    int grades[6];
    int cur_id;
    static int id;
};
int Student::id = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
