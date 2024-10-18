
#include <iostream>
#include <cstdlib>
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
    
    int maxElemInARow;
    int sum = 0;
    for(int i = 0; i < n; ++i)
    {
        maxElemInARow = mat[i][0];
        for(int j = 1; j < n; ++j)
        {
            if (maxElemInARow < mat[i][j])
            {
                maxElemInARow = mat[i][j];
            }
        }
        std::cout << "max: " << maxElemInARow << std::endl;
        sum += maxElemInARow;
    }
    
    std::cout << '\n' << sum;
    return 0;
}
