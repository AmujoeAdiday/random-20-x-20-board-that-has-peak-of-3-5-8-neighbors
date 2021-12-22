//============================================================================
// Name        : FinalLab_Lomsomboot.cpp
// Author      : AmuJoe Adiday
// Description : randomly create a 20x20 2D array that has the peak(either min or
// max of 3,5,8 neighbors each  time it randoms.

//============================================================================


#include <iostream>
#include <stdio.h>
#include <ctime>
#include <stdlib.h>
#include <cmath>
using namespace std;
const int ROWS = 3;
const int COLS = 3;
const int NUMBERS = 100;
int main() {
	int board[ROWS][COLS];
	srand(time(0));
	bool flag = false;
	while (!flag){
	for(int i = 0; i < ROWS; i++){
		for(int j = 0; j < COLS; j++){
			board[i][j] = rand() % NUMBERS + 1;
			printf("%3d ", board[i][j]);
		}
		cout << endl;
	}
	// 3 neighbors
	cout << "CORNERS" << endl;

	int ch_3=0;

	int peakMin_3, peakMax_3;
	for(int i = 0; i < ROWS; i++){
			for(int j = 0; j < COLS; j++)
				//TOP-LEFT
				//(0,0) min
				//board[i][j+1]
				//board[i+1][j]
				//board[i+1][j+1]

				if ( i== 0 and j==0 and board[i][j]< board[i][j+1] and board[i][j]< board[i+1][j] and board[i][j]< board[i+1][j+1]){
					ch_3++;
					peakMin_3 = board[i][j];
					cout<< "It has a min of 3 nb. The position is [i,j] = ["<<i<< ","<<j<< "]"<< "The peak min is "<< peakMin_3<<endl;
				}
				//(0,0) max
				else if( i== 0 and j==0 and board[i][j]> board[i][j+1] and board[i][j]> board[i+1][j] and board[i][j]> board[i+1][j+1]){
					ch_3++;
					peakMax_3 = board[i][j];
					cout<< "It has a max of 3 nb. The position is [i,j] = ["<<i<< ","<<j<< "]"<<"The peak max is "<< peakMax_3<<endl;
				}

				//BOTTOM-LEFT
				//(ROWS-1,0) min
				//board[i-1][j]
				//board[i-1][j+1]
				//board[i][j+1]
				else if ( i== ROWS-1 and j==0 and board[i][j]< board[i-1][j] and board[i][j]< board[i-1][j+1] and board[i][j]< board[i][j+1]){
					ch_3++;
					peakMin_3 = board[i][j];
					cout<< "It has a min of 3 nb. The position is [i,j] = ["<<i<< ","<<j<< "]"<< "The peak min is "<< peakMin_3<<endl;
							}
				//(ROWS-1,0) max
				else if ( i== ROWS-1 and j==0 and board[i][j]> board[i-1][j] and board[i][j]>board[i-1][j+1] and board[i][j]> board[i][j+1]){
					ch_3++;
					peakMax_3 = board[i][j];
					cout<< "It has a max of 3 nb. The position is [i,j] = ["<<i<< ","<<j<< "]"<<"The peak max is "<< peakMax_3<<endl;
			}
			//TOP-RIGHT
			//(0,COLS-1) min
			//board[i][j-1]
			//board[i+1][j-1]
			//board[i+1][j]
				else if ( i== 0 and j== COLS-1 and board[i][j]< board[i][j-1] and board[i][j]< board[i+1][j-1] and board[i][j]< board[i+1][j]){
					ch_3++;
					peakMin_3 = board[i][j];
					cout<< "It has a min of 3 nb. The position is [i,j] = ["<<i<< ","<<j<< "]"<< "The peak min is "<< peakMin_3<<endl;
			}
			//(0, COLS-1) max
				else if ( i== 0 and j== COLS-1 and board[i][j]> board[i][j-1] and board[i][j]> board[i+1][j-1] and board[i][j]> board[i+1][j]){
					ch_3++;
					peakMax_3 = board[i][j];
					cout<< "It has a max of 3 nb. The position is [i,j] = ["<<i<< ","<<j<< "]"<<"The peak max is "<< peakMax_3<<endl;
			}
			//BOTTOM-RIGHT
			//(ROWS-1,COLS-1) min
			//board[i-1][j]
			//board[i-1][j-1]
			//board[i][j-1]
				else if ( i== ROWS-1 and j== COLS-1 and board[i][j]< board[i-1][j] and board[i][j]< board[i-1][j-1] and board[i][j]< board[i][j-1]){
					ch_3++;
					peakMin_3 = board[i][j];
					cout<< "It has a min of 3 nb. The position is [i,j] = ["<<i<< ","<<j<< "]"<< "The peak min is "<< peakMin_3<<endl;
				}
			//(ROWS-1, COLS-1) max
				else if ( i==ROWS-1 and j==COLS-1 and board[i][j]> board[i-1][j] and board[i][j]>board[i-1][j-1] and board[i][j]> board[i][j-1]){
					ch_3++;
					peakMax_3 = board[i][j];
					cout<< "It has a max of 3 nb. The position is [i,j] = ["<<i<< ","<<j<< "]"<<"The peak max is "<< peakMax_3<<endl;
			}
		}




	// 5 neighbors
	cout << "NON-CORNER EDGE" << endl;
	int peakMin_5, peakMax_5;
	int ch_5=0;
	for(int i = 0; i < ROWS; i++){
		for(int j = 0; j < COLS; j++)
		//Left edge:

		//board[i-1][j]
		//board[i-1][j+1]
		//board[i][j+1]
		//board[i+1][j+1]
		//board[i+1][j]

			//min
			if( (i> 0 and i < ROWS-1 )and ( j== 0) and board[i][j]< board[i-1][j] and board[i][j]<board[i-1][j+1] and board[i][j]< board[i][j+1] and  board[i][j]< board[i+1][j+1] and board[i][j]<board[i+1][j]  ){
				ch_5++;
				peakMin_5 = board[i][j];
				cout<< "It has a peak min of 5 nb. The position is [i,j] = ["<<i<< ","<<j<< "] "<< " The peak min is "<< peakMin_5<<endl;

			}
			//max
			else if( (i> 0 and i < ROWS-1 )and ( j == 0) and board[i][j]> board[i-1][j] and board[i][j]>board[i-1][j+1] and board[i][j]> board[i][j+1] and  board[i][j]> board[i+1][j+1] and board[i][j]>board[i+1][j]  ){
				ch_5++;
				peakMax_5 = board[i][j];
				cout<< "It has a peak max of 5 nb. The position is [i,j] = ["<<i<< ","<<j<< "] "<< " The peak max is "<< peakMax_5<<endl;
		}
		//Right edge

		//board[i-1][j]
		//board[i-1][j-1]
		//board[i][j-1]
		//board[i+1][j-1]
		//board[i+1][j]

		//min
			else if( (i> 0 and i < ROWS-1 )and ( j== COLS-1) and board[i][j]< board[i-1][j] and board[i][j]<board[i-1][j-1] and board[i][j]< board[i][j-1] and  board[i][j]< board[i+1][j-1] and board[i][j]<board[i+1][j]  ){
				ch_5++;
				peakMin_5 = board[i][j];
				cout<< "It has a peak min of 5 nb. The position is [i,j] = ["<<i<< ","<<j<< "] "<< " The peak min is "<< peakMin_5<<endl;

				}
		//max
			else if( (i> 0 and i < ROWS-1 )and ( j== COLS-1) and board[i][j]> board[i-1][j] and board[i][j]>board[i-1][j-1] and board[i][j]> board[i][j-1] and  board[i][j]> board[i+1][j-1] and board[i][j]>board[i+1][j]  ){
				ch_5++;
				peakMax_5 = board[i][j];
				cout<< "It has a peak max of 5 nb. The position is [i,j] = ["<<i<< ","<<j<< "] "<< " The peak max is "<< peakMax_5<<endl;
			}

		//Top edge

		//board[i][j-1]
		//board[i+1][j-1]
		//board[i+1][j]
		//board[i+1][j+1]
		//board[i][j+1]

		//min
			else if( ( i== 0)and (j> 0 and j < COLS-1 ) and board[i][j]< board[i][j-1] and board[i][j]<board[i+1][j-1] and board[i][j]< board[i+1][j] and  board[i][j]< board[i+1][j+1] and board[i][j]<board[i][j+1]  ){
				ch_5++;
				peakMin_5 = board[i][j];
				cout<< "It has a peak min of 5 nb. The position is [i,j] = ["<<i<< ","<<j<< "] "<< " The peak min is "<< peakMin_5<<endl;

			}
		//max
			else if( ( i== 0)and (j> 0 and j < COLS-1 ) and board[i][j]> board[i][j-1] and board[i][j]>board[i+1][j-1] and board[i][j]> board[i+1][j] and  board[i][j]> board[i+1][j+1] and board[i][j]>board[i][j+1]  ){
				ch_5++;
				peakMax_5 = board[i][j];
				cout<< "It has a peak max of 5 nb. The position is [i,j] = ["<<i<< ","<<j<< "] "<< " The peak max is "<< peakMax_5<<endl;
		}

		//Bottom edge

		//board[i][j-1]
		//board[i-1][j-1]
		//board[i-1][j]
		//board[i-1][j+1]
		//board[i][j+1]

		//min
			else if( ( i== ROWS-1)and (j> 0 and j < COLS-1 ) and board[i][j]< board[i][j-1] and board[i][j]<board[i-1][j-1] and board[i][j]< board[i-1][j] and  board[i][j]< board[i-1][j+1] and board[i][j]<board[i][j+1]  ){
				ch_5++;
				peakMin_5 = board[i][j];
				cout<< "It has a peak min of 5 nb. The position is [i,j] = ["<<i<< ","<<j<< "] "<< " The peak min is "<< peakMin_5<<endl;

		}
		//max
			else if( ( i== ROWS-1)and (j> 0 and j < COLS-1 ) and board[i][j]> board[i][j-1] and board[i][j]>board[i-1][j-1] and board[i][j]> board[i-1][j] and  board[i][j]> board[i-1][j+1] and board[i][j]>board[i][j+1]  ){
				ch_5++;
				peakMax_5 = board[i][j];
				cout<< "It has a peak max of 5 nb. The position is [i,j] = ["<<i<< ","<<j<< "] "<< " The peak max is "<< peakMax_5<<endl;
		}


	}


	cout << "INSIDE (NON-EDGE/NON-CORNER)" << endl;
	//8 neigbors

	//board[i-1][j-1]
	//board[i-1][j]
	//board[i-1][j+1]
	//board[i][j-1]
	//board[i][j+1]
	//board[i+1][j-1]
	//board[i+1][j]
	//board[i+1][j+1]
	int peakMin_8, peakMax_8;

	int ch_8=0;
	for(int i = 1; i < ROWS-1; i++){
		for(int j = 1; j < COLS-1; j++)

			//max
			if(board[i][j]> board[i-1][j-1] and board[i][j]>board[i-1][j] and board[i][j]> board[i-1][j+1] and board[i][j]> board[i][j-1]and board[i][j]> board[i][j+1] and board[i][j]> board[i+1][j-1] and board[i][j]> board[i+1][j] and board[i][j]> board[i-1][j+1]){
				ch_8++;
				peakMax_8 = board[i][j];
			cout<< "It has a peak max of 8 nb. The position is [i,j] = ["<<i<< ","<<j<< "] "<< "The peak max is "<< peakMax_8<< endl;
			}
			//min
			else if (board[i][j]< board[i-1][j-1] and board[i][j]<board[i-1][j] and board[i][j]< board[i-1][j+1] and board[i][j]< board[i][j-1]and board[i][j]< board[i][j+1] and board[i][j]< board[i+1][j-1] and board[i][j]< board[i+1][j] and board[i][j]< board[i-1][j+1]){
				ch_8++;
				peakMin_8 = board[i][j];
			cout<< "It has a peak min of 8 nb. The position is [i,j] = ["<<i<< ","<<j<< "] "<< "The peak min is "<< peakMin_8<<endl;
			}

	}

	// It will be usable as long as the matrix has every neighbors 3,5, and 8.
	if (ch_3 >= 1 and ch_5 >= 1 and ch_8 >= 1 )
		flag = true;
	if (flag == true){
		cout<< "\nMission has been completed !!"<<endl;
		}
	}


	return 0;
}


