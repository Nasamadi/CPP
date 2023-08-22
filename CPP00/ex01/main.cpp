/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:52:18 by nasamadi          #+#    #+#             */
/*   Updated: 2023/08/13 19:52:21 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void formatAndDisplay(std::string str) {
    if (str.length() > 10) {
        str = str.substr(0, 9) + ".";
    }
    std::cout << std::setw(10) << str;
}

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (1) {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::cin >> command;

        if (command == "ADD") {
            phoneBook.addContact();
        } else if (command == "SEARCH") {
            phoneBook.displayContacts();
        } else if (command == "EXIT") {
            break;
        }
    }

    return 0;
}

