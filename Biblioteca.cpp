#include <iostream>
#include <string>

using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int anoPublicacion;

public:
    
    Libro(string t, string a, int ano) : titulo(t), autor(a), anoPublicacion(ano) {}

    
    void setTitulo(string t) {
        titulo = t;
    }

    string getTitulo() const {
        return titulo;
    }

    void setAutor(string a) {
        autor = a;
    }

    string getAutor() const {
        return autor;
    }

    void setAnoPublicacion(int ano) {
        anoPublicacion = ano;
    }

    int getAnoPublicacion() const {
        return anoPublicacion;
    }

    
    void mostrarInformacion() const {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Anio de Publicacion: " << anoPublicacion << endl;
    }
};

int main() {
    
    Libro libro1("El senior de los anillos", "J.R.R. Tolkien", 1954);

    libro1.mostrarInformacion();

    libro1.setAnoPublicacion(1955);
    libro1.mostrarInformacion();

    return 0;
}

