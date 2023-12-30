#include<iostream>
#include<math.h>
#define S 50
using namespace std;
int main() {
	int n, i;
	float x[S], y[S], sumX = 0, sumX2 = 0, sumY = 0, sumXY = 0, a, b, A;


	/* Input */
	cout << "How many data points? " << endl;
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		cout << "x[" << i << "] = ";
		cin >> x[i];
		cout << "y[" << i << "] = ";
		cin >> y[i];
	}

	/* Calculating Required Sum */
	for (i = 1; i <= n; i++)
	{
		sumX = sumX + log(x[i]);
		sumX2 = sumX2 + log(x[i]) * log(x[i]);
		sumY = sumY + log(y[i]);
		sumXY = sumXY + log(x[i]) * log(y[i]);
	}

	/* Calculating A and b */
	b = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
	A = (sumY - b * sumX) / n;

	/* Transformation of A to a */
	a = exp(A);

	/* Displaying value of a and b */
	cout << "Values are: a = " << a << " and b = " << b;

	return(0);
}


/*How many data points?
4
x[1] = 1
y[1] = 4.9
x[2] = 2
y[2] = 40.1
x[3] = 3
y[3] = 134.9
x[4] = 4
y[4] = 320.1
Values are: a = 4.92024 and b = 3.01453
do not use x = 0
*/
