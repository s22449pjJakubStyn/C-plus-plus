#include <s22449/Student.h>

#include <iostream>

s22449::Student::Student(std::string n,
                         std::string s,
                         std::string i,
                         size_t const sem,
                         double const av)
        : name{n}, surname{s}, index{i}, semester{sem}, avarage{av}
{}
auto s22449::Student::introduces_himself() const -> std::string
{
    auto out = std::ostringstream{};
    out << "My Name is: ," << name << "My Surname is: ," << surname
        << "My Index number is: ," << index << "My Semester is: ," << semester
        << "My avarage grade is: ," << avarage;
    return out.str();
}

auto main() -> int
{
    auto student = s22449::Student{"Student", "Studencki", "s22449", 1, 4.25};
    std::cout << student.introduces_himself() << "\n";

    return 0;
}
