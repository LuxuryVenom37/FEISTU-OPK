//
// Created by viktor on 25/02/2026.
//
#pragma once
#include <opencv2/opencv.hpp>

// Abstraktná trieda
class Shape {
public:
    virtual ~Shape() = default;
    virtual void draw(cv::Mat& image) = 0;
};

// -------------------- Circle --------------------
class Circle : public Shape {
public:
    cv::Point center;
    int radius;
    cv::Scalar color;
    int thickness;

    Circle(cv::Point c, int r, cv::Scalar col, int t = 2)
        : center(c), radius(r), color(col), thickness(t) {}

    void draw(cv::Mat& image) override {
        cv::circle(image, center, radius, color, thickness);
    }
};

// -------------------- Rectangle --------------------
class Rectangle : public Shape {
public:
    cv::Point topLeft;
    cv::Point bottomRight;
    cv::Scalar color;
    int thickness;

    Rectangle(cv::Point tl, cv::Point br, cv::Scalar col, int t = 2)
        : topLeft(tl), bottomRight(br), color(col), thickness(t) {}

    void draw(cv::Mat& image) override {
        cv::rectangle(image, topLeft, bottomRight, color, thickness);
    }
};
