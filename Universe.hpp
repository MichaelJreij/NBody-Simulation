// Copyright 2023 <Michael Jreij>"
#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include <SFML/Graphics.hpp>
#include "CelestialBody.hpp"

class Universe : public sf::Drawable{
 private:
    int numPlanets;
    double radius;
    std::vector< std::unique_ptr< CelestialBody>> planets;

    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
 public:
      Universe():numPlanets(0), radius(0) {
    }


    Universe(int numPlanets, double radius);
    friend std::ostream &operator<<(std::ostream &output, const Universe &U);
    friend std::istream &operator>> (std::istream &input, Universe &U);
};
