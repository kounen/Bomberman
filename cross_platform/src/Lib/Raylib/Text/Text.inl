/*
** EPITECH PROJECT, 2021
** B-YEP-400-LYN-4-1-indiestudio-lucas.guichard
** File description:
** Text
*/

inline void Raylib::Text::drawText(const std::string &title, const size_t &posX, const size_t &posY, const size_t &fontSize, const Raylib::Color &color) const
{
    ::DrawText(title.c_str(), posX, posY, fontSize, color.getCStruct());
}

inline void Raylib::Text::drawTextEx(const std::string &font, const std::string &text, const std::pair<size_t, size_t> &position, const float &fontSize, const float &spacing, const Color &tint) const
{
    Vector2 vec = {(float)position.first, (float)position.second};
    ::Font loadedFont = ::LoadFont(font.c_str());

    ::SetTextureFilter(loadedFont.texture, TEXTURE_FILTER_BILINEAR);
    ::DrawTextEx(loadedFont, text.c_str(), vec, fontSize, spacing, tint.getCStruct());
}

inline size_t Raylib::Text::measureText(const std::string &text, const size_t &fontSize) const
{
    return ::MeasureText(text.c_str(), fontSize);
}

inline bool Raylib::Text::textIsEqual(const std::string &text1, const std::string &text2) const
{
    return ::TextIsEqual(text1.c_str(), text2.c_str());
}

inline size_t Raylib::Text::textLength(const std::string &text) const
{
    return ::TextLength(text.c_str());
}