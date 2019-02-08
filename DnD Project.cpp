#include <string>
#include <iostream>
#include "SFML/Graphics.hpp"


class texturedObject
{
    public:
        sf::Texture texture;
        sf::Sprite sprite;
        sf::Vector2f scale;
        sf::Vector2f position;
        std::string name;
        std::string textureName;

        texturedObject(std::string name, sf::Texture texture, sf::Vector2f scale, sf::Vector2f position)
        {
            sprite.setTexture(texture);
        };
};

class button
{
    public:
        // the text
        sf::Text buttonText;

        // non-hover texture
        sf::RenderTexture nonHoverTexture;
        // non-sized texture, 4 corners and 1 pixel width in between for edges
        sf::Texture noHoverNonSizedTexture;
        // sprite to draw the different parts of the non-sized texture onto the rendertexture
        sf::Sprite drawsprite;
};
/* WORK ON THIS PART AFTER YOU GET DONE MAKING THE EDITING THING YOU DUMBASS
class skills
{
    public:
        vector<std:string> strSkills;
        vector<std:string> dexSkills;
        vector<std:string> conSkills;
        vector<std:string> wisSkills;
        vector<std:string> intSkills;
        vector<std:string> chaSkills;
};

class skillLevels
{
    public:
        vector<int> strSkillLevels;
        vector<int> dexSkillLevels;
        vector<int> conSkillLevels;
        vector<int> wisSkillLevels;
        vector<int> intSkillLevels;
        vector<int> chaSkillLevels;
};

class attacks
{
    public:
        vector<std::string> attackName;
        vector<std::string> attackDamage;
        vector<std::string> attackType;
};

class spells
{
    public:
        vector<std::string> spellName;
        vector<std::string> spellDescription;
};
*/

int main()
{
    sf::RenderWindow window(sf::VideoMode(1920,1080), "DnD Project", sf::Style::Fullscreen);
    sf::Event event;
    sf::Clock clock;
    sf::Mouse mouse;

    sf::Vector2i mousePos;
    sf::Vector2f cameraPos;

    // 1 unit equals unitPixels pixels
    int unitPixels = 120;

    int gamestate = 0;

    while (window.isOpen())
    {
        while (gamestate == 0) // MAIN MENU
        {
            mousePos = mouse.getPosition();

            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                {
                    window.close();
                }
                if (event.type == sf::Event::MouseButtonPressed)
                {
                    if (event.mouseButton.button == sf::Mouse::Left)
                    {
                        // If the mouse position is in the bounds of the board area when pressed
                        if (mousePos.x > 150 && mousePos.x < 1080 - 150)
                        {
                            gamestate = -1;
                            window.close();
                        }
                        // Else check which button the player has clicked
                        else
                        {
                            window.close();
                        }
                    }
                }
            }
            // Draw stuff here

        }
        /*
        while (gamestate == 1)
        {
            while(window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                {
                    window.close();
                    break;
                }
                if (event.type == sf::Event::MouseButtonPressed)
                {

                }
            }
        }
        */
    }

    return 0;
}
