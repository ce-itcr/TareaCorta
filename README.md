# Tarea Corta 
El presente corresponde a la Tarea Corta del Curso de Algoritmos y Estructuras de Datos II (CE2103), I Semestre 2019. La misma pretende profundizar el concepto de gestión de memoria desde la perspectiva de la codificación del software.

# Especificación
El contexto que se utiliza para esta implementación es el siguiente:

1. Una fábrica de vehículos tiene 6 líneas diferentes de producción: Vehículo tipo 1, Vehículo tipo 2, Vehículo tipo 3, Vehículo tipo 4, Vehículo tipo 5 y Vehículo tipo 6.
2. Cada línea de producción utiliza los siguientes procesos: Proceso A, Proceso B, Proceso C, Proceso D y Proceso E. Cada línea de producción define su propio orden para estos procesos.
3. Para cada proceso se define un tiempo de producción de acuerdo a la línea de producción
4. Por cada proceso existe un encargado que es el que maneja la agenda del proceso para todas las
solicitudes de las líneas de producción.
5. Cada línea de producción puede atender solamente 3 procesos al mismo tiempo.
6. Cuando una línea de producción solicita un proceso y ya la agenda de ese proceso está llena, debe
dar prioridad a la nueva solicitud y poner en pausa alguna de las que estaba realizando.
7. Los procesos que se ponen en pausa pasan a una cola de espera general (de todos los procesos). Cada 5 segundos el que esté de primero en la cola debe ser atendido.

Debe mostrarse en tiempo real los procesos que se están ejecutando y los que están en cola de espera. Además, se debe visualizar aspectos como paginación e intercambio de páginas.

# Autores

* **Angelo Ortiz** - *Desarrollador* - [angelortizv](https://github.com/angelortizv)
* **Iván Solís** - *Desarrollador* - [isolis2000](https://github.com/isolis2000)
* **Jonathan Esquivel** - *Desarrollador* - [jesquivel48](https://github.com/jesquivel48)
* **Agustín Venegas** - *Desarrollador* - [JoseAgus00](https://github.com/JoseAgus00)

<p align="center">
<img src="https://developer.ridgerun.com/wiki/images/9/92/Logo-tec.png" width="325"/>
</p>
