#ifndef S22449_STUDENT_H
#define S22449_STUDENT_H

#include <string>

namespace s22449 {
class Student {
    std::string const name;
    std::string const surname;
    std::string const index;
    constexpr static size_t SEMESTER{1};
    size_t semester{SEMESTER};
    constexpr static double AVARAGE_GRADE{4.25};
    double avarage{AVARAGE_GRADE};

  public:
    Student(std::string name,
            std::string surname,
            std::string index,
            size_t const = SEMESTER,
            double const = AVARAGE_GRADE);

    auto to_string() const -> std::string;
    auto introduces_himself(std::string) const -> Student;
};
}  // namespace s22449

#endif
