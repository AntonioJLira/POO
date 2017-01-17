
# Programación Orientada a Tontos

### 1. Factores de calidad del software

**Oportunidad**: **Capacidad de un sistema de ser lanzado cuando el usuario lo necesita, o antes**.  
**Economía**: **Los costes del producto**. A veces lo más importante de todo.

### 1.1 Factores externos e internos

**Eficiencia**: **Realizar correctamente aquello para lo que ha sido creado de la mejor forma posible**. Algunos factores son: el **espacio en memoria** utilizado por el programa y el **tiempo de ejecución**, **espacio en disco**, etc.  
**Portabilidad**: **capacidad o facilidad del producto de ejecutarse en otro hardware diferente o en otro sistema operativo diferente**. Es importante que el programa no haga uso de características de bajo nivel del hardware o que aisle la parte dependiente del hardware para solo modificar dicha parte al portarlo

### 1.2 Factores externos

**Fiabilidad**: **El producto proporciona unos resultados con la precisión requerida o con la total satisfacción por parte del usuario**, de forma que el usuario pueda confiar totalmente en la bondad de los resultados que especifico.  
**Robustez**: **Capacidad del producto de manejar correctamente situaciones imprevistas**, de **error** o **fuera de lo normal**.  
**Corrección**: **Capacidad del producto  para realizar de forma adecuada aquello para lo que fue creado**.  
**Compatibilidad**: **Facilidad que tienen los programas de combinarse entre sí**, **los datos de salida de un programa como entrada de otro programa**.  
**Seguridad**: **Capacidad del producto de proteger sus componentes de usos no autorizados y de situaciones excepcionales de perdida de información**.  
**Integridad**: **El producto no debe corromperse por el simple hecho de su utilización masiva o por una gran acumulación de datos, o por operaciones complejas** posibles, pero no previstas al cien por cien.  
**Facilidad de uso**: **Facilidad al introducir datos, interpretar datos, etc**.  
**Accesibilidad general**: **Tener acceso, paso o entrada a un lugar o actividad sin limitación alguna por razón de deficiencia, discapacidad o minusvalía**.  
**Accesibilidad informática**: **Acceso a la información sin limitación** alguna por razones de deficiencia, incapacidad o minusvalía. Un programa accesible es aquel que permita el acceso a la información sin limitación alguna por razón de deficiencia, incapacidad o minusvalía.

### 1.3 Factores internos:

**Reutilidad/Reusabilidad**: **Capacidad del producto de ser reutilizado en su totalidad o en parte por otros productos**, con el objetivo de **ahorrar tiempo en soluciones redundantes** ya hechas con anterioridad. Un programa debe agrupar en módulos aislados los aspectos dependientes de la aplicación particular.  
**Extensibilidad**: **Adaptar el producto a cambios** en la especificación de requisitos.

### 2. Descomposición:
**La descomposición busca agrupar las estructuras de datos con los procedimientos que los manipulan en módulos**, o bien **agrupar en módulos un conjunto de procedimientos relacionados**.  

#### 2.1 Cinco Criterios para evaluar la descomposición
- **Descomposición modular**: Un método de construcción de software debe ayudar en la tarea de **descomponer el problema de software en un pequeño número de subproblemas menos complejos, interconectados mediante una estructura sencilla y suficientemente independientes** para permitir que el trabajo futuro pueda proseguir por separado en cada uno de ellos.
- **Composición modular**: **La producción de elementos de software se pueden combinar libremente unos con otros para producir nuevos sistemas**.
- **Comprensibilidad modular**: Un lector humano puede entender cada módulo sin tener que conocer los otros.
- **Continuidad modular**: **Si hay** un pequeño **cambio** en la especificación o en los requisitos del problema, **provoca sólo cambios en un solo módulo o en muy pocos módulos**.
- **Protección modular**: **Si** existe un **problema dentro de un módulo**, **no se propaga** a otros módulos vecinos.

