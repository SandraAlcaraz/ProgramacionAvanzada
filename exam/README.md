#Problema

You are given an integer N, followed by N lines of input (1 <= N <= 100). Each line of input contains one or several words separated with single spaces. Each word is a sequence of letters of English alphabet containing between 1 and 10 characters, inclusive. The total number of words in the input is between 1 and 100, inclusive.

Your task is to reverse the order of words in each line of input, while preserving the words themselves. The lines of your output should not have any trailing or leading spaces.

Example

input
3
Hello World
Bye World
Useless World

output
World Hello
World Bye
World Useless

##Análisis

° Primeramente identificamos que N son las veces que el usuario nos dará cadenas de palabras.
° Cada cadena contiene dos palabras las cuales están separadas por un " ".
Nuestra misión es invertir las palabras que nos dará el usuario

##Solución
° Recibimos y guardamos las cadenas, al guardarla llamamos a la función reordenaPalabra() y esta recibe a una cadena.

° Adentro de la función reordenaPalabra(string s){
  - creamos una variable dummy de tipo int
  - recorremos la palabra hasta que encontramos un " "
  - cuando lo encontramos guardamos en dummy la dirección antes de que se tenía antes de " ".
  - después con la segunda parte y cambiamos el orden de s con las direciones que recibimos.
  - de esta manera concatenamos (segunda parte)+(el espacio)+ dummy, pero el espacio que teníamos antes de cambiar el orden
lo ponemos después de la segunda parte de la palabra.
Para esto usaremos la función strcat. 

Y hacemos eso con todo lo que recibimos, si logramos hacer esta función nuestro código correría en tiempo O(n), porque todo lo estamos haciendo en tiempo líneal . Aunque también podríamos considerar que perdemos tiempo recorriendo cada palabra dentro del string pero esto es despreciable porque cada palabra tiene una extensión máxima de 10 caracteres.
