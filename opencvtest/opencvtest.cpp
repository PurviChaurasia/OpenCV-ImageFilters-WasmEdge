#include <iostream>
#include <opencv2/opencv.hpp>


int main(int argc, char** argv) {
    
    std::string file_path;
    file_path = "C:\\opencv\\redHats.jpg";
    cv::Mat src = cv::imread(file_path);

    // Checking if path exixts
    if (src.empty()) {
        std::cout << "Could not read the image" << std::endl;
        return 1;
    }

    cv::Size dims = cv::Size(3, 3);
    cv::Mat dst, kernel;
    cv::Mat kernel3 = (cv::Mat_<double>(3, 3) << 0, -1, 0,
        -1, 5, -1,
        0, -1, 0);

    // Option no.
    int opt;
    std::cout << "Filters:- " << std::endl
        << "1. Box filter" << std::endl
        << "2. Gaussian Blur filter" << std::endl
        << "3. Median Blur filter" << std::endl
        << "4. Sobel Edge-Y filter" << std::endl
        << "5. Sobel Edge-X filter" << std::endl
        << "6. Sharpen filter" << std::endl
        << "7. High Pass filter" << std::endl
        << "8. Emboss filter" << std::endl
        << "9. Bilateral Filter" << std::endl
        << "Enter option no.: ";

    std::cin >> opt;

    switch (opt) {
    case 1: // Box filter
        cv::boxFilter(src, dst, -1, dims);
        break;
    case 2: // Gaussian filter
        cv::GaussianBlur(src, dst, dims, 0);
        break;
    case 3: // Median Filter
        cv::medianBlur(src, dst, (3, 3));
        break;
    case 4: // Sobel Y filter
        cv::Sobel(src, dst, -1, 0, 1, 3);
        break;
    case 5: // Sobel X filter
        cv::Sobel(src, dst, -1, 1, 0, 3);
        break;
    case 6: // Sharpen filter
        kernel = (cv::Mat_<int>(3, 3) << 0, -1, 0, -1, 5, -1, 0, -1, 0);
        cv::filter2D(src, dst, -1, kernel);
        break;
    case 7: // High Pass filter
        kernel = (cv::Mat_<int>(3, 3) << 0, -1, 0, -1, 4, -1, 0, -1, 0);
        cv::filter2D(src, dst, -1, kernel);
        break;
    case 8: // Emboss filter
        kernel = (cv::Mat_<int>(3, 3) << -2, -1, 0, -1, 1, 1, 0, 1, 2);
    case 9: // Bilateral filter
        cv::bilateralFilter(src, dst, 9, 75, 75);
        break;
    default:
        std::cout << "Incorrect option!" << std::endl;
        return 0;
        break;
    }
    cv::imshow("Input image (press enter to continue)", src);
    cv::waitKey(0);
    cv::imshow("Output Image", dst);
    cv::imwrite("../assets/test-" + std::to_string(opt) + ".png", dst);
    cv::waitKey(0);
    return 0;
}