#### 2.2 Cinco Reglas
- **Correspondencia directa**: La estructura modular obtenida debe ser **compatible con la estructura** modular del dominio del problema.
- **Pocas interfaces**: Un módulo debe comunicarse con el **menor número posible de módulos**.
- **Pequeñas interfaces**: Los módulos deben intercambiar la **menor información posible**.
- **Interfaces explícitas**: Las **interfaces** deben ser **obvias** a partir de su simple lectura.
- **Ocultación de la información**: El **diseñador de cada módulo debe seleccionar un subconjunto de propiedades** del módulo **como información oficial** sobre el módulo para ponerla a disposición de otros autores de módulos clientes.

#### 2.3 5 Principios
- **Unidades modulares lingüísticas**: Los módulos deben corresponderse con las unidades sintácticas del lenguaje de programación utilizado.
- **Auto-documentación**: El diseñador de un módulo debiera esforzarse por lograr que toda la **información relativa al módulo** forme parte del propio módulo.
- **Acceso uniforme**: Todos los **servicios** ofrecidos por un módulo deben **estar disponibles** a través de la notación uniforma sin importar si están implementados a través del almacenamiento o de un cálculo.
- **Principio abierto-cerrado**: Se debe **facilitar** la posterior **modificación**, pero un módulo debe **cerrarse** para ser **utilizado**.
- **Elección única**: Si hay varias alternativas, sólo un módulo del sistema conocerá la lista completa.  

#### 3. ¿Qué es la clase raíz de un sistema software orientado a objetos y cuando se dice que un sistema software orientado a objetos está cerrado (cierra de un sistema software)?  
**Es la clase de la cual derivan todas** las demás clases del sistema software.
Un sistema es **cerrado** si **contiene todas** las clases que necesita la **clase raíz**.

#### 4. Personas importantes y sus aportes:
**Dennis Ritchie: C (1972), Unix (1970)**.  
**Ken Thomson: Unix (1970)**.  
**Bjarne Stroustrup: C++ (1980)**.  
**Richard Stallman: GNU (1983)**.  
**Steve Jobs: Apple (1976)**.  
**Linus Torvalds: Linux (1991)**.  

#### 5. ¿Qué patrones de diseño conoces? Enuméralos todos y comenta en más profundidad uno de ellos a tu elección.
**Iterador**, **observador**, **objeto compuesto**, **strategia**, **triada modelo-vista-controlador**.  
##### Iterador  
- **Nombre**: iterator
- **Estructura**:
     - Procesa elementos de una colección
     - Sin la exposición de detalles internos
     - C++ STL iterators. Ruby: each, collect.    
- **Consecuencias**:  
     - Sencillez de uso  
     - Mismo uso para todas las colecciones  
     - Independencia de la representación interna  
     - Multitud de aplicaciones.

##### Observador
- **Nombre**: observer. También conocido como publish-subscribe, dependents  
- **Estructura**:
     - Es un **ejemplo de clases cooperantes** que se da mucho en diseño de software  
     - **Sujeto**: Los datos. En su interfaz tiene un método para comunicar cambios a los observadores asignados  
     - **Observador**: puede hacer varios asignados al mismo sujeto. En su interfaz tiene un método para actualizarse
- **Consecuencias**:
     - Ambos elementos son independientes.
     - Se puede reutilizar por separado
     - Se puede añadir observadores nuevos
- **Aplicaciones**:
     - Infinidad de aplicaciones tienen clases cooperantes de este tipo
     - Relación entre modelo y vista en el patrón MVC

##### Strategia
- **Nombre**: strategy
- **Estructura**:
     - Familia de algoritmos intercambiables.
     - Se prepara una descripción genérica del algoritmo para que posteriormente se instancie con el que convenga.
- **Aplicaciones**:
     - Cuando preveamos distintos comportamientos en un futuro, podemos habilitarlo
     - Estructura de datos complejas que podrán implementarse en un futuro de otras formas
- **Consecuencia**:
     - Posibilidad de mejorar eficiencias y rendimientos en el futuro
     - Permitir otras estrategias de solución distintas a la propuesta inicialmente
     - Facilitar aplicaciones

