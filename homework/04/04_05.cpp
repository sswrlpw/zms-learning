#include <iostream>
using namespace std;
#include <string>
#include <vector>
int calculat(int grade, int evalution, char is_leader,char is_western,int paper){
    int sum = 0;        //计算奖学金
    if (grade > 80 && paper > 0){
        sum += 8000;
    }
    if (grade >85 && evalution > 80){
        sum += 4000;
    }
    if (grade > 90){
        sum += 2000;
    }
    if (is_western == 'Y' && grade > 85){
        sum += 1000;
    }
    if (evalution >80 && is_leader == 'Y'){
        sum += 850;
    }
    return sum;
}
int main(){
    int number;
    cin >> number;
    vector<string> names(number);
    vector<int> grades(number);
    vector<int> evaluations(number);
    vector<char> is_leaders(number);
    vector<char> is_westerns(number);
    vector<int> papers(number);
    for (int i =0 ; i < number ; i++){
        cin >> names[i] >> grades[i] >> evaluations[i] >> is_leaders[i] >> is_westerns[i] >> papers[i];
    }
    int maxSum = 0;
    int maxIndex = 0;
    int totalSum = 0;
    // 计算最高的奖学金和奖学金总数
    for (int i = 0;  i < number; i++){
        int sum = calculat(grades[i],evaluations[i],is_leaders[i],is_westerns[i],papers[i]);
        totalSum += sum;
        if (sum > maxSum){
        maxSum = sum;
        maxIndex = i;    
        }
    }   
    cout << names[maxIndex] << endl;
    cout << maxSum << endl;
    cout << totalSum << endl;
    system ("pause");
    return 0;
    
}