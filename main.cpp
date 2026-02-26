// Copyright 2023 <Michael Jreij>"
#include <SFML/Graphics.hpp>
#include "Universe.hpp"
// ./NBody < 3body
int main() {
sf::RenderWindow window(sf::VideoMode(800, 800), "SFML window");

Universe universe;
std::cin >> universe;

while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
    }
    window.clear();
    window.draw(universe);
    window.display();
    }
return 0;
}