#### 6. Define qué es patrón de diseño y cuando debe utilizarse. Describe los elementos esenciales (nombre, estructura, aplicación y consecuencias) de los tres patrones de diseño principales en los que se basa la tríada MVC
- **Definición**: Descripciones de clases, objetos y relaciones entre sí, que están especializadas en resolver un problema de diseño general en un determinado contexto.  
##### Triada MVC
- **Nombre**: MVC
- **Estructura**:
     - **Modelo**: objeto de la aplicación
     - **Vista**: su presentación o representación
     - **Controlador**: define el modo en que se reacciona ante la entrada, por ejemplo, del usuario.
- **Observaciones**:
     - Usa las propiedades de varios patrones de diseño que cooperan: observer, composite, strategy.
     - Tiene su origen en el lenguaje Smalltalk-80
     - Bastante actual (2000)
- **Aplicaciones**:
     - Todos los entornos de desarrollo de aplicaciones
     - Cualquier aplicación
- **Consecuencias**:
     - Simplificación del desarrollo
     - Separar desarrollos
     - Varias presentaciones para un mismo modelo

#### 7. Encapsulado y ocultación de la información
- Un **TAD** tiene una **vista exterior**, **en la que se ocultan detalles**, **estructuras de datos y su comportamiento interno**. **También tiene una vista interior, en la que se puede ver cómo está hecha por dentro y cómo se comporta internamente cada operación, las estructuras de datos utilizadas, el código, etc**.  
- **La separación de estas dos vistas es muy importante, ya que en el diseño de un TAD no debe intervenir la vista interna**. Para el cliente del TAD tampoco es necesario conocer el interior de un TAD para poder usarlo. **Esto facilita el diseño y lo hace de más calidad, también hace la labor del cliente más sencilla y potente**.  
- **No solo es cuestión de facilitar su uso**, **también evita que el cliente tenga que modificar la parte interna** por cualquier razón y provoque operaciones y usos no permitidos, errores, etc. Es mejor que el cliente se limite a conocer la vista externa y a usar la interfaz del TAD.
- **En C++, la vista exterior (interfaz) son todos los métodos y datos** que se encuentran dentro de la sección **public**. La sección **private**, por el contrario, se usa para la **vista interna**.

#### 8. La Programación Orientada a Objetos (POO)
- Es una **forma más natural y cercana a la realidad de programar**.
- **La base de la programación estructurada es la función**, que es más difícil de comprender.
- **La POO usa como base la clase**, **que** integra los siguientes conceptos:
     - **Representa un objeto del mundo real**.
     - Tiene **atributos**.
     - Tiene **comportamiento**.
     - Tiene **entidad por sí misma**.
     - Tiene **sentido por sí misma, se entiende, se comprende fácilmente**.
     - **Se puede reutilizar** en distintos problemas.
- La POO es unan forma natural de modelar problemas reales mediante programación.


#### 9. Abstracción
Consiste en **destacar los detalles importantes e ignorar los irrelevantes**. Los detalles son irrelevantes a cierto nivel, luego serán relevantes a otros niveles.

##### 9.1 Abstracción por parametrización
**El uso de parámetros permite abstraer de los detalles de los datos sobre los que se aplica un procedimiento o función**.

##### 9.2 Abstracción por especificación
Permite **abstraer de los detalles del cómo**, **considerando únicamente el qué**. Informa de los detalles relevantes de datos, funciones… y evita los irrelevantes.

##### 9.3 Abstracción de datos
- Consiste en la especificación de TADs.
- Un TAD es una colección de datos y operaciones sobre estos datos, que se define mediante una especificación que es independiente de cualquier implementación.

#### 10. Operaciones con TADS
- Constructores: llevan al objeto a su estado inicial.
- Observadores: acceso de lectura a una característica del objeto.
- Modificadores: acceso de escritura a una característica del objeto.
- Destructores: llevan al objeto a su estado final descartando posibles efectos laterales imprevistos.

#### 11. Polimorfismo
Una de las formas de polimorfismo es a través de la sobrecarga de funciones: una o más funciones pueden compartir nombre siempre y cuando las declaraciones de sus parámetros sean diferentes.

