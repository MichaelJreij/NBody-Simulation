// Copyright 2023 <Michael Jreij>"
#include "Universe.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>

Universe::Universe(int numPlanets, double radius) {
}

    void Universe::draw(sf::RenderTarget& target,
    sf::RenderStates states) const {
        for (int i = 0; i < numPlanets; ++i) {
        target.draw(*planets[i], states);
        }
    }



    std::ostream &operator<<(std::ostream &output, const Universe &U) {
        output << " n: " << U.numPlanets << " r: " << U.radius;
        return output;
    }

    std::istream &operator>> (std::istream &input, Universe &U) {
        input >> U.numPlanets >> U.radius;
        U.planets.clear();
        for (int i = 0; i < U.numPlanets; ++i) {
        U.planets.push_back(std::make_unique<CelestialBody>());
    }
        for (int i = 0; i < U.numPlanets; ++i) {
        input >> *U.planets[i];
        U.planets[i] -> Planets();
        U.planets[i] -> position(U.radius);
        }
        return input;
    }
