# Acero_Zoe_ExamenCpp.zip

https://github.com/ZoeAcero/Acero_Zoe_ExamenCpp.zip.git

Dentro de la  carpeta Acero_Zoe_ExamenCpp.zip, hay diez carpetas distintas con cada uno de los apartados de la parte 2

En la de EJ1 se encuentran las operaciones básicas

En el EJ2 se encuentra la gestión de estudiantes

En el EJ3 se encuentra la optimizacion de memoria

En el EJ4 se encuentra el manejo de excepciones

En el EJ5 se encuentra el registro de materias

En el EJ6 se encuentra el promedio del estudiante

En el EJ7 se encuentra el manejo de ausencia

En el EJ8 se encuentra el filtrado de estudiantes por grado

En el EJ9 se encuentra la gestión de excepciones personalizadas

En el EJ10 se encuentra el registro de profesores







Parte 1: preguntas de opción múltiple:
1. es la opción "d"
2. es la opción "b"
3. es la opción "c"



Parte 3: preguntas de desarrollo

8. Programación Procedimental:

Enfoque en Procedimientos/Funciones: La programación procedimental se centra en la ejecución de procedimientos o funciones. El código se organiza en funciones que realizan tareas específicas.

Datos y Procedimientos Separados: Los datos y los procedimientos son entidades separadas. Los datos son pasivos y las funciones actúan sobre esos datos.

Énfasis en la Lógica: La lógica del programa está en el centro, y el control del flujo es manejado principalmente mediante estructuras de control como bucles y condicionales.

Programación Orientada a Objetos:

Enfoque en Objetos: La programación orientada a objetos se centra en los objetos, que son instancias de clases. Un objeto encapsula datos y los procedimientos que operan sobre esos datos.

Datos y Comportamiento Juntos: En POO, los datos y el comportamiento (métodos) están encapsulados juntos en objetos. La idea es modelar el mundo real en términos de objetos.

Conceptos como Herencia y Polimorfismo: POO introduce conceptos como herencia, polimorfismo, encapsulamiento, que permiten la reutilización del código y la construcción de sistemas más flexibles y mantenibles.

C++ y Soporte para Ambos Paradigmas:
C++ es un lenguaje de programación multiparadigma, lo que significa que ofrece soporte tanto para la programación procedimental como para la orientada a objetos. Algunos puntos clave son:

 C++ permite la creación de clases y objetos, lo que facilita la implementación de la programación orientada a objetos.
 Se pueden definir funciones y procedimientos de manera similar a otros lenguajes procedimentales.
 C++ admite herencia y polimorfismo, lo que permite la creación de jerarquías de clases y la capacidad de que objetos de diferentes tipos se comporten de manera similar.



 9. La propagación de excepciones es el proceso en el que una excepción lanzada en una función se transmite hacia arriba en la cadena de llamadas de funciones. Cuando se lanza una excepción, el control se transfiere al primer bloque catch que puede manejarla. Si no se encuentra en la función actual, la excepción se propaga al ámbito superior. Este proceso continúa hasta que se encuentra un bloque catch adecuado o llega al nivel superior del programa. La falta de un bloque catch resulta en la terminación anormal del programa con posibles mensajes de error.

 Si una excepción lanzada no es capturada por ningún bloque catch, puede resultar en una terminación inesperada del programa. C++ proporciona un mecanismo de "terminación inesperada" que cierra el programa y puede generar mensajes de error.



 10. La "adquisición de recursos" en el contexto de C++ se refiere a la obtención y asignación de recursos, como memoria dinámica, archivos, conexiones de red u otros recursos del sistema, durante la ejecución de un programa.

Su importancia:

 Gestión Dinámica de Memoria: En C++, la adquisición de recursos se asocia comúnmente con la gestión dinámica de memoria, utilizando new para asignar memoria en el montón.
Operaciones de Entrada/Salida (E/S): Aplicable a la apertura y cierre de archivos, conexiones de red y otros recursos externos, dado que estas operaciones pueden impactar el sistema.

Relación con la gestion de excepciones:

Recuperación Segura: La adquisición de recursos está vinculada a la gestión de excepciones para asegurar la liberación adecuada de recursos, incluso en presencia de excepciones, evitando fugas de memoria u otros problemas.

Uso de "RAII" (Recurso Adquisición es Inicialización): En C++, se favorece la técnica RAII, que vincula la adquisición y liberación de recursos al ciclo de vida de un objeto. Asignando la responsabilidad de liberación a un objeto, garantiza la liberación automática incluso ante excepciones.

Uso de bloques try-catch: Cuando se adquieren recursos dentro de un bloque try, es crucial asegurar la liberación de estos recursos en un bloque catch o finally. La liberación en el bloque catch es esencial para manejar situaciones de excepción de manera adecuada y prevenir posibles fugas de recursos.
