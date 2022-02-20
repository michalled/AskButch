#pragma once
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

void print_menu(sf::Text &textButch, sf::Text &textPrompt);
int get_option(void);
//int print_and_validate(void);
void main_switch(int option, sf::Text& textButch, sf::Text& textPrompt, sf::RenderWindow window);
void classes_switch(sf::Text& textButch, sf::Text& textPrompt, sf::RenderWindow window);
void beef_switch( sf::Text& textButch, sf::Text& textPrompt);
void cheated_switch( sf::Text& textButch, sf::Text& textPrompt);
void heartbreak_switch(sf::Text& textButch, sf::Text& textPrompt);
void social_switch( sf::Text& textButch, sf::Text& textPrompt, sf::RenderWindow window);
