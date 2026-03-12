#include <opencv2/opencv.hpp>
#include <iostream>
#include <memory>

#include "canvas.h"
#include "shape.h"

int main() {
    const int WIDTH = 800;
    const int HEIGHT = 600;

    Canvas canvas(WIDTH, HEIGHT);

    cv::namedWindow("Shape Drawer", cv::WINDOW_AUTOSIZE);

    cv::Scalar currentColor = cv::Scalar(0, 0, 255); // default red

    while (true) {
        canvas.render();
        cv::imshow("Shape Drawer", canvas.getImage());

        int key = cv::waitKey(30);

        if (key == 27) break; // ESC

        if (key == 'c' || key == 'C') {
            auto circle = std::make_shared<Circle>(
                cv::Point(WIDTH / 2, HEIGHT / 2),
                50,
                currentColor,
                2
            );
            canvas.addShape(circle);
        }

        if (key == 'r' || key == 'R') {
            auto rect = std::make_shared<Rectangle>(
                cv::Point(WIDTH / 2 - 50, HEIGHT / 2 - 30),
                cv::Point(WIDTH / 2 + 50, HEIGHT / 2 + 30),
                currentColor,
                2
            );
            canvas.addShape(rect);
        }

        // Farby 1–5
        if (key == '1') currentColor = cv::Scalar(0, 0, 255);     // červená
        if (key == '2') currentColor = cv::Scalar(0, 255, 0);     // zelená
        if (key == '3') currentColor = cv::Scalar(255, 0, 0);     // modrá
        if (key == '4') currentColor = cv::Scalar(0, 255, 255);   // žltá
        if (key == '5') currentColor = cv::Scalar(255, 0, 255);   // purpurová

        if (key == ' ') {
            canvas.clear();
        }
    }

    return 0;
}
