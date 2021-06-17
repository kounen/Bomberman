/*
** EPITECH PROJECT, 2021
** B-YEP-400-LYN-4-1-indiestudio-lucas.guichard
** File description:
** Astar
*/

#include "Astar.hpp"

Game::Point::Point(const int &x, const int &y)
    : _x{x}, _y{y}
{
}

Game::Astar::Astar(const std::vector<std::string> &map, const Point &start, const Point &target)
    : _map(map), _start(start), _target(target)
{
}