
//------------------------------------------------------------//

int Suma_Iterativo (
  int _arreglo [],
  int _largo,
){

  //----------------------------------------------------------//

  int suma = 0;

  //----------------------------------------------------------//

  for (  int i=1;  i<_largo;  i+=1 )
    suma += _arreglo[ i ];  /// es lo mismo que sumar el arreglo con la suma

  //----------------------------------------------------------//


  return suma;

  //----------------------------------------------------------//

}

//------------------------------------------------------------//

