// Copyright 2023 <Michael Jreij>"
#include "CelestialBody.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>


    CelestialBody::CelestialBody() {
        xpos = 0;
        ypos = 0;
        xvel = 0;
        yvel = 0;
        mass = 0;
        filename = " ";
    }

    void CelestialBody::draw(sf::RenderTarget& target,
    sf::RenderStates states) const {
        target.draw(sprite, states);
    }



    void CelestialBody::position(double radius) {
        double x = ((xpos / radius) * (800/2) + (800/2));
        double y = (-(ypos / radius) * (800/2) + (800/2));
        sprite.setPosition(x, y);
    }

    void CelestialBody::Planets() {
        texture.loadFromFile(filename);
        std::cout << filename << "\n";

        sprite.setTexture(texture);
    }


    std::ostream &operator<<(std::ostream &output, const CelestialBody &C) {
        output << " x: " << C.xpos << " y: " << C.ypos << " xv: "
        << C.xvel << " yv: " << C.yvel << " m: "
        << C.mass << " c: " << C.filename;
        return output;
    }

    std::istream &operator>> (std::istream &input, CelestialBody &C) {
        input >> C.xpos >> C.ypos >> C.xvel >> C.yvel >> C.mass >> C.filename;


        return input;
    }
