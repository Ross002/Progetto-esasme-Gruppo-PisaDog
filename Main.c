#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ABRUZZO 1
#define BASILICATA 2
#define CALABRIA 3
#define CAMPANIA 4
#define EMILIA_ROMAGNA 5
#define FRIULI_VENEZIA_GIULIA 6
#define LAZIO 7
#define LIGURIA 8
#define LOMBARDIA 9
#define MARCHE 10
#define MOLISE 11
#define PIEMONTE 12
#define PUGLIA 13
#define SARDEGNA 14
#define SICILIA 15
#define TOSCANA 16
#define TRENTINO_ALTO_ADIGE 17
#define UMBRIA 18
#define VALLE_D_AOSTA 19
#define VENETO 20

int main()
{
    int SceltaUtenteRegione;
    char risposta [3];
    char risposta2 [3];
    int SceltaPorzioniUtente;
    int x;
    int y;
    int z;
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int SceltaRistoranteUtente;

    printf ("Ciao, ti sei mai chiesto quali siano i piatti tipici delle regioni italiane?\n");
    scanf ("%s", risposta);
    if (strcmp(risposta,"Si")==0)
    {
        printf ("\nPerfetto,scegli una regione tra le 20 elencate :) \n");

    }
    else
    {
        printf ("\nBene,e' arrivato il momento giusto per interessarsi! ;) \n");
        printf ("\nScegli una regione tra le 20 elencate\n");
    }

    int i=0;
    while (i<1)
    {
    printf ("\n1.ABBRUZZO\n2.BASILICATA\n3.CALABRIA\n4.CAMPANIA\n5.EMILIA ROMAGNA\n6.FRIULI VENZIA GIULIA\n7.LAZIO\n8.LIGURIA\n9.LOMBARDIA\n10.MARCHE\n");
    printf ("11.MOLISE\n12.PIEMONTE\n13.PUGLIA\n14 SARDEGNA\n15.SICILIA\n16.TOSCANA\n17.TRENTINO ALTO ADIGE\n18.UMBRIA\n19.VALLE D'AOSTA\n20.VENETO\n\n");
    scanf ("%d", &SceltaUtenteRegione);
    switch (SceltaUtenteRegione)
    {
    case ABRUZZO:
        printf ("\nIl piatto tipico dell'Abruzzo, sono le Rustelle\n");
i++;
        break;
    case BASILICATA:
        printf ("\nIl piatto tipico della Basilicata, sono le Tumact Me Tulez (tagliatelle con mollica di pane, alici e noci)\n");
i++;
        break;
    case CALABRIA:
        printf ("\nIl piatto tipico della Calabria sono le patate 'mpacchiuse \n");
i++;
        break;
    case CAMPANIA:
        printf ("\nIl piatto tipico della Campania e' la pizza \n");
i++;
        break;
    case EMILIA_ROMAGNA:
        printf ("\nIl piatto tipico dell'Emilia Romagna e' lo gnocco fritto \n");
i++;
        break;
    case FRIULI_VENEZIA_GIULIA:
        printf ("\nIl piatto tipico del Friuli Venezia Giulia e' il Frico \n");
i++;
        break;
    case LAZIO:
        printf ("\nIl piatto tipico del Lazio e' la Gricia \n");
i++;
        break;
    case LIGURIA:
        printf ("\nIl piatto tipico della Liguria sono i Pansoti \n");
i++;
        break;
    case LOMBARDIA:
        printf ("\nIl piatto tipico della Lmobardia sono gli gnocchi al gorgonzola \n");
i++;
        break;
    case MARCHE:
        printf ("\nIl piatto tipico delle Marche sono i Calcioni \n");
i++;
        break;
    case MOLISE:
        printf ("\nIl piatto tipico del Molise sono i Crioli \n");
i++;
        break;
    case PIEMONTE:
        printf ("\nIl piatto tipico del Piemonte e' il vitello tonnato\n");
i++;
        break;
    case PUGLIA:
        printf ("\nIl piatto tipico della Puglia e' la focaccia barese \n");
i++;
        break;
    case SARDEGNA:
        printf ("\nIl piatto tipico della Sardegna e' il Porcheddu \n");
i++;
        break;
    case SICILIA:
        printf ("\nIl piatto tipico della Sicilia e' la caponata \n");
i++;
        break;
    case TOSCANA:
        printf ("\nIl piatto tipico della Toscana e' la bistecca alla fiorentina \n");
i++;
        break;
    case TRENTINO_ALTO_ADIGE:
        printf ("\nIl piatto tipico del Trentino Alto Adige sono i Canederli \n");
i++;
        break;
    case UMBRIA:
        printf ("\nIl piatto tipico dell'Umbria sono gli Umbricelli \n");
i++;
        break;
    case VALLE_D_AOSTA:
        printf ("\nIl piatto tipico della Valle D'Aosta e' la Carbonada \n");
i++;
        break;
    case VENETO:
        printf ("\nIl piatto tipico del Veneto sono le Sarde in saor \n");
i++;
        break;
    default:
        printf ("\n Mi dispiace, ma le regioni Italiane sono 20,inserisci nuovamente un numero tra quelli indicati \n");


    }
}

    printf ("\nVuoi provare ad essere uno chef e cucinarlo?\n");
    scanf ("%s", risposta2);

    if (strcmp(risposta2,"Si")==0)
    {
        printf ("\nScegli per quante persone vuoi prepararlo\n");
        scanf ("%d", &SceltaPorzioniUtente);

        switch (SceltaUtenteRegione)
        {
    case ABRUZZO:
        x = 200;
        y = 2;
        z = 1;
        int prodotto11 = x * SceltaPorzioniUtente;
        int prodotto12 = y * SceltaPorzioniUtente;
        int prodotto13 = z * SceltaPorzioniUtente;

        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di arrosticini o di carne di agnello da tagliare\n", prodotto11);
        printf ("%d rametti di rosmarino\n", prodotto12);
        printf ("%d limoni\n", prodotto13);
        break;
    case BASILICATA:
        x = 80;
        y = 20;
        z = 15;
        a = 100;
        b = 25;
        int prodotto21 = x * SceltaPorzioniUtente;
        int prodotto22 = y * SceltaPorzioniUtente;
        int prodotto23 = z * SceltaPorzioniUtente;
        int prodotto24 = a * SceltaPorzioniUtente;
        int prodotto25 = b * SceltaPorzioniUtente;

        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di tagliatelle\n", prodotto21);
        printf ("%d grammi di alici sott'olio \n", prodotto22);
        printf ("%d grammi di noci\n", prodotto23);
        printf ("%d grammi di pomodorini ciliegini\n", prodotto24);
        printf ("%d grammi di mollica di pane\n", prodotto25);
        break;
    case CALABRIA:
        x = 250;
        y = 60;
        z = 15;
        int prodotto31 = x * SceltaPorzioniUtente;
        int prodotto32 = y * SceltaPorzioniUtente;
        int prodotto33 = z * SceltaPorzioniUtente;

        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di patate silane\n", prodotto31);
        printf ("%d grammi di cipolla rossa di Tropea\n", prodotto32);
        printf ("%d grammi di olio extra vergine d'oliva\n", prodotto33);
        break;
    case CAMPANIA:
        x = 100;
        y = 65;
        z = 135;
        a = 1;
        b = 4;
        c = 40;
        d = 35;
        e = 1;
        int prodotto41 = x * SceltaPorzioniUtente;
        int prodotto42 = y * SceltaPorzioniUtente;
        int prodotto43 = z * SceltaPorzioniUtente;
        int prodotto44 = a * SceltaPorzioniUtente;
        int prodotto45 = b * SceltaPorzioniUtente;
        int prodotto46 = c * SceltaPorzioniUtente;
        int prodotto47 = d * SceltaPorzioniUtente;
        int prodotto48 = e * SceltaPorzioniUtente;

        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di farina 0\n", prodotto41);
        printf ("%d grammi di farina manitoba\n", prodotto42);
        printf ("%d grammi di acqua\n", prodotto43);
        printf ("%d grammi di lievito fresco\n", prodotto44);
        printf ("%d grammi di sale\n", prodotto45);
        printf ("%d grammi di pomodori pelati\n", prodotto46);
        printf ("%d grammi di fiordilatte perfettamente sgocciolato\n", prodotto47);
        printf ("%d foglie di basilico\n",prodotto48);
        break;
    case EMILIA_ROMAGNA:
        x = 100;
        y = 7;
        z = 1;
        a = 3;
        b = 25;
        c = 100;
        d = 2;
        int prodotto61 = x * SceltaPorzioniUtente;
        int prodotto62 = y * SceltaPorzioniUtente;
        int prodotto63 = z * SceltaPorzioniUtente;
        int prodotto64 = a * SceltaPorzioniUtente;
        int prodotto65 = b * SceltaPorzioniUtente;
        int prodotto66 = c * SceltaPorzioniUtente;
        int prodotto67 = d * SceltaPorzioniUtente;

        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di farina\n", prodotto61);
        printf ("%d grammi di strutto\n", prodotto62);
        printf ("%d grammi di zucchero\n", prodotto63);
        printf ("%d grammi di sale\n", prodotto64);
        printf ("%d grammi di acqua\n", prodotto65);
        printf ("%d grammi di latte intero\n", prodotto66);
        printf ("%d grammi di lievito\n", prodotto67);
        break;
    case FRIULI_VENEZIA_GIULIA:
        x = 100;
        y = 70;
        z = 1;
        a = 10;
        int prodotto51 = x * SceltaPorzioniUtente;
        int prodotto52 = y * SceltaPorzioniUtente;
        int prodotto53 = z * SceltaPorzioniUtente;
        int prodotto54 = a * SceltaPorzioniUtente;

        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di patate crude\n", prodotto51);
        printf ("%d grammi di formaggio Montasio\n", prodotto52);
        printf ("%d grammi di cipolla grande\n", prodotto53);
        printf ("%d grammi di olio\n", prodotto54);
        break;
    case LAZIO:
        x = 100;
        y = 40;
        z = 20;
        int prodotto71 = x * SceltaPorzioniUtente;
        int prodotto72 = y * SceltaPorzioniUtente;
        int prodotto73 = z * SceltaPorzioniUtente;

        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di pasta\n", prodotto71);
        printf ("%d grammi di guanciale\n", prodotto72);
        printf ("%d grammi di pecorino\n", prodotto73);
        break;
    case LIGURIA:
        x = 115;
        y = 50;
        z = 3;
        a = 100;
        b = 150;
        c = 50;
        d = 15;
        int prodotto81 = x * SceltaPorzioniUtente;
        int prodotto82 = y * SceltaPorzioniUtente;
        int prodotto83 = z * SceltaPorzioniUtente;
        int prodotto84 = a * SceltaPorzioniUtente;
        int prodotto85 = b * SceltaPorzioniUtente;
        int prodotto86 = c * SceltaPorzioniUtente;
        int prodotto87 = d * SceltaPorzioniUtente;

        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di farina\n", prodotto81);
        printf ("%d grammi di acqua\n", prodotto82);
        printf ("%d uova\n", prodotto83);
        printf ("%d grammi di bietole e spinaci \n", prodotto84);
        printf ("%d grammi borragine \n", prodotto85);
        printf ("%d grammi di ricotta \n", prodotto86);
        printf ("%d grammi di parmigiano grattugiato \n", prodotto87);
        break;
    case LOMBARDIA:
        x = 200;
        y = 60;
        z = 17;
        a = 12;
        b = 15;
        int prodotto91 = x * SceltaPorzioniUtente;
        int prodotto92 = y * SceltaPorzioniUtente;
        int prodotto93 = z * SceltaPorzioniUtente;
        int prodotto94 = a * SceltaPorzioniUtente;
        int prodotto95 = b * SceltaPorzioniUtente;

        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di gnocchi di patate\n", prodotto91);
        printf ("%d grammi di gorgonzola\n", prodotto92);
        printf ("%d millilitri di latte intero\n", prodotto93);
        printf ("%d millilitri di panna fresca\n", prodotto94);
        printf ("%d grammi di parmigiano reggiano\n", prodotto95);
        break;
    case MARCHE:
        x = 65;
        y = 45;
        z = 40;
        a = 50;
        b = 25;
        c = 50;
        d = 50;
        e = 25;
        f = 1;
        int prodotto101 = x * SceltaPorzioniUtente;
        int prodotto102 = y * SceltaPorzioniUtente;
        int prodotto103 = z * SceltaPorzioniUtente;
        int prodotto104 = a * SceltaPorzioniUtente;
        int prodotto105 = b * SceltaPorzioniUtente;
        int prodotto106 = c * SceltaPorzioniUtente;
        int prodotto107 = d * SceltaPorzioniUtente;
        int prodotto108 = e * SceltaPorzioniUtente;
        int prodotto109 = f * SceltaPorzioniUtente;

        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di lasagne all'uovo\n", prodotto101);
        printf ("%d grammi di frattaglie di pollo\n", prodotto102);
        printf ("%d grammi di passata di pomodoro\n", prodotto103);
        printf ("%d grammi di polpa di maiale\n", prodotto104);
        printf ("%d grammi di pancetta\n", prodotto105);
        printf ("%d grammi di polpa di manzo\n", prodotto106);
        printf ("%d millilitri di brodo di carne\n", prodotto107);
        printf ("%d grammi di parmigiano reggiano\n", prodotto108);
        printf ("%d cipolle grandi\n", prodotto109);
        break;
    case MOLISE:
        x = 125;
        y = 1;
        int prodotto111 = x * SceltaPorzioniUtente;
        int prodotto112 = y * SceltaPorzioniUtente;

        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di farina di grano duro\n", prodotto111);
        printf ("%d uova intere\n", prodotto112);
        break;
    case PIEMONTE:
        x = 250;
        y = 190;
        z = 375;
        a = 65;
        b = 1;
        c = 6;
        d = 4;
        e = 3;
        f = 1;
        int prodotto121 = x * SceltaPorzioniUtente;
        int prodotto122 = y * SceltaPorzioniUtente;
        int prodotto123 = z * SceltaPorzioniUtente;
        int prodotto124 = a * SceltaPorzioniUtente;
        int prodotto125 = b * SceltaPorzioniUtente;
        int prodotto126 = c * SceltaPorzioniUtente;
        int prodotto127 = d * SceltaPorzioniUtente;
        int prodotto128 = e * SceltaPorzioniUtente;
        int prodotto129 = f * SceltaPorzioniUtente;


        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di magatello di vitello\n", prodotto121);
        printf ("%d millilitri di vino bianco secco\n", prodotto122);
        printf ("%d millilitri di acqua\n", prodotto123);
        printf ("%d di tonno sgocciolato\n", prodotto124);
        printf ("%d filetti di acciughe dissalate\n", prodotto125);
        printf ("%d grammi di capperi\n", prodotto126);
        printf ("%d millilitri di aceto di vino bianco\n", prodotto127);
        printf ("%d millilitri di succo di limone\n", prodotto128);
        printf ("%d tuorli sodi\n", prodotto129);
        break;
    case PUGLIA:
        x = 50;
        y = 50;
        z = 25;
        a = 75;
        b = 40;
        c = 4;
        d = 125;
        e = 5;
        int prodotto131 = x * SceltaPorzioniUtente;
        int prodotto132 = y * SceltaPorzioniUtente;
        int prodotto133 = z * SceltaPorzioniUtente;
        int prodotto134 = a * SceltaPorzioniUtente;
        int prodotto135 = b * SceltaPorzioniUtente;
        int prodotto136 = c * SceltaPorzioniUtente;
        int prodotto137 = d * SceltaPorzioniUtente;
        int prodotto138 = e * SceltaPorzioniUtente;

        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di farina 0\n", prodotto131);
        printf ("%d grammi di semola macinata di grano duro\n", prodotto132);
        printf ("%d grammi di farina manitoba\n", prodotto133);
        printf ("%d grammi di acqua a temperatura ambiente\n", prodotto134);
        printf ("%d patate intere\n", prodotto135);
        printf ("%d grammi di sale\n", prodotto136);
        printf ("%d pomodori ciliegini\n", prodotto137);
        printf ("%d olive nere\n", prodotto138);
        break;
    case SARDEGNA:
        x = 500;
        y = 1;
        z = 1;
        a = 5;
        int prodotto141 = x * SceltaPorzioniUtente;
        int prodotto142 = y * SceltaPorzioniUtente;
        int prodotto143 = z * SceltaPorzioniUtente;
        int prodotto144 = a * SceltaPorzioniUtente;

        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di maialetto\n", prodotto141);
        printf ("%d spicchi di aglio\n", prodotto142);
        printf ("%d foglie di mirto\n", prodotto143);
        printf ("%d grammi di rosmarino\n", prodotto144);
        break;
    case SICILIA:
        x = 125;
        y = 38;
        z = 25;
        a = 25;
        b = 1;
        c = 20;
        d = 12;
        int prodotto151 = x * SceltaPorzioniUtente;
        int prodotto152 = y * SceltaPorzioniUtente;
        int prodotto153 = z * SceltaPorzioniUtente;
        int prodotto154 = a * SceltaPorzioniUtente;
        int prodotto155 = b * SceltaPorzioniUtente;
        int prodotto156 = c * SceltaPorzioniUtente;
        int prodotto157 = d * SceltaPorzioniUtente;

        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di melanzane\n", prodotto151);
        printf ("%d grammi di pomodorini datterini o ciliegino\n", prodotto152);
        printf ("%d grammi di cipolla\n", prodotto153);
        printf ("%d grammi di sedano\n", prodotto154);
        printf ("%d cucchiai di passata di pomodoro\n", prodotto155);
        printf ("%d grammi di olive verdi snocciolate\n", prodotto156);
        printf ("%d grammi di pinoli\n", prodotto157);
        break;
    case TOSCANA:
        x = 250;
        int prodotto161 = x * SceltaPorzioniUtente;

        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di bistecca alla fiorentina\n", prodotto161);
        printf ("Sale q.b.\n");
        printf ("Olio q.b.\n");
        printf ("Pepe q.b.\n");
        break;
    case TRENTINO_ALTO_ADIGE:
        x = 65;
        y = 40;
        z = 25;
        a = 13;
        b = 1;
        int prodotto171 = x * SceltaPorzioniUtente;
        int prodotto172 = y * SceltaPorzioniUtente;
        int prodotto173 = z * SceltaPorzioniUtente;
        int prodotto174 = a * SceltaPorzioniUtente;
        int prodotto175 = b * SceltaPorzioniUtente;

        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di mollica di pane raffermo(da pane casareccio, consistente e importante)\n", prodotto171);
        printf ("%d grammi di latte\n", prodotto172);
        printf ("%d grammi di speck Alto Adige\n", prodotto173);
        printf ("%d grammi di cipolla bianca\n", prodotto174);
        printf ("%d uova\n", prodotto175);
        printf (" brodo di carne, quanto basta");
        break;
    case UMBRIA:
        x = 100;
        y = 55;
        z = 2;
        int prodotto181 = x * SceltaPorzioniUtente;
        int prodotto182 = y * SceltaPorzioniUtente;
        int prodotto183 = z * SceltaPorzioniUtente;

        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di farina 0\n", prodotto181);
        printf ("%d millilitri si acqua\n", prodotto182);
        printf ("%d grammi di sale\n", prodotto183);
        break;
    case VALLE_D_AOSTA:
        x = 200;
        y = 125;
        z = 10;
        a = 1;
        b = 1;
        int prodotto191 = x * SceltaPorzioniUtente;
        int prodotto192 = y * SceltaPorzioniUtente;
        int prodotto193 = z * SceltaPorzioniUtente;
        int prodotto194 = a * SceltaPorzioniUtente;
        int prodotto195 = b * SceltaPorzioniUtente;

        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di manzo\n", prodotto191);
        printf ("%d millilitri di vino rosso\n", prodotto192);
        printf ("%d grammi di burro\n", prodotto193);
        printf ("%d cipolle\n", prodotto194);
        printf ("%d foglie di alloro\n", prodotto195);
        break;
    case VENETO:
        x = 125;
        y = 175;
        z = 50;
        a = 1;
        int prodotto201 = x * SceltaPorzioniUtente;
        int prodotto202 = y * SceltaPorzioniUtente;
        int prodotto203 = z * SceltaPorzioniUtente;
        int prodotto204 = a * SceltaPorzioniUtente;

        printf ("\nGli ingredienti sono:\n");
        printf ("%d grammi di sarde\n", prodotto201);
        printf ("%d grammi di cipolle\n", prodotto202);
        printf ("%d millilitri di aceto\n", prodotto203);
        printf ("%d cucchiaini di zucchero\n", prodotto204);
        break;

        }
    }
   else
    {
        printf ("\nVuoi sapere un buon ristorante dove puoi mangiarlo?\n");
        scanf ("%s", risposta2);

            if (strcmp(risposta2,"Si")==0){
            switch (SceltaUtenteRegione)
            {

    case ABRUZZO:
         printf ("\nIl ristorante che le proponiamo e': Ristorante Macalusa, Civitella casanova, PE.\n");
         printf ("Recensioni: 4.4 stelle.\n");
         break;

    case BASILICATA:
        printf ("\nIl ristorante che le proponiamo e': Al Boschetto, Barile, PZ.\n");
        printf ("Recensioni: 4.5 stelle.\n");
        break;

    case CALABRIA:
        printf ("\nIl ristorante che le proponiamo e': Calabria Bella, Cosenza, CS.\n");
        printf ("Recensioni: 4.0 stelle.\n");
        break;

    case CAMPANIA:
        printf ("\nIl ristorante che le proponiamo e': Pizzeria Concettina ai Tre Santi, Napoli, NA.\n");
        printf ("Recensioni: 4.3 stelle.\n");
        break;

    case EMILIA_ROMAGNA:
        printf ("\nIl ristorante che le proponiamo e': Osteria Carducci, Piacenza, PC.\n");
        printf ("Recensioni: 4.4 stelle.\n");
        break;

    case FRIULI_VENEZIA_GIULIA:
        printf ("\nIl ristorante che le proponiamo e': La Terrazza, Trieste, TS.\n");
        printf ("Recensioni: 4.1 stelle.\n");
        break;

    case LAZIO:
        printf ("\nIl ristorante che le proponiamo e': Osteria Bonelli, Roma, RM.\n");
        printf ("Recensioni: 4.5 stelle.\n");
        break;

    case LIGURIA:
        printf ("\nIl ristorante che le proponiamo e': Antica Osteria del Boschetto, Sori, GE.\n");
        printf ("Recensioni: 4.0 stelle.\n");
        break;

    case LOMBARDIA:
        printf ("\nIl ristorante che le proponiamo e': Ristorante “la Verde Sosta”, Santa Maria della Versa, PV.\n");
        printf ("Recensioni: 4.5 stelle.\n");
        break;

    case MARCHE:
        printf ("\nIl ristorante che le proponiamo e': Ristorante La Ginestra, Montelparo, FM.\n");
        printf ("Recensioni: 4.5 stelle.\n");
        break;

    case MOLISE:
        printf ("\nIl ristorante che le proponiamo e': Casa Molisana, Castropignano, CB.\n");
        printf ("Recensioni: 4.6 stelle.\n");
        break;

    case PIEMONTE:
        printf ("\nIl ristorante che le proponiamo e': Ristorante Monferrato, Torino, TO.\n");
        printf ("Recensioni: 4.5 stelle.\n");
        break;

    case PUGLIA:
        printf ("\nIl ristorante che le proponiamo e': El Focacciaro, Bari, BA.\n");
        printf ("Recensioni: 4.5 stelle.\n");
        break;

    case SARDEGNA:
        printf ("\nIl ristorante che le proponiamo e': Agriturismo Su Cuile, Siniscola, NU\n");
        printf ("Recensioni: 4.7 stelle.\n");
        break;

    case SICILIA:
        printf ("\nIl ristorante che le proponiamo e': Ristorante “La fontana”, Castellana Sicula, PA.\n");
        printf ("Recensioni: 4.6 stelle.\n");
        break;

    case TOSCANA:
        printf ("\nIl ristorante che le proponiamo e': Osteria Acquacheta, Montepulciano, SI.\n");
        printf ("Recensioni: 4.6 stelle.");
        break;

    case TRENTINO_ALTO_ADIGE:
        printf ("\nIl ristorante che le proponiamo e': Ristorante Antica Trattoria Due Mori, Trento, TN.\n");
        printf ("Recensioni: 4.7 stelle.\n");
        break;

    case UMBRIA:
        printf ("\nIl ristorante che le proponiamo e': L’Umbricello del Coccio, Magione, PG.\n");
        printf ("Recensioni: 4.5 stelle.\n");
        break;

    case VALLE_D_AOSTA:
        printf ("\nIl ristorante che le proponiamo e': Le Bon Plaisir, Saint Vincent, AO.\n");
        printf ("Recensioni: 4.7 stelle.\n");
        break;

    case VENETO:
        printf ("\nIl ristorante che le proponiamo e': Cantina Do Spade, Venezia, VE.\n");
        printf ("Recensioni: 4.5 stelle.\n");
        break;

        }

    }

    }

    return 0;
     }
