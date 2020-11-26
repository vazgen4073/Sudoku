#ifndef SUDOKU_H
#define SUDOKU_H


class Sudoku {
private:
    static const int N = 9;

public:

    Sudoku() { }
    ~Sudoku() { }
    void enterDigits(int inputArr[N][N]);
    void Print();
    bool Solve(int row, int col);


private:

    int grid[N][N];

    bool RowisSafe(int row, int num);
    bool ColisSafe(int row, int num);
    bool BoxisSafe(int row, int col, int num);
    bool IsSafe(int row, int col, int num);
};










#endif // SUDOKU_H
