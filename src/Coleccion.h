//
// Created by dayan on 17/9/2020.
//

#ifndef MY_PROJECT_NAME_VECTOR_H
#define MY_PROJECT_NAME_VECTOR_H

template<class T>
class Coleccion {
public:
    int _n;
    int _k;
    T** _v;
public:

    coleccion(int = 20);
    coleccion(coleccion&);
    virtual ~coleccion();
    virtual void agregar(T*);
    virtual bool buscar(T* );
    virtual bool eliminar(T*);
    virtual string toString() const;
    coleccion& operator=(coleccion&);
};

template <class T>
coleccion<T>::coleccion(int n) : _n(n), _k(0), _v(new T*[n]) {
    for (int i = 0; i < _n; i++)
    {
        _v[i] = NULL;
    }
}//--------------------------------------------
template <class T>
coleccion<T>::coleccion(coleccion&c) {

    // creamos nueva memoria y copiamos los elementos
    _k = c._k;
    _n = c._n;
    _v = new T*[c._n];

    for (int i = 0; i < c._k; i++)
    {
        T *x = new T(* (c._v[i]));// si el elemento fuera un objeto, se estaria
        // llamando al constructor de copia por defecto de la clase.
        _v[i] = x;


    }

}
//----------------------------------------------
template <class T>
coleccion<T>& coleccion<T>::operator=(coleccion& c)
{

    for (int i = 0; i < _n; i++)
    {
        delete _v[i];
    }
    delete[]_v;

    // creamos nueva memoria y copiamos los elementos
    _k = c._k;
    _n = c._n;
    _v = new T*[c._n];

    for (int i = 0; i < c._k; i++)
    {
        T *x = new T(*(c._v[i]));// si el elemento fuera un objeto, se estaria
        // llamando al constructor de copia por defecto de la clase.
        _v[i] = x;
    }

    return *this;
}
//--------------------------------------------
template <class T>
coleccion<T>::~coleccion() {
    for (int i = 0; i < _k; i++)
    {
        delete _v[i];
    }
    delete[] _v;
}
//--------------------------------------------
template <class T>
void coleccion<T>::agregar(T* x) {
    if (_k < _n) {
        _v[_k++] = x;
    }
}
//--------------------------------------------
template <class T>
string coleccion<T>::toString() const {
    stringstream r;
    r << "[";
    for (int i = 0; i < _k; i++) {
        if (i > 0) {
            r << ", ";
        }

        // Esta operacion no es valida para cualquier valor de T,
        // sino solamente para aquellos donde estan definido
        // el operador <<.

        r << *_v[i];
    }
    r << "]";
    return r.str();
}

//----------------------------------------------
template <class T>
bool coleccion<T>::buscar(T* aux) {
    for (int i = 0; i < _k; i++)
    {
        if (*(aux) == *(_v[i]))
        {
            return true;
        }
    }
    return false;
}

//----------------------------------------------
template <class T>
bool coleccion<T>::eliminar(T* aux)
{    // si fuera el ultimo

    if (*(_v[_k - 1]) == (*aux))
    {
        delete _v[_k - 1];
        _v[_k - 1] = NULL;
        _k--;
        return true;
    }
    // si no fuera el ultimo implica corrimiento
    int pos = -1;

    for (int i = 0; i<_k - 1; i++)
    {
        if (*(_v[i ]) == (*aux))
        {
            pos = i;
        }
    }

    if (pos != -1)
    {
        delete _v[pos];
        for (int j = pos; j<_k-1; j++)// hacemos el corrimiento
        {
            _v[j] = _v[j + 1];
        }
        _v[_k - 1] = NULL;
        _k--;

    }

    return false;
}
};



#endif //MY_PROJECT_NAME_VECTOR_H
