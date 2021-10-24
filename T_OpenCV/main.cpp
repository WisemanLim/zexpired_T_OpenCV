//
//  main.cpp
//  T_OpenCV
//
//  Created by Wiseman.Lim on 2021/10/21.
//

#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

int main(int argc, const char * argv[]) {
    // insert code here...
    /* std::cout << "Hello, World!\n";
    return 0; */
    
    cv::Mat pic = cv::imread("/Users/wisemanlim/Documents/Xcode-workspace/T_OpenCV/Lenna_(test_image).png");
    if (pic.empty()) {
        std::cerr << "read fail!" << std::endl;
        exit(-1);
    }
    imshow("Pic", pic);
    cv::waitKey(0);
    
    return 0;
}
