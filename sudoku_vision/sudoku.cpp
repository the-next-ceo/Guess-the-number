
#include <bits/stdc++.h> 
using namespace std; 

const int UNASSIGNED = 0;

const int N = 9; 

 
bool check(int sudoku[N][N]) 
{
/* 
    * checks if the no should be inserted or not
    *  or should check for the other cases



*/ 

	unordered_map<int, int> row_[9], column_[9], box[3][3]; 
	for (int i = 0; i < N; i++) { 
		for (int j = 0; j < N; j++) { 
			
			row_[i][sudoku[i][j]] += 1; 
			column_[j][sudoku[i][j]] += 1; 
			box[i/3][j/3][sudoku[i][j]] += 1; 

			
			if (box[i / 3][j / 3][sudoku[i][j]] > 1 || column_[j][sudoku[i][j]] > 1 || row_[i][sudoku[i][j]] > 1) 
				return false; 
		}           
	} 
	return true; 
} 


void print_sudoku(int sudoku[N][N])
/* 
    * function to print sudoku after execution of every cases


*/ 
{ 
	for (int i = 0; i < N; i++) { 
		for (int j = 0; j < N; j++) 
			cout << sudoku[i][j] << " "; 
		cout << endl; 
	} 
} 



bool Solve_Sudoku( 
	int sudoku[N][N], int i, int j) 
{ 
	
	if (i == N - 1 && j == N) { 
		
		if (check(sudoku)) { 
			
			print_sudoku(sudoku); 
			return true; 
		} 

		
		return false; 
	} 

	
	if (j == N) { 
		i++; 
		j = 0; 
	} 

	
	if (sudoku[i][j] != UNASSIGNED) 
		return Solve_Sudoku(sudoku, i, j + 1); 

	for (int num = 1; num <= 9; num++) { 
		
		sudoku[i][j] = num; 

		if (Solve_Sudoku(sudoku, i, j + 1)) 
			return true; 

		sudoku[i][j] = 0; 
	} 
	return false; 
} 


int main() 
{ 
    // a sample case to test or should be ignored.
	/*
	int sudoku[N][N] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 }, 
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 }, 
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 }, 
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 }, 
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 }, 
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 }, 
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 }, 
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 }, 
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } }; 
	*/
} 

