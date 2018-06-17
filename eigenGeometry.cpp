//
// Created by qwe on 6/4/18.
//

#include <iostream>
#include <cmath>
using namespace std;

#include <Eigen/Core>
#include <Eigen/Geometry>

int main(int argc,char** argv)
{
    Eigen::Matrix3d rotation_matrix = Eigen::Matrix3d::Identity();
    Eigen::AngleAxisd rotation_vector(M_PI/4,Eigen::Vector3d(0,0,1));
    cout .precision(8);
    cout<<"rotation matrix 0 = \n"<<rotation_vector.matrix()<<endl;
    return 0;

}