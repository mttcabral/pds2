#include "student.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <iterator>
#include <sstream>
#include <limits>
#include <iomanip>
#include <algorithm>

int main()
{
    std::vector<Student> studentsVector;

    // While first user input, name of a new student, is not "END", add student to studentsVector
    while (true)
    {
        // Get new student's name by user input
        std::string name;
        std::cin >> name;

        // If user input is "END", leave while loop
        if (name.compare("END") == 0)
        {
            break;
        }

        // Get new student's enrollment number by user input
        int enrollmentNumber;
        std::cin >> enrollmentNumber;

        // Get new student's n-grades by user input
        std::vector<int> gradesVector;
        std::string gradesInput;
        // Remove every possible '\n' from cin last use
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        // Get entire line of grades separated by spaces (e.g.: "12 20 30 8 -1")
        getline(std::cin, gradesInput);
        std::istringstream iss(gradesInput);
        int grade;
        while (iss >> grade)
        {
            if (grade != -1) // Don't include last "-1" number used to indicate the end of input of grades
            {
                gradesVector.push_back(grade);
            }
        }

        // Create a new student object and push it back on a vector of students
        Student student(name, enrollmentNumber, gradesVector);
        studentsVector.push_back(student);
    }

    // Sort students by alphabetic order
    std::sort(studentsVector.begin(), studentsVector.end(), [](const Student &a, Student &b)
              { return a.getName() < b.getName(); });

    // Print all students allocated in studentsVector
    for (Student s : studentsVector)
    {
        std::cout << s.getEnrollmentNumber() << ' ' << s.getName() << ' ';
        for (int i : s.getGrades())
        {
            std::cout << i << ' ';
        }
        std::cout << std::endl;
        std::cout << std::fixed << std::setprecision(2) << s.averageGrade() << ' ' << s.maxGrade() << ' ' << s.minGrade() << std::endl;
    }

    return 0;
}