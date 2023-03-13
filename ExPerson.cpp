
#include <iostream>


class Person {
public:
    Person(std::string name,int age):
    name_(name),age_(age){}

	std::string getName()
    {
        return this->name_;
    }


protected:
	std::string name_;
    int age_;
};

class Student : public Person{

public:
    Student(std::string name, int age,double average) :
	Person(name, age), average_(average){}

    void printInfos() const
    {
        std::cout << "Name      : " << name_    << std::endl;
        std::cout << "Age       : " << age_     << std::endl;
        std::cout << "Average   : " << average_ << std::endl;
    }


private:
    double average_;
};

class Professor :public Person
{
public:
    Professor(std::string name, int age, int EmployeeId) :
    Person(name,age),EmployeeId_(EmployeeId) {}

    void printInfos() const
    {
        std::cout << "Name          : " << name_        << std::endl;
        std::cout << "Age           : " << age_         << std::endl;
        std::cout << "Employee Id   : " << EmployeeId_   << std::endl;
    }
private:
    int EmployeeId_;
};


class Room {
public:







private:
    std::string name_;
    Professor& prof_;
};


class School {

};

int main()
{
    std::cout << "Start school exercice\n";
    
    School s;
    // s.addStudent() // add student 1
    // s.addStudent() // add student 2
    // s.addStudent() // add student 3
    // s.addProf() // add prof 1

    //s.printList();
}
