#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string& target);
    PresidentialPardonForm(const PresidentialPardonForm& other);
    virtual ~PresidentialPardonForm();

    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

    void formExecutor() const;

private:
    std::string target;
};

#endif // PRESIDENTIALPARDONFORM_HPP