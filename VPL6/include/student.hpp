#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <vector>

class Student
{
private:
    std::string _name;
    int _enrollmentNumber;
    std::vector<int> _grades;

public:
    // Constructors
    Student(const std::string &, int, const std::vector<int> &);
    Student();

    // Getters
    const std::string &getName() const;
    int getEnrollmentNumber() const;
    const std::vector<int> &getGrades() const;

    // Setters
    void setName(const std::string &);
    void setEnrollmentNumber(int);
    void setGrades(const std::vector<int> &);

    // Methods
    float averageGrade() const;
    int maxGrade() const;
    int minGrade() const;
};
#endif