# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nasamadi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/13 19:59:30 by nasamadi          #+#    #+#              #
#    Updated: 2023/08/13 20:00:11 by nasamadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CXX = g++
CXXFLAGS = -Wall -std=c++98

# Nom du programme à générer
TARGET = bank_test

# Fichiers sources et objets
SOURCES = Account.cpp tests.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# Règles
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean

