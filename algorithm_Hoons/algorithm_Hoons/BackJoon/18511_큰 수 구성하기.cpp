#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int targetNum, arrMax, ans;
vector<int> vecInputNums, vecPerNums;
string strNum;


void process(int depth, int length)
{
	if (depth == length)
	{
		int madeNum = 0;
		for (auto iter : vecPerNums)
		{
			madeNum += iter;
			madeNum *= 10;
		}
		madeNum /= 10;
		if(targetNum >= )
	}
}

int main()
{
	cin >> targetNum >> arrMax;
	vecInputNums.resize(arrMax);
	strNum = to_string(targetNum);
	
	for (int i = 0; i < arrMax; i++) cin >> vecInputNums[i];
	for (int i = 0; i < strNum.size(); i++) process(0, i);

	cout << ans;

}



//탐색 코드 비슷한 패턴
// 1. 종료 조건파트
// 2. 프로세스
// 3. 리커전 콜


//int n, k, ans;
//vector <int> setK, permutation;
//
//void dfs(int depth, int length) {
//    if (depth == length) {
//        int madeNum = 0;
//        for (auto p : permutation) {
//            madeNum += p;
//            madeNum *= 10;
//        }
//        madeNum /= 10;
//        cout << madeNum << "\n";
//        if (n >= madeNum) ans = max(ans, madeNum);
//        return;
//    }
//    for (int i = 0; i < k; i++) {
//        permutation.push_back(setK[i]);
//        dfs(depth + 1, length);
//        permutation.pop_back();
//    }
//}
//
//int main() {
//    cin >> n >> k;
//    setK.resize(k);
//    for (int i = 0; i < k; i++) cin >> setK[i];
//    for (int i = 1; i <= to_string(n).size(); i++) dfs(0, i);
//    cout << "============================\n";
//    cout << ans;
//}


//void solution(string& _strtNum, vector<int>& _vecNums, vector<int>& _vecAns)
//{
//	//첫쨰 숫자 찾고
//	//다음 숫자 (vector size로 확인)
//
//	for (int i = _vecAns.size(); i < _strtNum.size(); i++)
//	{
//		for (int j = 0; j < _vecNums.size(); j++)
//		{
//			if (_strtNum[i] - '0' >= _vecNums[j])
//			{
//				_vecAns.push_back(_vecNums[i]);
//				solution(_strtNum, _vecNums, _vecAns);
//			}
//
//			if (j == _vecNums.size())
//			{
//				_vecAns.pop_back();
//				return;
//			}
//		}
//		
//	}
//}
//
//int main()
//{
//	int targetNum;
//	int elementMax;
//	vector<int> vecNums;
//	string strNum;
//	vector<int> vecAns;
//	bool isfirstNumBig = true;
//
//	ios::sync_with_stdio(false); cin.tie(nullptr);
//
//	cin >> targetNum >> elementMax;
//	strNum = to_string(targetNum);
//
//	for (int i = 0; i < elementMax; i++)
//	{
//		vecNums.push_back(0);
//		cin >> vecNums[i];
//	}
//
//	sort(vecNums.begin(), vecNums.end(), greater<>());
//
//	for (int i = vecAns.size(); i < strNum.size(); i++)
//	{
//		i = vecAns.size();
//
//		if (i > 0 && vecAns[i - 1] < (strNum[i - 1] - '0'))
//		{
//			for (int k = i; k < strNum.size(); k++)
//			{
//				vecAns.push_back(vecNums[0]);
//			}
//			break;
//		}
//
//		for (int j = 0; j < vecNums.size(); j++)
//		{
//			if (strNum[i] - '0' >= vecNums[j])
//			{
//				vecAns.push_back(vecNums[j]);
//				break;
//			}
//
//			if (i > 0 && j == vecNums.size() - 1)
//			{
//				for (int j2 = 0; j2 < vecNums.size(); j2++)
//				{
//					if (vecAns[i - 1] > vecNums[j2])
//					{
//						vecAns[i - 1] = vecNums[j2];
//						i--;
//						break;
//					}
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i < vecAns.size(); i++)
//	{
//		cout << vecAns[i];
//	}
//}




//int main()
//{
//	int targetNum;
//	int elementMax;
//	vector<int> vecNums;
//	string strNum;
//	vector<int> vecAns;
//	bool isfirstNumBig = true;
//
//	cin >> targetNum >> elementMax;
//
//	for (int i = 0; i < elementMax; i++)
//	{
//		vecNums.push_back(0);
//		cin >> vecNums[i];
//	}
//
//	strNum =  to_string(targetNum);
//	for (int i = 0; i < strNum.size(); i++)
//	{
//		
//		if (isfirstNumBig)
//		{
//			vecAns.push_back(0);
//			for (int j = 0; j < elementMax; j++)
//			{
//				if ((strNum[i] - '0') >= vecNums[j] && vecAns[i] <= vecNums[j])
//				{
//					vecAns[i] = vecNums[j];
//					if (i == 0 && (strNum[i] - '0') > vecNums[j])
//						isfirstNumBig = false;
//				}
//			}
//		}
//		else
//		{
//			int maxNum =0;
//			for (int j = 0; j < elementMax; j++)
//			{
//				if (maxNum < vecNums[j])
//				{
//					maxNum = vecNums[j];
//				}
//			}
//
//			for (int j = 1; j < strNum.size(); j++)
//			{
//				vecAns.push_back(maxNum);
//			}
//			break;
//		}
//	}
//
//	for (int i = 0; i < vecAns.size(); i++)
//		cout << vecAns[i];
//}