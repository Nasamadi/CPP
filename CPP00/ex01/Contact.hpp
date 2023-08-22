/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:51:43 by nasamadi          #+#    #+#             */
/*   Updated: 2023/08/17 20:54:37 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP_
# define CONTACT_HPP_

# include <iostream>

class Contact {
	public:
		Contact();
		~Contact();
		int setInformation(int index);
		void tableDisplay();
		void fullDisplay();

	private:
		static const int FIELDS_CNT = 5;
		enum fields {
			firstName = 0,
			lastName,
			nickname,
			phone,
			darkestSecret
		};

		int index;
		std::string fieldsInfo[FIELDS_CNT];
};

#endif

