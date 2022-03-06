//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> solution(vector<int> array, vector<vector<int>> commands)
//{
//    vector<int> answer;
//    vector<int> an;
//    vector<int> arr(array.size() + 2, 0);
//    vector<int> ::iterator iter = arr.begin(); //i
//    vector<int> ::iterator iter2 = arr.begin(); //j
//    vector<int> ::iterator iter3 = answer.begin(); //k
//
//    for (int i = 1; i < arr.size() - 1; i++)
//    {
//        arr.push_back(array[i]);
//    }
//
//
//    for (int i = 0; i < commands.size(); i++)
//    {
//        for (int j = 0; j < commands[i].size(); j++)
//        {
//            if (j == 0)
//            {
//                iter += commands[i][0];
//                continue;
//            }
//            else if (j == 1)
//            {
//                iter2 += commands[i][1];
//                continue;
//            }
//            else if (j == 2)
//            {
//                iter3 += commands[i][2];
//            }
//
//            for (iter; iter == iter2; iter++)
//            {
//                answer.push_back(*iter);
//            } 
//            
//            iter = iter2 = arr.begin(); //다시초기화시키고
//
//            sort(answer.begin(), answer.end()); //정렬
//            
//            an.push_back(*iter3); //최종값 푸쉬
//            //cout << an[0] << endl;
//
//            iter3 = answer.begin(); //초기화
//            
//        }
//    }
//
//   
//    return an;
//}
//
//int main()
//{
//    vector<int>arry{ 1,5,2,6,3,7,4 };
//
//    vector<vector<int>> commands {
//        {2,5,3},
//        {4,4,1},
//        {1,7,3}
//    };
//    
//    solution(arry, commands);
//
//    
//}