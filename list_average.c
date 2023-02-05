#include "list_average.h"

float average = 0.0f;

/**
 * Calcola la media dei valori contenuti nella lista in input
 * @param [in] head puntatore alla lista che contiene i dati in input
 * @return media dei valori contenuti nella lista in input
 * se la lista è vuota tornare 0.0f;
**/
float get_list_average(struct Node* head) 
{
    if (head == NULL)
    {
        return 0.0f;
    }
    
    struct Node* head_temp = head;

    float sum = 0.0;
    int n_elements = 0;
    while (head != NULL)
    {
        sum += head->value;
        n_elements++;
        head = head->next;
    }

    average = sum / n_elements;
    
    head = head_temp;

    return average;
}

/**
 * Crea una nuova lista composta dai nodi della lista in input 
 * il cui valore supera la media della valori contenuti nella lista 
 * @param [in] head puntatore alla lista che contiene i dati in input
 * @return puntatore alla lista creata dinamicamente composta 
 * dalla copia dei nodi il cui valore supera la media della lista
 * se la lista è vuota ritornare NULL
 * mantenere l'ordine dei nodi della lista originale
**/
struct Node* list_average(struct Node *head) 
{
    printf("%f", average);
    return NULL;
}