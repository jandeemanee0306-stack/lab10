#include<iostream>
using namespace std;

int main(){
int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int studentNum = 1; 
    char grade;


	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	while (true) {

		cout << "Student [" << studentNum << "]: ";
		cin >> grade; 
		
		if (grade == '0') {
            break; 
        }

        if (grade == 'A') {
            count[0]++;
            studentNum++;
        } else if (grade == 'B') {
            count[1]++;
            studentNum++;
        } else if (grade == 'C') {
            count[2]++;
            studentNum++;
        } else if (grade == 'D') {
            count[3]++;
            studentNum++;
        } else if (grade == 'F') {
            count[4]++;
            studentNum++;
        } else {
            cout << "Wrong input. Please input again.\n";
           
        }
    }

    int total = count[0] + count[1] + count[2] + count[3] + count[4];

    cout << "In total " << total << " students.\n";
    cout << "A = " << count[0] << ", ";
    cout << "B = " << count[1] << ", ";
    cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4] << "\n";
	
	
	return 0;
}
