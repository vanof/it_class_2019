#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/objdetect/objdetect.hpp"
#include <opencv2/videoio.hpp>
#include <opencv2/imgcodecs.hpp>   

#include <stdio.h>
#include <iostream>

using namespace cv;
using namespace std;

VideoCapture cam(0);
Mat pic;

Mat takePicture() {
    while (!cam.isOpened()) {
        std::cout << "Failed to make connection to cam" << std::endl;
        cam.open(0);
    }
    cam >> pic;
    return pic;
}


int main(int argc, char** argv)
{
    
    Mat image;
    image = imread("cat.jpg");   

    if (!image.data)                             
    {
        cout << "Could not open or find the image" << std::endl;
        return -1;
    }

    namedWindow("Original image", WINDOW_AUTOSIZE);
    imshow("Original image", image);     
    
    /*
    Mat gray, edge, draw;
    cvtColor(image, gray, 0, 0);

    Canny(gray, edge, 50, 150, 3);

    edge.convertTo(draw, CV_8U);
    namedWindow("Contour image", WINDOW_AUTOSIZE);
    imshow("Contour image", draw);
    */

    /*
    // Load Face cascade (.xml file)
    CascadeClassifier face_cascade;
    face_cascade.load("haarcascade_frontalface_alt2.xml");

    // Detect faces
    std::vector<Rect> faces;
    face_cascade.detectMultiScale(image, faces, 1.1, 2, 0 | 1, Size(30, 30));

    // Draw circles on the detected faces
    for (int i = 0; i < faces.size(); i++)
    {
        Point center(faces[i].x + faces[i].width * 0.5, faces[i].y + faces[i].height * 0.5);
        ellipse(image, center, Size(faces[i].width * 0.5, faces[i].height * 0.5), 0, 0, 360, Scalar(255, 0, 255), 4, 8, 0);
    }
    imshow("Detected Face", image);
    */

    /*
    waitKey(1000);
    Mat image;
    image = takePicture();
    imshow("Camera original image", image);
    */
   
    /*
    Mat gray, edge, draw;
    cvtColor(image, gray, 0, 0);
    Canny(gray, edge, 50, 150, 3);
    edge.convertTo(draw, CV_8U);
    namedWindow("Camera contour image", WINDOW_AUTOSIZE);
    imshow("Camera contour image", draw);
    */

    waitKey(0);    
    return 0;
}