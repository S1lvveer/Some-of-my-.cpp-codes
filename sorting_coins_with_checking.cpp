#include <iostream>
using namespace std;

//find the smallest change
int f(int A[], int N) {
	int theReversed1 = 0, theReversed2 = 0;

	if (A[0] == 0) {
		for (int i = 0; i < N; i++) {
			if (i % 2 != 0 && A[i] == 0) {
				theReversed1++;
			}
			else if (i % 2 == 0 && A[i] == 1) {
				theReversed1++;
			}
		}

		for (int j = 0; j < N; j++) {
			if (j % 2 == 0 && A[j] == 0) {
				theReversed2++;
			}
			else if (j % 2 != 0 && A[j] == 1) {
				theReversed2++;
			}
		}

		if (theReversed1 > theReversed2) {
			return theReversed2;
		}
		else {
			return theReversed1;
		}
	}
	else {
		for (int j = 0; j < N; j++) {
			if (j % 2 == 0 && A[j] == 0) {
				theReversed2++;
			}
			else if (j % 2 != 0 && A[j] == 1) {
				theReversed2++;
			}
		}

		for (int i = 0; i < N; i++) {
			if (i % 2 != 0 && A[i] == 0) {
				theReversed1++;
			}
			else if (i % 2 == 0 && A[i] == 1) {
				theReversed1++;
			}
		}

		if (theReversed1 > theReversed2) {
			return theReversed2;
		}
		else {
			return theReversed1;
		}
	}
}

int main()
{
	int result;
	printf("Alternating coins:\n");
	int A[] = { 1, 0, 1, 0, 1, 1 }; // 1 (1)
	int N = sizeof A / sizeof * A;
	result = f(A, N);
	printf("01 result: %d expected 1\n", result);



	int B[] = { 1, 1, 0, 1, 1 }; // 3 ->2 (2)
	N = sizeof B / sizeof * B;
	result = f(B, N);
	printf("02 result: %d expected 2\n", result);



	int C[] = { 0, 1, 0 }; // 0 (3)
	N = sizeof C / sizeof * C;
	result = f(C, N);
	printf("03 result: %d expected 0\n", result);



	int D[] = { 0, 1, 1, 0 }; // 2 (4)
	N = sizeof D / sizeof * D;
	result = f(D, N);
	printf("04 result: %d expected 2\n", result);



	int E[] = { 1, 1, 1, 0, 0 }; // 2
	N = sizeof E / sizeof * E;
	result = f(E, N);
	printf("05 result: %d expected 2\n", result);

	int F[] = { 1, 1, 1, 1, 1 }; // 2
	N = sizeof F / sizeof * F;
	result = f(F, N);
	printf("06 result: %d expected 2\n", result);



	int G[] = { 1, 1, 0, 0, 0 }; // 3 -> 2
	N = sizeof G / sizeof * G;
	result = f(G, N);
	printf("07 result: %d expected 2\n", result);



	int H[] = { 1, 1, 0, 0, 0, 0 }; // 3
	N = sizeof H / sizeof * H;
	result = f(H, N);
	printf("08 result: %d expected 3\n", result);



	int J[] = { 1, 1, 0, 0, 0, 1 }; // 4-> 2
	N = sizeof J / sizeof * J;
	result = f(J, N);
	printf("09 result: %d expected 2\n", result);



	int K[] = { 1, 1 }; // 1
	N = sizeof K / sizeof * K;
	result = f(K, N);
	printf("10 result: %d expected 1\n", result);

	int L[] = { 0, 1 }; // 0
	N = sizeof L / sizeof * L;
	result = f(L, N);
	printf("11 result: %d expected 0\n", result);



	int M[] = { 0 }; // 0
	N = sizeof M / sizeof * M;
	result = f(M, N);
	printf("12 result: %d expected 0\n", result);

	int P[] = { 1, 1, 0, 0, 1 }; // 3->2
	N = sizeof P / sizeof * P;
	result = f(P, N);
	printf("13 result: %d expected 2\n", result);

	int R[] = { 1, 1, 0, 0, 1, 1 }; // 4->3
	N = sizeof R / sizeof * R;
	result = f(R, N);
	printf("14 result: %d expected 3\n", result);

	int S[] = { 1, 1, 0, 0, 1, 0 }; // 2<-4
	N = sizeof S / sizeof * S;
	result = f(S, N);
	printf("15 result: %d expected 2\n", result);

	int T[] = { 1, 0, 0, 0, 1, 1, 0, 1 }; // 5->4
	N = sizeof T / sizeof * T;
	result = f(T, N);
	printf("16 result: %d expected 4\n", result);
}