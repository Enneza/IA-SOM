#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define BUFF 150

#ifndef IRIS_H_
#define IRIS_H_

struct data{
	double *v;
	char *nom_espece;
	double norm;
};
typedef struct data data_t;

data_t* load_data_file();
void display();
void normalization();
double *average();

#endif


#ifndef MAP_H_
#define _MAP_H_

struct  neuron {
	double *weight;
	char* label;
};
typedef struct neuron neuron_t;

struct map{
	double *sensor;
	int height;
	int width;
	int dim;
	neuron_t **map;	
};
typedef struct map map_t;

void learning();
map_t *init_map();
double euclidean_distance();
int* generate_table();
double m_random();
void labeling();

#endif