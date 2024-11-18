#include <iostream>
#include <cmath>
using namespace std;

#include <Eigen/Core>
#include <Eigen/Geometry>

#include "sophus/so3.h"
#include "sophus/se3.h"


int main()
{

    cout<<"hello useSophus "<<endl;
    Eigen::Matrix3d R = Eigen::AngleAxisd(M_PI/2,Eigen::Vector3d(0,0,1)).toRotationMatrix();

    cout<<"R:"<<R<<endl;

    Sophus::SO3 SO3_R(R);
    Sophus::SO3 SO3_v(0,0,M_PI/2);
    Eigen::Quaterniond q(R);
    Sophus::SO3 SO3_q(q);

    cout<<"matrix"<<SO3_R<<endl;
    cout<<"vector"<<SO3_v<<endl;
    cout<<"quaterniond"<<SO3_q<<endl;



    return 0;
}












