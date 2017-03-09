                                                                                                
#include <iostream>                                                                                                                           
#include <cmath>                                                                                                                              
                                                                                                                                              
double f(double x);                                                                                                                           
double method(double x0,int NMAX, double eps);                                                                                                
int main (void)                                                                                                                               
{                                                                                                                                             
  std::cout.precision (16);                                                                                                                   
  std::cout.setf(std::ios::scientific);                                                                                                       
  return method(0,20,1e-5);                                                                                                                   
}                                                                                                                                             
                                                                                                                                              
double f(double x)                                                                                                                            
{                                                                                                                                             
                                                                                                                                              
  return  std::exp(-x)-x;                                                                                                                     
}                                                                                                                                             
double method(double x0, int NMAX, double eps)                                                                                                
{                                                                                                                                             
  double xr=x0;                                                                                                                               
  for (int ii; ii<=NMAX; ++ii )                                                                                                               
    {                                                                                                                                         
    xr=xr-(f(xr)/(-std::exp(-xr)-1));                                                                                                         
                                                                                                                                              
    std::cout<<ii<<"  "<<xr<<"  "<<f(xr)<<std::endl;                                                                                          
                                                                                                                                              
                                                                                                                                              
    if (std::fabs(f(xr))<eps)                                                                                                                 
    break;                                                                                                                                    
    }                                                                                                                                         
}                                                                                                                                             