#### 12. Referencia
- Son alias o nombres alternativos que pueden darse a una variable u objeto. Al definirse siempre se ha de indicar a qué variable hace referencia. Ejemplo: int &p = i;
- Se pueden pasar parámetros por referencia a una función para que se modifiquen dentro. Ejemplo: int funcion (int &variable);

#### 13. Constructores y destructores
- El constructor es una función miembro de la clase que tiene el mismo nombre que la propia clase y que, si existe, se ejecuta automáticamente en el punto del programa donde se declara el objeto.
- El constructor puede recibir parámetros.
- El destructor tiene igual nombre que el constructor, pero anteponiendo el carácter ~. No puede recibir parámetros. Se suele usar para liberar memoria.

#### 14. Funciones Friend
Son aquellas que, no siendo miembro de una clase, pueden acceder a la parte privada de ella. Se tienen que declarar en las dos clases (la que hace uso de la función y la que tiene datos en la parte privada a los que se quiere acceder).

#### 15. Polimorfismo
- Es el proceso mediante el cual se puede acceder a diferentes implementaciones de una función utilizando el mismo nombre. Este proceso atiende al esquema: una interfaz, múltiples métodos.  
- Clases de polimorfismo:
     - En tiempo de compilación: Se refiere a la sobrecarga de funciones y de operadores.
     - En tiempo de ejecución: Uso conjunto de clases derivadas y funciones virtuales.

#### 16. ¿Qué es la STL?
La STL (Standard Template Library) de C++ es una colección genérica de plantillas de clases y algoritmos que permite a los programadores implementar fácilmente estructuras estándar de datos como colas, listas  y pilas.




## Constantes en la lista de parámetros de una función  

Se puede pasar una constante como parámetro a una función, siendo imposible
modificar su contenido ya que actúa como solo lectura. Ejemplo:  

``` C++

     int f(const int *v)
     {
          v[2]=55; // error: asignación a ubicación de sólo lectura
     }

```  
## Funciones en linea  

C++ proporciona un mecanismo que **solicita** al compilador que, en vez de la
llamada, haga una sustitución de la llamada por el código de dicha función. Con
esto se evita que se realice la llamada en sí ahorrando tiempo de ejecución y
memoria. Estas funciones se denominan funciones en linea.  

- Debe hacerse en funciones cortas, menos de 10 lineas aproximadamente, como por
ejemplo observadores y modificadores sencillos.  
- Para declarar una función en línea el calificador *inline* debe escribirse
delante del prototipo de la función **en la definición de la clase**, o bien
**delante del prototipo en el cuerpo de la función**, o en **ambos** (mejor).  
- Otra forma de declarar una función *inline* es incluyendo su código **dentro de
la definición de la clase**. **Aqui no es necesario preceder la definición con la
palabra *inline***, aunque siempre conviene ponerla para que el código sea lo mas
explícito posible.  
- Se puede declarar *inline* una función miembro de una clase o una función que
no pertenezca a ninguna clase.  
- ***Inline* es una solicitud, no una orden**. Se deniega cuando la función es
algo compleja → Es decir hay un bucle, ```switch```, ```if```, etc. O hay
recursividad.  
- El código de un programa con funciones *inline* cortas disminuye de tamaño y el
tiempo de ejecución, en cambio, el código de un programa con funciones *inline*
grandes, aumenta considerablemente su tamaño.  
- El compilador ignora el calificador *inline* salvo en funciones muy pequeñas.  
- Cualquier modificación de la función inline requiere una recompilación de todo
el código que la usa, ya que la llamada a la función no existe en el código compilado
y, por tanto, no se linkará con una nueva versión de la función *inline*. Mucho
cuidado con esto.  


## Espacios de nombre

Se declara de la siguiente forma:

```C++

     namespace nombre{
          ...
          // Declaraciones
          ...
}


```

Dentro del espacio de nombres se pueden definir los identificadores que queramos
sin preocupación de que exista conflicto o duplicaciones con otros identificadores
fuera de ese espacio de nombres o en otro espacio de nombres.  
Si por ejemplo definimos las funciones o las clases de un espacio de nombres en
un fichero .h de la forma que se ha indicado, al definir el cuerpo de las
funciones en el correspondiente fichero .cc es necesario anteponer al nombre de
la función el nombre del espacio de nombres seguido de dos puntos.  

