#Judge Route Circle
Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L(Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

##Example 1:
```
Input: "UD" 
 Output: true  
```
Example 2:
```
Input: "LL"  
Output: false  

```
#Solución:
```
Para poder solucionar este problema podemos observar que si se hace un movimiento a un lado, entonces debemos hacer otro al lado opuesto para formar un círculo.
Si seguimos esta idea, llegaremos al origen. 
Por lo que necesitamos un contador para "U" Y "D"  el cual llamaremos "y".
Asimismo también otro contador para "L" y "R" el cual llamaremos "x".

Siguiendo este esquema cuando recibamos una "U", le sumaremos a la variable "y" 1. 
De la misma manera cuando recibamos "D" restaremos a "y" 1.

Y en la variable "x" le sumaremos 1 cuando leamos "R" y restaremos 1 cuando tengamos "L".

Aplicando respectivamente este esquema, implementamos un método que lea cada carácter del string y haga la operación sobre la variable correspondiente. 

Consecuentemente después de aplicar las operaciones si el resultado de ambas variables es 0,0, entonces se forma un círculo, de lo contrario no lo es. 

```