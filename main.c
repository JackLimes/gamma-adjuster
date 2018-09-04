#include <stdlib.h>
#include <stdio.h>
#include <gtk/gtk.h>
#include "callbacks.h"

GtkRange *redSlider;
GtkRange *greenSlider;
GtkRange *blueSlider;

void cb_save_settings(void){
    double r = gtk_range_get_value(redSlider);
    double g = gtk_range_get_value(greenSlider);
    double b = gtk_range_get_value(blueSlider);
    printf("%f\n%f\n%f\n", r, g, b);
}


int main (int argc, char *argv[]){
    GtkWidget *win;
    GtkBuilder *builder;

    /* Initialize GTK+ */
    g_log_set_handler ("Gtk", G_LOG_LEVEL_WARNING, (GLogFunc) gtk_false, NULL);
    gtk_init (&argc, &argv);
    g_log_set_handler ("Gtk", G_LOG_LEVEL_WARNING, g_log_default_handler, NULL);

    /* Create the builder */
    builder = gtk_builder_new();
    gtk_builder_add_from_file(builder, "gammaGlade.glade", NULL);

    /* get the window and global sliders*/
    win = GTK_WIDGET(gtk_builder_get_object(builder, "main-window"));
    redSlider = GTK_WIDGET(gtk_builder_get_object(builder, "red-slider"));
    greenSlider = GTK_WIDGET(gtk_builder_get_object(builder, "green-slider"));
    blueSlider = GTK_WIDGET(gtk_builder_get_object(builder, "blue-slider"));

    /* handle the callbacks */
    gtk_builder_add_callback_symbol(builder, "cb_red_changed", G_CALLBACK(cb_red_changed));
    gtk_builder_add_callback_symbol(builder, "cb_green_changed", G_CALLBACK(cb_green_changed));
    gtk_builder_add_callback_symbol(builder, "cb_blue_changed", G_CALLBACK(cb_blue_changed));
    gtk_builder_add_callback_symbol(builder, "cb_save_settings", G_CALLBACK(cb_save_settings));






    gtk_builder_connect_signals(builder, NULL);

    g_object_unref(builder);

    /* Enter the main loop */
    gtk_widget_show_all (win);
    gtk_main ();
    return 0;
}
