#ifndef _IMAGERECONSTRUCTION_H_
#define _IMAGERECONSTRUCTION_H_

#include <opencv2/opencv.hpp>
#include <queue>

struct Pixel {
	int x;
	int y;
};

template<typename T> void ImageReconstruct(cv::Mat& marker, cv::Mat& mask);
template<typename T> void PropagationStep(cv::Mat& marker, cv::Mat& mask ,int x, int y, int offsetX, int offsetY, std::queue<Pixel>& queue);

#include "template_imagereconstruct.hpp"

#endif
