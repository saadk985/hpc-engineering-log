#include <omp.h>
#include <cstdio>

int main() {
    #pragma omp parallel
    {
        std::printf("thread %d of %d\n", omp_get_thread_num(), omp_get_num_threads());
    }
    return 0;
}
