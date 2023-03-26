
#include <iostream>
#include <vector>


// ----------- Person -----------
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



// ----------- Student -----------

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

    bool operator==(const Student& student) const;

private:
    double average_;
};

// ----------- Professor -----------

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

    Room(Professor& professor):professor_(professor){}

	void addStudent(Student& student)
    {
        // Check if the max number of student is achieve.
        if(students_.size() < 10)
        {
            students_.push_back(student);
        }
        else
        {
            std::cout << "Max number of students in the class achieved";
        }
    }

	void removeStudent(const Student& student) const
	{
        for (int i = 0; i < students_.size(); i++)
        {
            // Check if this is the good student
            if (students_[i] == student)
            {
                students_.erase(i);
                break;
            }
        }
    }


private:
    std::string name_;
    Professor& professor_;
    std::vector<Student*> students_;
};


class School {
public:

   
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
