# Sorting Methods Comparison

This project contains an implementation of several sorting methods and provides benchmarking to compare their performance. The implemented sorting methods include BubbleSort, CountingSort, InsertionSort, QuickSort, SelectionSort, and ShellSort. Unit tests are available for all the sorting methods.

## Files

The following files are included in this project:

- **SortComplexityApp**: This file contains the main function that performs the sorting method comparisons. It generates random collections of various sizes and measures the sorting time for each method. The benchmarking results are printed to the standard output.

- **Benchmark.h**: This file provides a utility class called `Benchmark` for measuring elapsed time. It uses the `<chrono>` library to calculate the time duration between two points. The elapsed time can be retrieved in different units such as nanoseconds, microseconds, milliseconds, or seconds.

## Usage

To compare the sorting methods and measure their performance, follow these steps:

1. Compile the code using a C++ compiler.
2. Run the compiled executable.

The program will iterate over different collection sizes and generate random collections for each size. It will then apply each sorting method to the collections and measure the elapsed time. The results will be displayed in the standard output.

## Example Output

Here is an example of the output you can expect when running the `SortComplexityApp`:

```
Sorting Method: QuickSort

Collection Size: 2000
Elapsed Time: 4231 ns

Collection Size: 5000
Elapsed Time: 10859 ns

Collection Size: 10000
Elapsed Time: 23248 ns

Collection Size: 15000
Elapsed Time: 36695 ns

Collection Size: 20000
Elapsed Time: 50843 ns

Collection Size: 30000
Elapsed Time: 94815 ns

Collection Size: 40000
Elapsed Time: 136024 ns

Collection Size: 50000
Elapsed Time: 173554 ns

Collection Size: 100000
Elapsed Time: 381450 ns

Collection Size: 150000
Elapsed Time: 592303 ns

Collection Size: 200000
Elapsed Time: 826129 ns

Collection Size: 300000
Elapsed Time: 1438204 ns

Collection Size: 400000
Elapsed Time: 2011057 ns

Collection Size: 500000
Elapsed Time: 2635039 ns

Collection Size: 600000
Elapsed Time: 3193793 ns

Collection Size: 800000
Elapsed Time: 4248913 ns

Collection Size: 1000000
Elapsed Time: 5293361 ns
```

## Benchmark Results

In addition to the code and its execution, a table in an Excel file has been provided on the project's GitHub repository. This table includes benchmarking results and complexity comparison charts for the different sorting methods.
