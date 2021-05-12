/*
** EPITECH PROJECT, 2021
** B-YEP-400-LYN-4-1-indiestudio-lucas.guichard
** File description:
** RayLib
*/

#ifndef RAYLIB_HPP_
#define RAYLIB_HPP_

#include <iostream>
#include <functional>
#include <string>
#include <map>
#include <sstream>
#include <vector>
#include <fstream>
#include <memory>
#include <utility>
#include "IGraphical.hpp"
#include "Window/Window.hpp"

namespace Raylib
{
    class RayLib : public IGraphical {

        public:
        /**
         * @brief Construct a new Ray Lib object
         */
        RayLib();

        /**
         * @brief Destroy the Ray Lib object
         */
        ~RayLib() override;

        /**
         * @brief Initialize window
         *
         * @param width Width of the Window
         * @param height Height of the Window
         * @param title Title of the Window
         */
        void initWindow(int width, int height, const char *title) override;

        /**
         * @brief Check if the window should be close
         *
         * @return true if the window should close and false otherwise
         */
        bool shouldCloseWindow() override;

        /**
         * @brief Set buffer to Draw textures
         */
        void beginDrawing() override;

        /**
         * @brief Unset buffer to Draw textures
         */
        void endDrawing() override;

        /**
         * @brief Close window
         */
        void closeWindow() override;

        /**
         * @brief Draw any Text in parameters
         *
         * @param text Text you want to display
         * @param posX Position on x
         * @param posX Position on y
         * @param fontSize Size of your text you want to display
         */
        void drawText(const char *text, int posX, int posY, int fontSize) override;

        private:
            Raylib::Window _window;
    };
}

#endif /* !RAYLIB_HPP_ */
