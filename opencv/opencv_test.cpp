#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;

int
main(int argc, char**)
{
    VideoCapture cap(0);

    if(!cap.isOpened())
    {
      return -1;
    }

    Mat frame;
    namedWindow("Webcam", WINDOW_OPENGL);

    for(;;)
    {
        cap >> frame;
        imshow("Webcam", frame);
        if(waitKey(30) >= 0) break;
    }

    return 0;
}