Si se trata de una función de una clase definida dentro del espacio de nombres:

```C++

espacio_de_nombres::nombre_de_la_clase::funcion()  

```

En el fichero .c se puede evitar anteponer el nombre del espacio de nombres a cada
función metiendo el cuerpo de las funciones dentro de un nuevo bloque:  

```C++

     namespace nombre{
          ...
               //Cuerpo de las funciones
          ...
}

```

Y si queremos utilizarlo deberemos incluír el siguiente comando en nuestro trozo
de código.
```C++
     using namespace std;
```
Y ahora en vez de poner ``` std::cout "Prueba!" ``` solo pondremos ```cout "Prueba"```. Tambien se puede optar por importar solamente algunos de los comandos como pueden ser
``` using std::string ```.


## Parametros por defecto   
Permite que los parametros de las funciones tengan valores por defecto, se especifica en la lista de parametros de la declaración de la función, igual que se inicializa una
variable. **Importante**: los parametros por defecto se establecen solo en la declaración de la función. Ejemplo:

```C++

void velocidad(int v=25)

```

La función *velocidad* puede llamarse: velocidad(70), con lo que **v** toma el valor
pasado, o bien, velocidad() tomando el valor por defecto (25).


## Referencias  

Se podrían tratar como Alias o nombres alternativos que pueden darse a una variable
u objeto. Al definirse siempre debe indicarse a que variable hace referencia. No se
puede definir sin hacer referencia a una variable u objeto (no se puede declarar
haciendo referencia a un valor literal). Esto las hace muy seguras ya que evitamos
que una referencia apunte a una zona errónea.

```C++
     int i;
     int &p = i;
```
*p* es una referencia a la variable de tipo entera(int) *i*. Si se cambia el valor
de *p* cambia *i*. Ambos comparten el mismo espacio de almacenamiento en memoria.
Para modificar *i* solo tengo que hacer por ejemplo: ```p=77```

- Las referencias se utilizan para el paso de parámetros a funciones, constructores
de copia y en otras versiones de sobrecarga de operadores.  


- **Las referencias son parecidas a los punteros clásicos del lenguaje C** (no exáctamente, pero para su mejor comprensión ayuda mucho verlas ası́). Lo que las diferencia de ellos es que **nos ahorran tener que usar la nomenclatura tediosa de esos punteros** (asteriscos (*), indirecciones (&), etc.), y que son más seguras, como se ha mencionado antes.  

- Por ello es mas conveniente utilizar referencias que punteros  

### Paso de parametros usando referencias en C++  

Los parámetros de una función es el lugar más común donde se verán referencias. En C
y C++ el **paso por valor de una variable hace que la función cree una nueva copia de dicha
variable** y sea la que se use dentro de la función. Con lo cual, al **modificar la copia no se modifica la variable u objeto original.**  
**Para que una función pueda modificar una variable que se pasa como parámetro debe
recibirla en un puntero y en la llamada poner la dirección de la variable con el operador &.**
Pero **C++ aporta** una nueva forma de **pasar parámetros por referencia más limpia y
cómoda: usando referencias.**

Si una **función** recibe una **variable mediante una referencia la función crea una referencia
a la variable (y nó una copia)** y si se **modifica la referencia se modificará la variable original.**

```C++

void intercambia(int &a, int &b){

     int aux;
     aux=a;
     a=b;
     b=aux;

}

```


La llamada a la función puede ser:

```C++

     int main(void){

          int i,j;
          .....
          intercambia(i,j);
          ......
     }


```
Dentro de la función intercambia() a y b son **referencias** a las **variables i y j** de la llamada. **Al modificar a y b se modifican i y j**.

**Al preceder con un &** el nombre del parámetro, C++ **envı́a a la función la referencia
de la variable directamente sin tener que usar el operador & en la llamada**.

**No es necesario usar dentro de la función punteros para referirse a la/s variable/s**.  

