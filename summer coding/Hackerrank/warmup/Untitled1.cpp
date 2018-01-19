#include<iostream>
#include<vector>
using namespace std;

int expand(vector<string> & mat, int n, int m, int r, int c, int size);
void fill(vector<string> & mat, int r, int c, int size, char bg);
int superComputer(vector<string> & mat, int n, int m);
int maxPlus(vector<string> & mat, int n, int m);

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> matrix(n);
    for (int index = 0; index < n; ++index) {
        cin >> matrix[index];
    }
    cout << superComputer(matrix, n, m) << endl;
    return 0;
}

int expand(vector<string> & mat, int n, int m, int r, int c, int size) {
    // PRECONDITION: there is a valid plus sign centered on mat[r][c] with size
    // also works for size == 0
    if (
        (r - size >= 0 && mat[r-size][c] == 'G')
        && (r + size < n && mat[r+size][c] == 'G')
        && (c - size >= 0 && mat[r][c-size] == 'G')
        && (c + size < m && mat[r][c+size] == 'G')
       ) {
        // if you can expand the plus sign to (size + 1), return the expanded size
        return size + 1;
    }
    else {
        // if you can't expand, return false
        return 0;
    }
}

void fill(vector<string> & mat, int r, int c, int size, char bg) {
    // PRECONDITION: there is enough space to get a full plus sign centered
    // on mat[r][c] with size
    mat[r][c] = bg;
    for (int i = 1; i < size; ++i) {
        mat[r-i][c] = bg;
        mat[r+i][c] = bg;
        mat[r][c-i] = bg;
        mat[r][c+i] = bg;
    }
    // use fill() to change a plus sign to all 'bad' cells, and change back later
}

int maxPlus(vector<string> & mat, int n, int m) {
    // Simply find the max size of a plus sign on the current matrix
    // This can only be called when you are trying to find the second plus sign
    // with the first plus sign all changed to 'bad' cells
    int tempMaxSize(0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int size(0);
            int curSize(0);
            while (curSize = expand(mat, n, m, i, j, size)) {
                size = curSize;
            }
            // got prevSize as the max size for this spot
            if (size > tempMaxSize) {
                tempMaxSize = size;
            }
        }
    }
    return tempMaxSize;
}

int superComputer(vector<string> & mat, int n, int m) {
    // Use outer and inner (triple: for for while) loops. Outer (triple) loop tries
    // to find a plus sign with any size. Call maxPlus() to execute the inner (triple)
    // loop. Inner (triple) loop tries to find the max plus sign on a matrix where the
    // plus sign found by outer loop is all changed to 'bad' cells
    int tempMaxAreaS(0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int prevSize(0);
            int curSize(0);
            while (curSize = expand(mat, n, m, i, j, prevSize)) {
                fill(mat, i, j, curSize, 'B');
                int curArea = curSize * 4 - 3;
                int otherSize = maxPlus(mat, n, m);
                int otherArea = otherSize * 4 - 3;
                // update the tempMax
                if (curArea * otherArea > tempMaxAreaS) {
                    tempMaxAreaS = curArea * otherArea;
                }
                fill(mat, i, j, curSize, 'G');
                prevSize = curSize;
            }
        }
    }
    return tempMaxAreaS;
}

