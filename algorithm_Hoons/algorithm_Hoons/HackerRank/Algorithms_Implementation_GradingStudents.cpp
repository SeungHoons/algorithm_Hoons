#include "stdafx.h"

#include<vector>

/*
* Complete the gradingStudents function below.
*/
vector<int> gradingStudents(vector<int> grades) {
	/*
	* Write your code here.
	*/
	bool a = true;
	int iTemp = 0;
	/* for(int i = 0; i< grades.size();i++)
	{
	if(min>grades[i])
	{
	min = grades[i];
	}
	}
	*/
	for (int i = 0; i<grades.size(); i++)
	{

		iTemp = grades[i] / 5;
		if (grades[i] % 5)
		{
			iTemp = (iTemp + 1) * 5;
		}
		else
		{
			iTemp = iTemp * 5;
		}

		if (iTemp - grades[i]<3)
		{
			if (grades[i] < 40)
			{
			}
			else
			grades[i] = iTemp;
		}




		/*
		a = true;
		while(a)
		{
		switch(grades[i])
		{
		case 75:
		a = false;
		break;
		case 67:
		a = false;
		break;
		case 40:
		a = false;
		break;
		case 33:
		a = false;
		break;
		}
		if(a==true)
		grades[i]++;
		}
		*/



	}

	return grades;
}

int main()
{
	//ofstream fout(getenv("OUTPUT_PATH"));

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	vector<int> grades(n);

	for (int grades_itr = 0; grades_itr < n; grades_itr++) {
		int grades_item;
		cin >> grades_item;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		grades[grades_itr] = grades_item;
	}
	cout << "\n\n\n";
	vector<int> result = gradingStudents(grades);

	for (int result_itr = 0; result_itr < result.size(); result_itr++) {
		cout << result[result_itr];

		if (result_itr != result.size() - 1) {
			cout << "\n";
		}
	}

	cout << "\n";

	return 0;
}