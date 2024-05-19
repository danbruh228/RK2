#include <gtest/gtest.h>
#include "map.cpp"

TEST(MapTileTest, Constructor) {
    MapTile mapTile(0.0, 0.0, 10.0, 10.0);
    EXPECT_EQ(mapTile.CenterX(), 0.0);
    EXPECT_EQ(mapTile.CenterY(), 0.0);
    EXPECT_EQ(mapTile.Width(), 10.0);
    EXPECT_EQ(mapTile.Height(), 10.0);
}

TEST(MapTileTest, Draw) {
    MapTile mapTile(0.0, 0.0, 10.0, 10.0);
    testing::internal::CaptureStdout();
    mapTile.Draw();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "* Draw MapTile from resouce. *\n");
}

TEST(MapTileTest, CenterPosition) {
    MapTile mapTile(5.0, 7.0, 10.0, 10.0);
    EXPECT_EQ(mapTile.CenterX(), 5.0);
    EXPECT_EQ(mapTile.CenterY(), 7.0);
}
