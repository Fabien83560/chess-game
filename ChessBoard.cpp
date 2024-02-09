#include "ChessBoard.h"
#include "King.h"
#include "Queen.h"
#include "Tower.h"
#include "Horse.h"
#include "Pawn.h"
#include "Bishop.h"

ChessBoard::ChessBoard() {
    for (int i = 0; i < 8; ++i) {
        vector<Piece*> row;
        for (int j = 0; j < 8; ++j) {
            row.push_back(nullptr);
        }
        board.push_back(row);
    }

    initializeBoard();
}

void ChessBoard::initializeBoard() {
    board[0][0] = new Tower("black");
    board[0][1] = new Horse("black");
    board[0][2] = new Bishop("black");
    board[0][3] = new Queen("black");
    board[0][4] = new King("black");
    board[0][5] = new Bishop("black");
    board[0][6] = new Horse("black");
    board[0][7] = new Tower("black");
    for (int i = 0; i < 8; ++i) {
        board[1][i] = new Pawn("black");
    }

    board[7][0] = new Tower("white");
    board[7][1] = new Horse("white");
    board[7][2] = new Bishop("white");
    board[7][3] = new Queen("white");
    board[7][4] = new King("white");
    board[7][5] = new Bishop("white");
    board[7][6] = new Horse("white");
    board[7][7] = new Tower("white");
    for (int i = 0; i < 8; ++i) {
        board[6][i] = new Pawn("white");
    }
}
