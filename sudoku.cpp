#include "sudoku.h"
#include <iostream>

void Sudoku::enterDigits()
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cin >> grid[i][j];
        }
    }
}

void Sudoku::Print()
{

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << "\n";
    }
}

bool Sudoku::RowisSafe(int row, int num)
{
    for (int i = 0; i < N; i++) {
        if (grid[row][i] == num) {
            return false;
        }
    }

    return true;
}

bool Sudoku::ColisSafe(int col, int num)
{
    for (int i = 0; i < N; i++) {
        if (grid[i][col] == num)
            return false;
    }

    return true;
}

bool Sudoku::BoxisSafe(int row, int col, int num)
{
    int strow = row - row % 3;
    int stcol = col - col % 3;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (grid[i + strow][j + stcol] == num)
                return false;
        }
    }

    return true;
}

bool Sudoku::IsSafe(int row, int col, int num)
{
    if (!RowisSafe(row, num)) {
        return false;
    }
    if (!ColisSafe(col, num)) {
        return false;
    }
    if (!BoxisSafe(row, col, num)) {
        return false;
    }

    return true;
}

bool Sudoku::Solve(int row, int col)
{
    if (row == N - 1 && col == N)
        return true;

    if (col == N) {
        row++;
        col = 0;
    }

    if (grid[row][col] > 0)
        return Solve(row, col + 1);

    for (int num = 1; num <= N; num++) {

        if (IsSafe(row, col, num)) {

            grid[row][col] = num;

            if (Solve(row, col + 1))
                return true;
        }

        grid[row][col] = 0;
    }
    return false;
}
