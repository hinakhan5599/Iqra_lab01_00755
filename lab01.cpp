#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#include"unitTest.h"
using namespace std;

int main(){

	int **matrix1;   //Declaration of variables and arrays
	int **matrix2;
	int **matrix3;
	int row = 0;
	int col = 0;
	int row1 = 0;
	int col1 = 0;
	int row2 = 0;
	int col2 = 0;
	int flag = 0;
	string line;
	
	ifstream myfile("iqra.txt");  //stream to read the iqra.txt file
	
	if(myfile.is_open()){    //if file is open then do this
	
	
		while (myfile.good()){    loop until the state is not false
			
			getline(myfile,line);  //read the line
			row = atoi(line.c_str());   //convert the string into int
			//cout<<row << "\n";
	

			getline(myfile,line);
			col = atoi(line.c_str());
			//cout<<col;
	
			matrix1 = new int*[row];     //allocate the row size
			
			
			for (int i = 0; i < row; ++i) {       //loop for allocating the column size against the each row 
  				matrix1[i] = new int[col];
  			}
  			 
			cout<< "\nFirst Matrix:\n " <<endl;    
			for (int i = 0; i < row; i++){           //loop for the rows
					for (int j = 0; j < col; j++){       //loop for the columns
					
						getline(myfile,line);            //read the line from file
						int num = atoi(line.c_str());
						matrix1[i][j] = num;        //store the value in specific matrix position
						cout<< matrix1[i][j]<<"\t";   //Display the matrix
					}
				cout<< "\n";
			}		
		
	
			getline(myfile,line);              //read the line
			row1 = atoi(line.c_str());
			//cout<<row1 << "\n";

			getline(myfile,line);
			col1 = atoi(line.c_str());      //convert the string into int
				//cout<<"Hello";
			//	cout<<col1;	
				
			matrix2 = new int*[row];         //allocate the row size
				
			for (int i = 0; i < row1; ++i) {
  				matrix2[i] = new int[col1];
  			}
  			
  			cout<< "\nSecond Matrix: \n" <<endl;       
			for (int k = 0; k < row1; k++){
					//cout<<"Hello";
					for (int l = 0; l < col1; l++){
						//	cout<<"Hello";
						getline(myfile,line);
						int num1 = atoi(line.c_str());
						matrix2[l][k] = num1;
						cout<< matrix2[l][k]<<"\t";
					}
				cout<< "\n";
			}	
				
						
			
				getline(myfile,line);
				row2 = atoi(line.c_str());
				//cout<<row2 << "\n";
			
		
				getline(myfile,line);
				col2 = atoi(line.c_str());
			//	cout<<col2;
				
				matrix3 = new int*[row2];
				
				for (int i = 0; i < row2; ++i) {
  				matrix3[i] = new int[col2];
  			}
			
			for (int i = 0; i < row2; i++){
				for (int j = 0; j < col2; j++){
							
					getline(myfile,line);
					int num2 = atoi(line.c_str());
					matrix3[i][j] = num2;
					//	cout<< matrix3[i][j]<<"\t";
				}
			cout<< "\n";
				}
			
			getline(myfile,line);
			if( line == "/")          //if this symbol is get from the file then break the loop
			{
				break;
			}
		
			}
	}
	
	else cout << "Unable to open file";       
	
	 myfile.close();     //close the file
	 
	 
	 cout << "Sum of Entered matrices:-\n";  
	 sumOfMatrices(matrix1,row1,col,matrix2,row1,col1);      //function calling
	 
	 cout << "\nSubtraction of Entered matrices:-\n";
	 subOfMatrices(matrix1,row1,col,matrix2,row1,col1);
	 
	 cout << "\nProduct of Entered matrices:-\n";
	 int **product = productOfMatrices(matrix1,row1,col,matrix2,row1,col1);
	 
	 cout<< "\nThird Matrix:\n " <<endl;
	 for (int i = 0; i < row2; i++)
	 {
		for (int j = 0; j < col2; j++)
			cout << matrix3[i][j] << "\t";      //displaying the matrix

		cout << endl;
    } 
	
	cout<<"\nAdd the third matrix in the product of above 2 matrices:\n";
	sumOfMatrices(matrix3,row2,col2,product,row,col);
	 
/*	 for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << product[i][j] << "\t";

		cout << endl;
	} */
	 	delete[] matrix1;     //deallocate the matrices
		delete[] matrix2;
		delete[] matrix3;
		
	 return 0;
}
	
	
