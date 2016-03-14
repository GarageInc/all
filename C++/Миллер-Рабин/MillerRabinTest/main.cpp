
//#pragma comment (lib,"mpfr.lib")
//#pragma comment (lib,"mpir.lib")

#include <stdio.h>
#include <conio.h>
#include <string>


#include <iostream>
#include <fstream>
#include <math.h>

#include <boost/math/special_functions/log1p.hpp>
#include <boost/math/special_functions/pow.hpp>
#include<boost\multiprecision\cpp_int.hpp>
#include<boost\any.hpp>
#include"primegen.h"

using namespace boost::multiprecision;
using namespace std;

#include "functions.h"
#include "miller-rabin.h"

#include "ThreadsManager.h"
#include "TimeManager.h"

#include "official_algorithm.h"
#include "exhaustive_search.h"
#include "mult_simples_pq.h"



// ������������ uint1024_t: 2*179769313486231590772930519078902473361797697894230657273430081157732
//675805500963132708477322407536021120113879871393357658789768814416622492
//847430639474124377767893424865485276302219601246094119453082952085005768
//838150682342462881473913110540827237163350510684586298239947245938479716
//304835356329624224137216

// ������������ uint128_t: 2*340282366920938463463374607431768211456

// ������������ uint64_t: 2*18446744073709551616

void some_function() {

	srand(_Xtime_get_ticks());

	std::this_thread::sleep_for(std::chrono::seconds(rand() % 10));
}

int main() {
	
	setlocale(LC_ALL, "Russian");// ����� ��������� ����� �� ������� �����

	// cout << getOrd(999997, 2)<<endl;
	// cout << getOrd(999997, 3) << endl;

	
	TimeManager example;// ��� ������� - ������� ����������� �������

	example.run( official_algorithm_run_pq );// ����������� ��������, �� ���������, ��������� pq - �����
	// example.run( official_algorithm_run_pqr );// ����������� ��������, �� ���������, ��������� pqr, r>q - �����
	// example.run( exhaustive_search_run );// ������ ������� ���� ����� �� ���������� �������
	// example.run( mult_simples_pq_run ); // ����� ������ �������, ����� �� ������������� ������� ����� p � q
	
	printf("\n\n�����");

	getch();
	return 0;
}

