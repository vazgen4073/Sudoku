#ifndef SUDOKU_H
#define SUDOKU_H


class Sudoku {
private:
    static const int N = 9;

public:
    Sudoku() { }
    ~Sudoku() { }

    void enterDigits( );
    void Print();
    bool Solve(int row, int col);
    static int get_size ();

//    int N = Sudoku::get_size();
//    const int& N1 = N;    //
//    const int N_=const_cast<int&>(N1)

private:

    int grid[N][N];

    bool RowisSafe(int row, int num);
    bool ColisSafe(int row, int num);
    bool BoxisSafe(int row, int col, int num);
    bool IsSafe(int row, int col, int num);
};











#endif // SUDOKU_H
