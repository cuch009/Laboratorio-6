#include <iostream>
#include <string>

using namespace std;

class Pelicula {
private:
    string titulo;
    string director;
    int anoLanzamiento;

public:
    
    Pelicula(string t, string d, int ano) : titulo(t), director(d), anoLanzamiento(ano) {}

    void setTitulo(string t) {
        titulo = t;
    }

    string getTitulo() const {
        return titulo;
    }

    void setDirector(string d) {
        director = d;
    }

    string getDirector() const {
        return director;
    }

    void setAnoLanzamiento(int ano) {
        anoLanzamiento = ano;
    }

    int getAnoLanzamiento() const {
        return anoLanzamiento;
    }

    void mostrarInformacion() const {
        cout << "Titulo: " << titulo << endl;
        cout << "Director: " << director << endl;
        cout << "Anio de Lanzamiento: " << anoLanzamiento << endl;
    }
};

int main() {

    Pelicula pelicula1("Transformers", "Michael Bay", 2007);

    pelicula1.mostrarInformacion();

    pelicula1.setAnoLanzamiento(2007);
    pelicula1.mostrarInformacion();

    return 0;
}

