#ifndef SUDOKU_H
#define SUDOKU_H

class Sudoku {

public:
    Sudoku() { }
    ~Sudoku() { }

    void enterDigits();
    void Print();
    bool Solve(int row, int col);

private:
    static const int N = 9;

    int grid[N][N];

    bool RowisSafe(int row, int num);
    bool ColisSafe(int row, int num);
    bool BoxisSafe(int row, int col, int num);
    bool IsSafe(int row, int col, int num);
};

#endif // SUDOKU_H
