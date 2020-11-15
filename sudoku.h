#ifndef SUDOKU_H
#define SUDOKU_H

class Sudoku {
public:
    Sudoku() { }
    ~Sudoku() { }
    void enterDigits(int inputArr[9][9]);
    void Print();
    bool Solve(int row, int col);

private:
    int grid[9][9];
    int N = 9;
    int FF;
    bool RowisSafe(int row, int num);
    bool ColisSafe(int row, int num);
    bool BoxisSafe(int row, int col, int num);
    bool IsSafe(int row, int col, int num);
};

#endif // SUDOKU_H
