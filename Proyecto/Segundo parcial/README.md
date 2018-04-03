# Google Code Jam World Finals 2017: Problem B. Operation
https://code.google.com/codejam/contest/6314486/dashboard#s=p1

## Problem Description
```
Here at Code Jam, we love to play a game called "Operation". (No, it has nothing to do with surgery; why would you think that?) The game is played with cards, each card is labeled with a basic arithmetic operation (addition, subtraction, multiplication or division) Oi and an integer right operand Vi for that operation. For example, a card might say + 0, or - -2, or / -4 — note that operands can be negative or zero, although a card with a division operation will never have 0 as an operand.

In each round of the game, a starting integer value S is chosen, and a set of C cards is laid out. The player must choose an order for the cards, using each card exactly once. After that, the operations are applied, in order, to the starting value S, and a final result is obtained.

Although all of the operands on the cards are integers, the operations are executed on rational numbers. For instance, suppose that the initial value is 5, and the cards are + 1, - 2, * 3, and / -2. If we put them in the order given above, the final result is (5 + 1 - 2) * 3 / (-2) = -6. Notice that the operations are performed in the order given by the cards, disregarding any operator precedence. On the other hand, if we choose the order - 2, / -2, + 1, * 3, the result is ((5 - 2) / (-2) + 1) * 3 = -3 / 2. That example turns out to be the maximum possible value for this set of cards.

Given a set of cards, can you figure out the maximum possible final value that can be obtained? Please give the result as an irreducible fraction with a positive denominator.
Input
The first line of the input gives the number of test cases, T. T test cases follow. Each case begins with one line with two integers S and C: the starting value for the game, and the number of cards. Then, C lines follow. The i-th of these lines represents one card, and contains one character Oi representing the operation (which is either +, -, *, or /) and one integer Vi representing the operand.
```

##Output
```
For each test case, output one line containing Case #x: y z, where x is the test case number (starting from 1), and y and z are integers such that y/z is the maximum possible final value of the game, y and z do not have common divisors other than 1 and -1, and z is strictly greater than 0.
```
##Limits
```
1 ≤ T ≤ 100.
-1,000 ≤ S ≤ 1,000.
Oi is one of +, -, *, or /, for all i.
-1,000 ≤ Vi ≤ 1,000, for all i.
If Oi = /, then Vi ≠ 0, for all i.
Small dataset
1 ≤ C ≤ 15.
Large dataset
1 ≤ C ≤ 1000.
```
##Sample
```
###Input

5
1 2
- 3
* 2
5 4
+ 1
- 2
* 3
/ -2
1000 7
* -1000
* -1000
* 1000
* 1000
* 1000
* 1000
* 1000
-1 3
- -1
* 0
/ -1
0 1
+ 0
###Output
Case #1: -1 1
Case #2: -3 2
Case #3: 1000000000000000000000000 1
Case #4: 1 1
Case #5: 0 1
```
In Sample Case #1, the optimal strategy is to play the * 2 card before the - 3 card, which yields a result of -1. The unique rational expression of this as specified in the problem is -1 1.

Sample Case #2 is the one described in the third paragraph of the problem statement.

In Sample Case #3, we get the same answer regardless of the order in which we use the cards. Notice that the numerator of the answer is too large to fit in 64-bit integer.

In Sample Case #4, the largest result we can achieve is 1. One way is: / -1, * 0, - -1.

In Sample Case #5, note that the only valid representation of the answer is 0 1. 0 2 is invalid because it can be reduced. 0 -1 is invalid because the denominator must be positive.
##Breakdown
### Puntos importantes a destacar
El jugador nos dará el número de cartas que entraran en nuestro juego.
Nosotros debemos de encontrar la manera de que el orden en el que hagamos las operaciones nos dé el valor posible de S(nuestro valor inicial)
### variables
```
F: resultado final
O: operation (+,-,/, *)
V: entero (positivo, negativo) no puede ser 0 cuando la operación es "/"
S: valor inicial
C: set of cards
```

