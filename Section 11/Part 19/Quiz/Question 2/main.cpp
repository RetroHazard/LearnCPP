//
// Created by RetroHazard on 2023/04/12.
//
// https://www.learncpp.com/cpp-tutorial/chapter-11-comprehensive-quiz/
/* Objective:
 *  Write the following program:
 *  Create a struct that holds a student’s first name and grade (on a scale of 0-100).
 *  Ask the user how many students they want to enter.
 *  Create a std::vector to hold all of the students.
 *  Then prompt the user for each name and grade.
 *  Once the user has entered all the names and grade pairs, sort the list by grade (highest first).
 *  Then print all the names and grades in sorted order.
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Students
{
    std::string name{};
    int grade{};
};

int getNumberOfStudents()
{
    int numberOfStudents{};

    std::cout << "How many students to enter? ";
    std::cin >> numberOfStudents;
    std::cout << std::endl;

    return numberOfStudents;
}

std::vector<Students> getStudents()
{
    using Students = std::vector<Students>;

    int numberOfStudents{ getNumberOfStudents() };

    Students students(static_cast<Students::size_type>(numberOfStudents));

    int count{1 };

    for (auto& student : students)
    {
        std::cout << "Enter name of student #" << count << ": ";
        std::cin >> student.name;
        std::cout << "Enter grade for " << student.name << ": ";
        std::cin >> student.grade;
        std::cout << std::endl;

        ++count;
    }
    return students;
}

bool compareStudents(const Students& a, const Students& b)
{
    return (a.grade > b.grade);
}

int main()
{
    auto students{ getStudents() };
    std::sort(students.begin(), students.end(), compareStudents);

    for (const auto& student : students)
    {
        std::cout << student.name << " received a grade of " << student.grade << '\n';
    }

    return 0;
}