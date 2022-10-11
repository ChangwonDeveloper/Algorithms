#include <iostream>
#include <string>   // string, stoi()을 쓰기 위한 헤더파일
 
using namespace std;
 // https://st-lab.tistory.com/215
int main(int argc, char const *argv[]) {
    int A;
    string B;
 
    cin >> A;
    cin >> B;
 
    cout << A * (B[2] - '0') << "\n";
    cout << A * (B[1] - '0') << "\n";
    cout << A * (B[0] - '0') << "\n";
    cout << A * stoi(B) << "\n";    // string -> int(10진수) 로 변환
    return 0;
}