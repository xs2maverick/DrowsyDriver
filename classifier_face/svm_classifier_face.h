#ifndef SVM_CLASSIFIER_FACE_H
#define SVM_CLASSIFIER_FACE_H


#include <stdio.h>
#include <string>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/ml/ml.hpp>
#include <opencv2/highgui/highgui.hpp>

class svm_classifier_face
{

public:
    svm_classifier_face(std::string path_loading_svm);
    int svm_classifier_classify(cv::Mat& histogram);
    void svm_classifier_load(std::string path_loading_svm);


protected:
    cv::SVM svm_instance;

};

#endif // SVM_CLASSIFIER_H
