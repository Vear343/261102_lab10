//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include<iostream>
#include<fstream>
#include<iomanip>
#include<cmath>
#include<string>
#include<cstdlib>

using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string data;
    double mean, sum,sum_thing, dev, i_data;
    int i = 0;
    while (getline(source, data)){
        i_data = atof(data.c_str());
        sum += i_data;
        sum_thing += pow(i_data,2);
        i++;
    }
    mean = sum/i;
    dev = sqrt(sum_thing/i-pow(mean,2));

    cout << "Number of data = " << i << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << dev;
}