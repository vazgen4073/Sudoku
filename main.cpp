#include "sudoku.h"
#include <iostream>

int main()
{

    const int N = 9;
    int grid[N][N];

    std::cout << " Enter numbers (in an empty place insert 0) \n";

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cin >> grid[i][j];
        }
    }

    Sudoku sud;
    sud.enterDigits(grid);  //

    if (sud.Solve(0, 0)) {
        std::cout << "Solved! \n";
        sud.Print();
    } else
        std::cout << "Is not solved\n";



    return 0;
}

