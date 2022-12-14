#include "wine.h"
#define N_ROWS 739

struct WINE {
    int id;
    double citric_acid;
    double residual_sugar;
    double density;
    double pH;
    double alcohol;
};

   
Wine *newWine(const int id, const double citric_acid, const double residual_sugar, const double
              density, const double pH, const double alcohol){

    Wine *wine = (Wine *) malloc(sizeof(Wine));

    wine->id = id;
    wine->citric_acid = citric_acid;
    wine->residual_sugar = residual_sugar;
    wine->density = density;
    wine->pH = pH;
    wine->alcohol = alcohol;

    return wine;
}

double getProperty(const Wine *wine, int property){
    if(property == 1)
        return wine->citric_acid;
    if(property == 2)
        return wine->residual_sugar;
    if(property == 3)
        return wine->density;
    if(property == 4)
        return wine->pH;
    return wine->alcohol;
}

int getId(const Wine *wine){
    return wine->id;
}

void printWine(Wine *wine){
    printf("ID: %d, Citric Acid: %.5f, Residual Sugar %.5f, Density %.5f, pH %.5f, Alcohol %.5f\n",
           wine->id, wine->citric_acid, wine->residual_sugar,
           wine->density, wine->pH, wine->alcohol);
}

Wine **reallocWine(Wine **list, int newSize){
    return (Wine **) realloc(list, newSize * sizeof(Wine *));
}

