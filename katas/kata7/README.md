# Kata 7 - Shadows of the Knight - Episode 1
```sh
W- width - ancho del edificio
H- height - lo alto del edificio, basandonos en las ventanas de este
N- n�mero de saltos que puede hacer Batman antes de que exploten las bombas.
X0 y Y0- La posici�n inicial de Batman.
input: nos indica d�nde est� la bomba.
Output: Necesitamos mostrar la siguiente ventana a la que Batman deber�a saltar. 
Con las coordenadas (X,Y), que son horizontal y vertical respectivamente.
```
Constraints
1 = W = 10000
1 = H = 10000
2 = N = 100
0 = X, X0 < W
0 = Y, Y0 < H
Response time per turn = 150ms
Response time per turn = 150ms
```sh
    int x1 = 0; //posici�n m�nima X
    int x2 = W - 1; //posici�n m�xima en X
    int y1 = 0; //posici�n m�nima en Y
    int y2 = H - 1; //posici�n m�xima en Y
```

Soluci�n:
Tenemos que encontrar la mejor posici�n para saltar, lo mejor que podemos hacer es tratar de ir al medio. 
Para encontrar la posici�n a la que deber�a saltar batman se us� la siguiente ecuaci�n.
```
(X0,Y0)=((x1+x2)/2,((y1+y2)/2)
```

Pero aqu� nos preguntamos de qu� dependen x1,x2,y2 y y1.
Los modificaremos seg�n la letra que estemos leyendo, por ejemplo:
```
"R":x1=X0+1 //aumentamos el valor de X
"L":x2=X0-1 //disminuimos el valor de X
"D":y1=Y0+1 //aumentamos el valor de Y
"U":y2=Y0-1 //disminuimos el valor de Y
```



