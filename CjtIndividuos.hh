/** @file CjtIndividuos.hh
    @brief Especificación de la clase Conjunto de Individuos
*/

#ifndef _CJT_IND_HH
#define _CJT_IND_HH

#include "Individuo.hh"
#include <map>
#include <string>

/** @class CjtIndividuos
    @brief Conjunto de los individuos existentes. 

    Representa el conjunto de individuos en un diccionario siendo la clave el nombre del individuo
*/

class CjtIndividuos {
    
private:
    map <string, Individuo> mind;
    
    
    
public:
    //Constructoras
    
    /** @brief  Creadora por defecto.

      \pre <em>cierto</em>
      \post Se ha creado un diccionario de individuos vacio.
      \coste Constante
    */
    CjtIndividuos();
    
    //Modificadoras
    
    /** @brief Añade un individuo al conjunto

      
      \pre <em>cierto</em>
      \post Existe en el conjunto un individuo ind, si ya existía antes se muestra "error" por pantalla
      \coste Constante
    */
    void añadir_individuo(const Individuo& ind);
    
    /** @brief Dados 2 individuos y un nombre, se intenta realizar la reproducción 

      
      \pre Los padres existen y el hijo esta en el diccionario
      \post Se ha cruzado a ind1 y ind2 para crear un nuevo individuo, que se ha añadido al conjunto
      \coste Constante???
    */
    void reproducir(const Individuo& ind1, const Individuo& ind2, const string& nombre);    
    
    //Consultoras
    
    //Lectura y escritura
    
    /** @brief  Dado un individuo se muestra su árbol genelógico

      \pre Existe el individuo ind en el conjunto
      \post se muestra por pantalla su árbol genalógico, si el individuo no existe se muestra error.
      \coste Constante???
    */    
    void escribir_arbol(const Individuo& ind);
    
    /** @brief  Escribe los individuos del conjunto

      \pre <em>cierto</em>
      \post Se han escrito por el canal de salida standard los individuos del conjunto, su sexo y sus padres por orden alfabético de los primeros.
      \coste Constante
    */
    void escribir();
    
    /** @brief  Dado un individuo se muestra su genotipo

      \pre Existe el individuo ind en el conjunto
      \post se muestra por pantalla su genotipo, si el individuo no existe se muestra error.
      \coste Constante???
    */    
    void escribir_genotipo(const Individuo& ind);
};
#endif
