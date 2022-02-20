#include "AskButch.hpp"

//Menu the user sees
void print_menu(sf::Text &textButch, sf::Text &textPrompt) {
	textButch.setString("What category can I \nhelp you with?");
	textPrompt.setString("Press number\nA. Classes\nB. Social Life\nC. Free Coug Cash\nD. Exit");
}

//Reads the number you pick from the menu
int get_option(void) {
	int option = 0;
	std::cin >> option;
	return option;
}

//Prints the menu if the user chooses a number not displayed
//int print_and_validate(void) {
//	int option = 0;
//	do
//	{
//		print_menu();
//		option = get_option();
//	} while (option < 1 || option > 4);
//	return option;
//}

//Main menu
//void main_switch(int option, sf::Text& textButch, sf::Text& textPrompt, sf::RenderWindow window) {
//	//int option = 0;
//	do {
//		//option = print_and_validate();
//		system("cls");
//		switch (option)
//		{
//		case 1: //Classes
//			classes_switch( textButch, textPrompt, window);
//			break;
//		case 2: //Social
//			social_switch(textButch, textPrompt, window);
//			break;
//		case 3: //Free Coug Cash
//
//			break;
//		case 4: // exit
//			break;
//		}
//	} while (option != 4);
//}
//
////Social (main->social) menu
//void social_switch(sf::Text& textButch, sf::Text& textPrompt, sf::RenderWindow window) {
//	int option = 0;
//	
//	textButch.setString("What is your social \ndilemma?");
//	textPrompt.setString("A. Heartbreak\nB. Beef\nC. Go Back\nD. Exit");
//	window.display();
//	
//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
//	{
//		option = 1;
//	}
//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::B))
//	{
//		option = 2;
//	}
//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::C))
//	{
//		option = 3;
//	}
//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
//	{
//		option = 4;
//	}
//
//	system("cls");
//
//	switch (option) {
//	case 1: //Heartbreak
//		heartbreak_switch(textButch, textPrompt);
//		break;
//	case 2: //Beef
//		beef_switch(textButch, textPrompt);
//		break;
//	case 3: //Go back
//		main_switch(option, textButch, textPrompt, window);
//		break;
//	case 4: //exit
//		break;
//	}
//}
//
////Hearbreak (main->social->heartbreak) Menu
//void heartbreak_switch(sf::Text& textButch, sf::Text& textPrompt) {
//	int option = 0;
//	std::cout << "How/why did the breakup end?" << std::endl;
//	std::cout << "1. Toxic\n2. Healthy\n3. Cheated\n4. Go Back\n5. Exit" << std::endl;
//	std::cin >> option;
//	system("cls");
//
//	switch (option) {
//	case 1: //Toxic
//
//		break;
//	case 2: //Healthy
//
//		break;
//	case 3: //Cheated
//		cheated_switch( textButch, textPrompt);
//		break;
//	case 4: //Go Back
//		//social_switch(textButch, textPrompt);
//		break;
//	case 5: //exit
//		break;
//	}
//}
//
////Cheated (main->social->heartbreak->cheated) menu
//void cheated_switch(sf::Text& textButch, sf::Text& textPrompt) {
//	int option = 0;
//	std::cout << "Are you 21+?" << std::endl;
//	std::cout << "1. Yes\n2. No\n3. Go Back\n4. Exit" << std::endl;
//	std::cin >> option;
//	system("cls");
//
//	switch (option) {
//	case 1: //Yes
//
//		break;
//	case 2: //No
//
//		break;
//	case 3: //Go Back
//		heartbreak_switch;
//		break;
//	case 4: //Exit
//		break;
//	}
//}
//
////beef (main->social->beef) menu
//void beef_switch(sf::Text& textButch, sf::Text& textPrompt) {
//	int option = 0;
//	std::cout << "Do you have to see them every day?" << std::endl;
//	std::cout << "1. Yes\n2. No\n3. Go Back\n4. Exit" << std::endl;
//	std::cin >> option;
//	system("cls");
//
//	switch (option) {
//	case 1: //Yes
//
//		break;
//	case 2: //No
//
//		break;
//	case 3: //Go Back
//		//social_switch(textButch, textPrompt);
//		break;
//	case 4: //Exit
//		break;
//	}
//}
//
////Classes (menu->classes) menu
//void classes_switch(sf::Text& textButch, sf::Text& textPrompt) {
//	int option = 0;
//	std::cout << "What do you need help with?" << std::endl;
//	std::cout << "1. Office Hours\n2. Professor Ratings\n3. General Advice\n4. Go Back\n5. Exit" << std::endl;
//	std::cin >> option;
//	system("cls");
//
//	switch (option) {
//	case 1: //Office Hours
//
//		break;
//	case 2: //Professor Ratings
//
//		break;
//	case 3: //General Advice
//
//		break;
//	case 4: //go back
//		//main_switch(option, textButch, textPrompt);
//		break;
//	case 5: //exit
//		break;
//	}
//}