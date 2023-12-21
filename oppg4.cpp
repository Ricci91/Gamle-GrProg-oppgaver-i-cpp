/**
 * Skriv et selvlaget program (jfr. pkt.4 i pdf’en om enkel bruk av Code::Blocks) som skriver ut
ditt navn, gateadresse, postnummer, poststed, mobilnummer og alder. De tre tallene legges i
hver sin heltallsvariabel (som altså skrives ut). Utskriften skal være på fem ulike linjer, der
bare postnummer og poststed står på samme linje, med en blank mellom. Linjene starter med
ledetekstene «Navn:», «Adresse:», «Sted:», «Mobilnr:» og «Alder:». Prøv å få utskriften av
alle dataene til å starte på samme kolonne.
NB1: Alle tekster skal ikke leses inn fra tastaturet, men skrives rett i koden mellom gåsøyne.
NB2: Husk god kommentering ut fra standarden vi bruker/følger.
*/

#include <iostream>
#include <string>

int main()
{
    std::string navn = "Richard";
    std::string adresse = "Blekksprutveien 1337";
    std::string sted = "Oslo";
    int mobilnr = 4324234;
    int alder = 32;

    std::cout << "Navn: " << navn << std::endl <<
                "Adresse: " << adresse << std::endl <<
                "Sted: " << sted << std::endl <<
                "Mobil: " << mobilnr <<  std::endl <<
                "Alder: " << alder << std::endl;

    return 0;

}