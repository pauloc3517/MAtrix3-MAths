/// <summary>
/// 
/// 
/// 
/// @author Paul O'Callaghan
/// @date March 2018
/// </summary>

#include "InitialMyMatrix3.h"

#include <iostream>

#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 



/// <summary>
/// main enrtry point
/// </summary>
/// <returns>zero</returns>
int main()
{
	// Creating Matrix
	MyMatrix3 matrix3 (1,2,3,
						4,5,6,
						7,8,9);
// checking string output
	std::cout << "Expecting [1.1: 1, 1.2: 2, 1.3: 3, 2.1: 4, 2.2: 5, 2.3: 6, 3.1: 7, 3.2: 8, 3.3: 9]" << std::endl;
	std::cout << "Actual "<< matrix3.toString() << std::endl;



MyMatrix3 matrix31 (9, 8, 7, 
					6, 5, 4, 
					3, 2, 1);

// addition
matrix31 += matrix3;


std::cout << "Expecting [1.1: 10, 1.2: 10, 1.3: 10, 2.1: 10, 2.2: 10, 2.3: 10, 3.1: 10, 3.2: 10, 3.3: 10]" << std::endl;
std::cout << "Actual "<< matrix31.toString() << std::endl;


// subtraction
matrix31 -= matrix3;
std::cout << "Expecting [1.1: 1, 1.2: 2, 1.3: 3, 2.1: 4, 2.2: 5, 2.3: 6, 3.1: 7, 3.2: 8, 3.3: 9]" << std::endl;
std::cout << "Actual "<< matrix31.toString() << std::endl;
		

	system("Pause");
	return 0;
}