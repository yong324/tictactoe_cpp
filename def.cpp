#include <iostream>
#include "dec.h"



std::string board[9] = {" "," "," "," "," "," "," "," "," "};
int player = 1;
int position = 0;


void intro() {
    std::cout<<"Press Enter to being: ";
    getchar(); //halts the screen
    std::cout<<std::endl;

    std::cout<<"Player 1 is X"<<std::endl;
    std::cout<<"Player 2 is O"<<std::endl;

    std::cout<<"The grid as shown below"<<std::endl;

    std::cout<<"      |      |      "<<std::endl;
    std::cout<<"  1   |   2  |   3  "<<std::endl;
    std::cout<<"______|______|______"<<std::endl;
    std::cout<<"      |      |      "<<std::endl;
    std::cout<<"  4   |   5  |   6  "<<std::endl;
    std::cout<<"______|______|______"<<std::endl;
    std::cout<<"      |      |      "<<std::endl;
    std::cout<<"  7   |   8  |   9  "<<std::endl;
    std::cout<<"      |      |      "<<std::endl;
}

