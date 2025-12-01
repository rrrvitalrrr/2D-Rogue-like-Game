#include "MainMenu.h"
#include <iostream>
auto main() -> int {
    // Initialize MainMenu
    MainMenu mainMenu;
    sf::Clock clock;
    std::cout << "Game is initiated \n";

    //menu Loop
    while (mainMenu.running()) {
        sf::Time elapsed = clock.restart();
        mainMenu.update(elapsed.asSeconds());
        mainMenu.render();
    }

    return 0;
}