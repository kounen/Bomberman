/*
** EPITECH PROJECT, 2021
** B-YEP-400-LYN-4-1-indiestudio-lucas.guichard
** File description:
** Map
*/

#ifndef MAP_HPP_
#define MAP_HPP_

#include <vector>
#include <iostream>

#define BORDER 2

namespace Game
{
    class Map
    {
        public:
            /**
            * @brief Construct the Map object
            */
            Map();

            /**
            * @brief Construct the Map object (Copy Constructor)
            *
            * @param width Width of the map
            * @param height Height of the map
            */
            Map(const size_t &width, const size_t &height);

            /**
            * @brief Destroy the Map object
            */
            ~Map();

            /**
             * @brief Getter for map width
             *
             * @return Width of the map (size_t)
             */
            size_t getWidth(void) const;

            /**
             * @brief Getter for map height
             *
             * @return Height of the map (size_t)
             */
            size_t getHeight(void) const;

            /**
             * @brief Setter for map width
             *
             * @param width A const reference to an size_t
             */
            void setWidth(const size_t width);

            /**
             * @brief Setter for map height
             *
             * @param height A const reference to an size_t
             */
            void setHeight(const size_t height);

            /**
             * @brief Getter for map
             *
             * @return The map (a vector of vectors of chars)
             */
            std::vector<std::vector<char>> getMap(void) const;

            /**
             * @brief Dump the map
             */
            void dump(void) const;

        private:
            size_t _width; // Width of the map
            size_t _height; // Height of the map
            std::vector<std::vector<char>> _map; // Map

            /**
             * @brief Create the map
             */
            void create(void);

            /**
             * @brief Fill the map with a specific character
             *
             * @param character A const reference to a character
             */
            void fill(const char &character);

            /**
             * @brief Maze the map
             */
            void maze(void);
    };

    #include "Map.inl"
}

#endif /* !MAP_HPP_ */
