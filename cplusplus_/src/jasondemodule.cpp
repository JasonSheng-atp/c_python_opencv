#include"jasondemodule.hpp"
#include <iostream>
using namespace std;
using namespace cv;
namespace jasonnb
{
float
mat_max(const Mat& x)
{
    float maximum = 0;
    for (int i = 0; i < x.rows; i++)
    {
        for (int j = 0; j < x.cols; j++)
        {
            if (x.at<float>(i, 0 + 3 * j) > maximum)
            {
                maximum = x.at<float>(i, 0 + 3 * j);
            }
            if (x.at<float>(i, 1 + 3 * j) > maximum)
            {
                maximum = x.at<float>(i, 1 + 3 * j);
            }
            if (x.at<float>(i, 2 + 3 * j) > maximum)
            {
                maximum = x.at<float>(i, 2 + 3 * j);
            }
        }
    }
    return maximum;
}
}