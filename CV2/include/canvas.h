//
// Created by viktor on 25/02/2026.
//
#pragma once
#include <vector>
#include <memory>
#include <opencv2/opencv.hpp>
#include "shape.h"

class Canvas {
public:
    Canvas(int width, int height);

    void addShape(std::shared_ptr<Shape> shape);
    void clear();
    void render();

    cv::Mat& getImage();

private:
    cv::Mat image;
    int width;
    int height;
    std::vector<std::shared_ptr<Shape>> shapes;
};

