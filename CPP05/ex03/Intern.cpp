/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 03:15:48 by nasamadi          #+#    #+#             */
/*   Updated: 2023/08/18 03:15:51 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	formList[0].name = "robotomy request";
	formList[0].req = createRRF;
	formList[1].name = "Shrubbery Creation";
	formList[1].req = createSCF;
	formList[2].name = "Presidential Pardon";
	formList[2].req = createPPF;
	std::cout << "Intern Constructor called." << std::endl;
}

Intern:: ~Intern()
{
	std::cout << "Intern Destructor called." << std::endl;
}

Intern &Intern::operator=(Intern const &src)
{
	std::cout << "Intern equal operator called." << std::endl;
	(void)src;
	return *this;
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Form *createSCF(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

Form *createRRF(std::string const &target)
{
	return new RobotomyRequestForm(target);
}
Form *createPPF(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0 ; i < 3; i++)
	{
		if (name == this->formList[i].name)
		{
			Form* form = this->formList[i].req(target);
			std::cout << "Intern creates " << form->getName() << "." << std::endl;
			return form;
		}
	}
	std::cout << "Intern cannot create " << name << "." << std::endl;
	return NULL;
}