# Práctica Git - Soluciones CSES


<p align="center">
   <img src="Imagenes/scesi.png" alt="logo de la scesi" width="400"/>
</p>

Este proyecto colaborativo tiene como objetivo resolver problemas del [CSES Problem Set](https://cses.fi/problemset/) utilizando C++.  
Tambien tiene como objetivo poner en práctica todo lo aprendido en nuestro curso de **Git** como parte del proceso de postulación a la **Sociedad Científica (SCESI)**.


<p align="center">
   <img src="Imagenes/cses.webp" alt="logo del set de problemas cses" width="400"/>
</p>

Cada integrante desarrolla su solución en su propia rama y sigue el flujo de trabajo **GitHub Flow**, aplicando buenas prácticas en el uso de **Git y GitHub**.

## Colaboradores
[@Miguel Angel Condori](https://github.com/Chambeador)  
**Problema:** [Ferris Wheel](https://cses.fi/problemset/task/1090)  
**Descripción:** Organizar niños en góndolas con el mínimo número posible, emparejando los más ligeros con los más pesados.  
**Solución:** Implementación de dos punteros tras ordenar los pesos para optimizar el uso de góndolas.  
**Lenguaje:** C++  

[@Delia Acosta](https://github.com/Del-Mai)  
**Problema:** [Increasing](https://cses.fi/problemset/task/1094)   
**Descripción:** Dado un arreglo de enteros, se quiere transformarlo en uno no decreciente, realizando la mínima cantidad de movimientos posiblesse puede incrementar en 1 cualquier elemento del arreglo.    
**Solución:** Recorrer el arreglo desde el segundo elemento, si algun elemento es menor que el anterios, incrementa su valor hasta igualarlo, sumamos la cantidad de incrementos realizados y esa suma sera el numero mínimo de movimientos necesarios.   
**Lenguaje:** C++

[@Adriana Soto](https://github.com/r4ccy)  
**Problema:** [Repetitions](https://cses.fi/problemset/task/1069)  
**Descripción:** Dado un string de caracteres A, C, G y T (secuencia de ADN), se debe determinar la longitud del segmento más largo formado por repeticiones consecutivas de un mismo carácter.  
**Solución:** Se recorre la cadena manteniendo un contador que se incrementa si el carácter actual es igual al anterior. Se guarda el valor máximo alcanzado.  
**Lenguaje:** C++

[@José Ignacio Jaldin Janko](https://github.com/TheArrick)  
**Problema:** [Minimizing Coins](https://cses.fi/problemset/task/1634)
**Descripción:** Considera un sistema monetario compuesto por n monedas. Cada moneda tiene un valor entero positivo. Tu tarea es producir una suma de dinero x utilizando las monedas disponibles de tal manera que el número de monedas sea mínimo.
**Solución:** Utilizando programación dinámica, se busca dividir el problema en partes más pequeñas, para luego juntar el resultado de manera eficiente juntarlas.
**Lenguaje:** C++

### Buenas prácticas aplicadas

Durante el desarrollo del proyecto seguimos buenas prácticas de trabajo colaborativo con Git y GitHub:

- Creamos una rama por cada colaborador (`feature/nombre-problema-a-resolver`)
- Escribimos mensajes de commit claros usando el [conventional commit](https://www.conventionalcommits.org/en/v1.0.0/) (`feat`, `fix`, `docs`, etc.)
- Usamos Pull Requests para integrar soluciones, permitiendo revisión entre el equipo
- Mantenemos el repositorio actualizado para evitar conflictos


### Resumen del trabajo en equipo

Esta práctica nos permitió aplicar lo aprendido sobre Git y GitHub en un entorno real de colaboración.  
Algunas reflexiones del grupo:

- **Lo que más nos costó:** Resolver conflictos al hacer `pull`, entender bien cómo funciona el `fetch` y manejar los errores.
- **Lo que aprendimos:** A trabajar con ramas sin cometer errores entre nosotros, usar bien los mensajes de commit, y entender la importancia de los Pull Requests.
- **Trabajo en equipo:** Coordinamos quién resolvía qué problema, revisamos el código de los demás y aprendimos a colaborar de forma ordenada.
- **GitHub Flow:** Fue clave para mantener un flujo de trabajo simple, entendible y controlado.

---

### Gracias a las competencias ICPC 💻


<p align="center">
   <img src="Imagenes/icpc.jpg" alt="logo del icpc" width="400"/>
</p>

Este proyecto no solo nos permitió mejorar nuestras habilidades en Git y poner aprueba todo lo aprendido, sino también a practicar con problemas similares a los de las **competencias ICPC**.  
Cada desafío nos ayudó a mejorar nuestra colaboración como equipo y mejorar nuestra comunicacion, tambien en la resolución de conflictos y trabajo en equipo, mientras nos preparamos para futuros retos.A seguir aprendiendo y creciendo!. 


