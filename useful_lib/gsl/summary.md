# GSL-GUN Scienti fic Library

subject areas

- [Complex Numbers](https://en.wikipedia.org/wiki/Complex_number)
- [Special Functions](https://en.wikipedia.org/wiki/Special_functions)
- [Permutations](https://en.wikipedia.org/wiki/Permutation)
- [BLAS](https://en.wikipedia.org/wiki/Basic_Linear_Algebra_Subprograms) Support
- [Eigensystems](https://en.wikipedia.org/wiki/Eigenvalues_and_eigenvectors)
- [Quadrature](https://en.wikipedia.org/wiki/Quadrature_(mathematics))
- [Quasi-Random Sequences](https://en.wikipedia.org/wiki/Low-discrepancy_sequence)
- [Statistics](https://en.wikipedia.org/wiki/Statistics)
- [N-Tuples](https://en.wikipedia.org/wiki/Tuple)
- [Simulated Annealing](https://en.wikipedia.org/wiki/Simulated_annealing)
- [Interpolation](https://en.wikipedia.org/wiki/Interpolation)
- [Chebyshev Approximation](https://en.wikipedia.org/wiki/Approximation_theory#Chebyshev_approximation)
- [Discrete Hankel Transforms](https://en.wikipedia.org/wiki/Hankel_transform)
- [Minimization]()
- [Physical Constants](https://en.wikipedia.org/wiki/Physical_constant)
- [Discrete Wavelet transform](https://en.wikipedia.org/wiki/Discrete_wavelet_transform)
- Running Statistics
- Roots of [Polynomials](https://en.wikipedia.org/wiki/Polynomial)
- Vectors and Matrices
- Sorting
- Linear Algebra
- [Fast Fourier Transform](https://en.wikipedia.org/wiki/Fast_Fourier_transform)
- Random Numbers
- Random Distributions
- [Histograms](https://en.wikipedia.org/wiki/Histogram)
- [Monte Carlo Integration](https://en.wikipedia.org/wiki/Monte_Carlo_integration)
- [Differential Equations](https://en.wikipedia.org/wiki/Differential_equation)
- [Numerical Differentiation](https://en.wikipedia.org/wiki/Numerical_differentiation)
- [Series Acceleration](https://en.wikipedia.org/wiki/Series_acceleration)
- Root-Finding
- Least-Squares Fitting
- IEEE Floating-Point
- Basis splines
- Sparse Matrices and Linear Algebra

## Using the Library

### example

`$ gcc -c example.c`

`$ gcc example.o -lgsl -lgslcblas -lm`

###  Linking with an alternative BLAS library

`$ gcc example.o -lgsl -lcblas -lm`

`$ gcc example.o -lgsl -lcblas -latlas -lm`

### Inline functions

`$ gcc -c -DHAVE_INLINE example.c`

`$ gcc -std=c99 -c example.c`

