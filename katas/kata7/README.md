# Kata 7 - Shadows of the Knight - Episode 1
```sh
W- width - ancho del edificio
H- height - lo alto del edificio, basandonos en las ventanas de este
N- número de saltos que puede hacer Batman antes de que exploten las bombas.
X0 y Y0- La posición inicial de Batman.
input: nos indica dónde está la bomba.
Output: Necesitamos mostrar la siguiente ventana a la que Batman debería saltar. 
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
    int x1 = 0; //posición mínima X
    int x2 = W - 1; //posición máxima en X
    int y1 = 0; //posición mínima en Y
    int y2 = H - 1; //posición máxima en Y
```

Solución:
Tenemos que encontrar la mejor posición para saltar, lo mejor que podemos hacer es tratar de ir al medio. 
Para encontrar la posición a la que debería saltar batman se usó la siguiente ecuación.
```
(X0,Y0)=((x1+x2)/2,((y1+y2)/2)
```

Pero aquí nos preguntamos de qué dependen x1,x2,y2 y y1.
Los modificaremos según la letra que estemos leyendo, por ejemplo:
```
"R":x1=X0+1 //aumentamos el valor de X
"L":x2=X0-1 //disminuimos el valor de X
"D":y1=Y0+1 //aumentamos el valor de Y
"U":y2=Y0-1 //disminuimos el valor de Y
```



