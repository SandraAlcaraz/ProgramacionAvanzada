##Kata 2
###420. Strong Password Checker problem from leet of code


A password is considered strong if below conditions are all met:

It has at least 6 characters and at most 20 characters.
It must contain at least one lowercase letter, at least one uppercase letter, and at least one digit.
It must NOT contain three repeating characters in a row ("...aaa..." is weak, but "...aa...a..." is strong, assuming other conditions are met).
Write a function strongPasswordChecker(s), that takes a string s as input, and return the MINIMUM change required to make s a strong password. If s is already strong, return 0.

Insertion, deletion or replace of any one character are all considered as one change.

int strongPasswordChecker(char* s) {    }


###Soluci�n:

Al tener las condiciones que nos d� el problema la mejor manera de solucionarlo es usando una lista ligada, en cada nodo de esta lista guardemos lo siguiente:
* Guardaremos en cada nodo los caracteres tipo char
* Al tener los caracteres guardados de esta manera podemos determinar con ASCII si es may�scula, min�scula o d�gito.
* Next:Tambi�n cada nodo tendr� un atributo "next" que nos dir� si el siguiente caract�r de la lista ligada es el mismo que en el actual, este atributo ser� de tipo boolean


Entonces con las condiciones establecidas en cada atributo:
Declararemos variables boolean: lower, upper, acumulador y digit.
Las cuales ser�n verdaderas si se encuentra alg�n atributo con esas caracter�sticas. 

Despu�s en nuestra funci�n vamos recorriendo nuestra lista ligada de la siguiente manera:
--Checamos la longitud de la lista, si es de menos de 6 caracteres "longitud" = 0, si est� en el rango "longitud"=1 y longi
--Si hay un lower, esta variable cambia a true
--Si hay un upper, la variable cambia a true
--Si hay un d�gito, la variable cambia a true. 

El caso de la variable acumulador:
-- Al comenzar a recorrer la lista si un atributo next es true, el valor de "acumulador" cambia a 1, si el siguiente tambi�n es true, entonces tenemos que cambiar reemplazar, quitar o agregar un nuevo nodo, todo esto depende de la longitud de nuestra lista ligada.
-- Para el caracter que ser� elegido nos fijamos en los atributos de nuestra funci�n y escogemos alguno de los que no se cumpla a�n. 

Esta soluci�n tiene una complejidad de O(N). 

 




