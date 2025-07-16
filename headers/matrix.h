#ifndef MATRIX_H_
#define MATRIX_H_

class Matrix{
    private:
    vector <vector<int>> entries;
    int Row;
    int Col;
    public:

    Matrix() = default;
    Matrix(int row,int column) : Row(row), Col(column)
    {
        entries = vector <vector<int>> (Row,vector<int>(Col,0));
    }
    Matrix inverse();
    int det();
    Matrix RREF();
    Matrix operator+(Matrix &);
    Matrix operator*(Matrix &);
    Matrix& operator+=(Matrix &);
    Matrix& operator*=(Matrix &);
    friend ostream& operator<<(ostream&,const Matrix&);
    friend istream& operator>>(istream&,const Matrix&);
    int getRow();
    int getCol();
};

#endif