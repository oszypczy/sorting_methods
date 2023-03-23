#include <iostream>
#include <chrono>
#include <utility>

/*
Narzedzie do zliczania czasu
Sposob uzycia:
{
	Benchmark<std::chrono::nanoseconds> b;
	// kod do zbadania
	size_t elapsed = b.elapsed();
}
lub
{
	Benchmark<std::chrono::milliseconds> b(true);
	// kod do zbadania
}
obiekt wypisze wartosc czasu w podanych jednostkach na stderr
*/
template<typename D = std::chrono::microseconds>
class Benchmark
{
public:
	Benchmark(bool printOnExit = false) : m_print(printOnExit)
	{
		start = std::chrono::high_resolution_clock::now();
	}
	typename D::rep elapsed() const
	{
		auto end = std::chrono::high_resolution_clock::now();
		auto result = std::chrono::duration_cast<D>(end - start);
		return result.count();
	}
	~Benchmark()
	{
		auto result = elapsed();
		if (m_print)
		{
			std::cerr << "Czas: " << result << "\n";
		}
	}
private:
	std::chrono::high_resolution_clock::time_point start;
	bool m_print = true;
};