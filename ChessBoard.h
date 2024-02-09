#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include "Piece.h"

#include <vector>

using namespace std;

class ChessBoard {
private:
    vector<vector<Piece*>> board;

public:
    ChessBoard();
    void initializeBoard();

    inline Piece* getPiece(int x , int y) const { return board[x][y]; }
};

#endif // CHESSBOARD_H
