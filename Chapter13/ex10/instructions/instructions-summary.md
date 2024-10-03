## Instructions ##
Rational fractions are of the form *a/b*, in which *a* and *b* are integers and *b &#8800; 0*.  In this
exercise, by “fractions” we mean rational fractions. Suppose a/b and c/d are fractions.
Arithmetic operations on fractions are defined by the following rules:

1. *a / b + c / d = (ad + bc) / bd*
2. *a / b - c / d = (ad - bc) / bd*
3. *a / b*  \*  *c / d = ac / bd*
4. *(a / b) / (c / d) = ad / bc, in which c/d &#8800; 0


Fractions are compared as follows: *a/b op c/d* if *ad op bc*, in which *op* is any of the relational operations. For example, *a/b < c/d* if *ad < bc*. Design a `class`—say, `fractionType`—that performs the arithmetic and relational operations on fractions. Overload the arithmetic and relational operators so that the appropriate symbols can be used to perform the operation. Also, overload the stream insertion and stream extraction operators for easy input and output.

Write a C++ program that, using the `class` `fractionType`, performs operations on fractions.
Among other things, test the following: Suppose `x`, `y`, and `z` are objects of type `fractionType`. If the input is **2/3**, the statement

    cin >> x;
should store **2/3** in `x`. The statement

     cout << x + y;
should output the value of `x` + `y` in fraction form. The statement

    z = x + y;

should store the sum of `x` and `y` in `z` in fraction form. Your answer need not be in
the lowest terms.