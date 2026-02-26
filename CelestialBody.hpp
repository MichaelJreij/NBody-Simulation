// Copyright 2023 <Michael Jreij>"
#pragma once
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

class CelestialBody : public sf::Drawable{
 private:
    double xpos;
    double ypos;
    double xvel;
    double yvel;
    double mass;
    std::string filename;
    sf::Texture texture;
    sf::Sprite sprite;

    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
 public:
    CelestialBody();
    friend std::ostream &operator<<
    (std::ostream &output, const CelestialBody &C);
    friend std::istream &operator>> (std::istream &input, CelestialBody &C);
    void Planets();
    void position(double radius);
};