###Casos
```
Primeramente tenemos que identificar cómo afecta el orden de las operaciones a un número.
###Analisis:
Comportamientos normales de las operaciones en x
    +: si sumamos valores a x, probablemente lo haremos más grande
    -: si restamos valores a x, lo haremos más pequeño
    *: si multiplicamos a x lo haremos más grande
    /: si dividimos a x lo haremos más pequeño
  ->Entonces deberíamos de aplicar las operaciones en este orden
" / + * - "
  Pero qué pasa cuando los números con los que hacemos las operaciones son muy pequeños o viceversa, ¿cómo afecta esto en el orden en el que deberíamos hacer las operaciones?.


Caso suma:
  ° (1) Valores positivos pequeños:hacen más grande a x
  ° (2) Valores positivos grandes: hacen mucho más grande a x
  ° (3) Valores negativos pequeños: hacen más pequeño a x
  ° (4) Valores negativos grandes:  hacen mucho más pequeño a x

  **para evitar confusiones necesitamos que si es negativa la suma mejor se convierta en resta, entonces no tomaremos los subcasos (3) y (4)

Caso resta:
° Valores positivos pequeños: hacen un poco más pequeño a x
° Valores positivos grandes: hacen mucho más pequeño a x
° Valores negativos pequeños: hacen un poco más grandes a x
° Valores negativos grandes: hacen mucho más grandes a x
  **para evitar confusiones necesitamos que si es negativa la resta mejor se convierta en suma, entonces no tomaremos los subcasos (3) y (4)

Caso division:
° Valores positivos pequeños: hacen pequeños a x
° Valores positivos grandes: hacen muy pequeños a x
° Valores negativos pequeños: hacen negativo y un poco pequeño a x
° Valores negativos grandes: hacen negativo y muy pequeño a x

Caso multiplicación:
° Valores positivos pequeños: hacen un poco más grande a x
° Valores positivos grandes: hacen mucho más grande a x
° Valores negativos pequeños: nos dan un valor un poco más pequeño de x, debido a que lo hacen negativo
° Valores negativos grandes: nos dan un valor mucho más pequeño de x, debido a que lo hacen negativo

Con esto identificamos que es necesaria una función que primero cambie suma a resta y viceversa con los negativos: se llamará a una función changeCard()
Después de pensar en estos casos, es importante que destaquemos cuándo identificaremos a la carta como algo pequeño o grande.

**Necesitamos simplificar nuestras cartas de la manera que primero
*Así como siempre el primer paso será las cartas que nos hacen la división, porque siempre nos harán a x más pequeño.
*También hay que destacar que la multiplicación por 0 debe de ser una de nuestras primeras cartas
*Debemos analizar los signos, si podemos cambiar los que se nos generan cuando multiplicamos o dividimos y si estos son negativos ver cómo cambian a nuestro número.
*Necesitamos aprovechar nuestras cartas de suma antes de multiplicar por un número que nos ayude a crecer.

Tipos de cartas:
*Como agruparemos los casos de la suma y la resta, entonces nos quedan dos tipos de estos.
*Cartas que cambian signos, (multiplicación y división)
*división que necesitamos usarla lo más pronto


**¿Qué hacer cuando?
*carta de multiplicación es negativa: primero buscamos si hay otra carta que cambie el signo, y antes de multiplicar aumentamos el número negativo.
*carta de multiplicación es positiva: intentar usarlas casi al fnal.
* Es necesario que hagamos el cambio de signo lo más pronto posible para que este se pueda hacer más grande.

Esto es lo que debemos de considerar a la hora de elegir el orden de las cartas.

Al final como nos pide que digamos el numerador y el denominador del número lo más fácil es convertirlo al final, cuando tenemos el número con decimales que nos resulta al final de las operaciones lo multiplicamos x10 y creamos un denominador que también tendrá el valor de 10 y comenzamos a simplificar hasta que logramos obtener un denominador y numerador

Conclusión:
Lo más eficiente sería seguir estos puntos para que nuestro algoritmo corra en un tiempo de O(N), subestimé el problema, fue más complicado de lo que pensé, creí que se me oucrriría una solución eficiente pero fue difícil para mí encontrarla. 


```
