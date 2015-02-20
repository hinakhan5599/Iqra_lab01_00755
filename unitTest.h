#include<iostream>
#include<fstream>
#include <stdio.h>
#include <string>
#include <ctype.h>
using namespace std;

void sumOfMatrices(int **array, int row , int col, int **array1, int row1, int col1){
	
	int **sum = new int*[row];  // matrix allocation
	
	for (int i = 0; i < row; i++){
		sum[i]= new int[col];          //column allocation
	}
	 
	 if(row==row1 && col==col1){    //condition for checking the order of both matrices 
	 
		cout << "\n";
		for (int i = 0; i < row; i++){
			for (int j = 0; j < col; j++){

			sum[i][j] = array[i][j] + array1[i][j];     //add the matrices

		}
	}
	


	for (int i = 0; i < row; i++)       //display the add matrices
	{
		for (int j = 0; j < col; j++)
			cout << sum[i][j] << "\t";

		cout << endl;
	}

  }
	else 
		cout<<"Dimensions are not equal.";        //order not same 
	    

}

void subOfMatrices(int **array, int row , int col, int **array1, int row1, int col1){
	
	int **sub = new int*[row];
	
	for (int i = 0; i < row; i++){
		sub[i]= new int[col];
	}
	 
	 if(row==row1 && col==col1){   //condition for order 
	 
		cout << "\n";
		for (int i = 0; i < row; i++){
			for (int j = 0; j < col; j++){

			sub[i][j] = array[i][j] - array1[i][j];

		}
	}
	
	

	for (int i = 0; i < row; i++)         //display the matrix
	{
		for (int j = 0; j < col; j++)
			cout << sub[i][j] << "\t";

		cout << endl;
	}

  }
	else 
		cout<<"Dimensions are not equal.";
	    

}

int** productOfMatrices(int **array, int row , int col, int **array1, int row1, int col1){
	
	int **product = new int*[row];
	
	for (int i = 0; i < row; i++){
		product[i]= new int[col];
	}
	 
	 if(col==row1){               //column of 1st matrix is equal to rows of 2nd matrix
	 
		cout << "\n";
		for (int i = 0; i < row; i++){
			for (int j = 0; j < col1; j++)
			{
				for (int k = 0; k < col; k++)
					product[i][j] += array[i][k] * array1[k][j];
			}
		}
	
	

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << product[i][j] << "\t";

		cout << endl;
	}

  }
	else 
		cout<<"Dimensions are not equal.";
	    
	return product;
}




