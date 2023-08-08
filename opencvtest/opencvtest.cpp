#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char** argv) {
    
    string file_path;
    file_path = "C:\\opencv\\redHats.jpg";
    Mat src = imread(file_path);

    // Checking if path exixts
    if (src.empty()) {
        cout << "Could not read the image" << std::endl;
        return 1;
    }

    Size dims = cv::Size(3, 3);
    Mat dst, kernel;
    
    // Option no.
    int opt;
    cout << "Filters:- " << endl
        << "1. Box filter" << endl
        << "2. Gaussian Blur filter" << endl
        << "3. Median Blur filter" << endl
        << "4. Sobel Edge-Y filter" << endl
        << "5. Sobel Edge-X filter" << endl
        << "6. Sharpen filter" << endl
        << "7. High Pass filter" << endl
        << "8. Emboss filter" << endl
        << "9. Bilateral Filter" << endl
        << "Enter option no.: ";

    cin >> opt;

    switch (opt) {
    case 1: // Box filter
        boxFilter(src, dst, -1, dims);
        break;
    case 2: // Gaussian filter
        GaussianBlur(src, dst, dims, 0);
        break;
    case 3: // Median Filter
        medianBlur(src, dst, (3, 3));
        break;
    case 4: // Sobel Y filter
        Sobel(src, dst, -1, 0, 1, 3);
        break;
    case 5: // Sobel X filter
        Sobel(src, dst, -1, 1, 0, 3);
        break;
    case 6: // Sharpen filter
        kernel = (:Mat_<int>(3, 3) << 0, -1, 0, -1, 5, -1, 0, -1, 0);
        filter2D(src, dst, -1, kernel);
        break;
    case 7: // High Pass filter
        kernel = (Mat_<int>(3, 3) << 0, -1, 0, -1, 4, -1, 0, -1, 0);
        filter2D(src, dst, -1, kernel);
        break;
    case 8: // Emboss filter
        kernel = (Mat_<int>(3, 3) << -2, -1, 0, -1, 1, 1, 0, 1, 2);
        filter2D(src, dst, -1, kernel);
        break;
    case 9: // Bilateral filter
        bilateralFilter(src, dst, 9, 75, 75);
        break;
    default:
        cout << "Incorrect option!" << endl;
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
