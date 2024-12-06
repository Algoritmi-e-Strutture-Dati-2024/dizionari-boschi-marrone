int main() {
    // Creazione del dizionario
    Dizionario<int> dizionario;

    // Inserimento di alcune coppie chiave-valore
    dizionario.inserisci("chiave1", 10);
    dizionario.inserisci("chiave2", 20);
    dizionario.inserisci("chiave3", 30);

    // Stampa il dizionario
    std::cout << "Stampa dopo inserimento:" << std::endl;
    dizionario.stampa();

    // Recupera il valore associato alla chiave "chiave2"
    std::cout << "Recupero valore per 'chiave2': " << dizionario.recupera("chiave2") << std::endl;

    // Verifica se una chiave appartiene al dizionario
    if (dizionario.appartiene("chiave3")) {
        std::cout << "'chiave3' è presente nel dizionario." << std::endl;
    } else {
        std::cout << "'chiave3' non è presente nel dizionario." << std::endl;
    }

    // Cancellazione della chiave "chiave2"
    dizionario.cancella("chiave2");
    std::cout << "Stampa dopo cancellazione di 'chiave2':" << std::endl;
    dizionario.stampa();

    // Tenta di cancellare una chiave non presente
    dizionario.cancella("chiave2");

    // Inseriamo una chiave che provoca una collisione
    // (Supponiamo che "chiave1" e "chiave11" abbiano lo stesso indice di hash)
    dizionario.inserisci("chiave11", 40);

    // Stampa per vedere se la collisione è stata gestita correttamente
    std::cout << "Stampa dopo inserimento di 'chiave11' (collide con 'chiave1'):" << std::endl;
    dizionario.stampa();

    // Recupera il valore di "chiave1" e "chiave11" per vedere se sono ancora correttamente inseriti
    std::cout << "Recupero valore per 'chiave1': " << dizionario.recupera("chiave1") << std::endl;
    std::cout << "Recupero valore per 'chiave11': " << dizionario.recupera("chiave11") << std::endl;

    return 0;
}
