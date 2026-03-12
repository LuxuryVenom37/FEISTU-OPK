#include <gtest/gtest.h>
#include "fifo_lib/frame_fifo.hpp"
TEST(CameraFrame, NewFrameFIFOIsEmpty)
{
    FrameFifo fifo;
    EXPECT_EQ(fifo.empty(), true);
}