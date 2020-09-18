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

    Coleccion(int = 20);
    Coleccion(Coleccion&);
    virtual ~Coleccion();
    virtual void agregar(T*);
    virtual bool buscar(T* );
    virtual bool eliminar(T*);
    virtual string toString() const;
    Coleccion& operator=(Coleccion&);
};

template <class T>
Coleccion<T>::Coleccion(int n) : _n(n), _k(0), _v(new T*[n]) {
    for (int i = 0; i < _n; i++)
    {
        _v[i] = NULL;
    }
}
template <class T>
Coleccion<T>::Coleccion(Coleccion&c) {

    _k = c._k;
    _n = c._n;
    _v = new T*[c._n];

    for (int i = 0; i < c._k; i++)
    {
        T *x = new T(* (c._v[i]));
        _v[i] = x;


    }

}
//----------------------------------------------
template <class T>
Coleccion<T>& Coleccion<T>::operator=(Coleccion& c)
{

    for (int i = 0; i < _n; i++)
    {
        delete _v[i];
    }
    delete[]_v;

    _k = c._k;
    _n = c._n;
    _v = new T*[c._n];

    for (int i = 0; i < c._k; i++)
    {
        T *x = new T(*(c._v[i]));
        _v[i] = x;
    }

    return *this;
}
//--------------------------------------------
template <class T>
Coleccion<T>::~Coleccion() {
    for (int i = 0; i < _k; i++)
    {
        delete _v[i];
    }
    delete[] _v;
}
//--------------------------------------------
template <class T>
void Coleccion<T>::agregar(T* x) {
    if (_k < _n) {
        _v[_k++] = x;
    }
}
//--------------------------------------------
template <class T>
std::string Coleccion<T>::toString() const {
    stringstream r;
    r << "[";
    for (int i = 0; i < _k; i++) {
        if (i > 0) {
            r << ", ";
        }

        r << *_v[i];
    }
    r << "]";
    return r.str();
}

//----------------------------------------------
template <class T>
bool Coleccion<T>::buscar(T* aux) {
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
bool Coleccion<T>::eliminar(T* aux)
{

    if (*(_v[_k - 1]) == (*aux))
    {
        delete _v[_k - 1];
        _v[_k - 1] = NULL;
        _k--;
        return true;
    }
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
        for (int j = pos; j<_k-1; j++)
        {
            _v[j] = _v[j + 1];
        }
        _v[_k - 1] = NULL;
        _k--;

    }

    return false;
}




#endif //MY_PROJECT_NAME_VECTOR_H
