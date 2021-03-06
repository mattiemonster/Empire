#ifndef CONFIG_H_INCLUDED
#define CONFIG_H_INCLUDED

#include <SFML/Graphics.hpp>

struct Config
{
    sf::Image   image;
    unsigned    width;
    unsigned    height;

    int reproductionThreshold = 8;
    int colonies = 10;
};

#endif // CONFIG_H_INCLUDED
