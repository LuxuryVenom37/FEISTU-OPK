//
// Created by viktor on 25/02/2026.
//
#include "canvas.h"

Canvas::Canvas(int width, int height)
    : width(width), height(height)
{
    image = cv::Mat(height, width, CV_8UC3, cv::Scalar(255, 255, 255));
}

void Canvas::addShape(std::shared_ptr<Shape> shape) {
    shapes.push_back(shape);
}

void Canvas::clear() {
    shapes.clear();
    image = cv::Mat(height, width, CV_8UC3, cv::Scalar(255, 255, 255));
}

void Canvas::render() {
    image = cv::Mat(height, width, CV_8UC3, cv::Scalar(255, 255, 255));

    for (auto& s : shapes) {
        s->draw(image);
    }
}

cv::Mat& Canvas::getImage() {
    return image;
}
