#include <iostream>
#include <ostream>
#include <vector>
#include <chrono>
#include <random>
#include <algorithm>
#include "benchmark.h"
#include "../SortLib/BubbleSort.h"
#include "../SortLib/InsertionSort.h"
#include "../SortLib/SelectionSort.h"
#include "../SortLib/MergeSort.h"
#include "../SortLib/QuickSort.h"
#include "../SortLib/ShellSort.h"
#include "../SortLib/CountingSort.h"
#include "../SortLib/QuickSortNoRecursion.h"

int main()
{
	// collection sizes
	std::vector<size_t> s = { 2000, 5000, 10000, 15000, 20000, 30000, 40000, 50000, 100000,150000, 200000, 300000, 400000, 500000, 600000, 800000, 1000000 };

	for (auto n : s)
	{
		std::vector<unsigned int> v;

		// generating random collection contents
		auto seed = std::chrono::system_clock::now().time_since_epoch().count();
		std::mt19937 generator((unsigned int)seed);

		for (size_t i = 0; i < n; i++)
			v.push_back(generator() /*% 1000*/);


		// displaying collections before sorting
		/*std::cout << "Collection unsorted:" << std::endl;
		for (auto value : v)
			std::cout << value << std::endl;
		std::cout << std::endl;*/

		Benchmark<std::chrono::nanoseconds> b;

		//bubbleSort(v.begin(), v.end());
		
		//insertionSort(v.begin(), v.end());
		//selectionSort(v.begin(), v.end());
		//mergeSort(v.begin(), v.end());
		
		quickSort(v.begin(), v.end());
		//shellSort(v.begin(), v.end());
		
		//countingSort(v.begin(), v.end(), 1000);
		//std::sort(v.begin(), v.end());
 
		//quickSort(v.begin(), v.end()/*, 1000U*/);
		//quickSortNoRecursion(v.begin(), v.end()/*, 1000U*/);


		auto t = b.elapsed();

		// displaying collections after sorting
		/*std::cout << "Sorted collection:" << std::endl;
		for (auto value : v)
			std::cout << value << std::endl;
		std::cout << std::endl;*/

		std::cout << t << std::endl;
	}
}
