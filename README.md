<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Simple C++ Calculator</title>
    <style>
        body { font-family: sans-serif; line-height: 1.6; color: #333; max-width: 800px; margin: 0 auto; padding: 20px; }
        h1, h2, h3 { color: #2c3e50; }
        h1 { border-bottom: 2px solid #3498db; padding-bottom: 10px; }
        code { background-color: #ecf0f1; padding: 2px 5px; border-radius: 4px; }
        pre { background-color: #2c3e50; color: #ecf0f1; padding: 15px; border-radius: 8px; overflow-x: auto; }
        ul, ol { margin-left: 20px; }
    </style>
</head>
<body>

<h1>Simple C++ Calculator</h1>
<p>This is a basic command-line calculator program written in C++. It performs standard arithmetic operations on integer operands and allows for continuous calculations until the user chooses to exit.</p>

<hr>

<h2>Features</h2>
<ul>
    <li><strong>Addition:</strong> <code>+</code></li>
    <li><strong>Subtraction:</strong> <code>-</code></li>
    <li><strong>Multiplication:</strong> <code>*</code></li>
    <li><strong>Division:</strong> <code>/</code> (Includes division by zero error handling)</li>
    <li><strong>Modulus:</strong> <code>%</code> (Includes division by zero error handling)</li>
    <li><strong>Exponentiation:</strong> <code>^</code></li>
    <li><strong>Continuous Calculation:</strong> The program can be used for multiple calculations in a single session.</li>
    <li><strong>Error Handling:</strong> Provides messages for invalid operators and division by zero.</li>
</ul>

<hr>

<h2>How to Compile and Run</h2>
<p>To use this program, you will need a C++ compiler like g++.</p>
<ol>
    <li><strong>Save:</strong> Save the code in a file named <code>calculator.cpp</code>.</li>
    <li><strong>Compile:</strong> Open your terminal and run the following command. The <code>-lm</code> flag links the math library for the <code>pow()</code> function.
        <pre><code>g++ calculator.cpp -o calculator -std=c++11 -lm</code></pre>
    </li>
    <li><strong>Run:</strong> Execute the compiled program from your terminal:
        <pre><code>./calculator</code></pre>
    </li>
</ol>

<hr>

<h2>How to Use</h2>
<ol>
    <li>When prompted, enter the operator you wish to use (`+`, `-`, `*`, `/`, `%`, `^`).</li>
    <li>Then, enter the two integer operands separated by a space.</li>
    <li>The program will display the result of the calculation.</li>
    <li>You will be prompted to continue. Enter <code>Y</code> or <code>y</code> to perform another calculation, or any other key to exit.</li>
</ol>

<hr>

<h2>Example Session</h2>
<pre><code>
Enter an operator (+, -, *, /, %, ^): +
Enter the operands:10 5
10 + 5 = 15
Do you wish to continue?(y/n):y
Enter an operator (+, -, *, /, %, ^): ^
Enter the operands:2 3
2 ^ 3 = 8
Do you wish to continue?(y/n):n
Calculator CLOSED.Thanks for using:)
</code></pre>

</body>
</html>
