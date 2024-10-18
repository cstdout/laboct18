
#include <iostream>
#include <cstdlib>
int main() {
    srand(time(0)); 
    const int n = 5;    
    // init 2d array
    int **mat1 = new int*[n];
    for(int i = 0; i < n; ++i)
    {
        mat1[i] = new int[n];
    }
    
    // init 2d array
    int **mat2 = new int*[n];
    for(int i = 0; i < n; ++i)
    {
        mat2[i] = new int[n];
    }
    
    // init 2d array
    int **mat3 = new int*[n];
    for(int i = 0; i < n; ++i)
    {
        mat3[i] = new int[n];
    }
    
     // init 2d array
    int **mat4 = new int*[n];
    for(int i = 0; i < n; ++i)
    {
        mat4[i] = new int[n];
    }
    
    // fill the matrix
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            mat1[i][j] = rand() % 100;
        }
    }
     // fill the matrix
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            mat2[i][j] = rand() % 100;
        }
    }
    
    
    //sum mat1 + mat2
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    
    //print mat3
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            std::cout << mat3[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    
     //sum mat1 - mat2
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            mat4[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    std::cout << "\n\n";
    //print mat4
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            std::cout << mat4[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}
