#include <stdlib.h>
#include <stdio.h>

#ifndef CALLBACKS_H_INCLUDED
#define CALLBACKS_H_INCLUDED



#endif // CALLBACKS_H_INCLUDED

void set_sliders(){

}

void cb_red_changed(GtkWidget *scale){
    double value = gtk_range_get_value(scale);

    // convert the double value to a string
    int length = snprintf(NULL, 0, "%f", value); // get the size I need the string.
    char* strValue = malloc(length + 1);
    snprintf(strValue, length + 1, "%f", value); // convert the value to a string

    char *command = malloc(sizeof(strValue) + sizeof("xgamma -rgamma ")); // allocate the size of the commmand and the value
    sprintf(command, "xgamma -rgamma %s", strValue); //put the command and the value in the variable

    system(command); // run the command

    free(command);
    free(strValue);
}

void cb_green_changed(GtkWidget *scale){
    double value = gtk_range_get_value(scale);

    // convert the double value to a string
    int length = snprintf(NULL, 0, "%f", value); // get the size I need the string.
    char* strValue = malloc(length + 1);
    snprintf(strValue, length + 1, "%f", value); // convert the value to a string

    char *command = malloc(sizeof(strValue) + sizeof("xgamma -ggamma ")); // allocate the size of the commmand and the value
    sprintf(command, "xgamma -ggamma %s", strValue); //put the command and the value in the variable

    system(command); // run the command

    free(command);
    free(strValue);
}

void cb_blue_changed(GtkWidget *scale){
    double value = gtk_range_get_value(scale);

    // convert the double value to a string
    int length = snprintf(NULL, 0, "%f", value); // get the size I need the string.
    char* strValue = malloc(length + 1);
    snprintf(strValue, length + 1, "%f", value); // convert the value to a string

    char *command = malloc(sizeof(strValue) + sizeof("xgamma -bgamma ")); // allocate the size of the commmand and the value
    sprintf(command, "xgamma -bgamma %s", strValue); //put the command and the value in the variable

    system(command); // run the command

    free(command);
    free(strValue);
}
