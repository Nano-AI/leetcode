void t(int** m, int s) {
    for (int x = 0; x < s; x++) {
        for (int y = x; y < s; y++) {
            int t = m[x][y];
            m[x][y] = m[y][x];
            m[y][x] = t;
        }
    }
}

void r(int** m, int s) {
    for (int i = 0; i < s; i++){
        for (int j = 0; j < s / 2; j++) {
            int t = m[i][j];
            m[i][j] = m[i][s - j - 1];
            m[i][s - j - 1] = t;
        }
    }
}

void rotate(int** matrix, int matrixSize, int* matrixColSize){
    t(matrix, matrixSize);
    r(matrix, matrixSize);
}