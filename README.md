# Numerical Analysis Methods

Study repository focused on numerical calculus methods coding.

## Real functions roots

Methods for finding the roots of a real-valued function.

### Fixed Point Method

#### How to use

In the file ```main.cpp``` define your F and g functions. The g function is obtained doing F(x)=0 and manipulating its equation for the x=g(x) form. Declare constants after the library imports. The implementation of the metohd is in the file ```/methods/fixed_point.cpp```.

#### Compiling  

```bash
cd NumericalMethods 
g++ main.cpp ./methods/fixed_point.cpp -o main
```

#### Execution

```bash
./main
```