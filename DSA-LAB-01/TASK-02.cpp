//#include <iostream>
//#include <fstream>
//using namespace std;
//int main()
//{
//	char name[10];
//	float mt1, mt2, final, avg;
//	ifstream fin; //create file input stream object
//	ofstream fout; //create file output stream object
//	fin.open("input.txt"); //open input file
//	fout.open("output.txt"); //open output file
//	while (!fin.eof()) //read data from input file
//	{
//		fin >> name >> mt1 >> mt2 >> final;
//		avg = 0.25 * mt1 + 0.25 * mt2 + 0.5 * final;
//		fout << name << '\t' << avg << endl; //write result to output file
//	}
//	fin.close(); //close input file
//	fout.close(); //close output file
//}