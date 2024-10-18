#include <iostream>
int main() {
    int n;
    std::cin >> n;
    int **mat = new int*[n];
    for(int i = 0; i < n; ++i)
    {
        mat[i] = new int[n];
    }
   int counter = 1;    
   int top = 0, right = n -1, bottom = n - 1, left = 0;
   int end = n * n;
   while(counter <= end)
   {
       for(int j = left; j <= right; ++j)
       {
           mat[top][j] = counter++;
       }
        for(int j = top + 1; j <= bottom; ++j)
       {
           mat[j][right] = counter++;
       }
       ++top;
       --right;
       for(int j = right; j >= left; --j)
       {
           mat[bottom][j] = counter++;
       }
       --bottom;
       for(int j = bottom; j >= top; --j)
       {
           mat[j][left] = counter++;
       }
       ++left;
   }
   
    
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            std::cout << mat[i][j] << "\t\t";
        }
        std::cout << std::endl;
    }
    return 0;
}
