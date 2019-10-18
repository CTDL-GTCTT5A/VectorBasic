#pragma once

#include<string>
using namespace std;

class Vector
{
private:
	// Attiribute:
	int n_dim;
	double* arr_n_dim_vector;

public:
	// Getter:
	int get_dim();
	double* get_arr_vector();
	double get_at_arr_vector(int _i);

	// Constructor:
	Vector();
	Vector(const double* _arr, int _n_dim);
	Vector(const Vector &);
	Vector& operator = (const Vector &);

	// Destructor
	~Vector();

	// Method:
	Vector* add(const Vector* _v2);
	void show();
};

