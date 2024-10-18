#include <iostream>
#include <cstdlib>
#include <algorithm>
int main() {
    srand(time(0)); 
    const int n = 5;    
    // init 2d array
    int **mat = new int*[n];
    for(int i = 0; i < n; ++i)
    {
        mat[i] = new int[n];
    }

    // fill the matrix
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            mat[i][j] = rand() % 100;
            std:: cout << mat[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    
    std::cout << std::endl;
     
    for(int i = 0; i < n; ++i)
    {
        
        for(int j = 0; i != j && j < n; ++j)
        {
            std::swap(mat[i][j], mat[j][i]);
            
        }

    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
           
            std:: cout << mat[i][j] << ' ';
        }
        std::cout << std::endl;
    }
   

    return 0;
}
