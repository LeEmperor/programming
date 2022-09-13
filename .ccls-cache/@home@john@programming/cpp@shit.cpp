#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
int splice(string s) {
    int cop;
    char ch = ',';
    cop = s.find(ch);
    if (cop == -1){
        return -2;
    }
    int cnt = count(s.begin(), s.end(), ch);
    if (cnt > 1){
        return -3;
    }
        if (s.substr(cop) == ", -1"){
        return -1;
    }
    try {
        int x = stoi(s.substr(cop+2));
        
    }
    catch(...){
        return -4;
    }

 return cop;   
}
int main() {
    string dataname;
    string column1;
    string column2;
    
    int i = 0;
    vector<string> datanamev;
    vector<int> datanum;
    cout << "Enter a title for the data:";
    getline(cin, dataname);
    cout << "You entered: " << dataname << endl;
    cout << "Enter the column 1 header:";
    getline(cin, column1);
    cout << "You entered: " << column1 << endl;
    cout << "Enter the column 2 header:";
    getline(cin, column2);
    cout << "You entered: " << column2 << endl;
    int count = 0;
    while (i != -1){
        
        int returnval = 0;
        string datapoint;
        cout << "Enter a data point (-1 to stop input):" << endl;
        getline(cin, datapoint);
        returnval = splice(datapoint);
        if (returnval == -1){
            break;
        }
        else if (returnval == -2){
            cout << "Error: No comma in string." << endl;
            continue;
        }
        else if (returnval == -3){
        cout << "Error: Too many commas in input." << endl;
        continue;
        }
        else if (returnval == -4){
        cout << "Error: Comma not followed by an integer." << endl;
        continue;
        }
        datanamev.push_back(datapoint.substr(0,returnval));
        datanum.push_back(stoi(datapoint.substr(returnval+2)));
        cout << "Data string: " << datanamev[count] << endl;
        cout << "Data integer: " << datanum[count] << endl;
        count++;
    } 

    cout << setw(33) << dataname << endl;
    cout << setw(20) << left << column1 << '|' << setw(23) << right << column2 << endl;
    cout << "--------------------------------------------" << endl;
    for(int i=0; i < datanamev.size(); i++){
      cout << setw(20) << left << datanamev.at(i) << setw(21) << '|' << setw(23) << right << datanum.at(i) << endl;
    }
    
    return 0;
}

