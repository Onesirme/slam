#include <iostream>
using namespace std;
#include <ctime>

#include <Eigen/Core>
#include <Eigen/Dense>

#define MATRIX_SIZE 50


int main(int argc,char** argv )
{

	cout <<"hello Eigen"<<endl;
	Eigen::Matrix<float, 2, 3>matrix_23;

	Eigen::Vector3d v_3d;
    
    Eigen::Matrix3f a;
    a<<1,2,3,4,5,6,7,8,9;
    cout<<a<<endl;
    Eigen::Matrix<float,3,1>vd_3d;
    
    Eigen::Matrix3d matrix_33 = Eigen::Matrix3d::Zero();
    
    Eigen::Matrix< double ,Eigen::Dynamic,Eigen::Dynamic>matrix_dynamic;
    
    matrix_23 <<1,2,3,4,5,6;
    
    cout <<matrix_23<<endl;
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
            cout <<matrix_23(i,j)<<'\t';
        cout<<endl;
    }
    cout <<matrix_33 <<endl;
    Eigen::MatrixXd matrix_x;
    
    v_3d<<3,2,1;
    vd_3d<<4,5,6;
    Eigen::Matrix<double ,2 ,1> result = matrix_23.cast<double>() * v_3d;
    cout <<result <<endl;
    Eigen::Matrix<float , 2, 1> result2 = matrix_23 *vd_3d;   
    cout <<result2<<endl;
    matrix_33 = Eigen::Matrix3d::Random();
    cout<< matrix_33 <<endl<<endl;
    
    cout<<"T"<<endl << matrix_33.transpose() <<endl;
    cout<<"sum"<<endl << matrix_33.sum() <<endl;
    cout<<"trace"<<endl << matrix_33.trace() <<endl;
    cout<<"10"<<endl << matrix_33*10 <<endl;
    cout<<"inverse"<<endl << matrix_33.inverse() <<endl;
    cout<<"determinant"<<endl << matrix_33.determinant() <<endl;
    
    Eigen::SelfAdjointEigenSolver<Eigen::Matrix3d>eigen_solver(matrix_33);
    cout<< "Eigen values =\n"<<eigen_solver.eigenvalues() <<endl;
    cout <<"Eigen vectors=\n"<<eigen_solver.eigenvectors()<<endl;
    


	return 0;
}



