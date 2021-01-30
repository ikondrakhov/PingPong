#ifndef MENU
#define MENU

#include <SFML/Graphics.hpp>
#include "Button.h"
#include "Text.h"

class Menu : public sf::Drawable
{
public:
    Menu(const sf::Vector2f& screenSize, const std::vector<std::string> btnTxt);
    ~Menu();
    void resizeMenu(const sf::Vector2f& screenSize);
    int processClick(const sf::Vector2i& position);
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

private:
    sf::Vector2f screenSize;
    std::vector<Button*> btns;
    std::vector<Text*> txts;
};

#endif