#include <iostream>
#include <SFML/Graphics.hpp>
#include "AskButch.hpp"
#include "Button.hpp"
#include "Util.hpp"


int main()
{
    //WINDOW
    sf::RenderWindow window(sf::VideoMode(1400, 900), "SFML works!");
    
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    //FONT
    sf::Font font;
    if (!font.loadFromFile("arial (1).ttf"))
    {
        std::cout << "ERROR!" << std::endl;
    }

    //TEXT
    sf::Text textButch;
    textButch.setFont(font);
    textButch.setCharacterSize(40);
    textButch.setFillColor(sf::Color::Black);
    textButch.setPosition(600, 80);

    sf::Text textPrompt;
    textPrompt.setFont(font);
    textPrompt.setCharacterSize(40);
    textPrompt.setFillColor(sf::Color::Red);
    textPrompt.setPosition(800, 500);
    
    print_menu(textButch, textPrompt);

    sf::Text textDisclaimer;
    textDisclaimer.setFont(font);
    textDisclaimer.setCharacterSize(20);
    textDisclaimer.setFillColor(sf::Color::Black);
    textDisclaimer.setPosition(0, 0);
    textDisclaimer.setString("DISCLAIMER: this application is for comedic purposes,\nintended to help cougs feel better using comic relief.\nEnjoy!");

    //INPUT
    sf::String playerInput;
    sf::Text playerText;

    //TEXTURES
    sf::Texture butch;
    sf::Texture speechBubble;
    butch.loadFromFile("butch2.0.png");
    speechBubble.loadFromFile("speechbubble (1).png");

    //SPRITES
    sf::Sprite spriteButch(butch);
    sf::Sprite spriteSpeechBubble(speechBubble);
    sf::Event event;

    //BUTTON
    //gui::button yes("YES", buttonFont, sf::Vector2f(100.f, 100.f), gui::style::save);

    //SIZE SCALING / LOCATION
    sf::Vector2f targetsize(500.0f, 500.0f);
    spriteButch.setScale(
        targetsize.x / spriteButch.getLocalBounds().width,
        targetsize.y / spriteButch.getLocalBounds().height);
    
    spriteButch.setPosition(10, 300);
    spriteSpeechBubble.setPosition(500, 0);

    
    int option;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
        {
            textButch.setString("Not available atm");
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::B))
        {
            textButch.setString("What is your social \ndilemma?");
            textPrompt.setString("E. Heartbreak\nF. Beef\n");	
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::C))
        {
            textButch.setString("never gonna give you up\nnever gonna let you down\nnever gonna run around and\ndesert you\nnever gonna make you cry\nnever gonna say goodbye\nnever gonna tell a lie\nand hurt you");
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
        {
            textButch.setString("thanks for playing! goodbye");
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::E))
        {
            textButch.setString("How / why did the breakup end ? ");
            textPrompt.setString("G.Toxic\nH.Healthy\nI.Cheated");
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::F))
        {
            textButch.setString("Do you have to see them\n every day ?");
            textPrompt.setString("J.Yes\nK.No\n");
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::G))
        {
            textButch.setString("Block them");
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::H))
        {
            textButch.setString("cap");
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::I))
        {
            textButch.setString("Are you over 21?");
            textPrompt.setString("L.Yes\nM.No\n");
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::J))
        {
            textButch.setString("Transfer to Eastern \nWashington University");
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::K))
        {
            textButch.setString("ok");
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::L))
        {
            textButch.setString("904 W Pullman Rd\nMoscow, ID 83843\nUnited States");
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::M))
        {
            textButch.setString("it's ok. Life moves on! \n<3");
        }


        window.clear(sf::Color(192, 192, 192));
        window.draw(spriteButch);
        window.draw(spriteSpeechBubble);
        window.draw(textButch);
        window.draw(textPrompt);
        window.draw(textDisclaimer);
        window.display();
    }

    return 0;
}