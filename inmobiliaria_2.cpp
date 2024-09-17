#include <iostream>

#include "casa.h"
#include <cstring>


using namespace std;

casa::casa(int codigo,const char *calle,const char *numero,const char *localidades,int antiguedad,float superficie_total,float superficie_cubierta,int habitaciones){

  _codigo=codigo;
  strcpy(_calle,calle);
    strcpy(_numero,numero);
      strcpy(_localidades,localidades);
      _antiguedad=antiguedad;
      _superficie_total=superficie_total;
      _superficie_cubierta=superficie_cubierta;

     _habitaciones=habitaciones;




}

 string casa::mostar_informacion(){

return to_string(_codigo) + " calle: " + _calle +
           " numero: " + _numero +
           " localidad: " + _localidades +


" antiguedad: " + to_string(_antiguedad) +


" superficie total: " + to_string(_superficie_total) +


" superficie cubierta: " + to_string(_superficie_cubierta) +


" habitaciones: " + to_string(_habitaciones);


 }

precio::precio(int codigo, const char *calle, const char *numero, const char *localidades, int antiguedad, float superficie_total, float superficie_cubierta, int habitaciones, float precio_venta, float precio_alquiler)
:casa(codigo, calle, numero, localidades, antiguedad, superficie_total, superficie_cubierta, habitaciones) {

_precio_alquiler=precio_alquiler;
_precio_venta=precio_venta;

}

void precio::set_precio_venta(float precio_venta){

 if(_precio_venta>0){

     _precio_venta=precio_venta;
 }

   else {_precio_venta=0;} }

void precio::set_precio_alquiler(float precio_alquiler){
  if(_precio_alquiler>0){

    _precio_alquiler=precio_alquiler;
  }
   else {_precio_alquiler=0;}

}

float precio::get_precio(){
  return _precio_venta;
}

float precio::get_precio_2(){
  return _precio_alquiler;

}

  string precio::mostrar_informacion_3(){


return "codigo:" +to_string(_codigo) + " calle: " + _calle +
           " numero: " + _numero +
           " localidad: " + _localidades +


" antiguedad: " + to_string(_antiguedad) +


" superficie total: " + to_string(_superficie_total) +


" superficie cubierta: " + to_string(_superficie_cubierta) +


" habitaciones: " + to_string(_habitaciones)+

"precio de venta:" + to_string(_precio_venta) +


"precio de alquiler" + to_string(_precio_alquiler);

}





 duenio::duenio(const char*apellido,const char *nombre,const char *dni,const char *celular){


  strcpy(_apellido,apellido);
  strcpy(_nombre,nombre);

  strcpy(_dni,dni);
  strcpy(_celular,celular);


 }

string duenio::mostrar_informacion_4(){



return "Apellido: " + std::string(_apellido) +


" Nombre: " + std::string(_nombre) +


" Documento: " + std::string(_dni) +


" Celular: " + std::string(_celular);
    }