### Paso de referencias a funciones. Paso de referencias constantes  
**Hay casos en los que aun sin modificar la variable dentro de la función conviene pasar
referencias, y es cuando la variable contiene gran cantidad de datos**. **Si contiene gran cantidad
de datos, el paso por valor obliga a hacer una copia de dichos datos** con el consiguiente gasto
en memoria y tiempo de ejecución. **Si en vez de pasar por valor se pasa usando referencias,
no se realiza la copia por lo que se ahorra tiempo de ejecución y memoria**.  

**Si se pasa la referencia, la función podrá modificar la variable, pero esto se puede evitar
usando el calificador** ```const``` que se usa para indicar que un objeto es **constante** y, por tanto,
**no puede ser modificable**.

```C++

     void Tabla::inserta(const Persona &p)
     Persona p;
     Tabla t;
     ...
     t.inserta(p) // se envı́a al método una referencia constante a p


 ```

Por eso si la variable tiene muchos datos → referencia  
Pero para los tipos basicos no se gana mucho pasando referencias constantes **esta forma será la que usemos de forma predetermi-
nada (IMPORTANTE)**  

### Funciones que devuelven referencias  

No se recomienda devolver una referencia a menos que estemos seguros de que lo que se
devuelve apunta a algo seguro.
Una función puede devolver una referencia por dos motivos:
1. Para evitar que se cree una copia del objeto que se devuelve ahorrando ası́ memoria y
la llamada al constructor de copia (tiempo de ejecución).
2. Para poder modificar el valor que devuelve la función, por ejemplo, cuando se quiere modificar usando este tipo de expresiones: ```f()=7;```  

Esto ocurre cuando se quiere **sobrecargar el operador []**, como en el siguiente ejemplo
(este ejemplo se entenderá mejor cuando estudiemos la sobrecarga de operadores, volver
aquı́ cuado se haya hecho):

```C++

class Matriz
{
     private:
          int array[10];
     public:
          Matrix() {memset(array,0,sizeof(array));}
          int& operator[](int index) {return array[index];}
};

int main(){
     Matrix m;
     m[0] = 1;
     m[1] = 2;
     int x = m[2];
     cout << m[0] << endl;
     cout << m[1] << endl;
     return 0;
}

```
Una función que devuelve una referencia se procesa como si devolviera un valor regular,
no hay que recibirla con punteros ni referencias ni nada de eso.


```C++

double& GetWeeklyHours(){

     double h = 46.50;
     double &hours = h;
     return hours;

}

int main(){

     double hours = GetWeeklyHours();
     //se hace la asignación y el objeto hours almacena el valor
     cout << "Weekly Hours: " << hours << endl;
     return 0;

}


```

### Otros aspectos de las referencias  
El simple nombre de un objeto es una referencia a su comienzo en memoria.

**No se puede hacer por ejemplo int &a=NULL**, ya que NULL es un objeto literal tem-
poral que se usa solo para la asignación y **deja de existir en la siguiente lı́nea**. El
compilador lanza un error en este caso, ya que si intentaramos modificar la referencia
el resultado serı́a erróneo e imprevisible (probablemente un segmentation fault).

**Por el mismo motivo del punto anterior no se puede hacer int &a=9**, por ejemplo.

**Si indicamos que la referencia no se va a modificar posteriormente (anteponiendo const
en su declaración), entonces si se podrı́an hacer estas asignaciones**, pero aún ası́, la
utilidad de ello es muy relativa (el calificador const lo veremos en una sección posterior).

## Sobrecarga de funciones  

Una de las formas de polimorfismo en C++ es a través de la sobrecarga de funciones:
una o más funciones puede compartir nombre siempre y cuando las declaraciones de sus
parámetros sean diferentes.


```C++

void intercambia(int &x, int &y);
void intercambia(float &x, float &y);

void intercambia(int &x, int &y){

     int aux;
     aux=x;
     x=y;
     y=aux;

}

void intercambia(float &x, float &y){

     float aux;
     aux=x;
     x=y;
     y=aux;

}


```

