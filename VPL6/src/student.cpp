#include "student.hpp"
#include <string>
#include <vector>
#include <numeric>

// Constructors
Student::Student(const std::string &name, int enrollmentNumber, const std::vector<int> &grades)
{
    this->_name = name;
    this->_enrollmentNumber = enrollmentNumber;
    this->_grades = grades;
}
Student::Student()
{
    this->_enrollmentNumber = 0;
}

// Getters
const std::string &Student::getName() const
{
    return this->_name;
}
int Student::getEnrollmentNumber() const
{
    return this->_enrollmentNumber;
}
const std::vector<int> &Student::getGrades() const
{
    return this->_grades;
}

// Setters
void Student::setName(const std::string &name)
{
    this->_name = name;
}
void Student::setEnrollmentNumber(int enrollmentNumber)
{
    this->_enrollmentNumber = enrollmentNumber;
}
void Student::setGrades(const std::vector<int> &grades)
{
    this->_grades = grades;
}

// Methods
float Student::averageGrade() const
{
    int sumOfGrades;
    sumOfGrades = std::accumulate(this->_grades.begin(), this->_grades.end(), 0);

    int sizeOfVector;
    sizeOfVector = this->_grades.size();

    return static_cast<float>(sumOfGrades) / static_cast<float>(sizeOfVector);
}
int Student::maxGrade() const
{
    std::vector<int>::const_iterator maxGrade;
    maxGrade = std::max_element(this->_grades.begin(), this->_grades.end());

    return *maxGrade;
}
int Student::minGrade() const
{
    std::vector<int>::const_iterator minGrade;
    minGrade = std::min_element(this->_grades.begin(), this->_grades.end());

    return *minGrade;
}