//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//string solution(vector<int> numbers)
//{
//    string answer = "";
//    vector <string> num(10);
//   
//    //자료형변환
//    for (int i = 0; i < numbers.size(); i++)
//    {
//        num.insert(num.begin(),to_string(i));
//    }
//
//    for (auto n : num)
//    {
//        cout << n << endl;
//    }
//
//    return answer;
//}
//
//int main()
//{
//    vector<int> number{ 6, 10 ,2 };
//
//    solution(number);
//}
//
//
//for (int i = 0; i < num.size(); i++)
//{
//    if (num[i] + num[i + 1] < num[i + 1] + num[i])
//    {
//        string temp = num[i];
//        num[i] = num[i + 1];
//        num[i + 1] = temp;
//    }
//}