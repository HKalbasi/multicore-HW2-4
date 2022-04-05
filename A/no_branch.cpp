#include "benchmark/benchmark.h"
#include <iostream>
#include <stdlib.h>
#include <vector>

void BM_branch_pridicted(benchmark::State &state) {
  srand(1);
  const unsigned int N = state.range(0);
  std::vector<unsigned long> v1(N);
  std::vector<unsigned long> v2(N);
  for (size_t i = 0; i < N; ++i) {
    v1[i] = rand();
    v2[i] = rand();
  }
  unsigned long *p1 = v1.data();
  unsigned long *p2 = v2.data();
  for (auto _ : state) {
    unsigned long a = 0;
    for (size_t i = 0; i < N; ++i) {
        a += p1[i];
    }
    benchmark::DoNotOptimize(a);
  }
  benchmark::ClobberMemory();
  state.SetItemsProcessed(N*state.iterations());
}

BENCHMARK(BM_branch_pridicted)->Arg(4194304);
