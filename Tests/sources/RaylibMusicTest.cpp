/*
** EPITECH PROJECT, 2021
** Indie
** File description:
** PlayerTests
*/

#include <gtest/gtest.h>
#include "../Tests/Lib/XRaylib/Raylib/Music/Music.hpp"


TEST(MusicTest, unloadMusicTest)
{
    try {
        Music test = LoadMusicStream("../../resources/music/Bomberman.mp3");
        UnloadMusicStream(test);

    } catch (std::exception &ex) {
        EXPECT_STREQ("ERROR: Invalid Unload music stream", ex.what());
    }
}

/*
TEST(MusicTest, isPlayingTest)
{
    Raylib::Music test;
    EXPECT_EQ(false, test.isPlaying());
}
how to implement since no music playing ??
*/