- El compilador sabe qué función debe usar en cada caso por la lista de parámetros.
- La sobrecarga de funciones permite crear un nombre genérico para una operación.
- No sobrecargar funciones no relacionadas.
- La sobrecarga de funciones que difieren solo en el tipo devuelto es ambigua: debe
evitarse.

## Herencia  

Consiste en definir una clase a partir de otra previamente definida.  

```C++

class Vehiculo{
     public:
          void asignaRuedas(int r);
          int infoRuedas();
          void asignaPasajeros(int p);
          int infoPasajeros();
     private:
          int ruedas_;
          int pasajeros_;
};

class Camion : public Vehiculo{
     public:
          void setCarga(float c);
          float getCarga();
     private:
          float carga_;
};

class Moto : public Vehiculo{
     public:
          void setSidecar(bool s);
          bool getSidecar();
     private:
          bool sidecar_;
};

```

**Vehiculo** → clase base, o padre;  **Camion y Moto** → clases derivadas, o hijas, de la clase Vehiculo.  
**Camion** y de **Moto** tienen acceso a la parte *pública* de la clase
**Vehiculo** exactamente igual que si se hubieran declarado dentro de la parte pública de
sus respectivas clases.  
**Camion** y **Moto** no tienen acceso a la parte *privada*
de la **clase Vehiculo**, solo pueden acceder a la parte *pública*. Esto protege la parte
*privada* de la **clase base**  

Al escribir: **class Camion : public Vehiculo**, se está indicando que la **clase Vehicu-
lo** es un elemento **público de la clase Camion**, y por tanto, el usuario de la **clase Camión**
podrá llamar a las funciones públicas de Vehiculo **como si estuvieran en la parte pública
de Camión**.  
**Si la clase base tiene constructor**, éste se **ejecuta automáticamente antes de empezar
a ejecutarse el constructor de la clase derivada**.  
**La herencia es una relación jerárquica**. Permite crear una jerarquı́a de clases de varios
niveles. **Al definir nuevas clases derivadas, éstas ya tienen incorporadas las caracterı́sticas de
sus clases base**. **Con lo que se reutiliza el código, se organiza el código, y se ahorra tiempo
de desarrollo, mantenimiento, etc**.  

``` C++

#include "camion.h" // las clases Vehiculo, Camion y Moto
#include "moto.h"   // pueden estar definidas en el mismo fichero
                    // o en ficheros diferentes.
                    //Supondremos aquı́ en ficheros diferentes.
int main(){

     Camion c;
     Moto m;
     ...
     cout << "ruedas del camión = " << c.infoRuedas();
     cout << "ruedas de la moto = " << m.infoRuedas();
     ...
     cout << "carga del camión = " << c.getCarga();
     ...
     cout << "tiene sidecar la moto? " << m.getSidecar();
     ...
}

```
En el programa anterior observar que no hay que declarar ningún objeto de la clase
Vehı́culo; no es necesario, al declarar los objetos c y m ya se crea todo lo necesario.


### Iniciadores de la clase base  

Si una clase base dispone de un constructor que recibe parámetros obligatorios, el cons-
tructor de la clase derivada debe enviarle esos parámetros.
Supongamos el siguiente código:

```C++

class Vehiculo{
     public:
          Vehiculo(int r) {ruedas_=r;};
          ...
     private:
          int ruedas_;
          int pasajeros_;
};

```

La clase derivada deberá proporcionar el parámetro al constructor de la siguiente manera:

```C++

class Camion : public Vehiculo{
     public:
          Camion(int n): Vehiculo(n) { ... }
};


```
El constructor de la clase derivada, pasará como parámetro a la clase base bien un valor
literal o bien un parámetro que él mismo reciba como es el caso del ejemplo.  
**Importante**: los iniciadores se consideran ya código que ejecuta las llamadas a la clase base
y solo deben ponerse donde se vaya a poner el cuerpo del constructor de la clase derivada.
Si dicho constructor es inline, en la declaración de la clase; pero si no es inline solo debe
ponerse en el cuerpo del constructor y no en su declaración.

## Objetos constantes y funciones miembro constantes  

Un objeto constante se declara mediante el uso del calificador *const* delante del nombre
de la clase en su declaración.




















.
