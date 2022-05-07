
# incluir  < iostream >
# incluir  < cstdint >

utilizando el espacio de  nombres  estándar ;

class  Alumno { // Def clase
    // características privadas
    // Tarea: agregar nombre (usando cadenas C++, no usar char *)
    estera de uint32_t ;
    uint8_t edad;
public:  // métodos públicos
    Alumno ( uint32_t m, uint8_t e): mat(m), edad(e) { } // constructor
    amigo ostream& operador <<(ostream& os, const Alumno& alum); // funcion amiga
};

operador ostream& <<(ostream& os, const alumno& alumno) {
    // tarea: agregar imprimir nombre
    os << " Soy " << sin firmar (alum. mat )
       << " y tengo " << unsigned (alum. edad ) << " años " << endl;
    volver os;
}

 configuración vacía () {
  // pon tu código de configuración aquí, para ejecutar una vez:
    alumno luis = { 84060820L , 25 }; // Instanciación con notación de inicializador {}
    alumno noel ( 84060833L , 24 );    // Instanciación con notación de constructor()
    cout << luis << noel;
}

 bucle vacío () {
  // pon tu código principal aquí, para ejecutar repetidamente:

}
