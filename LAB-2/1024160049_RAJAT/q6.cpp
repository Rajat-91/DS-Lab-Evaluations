#include <iostream>
using namespace std;

struct Triplet {
    int row, col, val;
};

void disp(Triplet arr[], int n) {
    cout << "Row Col Val\n";
    for (int i = 0; i < n; i++)
        cout << arr[i].row << "   " << arr[i].col << "   " << arr[i].val << endl;
}

void transpose(Triplet A[], Triplet T[], int n) {
    for (int i = 0; i < n; i++) {
        T[i].row = A[i].col;
        T[i].col = A[i].row;
        T[i].val = A[i].val;
    }
}

int main() {
    Triplet A[3]={{0,0,1},{0,2,2},{1,1,3}};
    Triplet B[3]={{0,0,4},{0,2,5},{1,1,6}};
    cout<<"Matrix A:\n"; 
    disp(A,3);
    cout<<"Matrix B:\n";
    disp(B,3);

    Triplet T[3];
    transpose(A,T,3);
    cout<<"\nTranspose of A:\n"; 
    disp(T,3);
    Triplet G[3];
    transpose(B,G,3);
    cout<<"\nTranspose of B:\n";
    disp(G,3);

    return 0;
}