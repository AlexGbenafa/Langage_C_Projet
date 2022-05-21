#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h> //for the lower and upper character conversion

/*int verif (int a, int b) //fonction qui vériie la saisie utilisateur (bêta)
{
  int ver;
  ver = scanf("%d", &a);
  
  while (ver == 0){
    printf("VOTRE CHOIX N'EST PAS VALABLE:\n");

    printf("-------------------\n");
    printf("\t");
    ver = scanf("%d", &a);
    printf("-------------------\n");
  }
  b=a;
  return b;
}*/

int quit(void)
{
    printf("\a");
    printf("\a");
    printf("\a");

    printf("\e[1;1H\e[2J"); //regex method to clean the consol it's fast than a system("clear")
    system("clear");

    printf("                         d8888 888     888      8888888b.  8888888888 888     888  .d88888b. 8888888 888888888b      \n");
    printf("                        d88888 888     888      888   Y88b 888        888     888 d88P   Y88b  888   888   Y88b      \n");
    printf("                       d88P888 888     888      888    888 888        888     888 888     888  888   888    888      \n");
    printf("                      d88P 888 888     888      888   d88P 8888888    Y88b   d88P 888     888  888   888   d88P      \n");
    printf("                     d88P  888 888     888      8888888P   888         Y88b d88P  888     888  888   8888888P        \n");
    printf("                    d88P   888 888     888      888 T88b   888          Y88o88P   888     888  888   888 T88b        \n");
    printf("                   d8888888888 Y88b. .d88P      888  T88b  888           Y888P    Y88b. .d88P  888   888  T88b       \n");
    printf("                  d88P     888  'Y88888P'       888   T88b 8888888888     Y8P      'Y88888P' 8888888 888   T88b      \n");

    puts(" \n");
    puts(" \n");

    return 0;
}

int main(int argc, char *argv[])
{

  int choix; //global variable who defined the choice in  my main  menu
  int ver, veri; //verification de saisie
  int end; //Appel de fonction quit
  int programme; //Choix du programme à exécuter
  int touche; //Choix entre quitter l'application ou continuer sur le menu programme(aprés execution d'un programme)
  int n = 0; //Declaration du nombre n
  int i; //Déclaration d'un compteur
  int sommeDesNombres = 0;//Declaration d'une variable qui prendra la somme 
  float moyenne = 0; ///Déclaration d'une variable qui prendra la moyenne


  do{ //make a loop to close the menu when user select Quit
      
    puts("\n");

    printf("██████╗ ██████╗  ██████╗      ██╗███████╗████████╗    ██╗███╗   ██╗███████╗ ██████╗ ██████╗ ███╗   ███╗ █████╗ ████████╗██╗ ██████╗ ██╗   ██╗███████╗\n");
    printf("██╔══██╗██╔══██╗██╔═══██╗     ██║██╔════╝╚══██╔══╝    ██║████╗  ██║██╔════╝██╔═══██╗██╔══██╗████╗ ████║██╔══██╗╚══██╔══╝██║██╔═══██╗██║   ██║██╔════╝\n");
    printf("██████╔╝██████╔╝██║   ██║     ██║█████╗     ██║       ██║██╔██╗ ██║█████╗  ██║   ██║██████╔╝██╔████╔██║███████║   ██║   ██║██║   ██║██║   ██║█████╗  \n");
    printf("██╔═══╝ ██╔══██╗██║   ██║██   ██║██╔══╝     ██║       ██║██║╚██╗██║██╔══╝  ██║   ██║██╔══██╗██║╚██╔╝██║██╔══██║   ██║   ██║██║▄▄ ██║██║   ██║██╔══╝  \n");
    printf("██║     ██║  ██║╚██████╔╝╚█████╔╝███████╗   ██║       ██║██║ ╚████║██║     ╚██████╔╝██║  ██║██║ ╚═╝ ██║██║  ██║   ██║   ██║╚██████╔╝╚██████╔╝███████╗\n");
    printf("╚═╝     ╚═╝  ╚═╝ ╚═════╝  ╚════╝ ╚══════╝   ╚═╝       ╚═╝╚═╝  ╚═══╝╚═╝      ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚═╝  ╚═╝   ╚═╝   ╚═╝ ╚══▀▀═╝  ╚═════╝ ╚══════╝\n");

    puts("\n");

    printf("                                ██╗███████╗ ██████╗ ██╗   ██╗██████╗ ████████╗███████╗███████╗███╗   ██╗██╗  \n");
    printf("                               ██╔╝██╔════╝██╔═══██╗██║   ██║██╔══██╗╚══██╔══╝██╔════╝██╔════╝████╗  ██║╚██╗\n");
    printf("                              ██╔╝ █████╗  ██║   ██║██║   ██║██████╔╝   ██║   █████╗  █████╗  ██╔██╗ ██║ ╚██╗ \n");
    printf("                              ╚██╗ ██╔══╝  ██║   ██║██║   ██║██╔══██╗   ██║   ██╔══╝  ██╔══╝  ██║╚██╗██║ ██╔╝\n");
    printf("                                ██╗██║     ╚██████╔╝╚██████╔╝██║  ██║   ██║   ███████╗███████╗██║ ╚████║██╔╝  \n");
    printf("                                ╚═╝╚═╝      ╚═════╝  ╚═════╝ ╚═╝  ╚═╝   ╚═╝   ╚══════╝╚══════╝╚═╝  ╚═══╝╚═╝\n");

    puts(" \n");

    printf("                                                                     .......... \n");
    printf("                                                                .......::::::....... \n");
    printf("                                                            .......:::======:::....... \n");
    printf("                                                          .......::===========::........ \n");
    printf("                                                        ......::===####@@####===::......        ███████╗███████╗██╗████████╗███████╗ ██████╗    ██╗     ██╗\n");
    printf("                                                       ......::===####@@@@####===::......       ██╔════╝██╔════╝██║╚══██╔══╝██╔════╝██╔════╝    ██║    ███║\n");
    printf("                                                       .....::===####@@@@@@####===::.....        ████╗  ███████╗██║   ██║   █████╗  ██║         ██║    ╚██║\n");
    printf("                                                       .....::===####@@@@@@####===::.....       ██╔══╝  ╚════██║██║   ██║   ██╔══╝  ██║         ██║     ██║\n");
    printf("                                                        .....::===#####@@@@#####===::.....      ███████╗███████║██║   ██║   ███████╗╚██████╗    ███████╗██║\n");
    printf("                                                         .....::===#####@@#####===::.....       ╚══════╝╚══════╝╚═╝   ╚═╝   ╚══════╝ ╚═════╝    ╚══════╝╚═╝\n");
    printf("                                                          .....::====########====::..... \n");
    printf("                                                           .....::=====####=====::..... \n");
    printf("                                                             ....::============::....       ██████╗  ██████╗ ██████╗  ██╗    ██╗██████╗  ██████╗ ██████╗ ██████╗ \n");
    printf("                                                               ...::==========::...          ╚════██╗██╔═████╗╚════██╗███║   ██╔╝╚════██╗██╔═████╗╚════██╗╚════██╗\n");
    printf("                                                                 ..::========::..           █████   ██║██╔██║ █████╔╝╚██║  ██╔╝  █████╔╝██║██╔██║ █████╔╝ █████╔╝\n");
    printf("                                                                   |__________|             ██╔═══╝ ████╔╝██║██╔═══╝  ██║ ██╔╝  ██╔═══╝ ████╔╝██║██╔═══╝ ██╔═══╝  \n");
    printf("                                                                   <__________>             ███████╗╚██████╔╝███████╗ ██║██╔╝   ███████╗╚██████╔╝███████╗███████╗\n");
    printf("                                                                   <__________>             ╚══════╝ ╚═════╝ ╚══════╝ ╚═╝╚═╝    ╚══════╝ ╚═════╝ ╚══════╝╚══════╝\n");
    printf("                                                                   <__________> \n");
    /* printf("""                                                                   \/ \n");*/

    puts("\n");

    printf("                                              __| |____________________________________________| |__ \n");
    printf("                                             (__   ____________________________________________   __)\n");
    printf("                                                | | ENTREZ LES NUMÉROS CORRESPONDANT POUR      | |   \n");
    printf("                                                | | EFFECTUER VOTRE CHOIX                      | |   \n");
    printf("                                                | |                                            | |   \n");
    printf("                                                | | 0- COMMENCER                               | |   \n");
    printf("                                                | | 1- BONUS                                   | |   \n");
    printf("                                                | | 2- À PROPOS                                | |   \n");
    printf("                                                | | 3- QUITTER                                 | |   \n");
    printf("                                              __| |____________________________________________| |__ \n");
    printf("                                             (__   ____________________________________________   __)\n");
    printf("                                                | |                                            | |   \n");

    printf("VOTRE CHOIX:\n");

    printf("-------------------\n");
    printf("\t");
    ver = scanf("%d",&choix); getchar();
    printf("-------------------\n");

    if (ver == 0)
    {
    while (scanf("%d",&choix) != 1)
    {
      printf("VOTRE CHOIX N'EST PAS VALABLE RÉESAYEZ: ");
      while(getchar() != '\n');
    }
    }

    while(choix<0 || choix>3)
    {
      printf("VEUILLEZ FAIRE UN CHOIX VALABLE:\n");

	    printf("-------------------\n");
	    printf("\t");
      ver = scanf("%d", &choix);
	    printf("-------------------\n");

      if (ver == 0)
      {
        while (scanf("%d",&choix) != 1)
        {
          printf("VOTRE CHOIX N'EST PAS VALABLE RÉESAYEZ: ");
          while(getchar() != '\n');
        }
      }
    }

    switch(choix){

      case 0:
        do{

          printf("\a");
          printf("\e[1;1H\e[2J"); //regex method to clean the consol it's fast than a system("clear") :3
          system("clear");
                             
          printf("     __________________________________________________________________________                      __________________________________________________________________________ \n");
          printf("   /  |                                                                        |.                  /  |                                                                        |. \n");
          printf("  |   | 1-Trie deux nombre par ordre croissant                                 |.                 |   |21-                                                                     |.\n");
          printf("   |_ |                                                                        |.                  |_ |                                                                        |.\n");
          printf("      | 2-Signe du produit de deux nombre (sans calcul)                        |.                     |22-                                                                     |.\n");
          printf("      |                                                                        |.                     |                                                                        |.\n");
          printf("      | 3-Parité ou non d'un nombre                                            |.                     |23-                                                                     |.\n");
          printf("      |                                                                        |.                     |                                                                        |.\n");
          printf("      | 4-Équation du second degré (ax2+bx+c=0)                                |.                     |24-                                                                     |.\n");
          printf("      |                                                                        |.                     |                                                                        |.\n");
          printf("      | 5-Calcul de l'Indice de Masse Corporel                                 |.                     |25-                                                                     |.\n");
          printf("      |                                                                        |.                     |                                                                        |.\n");
          printf("      | 6-Calculatrice simple                                                  |.                     |26-                                                                     |.\n");
          printf("      |                                                                        |.                     |                                                                        |.\n");
          printf("      | 7-Année bissextile ou non                                              |.                     |27-                                                                     |.\n");
          printf("      |                                                                        |.                     |                                                                        |.\n");
          printf("      | 8-Somme des nombres impair allant de 1 à n                             |.                     |28-                                                                     |.\n");
          printf("      |                                                                        |.                     |                                                                        |.\n");
          printf("      | 9-Carré des nombres pairs parmis 20 nombres                            |.                     |29-                                                                     |.\n");
          printf("      |                                                                        |.                     |                                                                        |.\n");
          printf("      |10-Moyenne des n premiers entiers                                       |.                     |30-                                                                     |.\n");
          printf("      |                                                                        |.                     |                                                                        |.\n");
          printf("      |11-Somme des n premiéres puissances de 2                                |.                     |31-                                                                     |.\n");
          printf("      |                                                                        |.                     |                                                                        |.\n");
          printf("      |12-Table de multiplication                                              |.                     |32-                                                                     |.\n");
          printf("      |                                                                        |.                     |                                                                        |.\n");
          printf("      |13-Calcul du factoriel                                                  |.                     |33-                                                                     |.\n");
          printf("      |                                                                        |.                     |                                                                        |.\n");
          printf("      |14-Vérification de la parité d'un nombre                                |.                     |34-                                                                     |.\n");
          printf("      |                                                                        |.                     |                                                                        |.\n");
          printf("      |15-Affichage du plus grand des nombres parmis les nombres saisies       |.                     |35-                                                                     |.\n");
          printf("      |                                                                        |.                     |                                                                        |.\n");
          printf("      |16-Affichage d'un nombre compris entre 1 et 31                          |.                     |36-                                                                     |.\n");
          printf("      |                                                                        |.                     |                                                                        |.\n");
          printf("      |17-Multiplication par addition succesive                                |.                     |37-                                                                     |.\n");
          printf("      |                                                                        |.                     |                                                                        |.\n");
          printf("      |18-Caldul du <prix total>, <du port> et de <la remise>                  |.                     |38-                                                                     |.\n");
          printf("      |                                                                        |.                     |                                                                        |.\n");
          printf("      |19-Conversion de température                                            |.                     |39-                                                                     |.\n");
          printf("      |                                                                        |.                     |                                                                        |.\n");
          printf("      |20-                                                                     |.                     |40-                                                                     |.\n");
          printf("      |   ______________________________________________________________________                      |   ______________________________________________________________________\n");
          printf("      |  /                                                                     /.                     |  /                                                                     /. \n");
          printf("      |_/_____________________________________________________________________/.                      |_/_____________________________________________________________________/. \n");
  
          puts("\n");

	        printf("                                                    .-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-.\n");
          printf("                                                    |                                                                       |\n");
          printf("                                                    |      < FOURTEEN> EST UNE COMPILATION D'EXERCICE DE LANGAGE C.         |\n");
          printf("                                                    |                                                                       |\n");
          printf("                                                    |       ENTREZ LE NUMÉROS DU PROGRAMME QUE VOUS SOUHAITEZ EXÉCUTER.     |\n");
          printf("                                                    |               (ENTREZ 0 POUR REVENIR AU MENU PRÉCÉDENT)               |\n");
          printf("                                                    `-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-----'\n");
  
          printf("Entrez le programme à exécuter: \n");


          while (scanf("%d",&programme) != 1)
          {
            printf("VOTRE CHOIX N'EST PAS VALABLE RÉESAYEZ: ");
            printf("-------------------\n");
            printf("\t");
            while(getchar() != '\n');
            printf("-------------------\n");
          }

          puts("\n");     
	   
          switch(programme)
          {    
            case 0:
              printf("\e[1;1H\e[2J"); //regex method to clean the consol it's fast than a system("clear")
              system("clear");
              choix = 4;
            break;

            case 1:
              printf("Entrez x ");
              int x,y;

              scanf("%d",&x);

              printf("Entrez y ");
              scanf("%d",&y);
              
              if(x<y)
                printf("%d %d\n", x,y);
              else
                printf("%d %d \n", y,x);

              puts("\n");
                
              printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
              scanf("%d",&touche);

              if(touche == 0)
              {
                choix = 0;
              }
              else
                end = quit();
                return 0;
              break;

            case 2:
              printf("Entrez le premier nombre: ");
              int premierNombre,secondNombre;
              scanf("%d",&premierNombre);

              printf("Entrez le second nombre: ");
              scanf("%d",&secondNombre);

              if(premierNombre==0 || secondNombre==0)
                printf("Le produit sera nul \n");

              else if( ((premierNombre<0)&&(secondNombre>0)) || ((premierNombre>0)&&(secondNombre<0)) )
                printf("Le produit sera négatif \n");
                  
              else if(( (premierNombre>0)&&(secondNombre>0)) || ((premierNombre<0)&&(secondNombre<0)) )
                printf("Le produit sera positif \n");

              puts("\n");

              printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
              scanf("%d",&touche);
              if(touche == 0){
                choix = 0;
              }
              else
                end = quit();
                return 0;
              break;

            case 3:
              printf("Entrez le nombre à tester ");

              int nombreATeste;
              scanf("%d", &nombreATeste);
    
              if(nombreATeste % 2 == 0)
                printf("%d est pair \n", nombreATeste);
              else
                printf("%d n'est pas pair \n", nombreATeste);

              puts("\n");

              printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
              scanf("%d",&touche);
              if(touche == 0)
              {
                choix = 0;
              }
              else
                end = quit();
                return 0;
              break;

            case 4: 

              printf("Entrez la valeur de a \n"); //On demande à l'utilisateur la valeur de a

              float resultat; //Le résultat en float car les solutions des équation peuvent souvent être sous forme de fraction
              int a,b,c, delta; //Déclaration des variables

              scanf("%d", &a); //l'utilisateur entre la valeur de a

              printf("Entrez la valeur de b \n");//On demande à l'utilisateur la valeur de b
              scanf("%d", &b); //l'utilisateur entre la valeur de b

              printf("Entrez la valeur de c \n");//On demande à l'utilisateur la valeur de c
              scanf("%d", &c); //l'utilisateur entre la valeur de c

              if (a==0 && b==0 && c==0) //Si a,b et c sont égal à zero alors on aura une équation de la forme 0=0 qui aura comme solution tout réels car tjrs vrai
              printf ("La solution E R"); //Donc ce message sera afficher

              else if (a==0 && b==0)//Si a et b sont égal à zero, alors l'equation est de forme c=0 et pour c=4 on aura 4=o qui est faux donc 
              printf ("Il n'existe aucune solution");//Pas de solutions on affiche ce message

              else if (a==0)
              {
                resultat = -c/b;
                printf("X = %f", resultat); //SI a=0 on a une equation de forme Bx + C = 0 donc une équation du first degrés dont la solution est -c/b
              }

              else //sinon si a,b et sont quelconques, on a une equation du second degré. ON utilise alors le shéma classique
                delta = pow(b,2) - 4*(a*c); //Calcul de delta suivant le shema B carré - 4ac

              if(delta > 0)
              { // Si delta positif on a deux solutions X1 et X2
                resultat = (-b - sqrt(delta)) / (2*a);
                printf("X1 = %f \n", resultat);

                resultat = (-b + sqrt(delta)) / (2*a);
                printf("X2 = %f \n", resultat);
              } 

              else if(delta == 0)//Si delta egal à zero on à une solution
              { 
                resultat = (-b / (2*a));
                printf("X = %f \n", resultat);
              }

              else//Si delta negatif on a pas de solutions dans R”’
              { 
                printf("MATH ERROR \n");
              }

              puts("\n");
                  
              printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
              scanf("%d",&touche);
              if(touche == 0)
              {
                choix = 0;
              }
              else
                end = quit();
                return 0;
              break;

            case 5:
              printf("RAPPEL: LES VIRGULES SERONT NOTÉS SOUS FORME DE POINT (.)");

              puts("/n");

              printf("Combien pesez vous? ");

              float poids, taille, imc;
  
              scanf("%f", &poids);

              printf("Combien mesurez vous? ");
              scanf("%f", &taille);

              imc = poids / pow(taille,2);

              printf("Votre indice de masse corporel est de: %f \n", imc);

              if (imc > 40)
              {
                printf("CLASSIFICATION -----> OBÉSITÉ MASSIVE");
              }

              else if (imc >= 30 && imc <= 40)
              {
                printf("CLASSIFICATION -----> OBÉSITÉ");
              }

              else if (imc >= 25 && imc <= 30)
              {
                printf("CLASSIFICATION -----> SURPOIDS");
              }

              else if (imc >= 18.5 && imc <= 25)
              {
                printf("CLASSIFICATION -----> Normal");
              }

              else if (imc < 18.5)
              {
                printf("CLASSIFICATION -----> MAIGREUR");
              }

              puts("\n");

              printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
              scanf("%d",&touche);
              if(touche == 0){
                choix = 0;
              }
              else
                end = quit();
                return 0;
              break;
                  
            case 6:
              printf("Entrez la première valeur: ");
              int operandeUn, operandeDeux;
              int myResult;
              float quotient;

              scanf("%d",&operandeUn);

              printf("Entrez la seconde valeur: ");
              scanf("%d",&operandeDeux);

              printf("CHOISSISEZ UN OPÉRATEUR: \n");
              printf("1. + \n");
              printf("2. - \n");
              printf("3. * \n");
              printf("4. / \n");
              int operateur;

              printf("-------------------\n");
              printf("\t");
              scanf("%d",&operateur);
              printf("-------------------\n");

              while (operateur<1 || operateur>4)
              {
                printf("CHOIX INVALIDE VEUILLEZ EN CHOISIR UN VALIDE \n");
                printf("CHOISSISEZ UN OPÉRATEUR: \n");
                printf("1. + \n");
                printf("2. - \n");
                printf("3. * \n");
                printf("4. / \n");
                  
                printf("-------------------\n");
                printf("\t");
                scanf("%d",&operateur);
                printf("-------------------\n");
              }
                  
              switch(operateur)
              {
                case 1:
                  myResult = operandeUn + operandeDeux;
                  printf("%d+%d = %d \n",operandeUn,operandeDeux,myResult);

                  puts("\n");

                  printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
                  scanf("%d",&touche);
                  if(touche == 0)
                  {
                   choix = 0;
                  }
                  else
                    end = quit();
                    return 0;
                  break;                   
                
                case 2:
                  myResult = operandeUn - operandeDeux;
                  printf("%d-%d = %d \n",operandeUn,operandeDeux,myResult);

                  puts("\n");

                  printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
                  scanf("%d",&touche);
                  if(touche == 0)               
                    choix = 0;                
                    else
                      end = quit();
                      return 0;
                    break;

                case 3:
                  myResult = operandeUn * operandeDeux;
                  printf("%d*%d = %d \n",operandeUn,operandeDeux,myResult);

                  puts("\n");

                  printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
                  scanf("%d",&touche);
                  if(touche == 0)                 
                    choix = 0;                  
                    else
                      end = quit();
                      return 0;
                    break;

                case 4:
                  if(operandeDeux==0)
                    printf("MATH ERROR, CALCUL IMPOSSIBLE");
                    
                  else
                    quotient = (float) operandeUn / operandeDeux;
                    printf("%d/%d = %f \n",operandeUn,operandeDeux,quotient);

                    puts("\n");
                        
                    printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
                    scanf("%d",&touche);
                    if(touche == 0)
                      choix = 0;                                   
                    else
                      end = quit();
                      return 0;
                    break;
              } //End of the switch calculatrice simple
              break;      

            case 7:
              printf("Donnez l'année à tester: ");
              int year;
              scanf("%d", &year);

              if(year%4 == 0) //année bisextille divisible par 4
                printf("%d est une année bissextile :) \n", year);
              else
                printf("%d n'est pas une année bissextile :( \n", year);

              puts("\n");

              printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
              scanf("%d",&touche);
              if(touche == 0)
                  choix = 0;               
              else
                end = quit();
                return 0;
              break;
                      
            case 8:
              printf("Entrez un nombre: ");

              int sommeDesNombreImpair = 0;

              scanf("%d",&n);

              for (i = 1; i <= n; i++)
              {
                if (i%2 == 1)
                  sommeDesNombreImpair += i;
                else
                  sommeDesNombreImpair = sommeDesNombreImpair;      
              }

              printf("La somme des nombres impair allant de 1 à %d est: %d \n",n,sommeDesNombreImpair);

              puts("\n");

              printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
              scanf("%d",&touche);
              if(touche == 0)
                  choix = 0;               
              else
                end = quit(); 
                return 0;
              break;            

            case 9:
              printf("");
              int nombreTaper;
              int sommeDesNombrePair = 0;
              for (i = 0; i < 20; i++)
              {
                printf("Tapez le nombre n° %d: ",i+1);
                scanf("%d",&nombreTaper);
                if (nombreTaper%2 == 0)
                  sommeDesNombrePair += nombreTaper;
                else
                  sommeDesNombrePair = sommeDesNombrePair;      
              }

              sommeDesNombrePair = pow(sommeDesNombrePair,2);
              printf("Le carré des nombres pair parmis les nombres entrés est: %d", sommeDesNombrePair);

              puts("\n");

              printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
              scanf("%d",&touche);
              if(touche == 0)
                choix = 0;             
              else
                end = quit();
                return 0;
              break;

            case 10:
              printf("Entrez un nombre positif: ");
              scanf("%d", &n);

              while (n<0)
              {
                printf("Le nombre choisi n'est pas positif s'il vous plait entrez un valable: ");
                scanf("%d", &n);
              }

              for (i = 0; i <= n; i++)
              {
                sommeDesNombres += i;
              }

              moyenne = (float)sommeDesNombres/(n+1);
              printf("La moyenne des n premiers nombres entier est: %f", moyenne);

              puts("\n");

              printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
              scanf("%d",&touche);
              if(touche == 0){
                choix = 0;
              }
              else
                end = quit();
                return 0;
              break;
                       
            case 11:
              printf("Entrez la valeur de la puissance: ");
              scanf("%d", &n);

              while (n<0)
              {
                printf("La puissance choisie n'est pas positive s'il vous plait entrez un valable: ");
                scanf("%d", &n);
              }

              for (i = 0; i <= n; i++)
              {
                sommeDesNombres += pow(2,i);
              }

              printf("La somme des %d premiéres puissances entière de 2 est: %d", n,sommeDesNombres);

              puts("\n");

              printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
              scanf("%d",&touche);
              if(touche == 0)
                choix = 0;             
              else
                end = quit();
                return 0;
              break;

            case 12:
              printf("Quelle table voulez vous affichez?: ");
              scanf("%d", &n);

              puts("\n");

              printf("--------------------\n");
              printf("La table de %d est: \n",n);
              printf("--------------------\n");

              for (i = 0; i <= 10; i++)
              {
                printf("%d*%d = %d \n", n,i,i*n);
              }

              printf("-------------------\n");

              puts("\n");

              printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
              scanf("%d",&touche);
              if(touche == 0)
                choix = 0;    
              else
                end = quit();
                return 0;
              break;
                
            case 13:
              printf("Saisisez une valeur: ");
              scanf("%d",&n);

              int factoriel=0;

              while (n<0)
              {
                printf("La valeur choisie n'est pas positive.\n S'il vous plait entrez une valeur valable: ");
                scanf("%d", &n);
              }

              for (i = 0; i <= n; i++)
              {
                factoriel += i;
              }

              printf("Le factoriel de %d est: %d", n,factoriel);

              puts("\n");

              printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
              scanf("%d",&touche);
              if(touche == 0)
                choix = 0;              
              else
                end = quit();
                return 0;
              break;

            case 14:
              printf("Saisisez un nombre: ");
              scanf("%d", &n);

              int j = 0;

              if(n != -1)
              {
                printf("Les nombres paires de 0 à %d sont: \n", n);
                while (j<n)
                {
                  for (i = 0; i < n; i++)
                  {
                    if (i%2 == 0)                 
                      printf("%d \n", i);                   
                    j++;
                  }
                }
              }
                  
              else
                printf("FIN DU PROGRAMME");

              puts("\n");

              printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
              scanf("%d",&touche);
              if(touche == 0)
                choix = 0;            
              else
                end = quit();
                return 0;
              break;

            case 15:
              printf("PS: POUR ARRÊTER D'ENTRER DES NOMBRES, ENTREZ LE NOMBRE 0 ");
              int plusGrandNombre = 0;

              puts("\n");

              printf("Saisisez un nombre: ");
              scanf("%d", &n);

              while (n != 0)
              {
                printf("Saisisez un nombre: ");
                scanf("%d", &n);
                if (plusGrandNombre<n)
                  plusGrandNombre = n;                 
              }

              printf("Le plus grand nombre entré est : %d", plusGrandNombre);

              puts("\n");

              printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
              scanf("%d",&touche);
              if(touche == 0)
                choix = 0;
                
              else
                end = quit();
                return 0;
              break;
                
            case 16:
              printf("Veuillez saisir un nombre compris entre 1 et 31: ");
              scanf("%d", &n);
                
              while(n<1 || n>31)
              {
                printf("Valeur saisie non comprise entre 1 et 31 \n");
                printf("Veuillez recommencer: ");
                scanf("%d", &n);
              }
                
              printf("%d est bien entre 1 et 31 :)", n);

              puts("\n");

              printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
              scanf("%d",&touche);
              if(touche == 0)
                choix = 0;                
              else
                end = quit();
                return 0;
              break;

            case 17:
              printf("Saisisez le premier nombre à multiplier: ");
              int multiplicateurUn,multiplicateurDeux;
              int resultatMultiplication = 0;
              int additionneur;
              int itterateur = 0;
              scanf("%d", &multiplicateurUn);

              printf("Saisisez le premier nombre à multiplier: ");
              scanf("%d", &multiplicateurDeux);

              if(multiplicateurUn<0)
              {
                printf("Veuillez saisir une valeur positive: ");
                scanf("%d", &multiplicateurUn);
              }
                  
              else if(multiplicateurUn<0)
              {
                printf("Veuillez saisir une valeur positive: ");
                scanf("%d", &multiplicateurUn);
              }
                  

              if (multiplicateurUn<multiplicateurDeux)
              {
                additionneur = multiplicateurDeux;
                itterateur = multiplicateurUn;
              }

              else if (multiplicateurUn>multiplicateurDeux)
              {
                additionneur = multiplicateurUn;
                itterateur = multiplicateurDeux;
              }

              else if (multiplicateurUn == multiplicateurDeux)
              {
                additionneur = multiplicateurUn;
                itterateur = multiplicateurUn;
              }

              for (i = 0; i < itterateur; i++)
                resultatMultiplication += additionneur; 


              printf("%d*%d = %d", multiplicateurUn, multiplicateurDeux, resultatMultiplication);

              puts("\n");

              printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
              scanf("%d",&touche);
              if(touche == 0)
                  choix = 0;
              else
                end = quit();
                return 0;
            break;          

                
            case 18:
              printf("Entrez le prix unitaire: ");

              int prixUnitaire, quantiteTotale, prixAPayer, prixTotal, port, remise;

              scanf("%d", &prixUnitaire);

              printf("Entrez la quantité totale commandée: ");
              scanf("%d", &quantiteTotale);

              puts("\n");

              printf("----------------------------\n");

              prixTotal = prixUnitaire * quantiteTotale;
              printf("Le prix totale est: %d \n", prixTotal); 

              if(prixTotal>5000)
                printf("Le port (PORT) est gratuit :) \n");
              else  
              { 
                port = (prixTotal*2)/100;
                printf("Le port (PORT) est de: %d \n", port);
              }

              if (prixTotal>2000 && prixTotal<10000)
              {
                remise = (prixTotal*5)/100;
                printf("La remise est de: %d \n", remise);
              }
              else if (prixTotal>10000)
              {
                remise = (prixTotal*10)/100;
                printf("La remise est de: %d \n", remise);
              }           
              else
                printf("Pas de remise :( \n");

              printf("----------------------------\n");

              puts("\n");

              printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
              scanf("%d",&touche);
              if(touche == 0)
                choix = 0;
              else
                end = quit();
                return 0;
            break;

            case 19:
              printf("Donnez la température : ");
              float temperature, temperatureConvertie;
              char uniteEntree, uniteSortie;
              scanf("%f", &temperature);

              printf("-------------------------\n");
              printf("Choissisez l'unité: \n");
              printf("C- Degré Celsius \n");
              printf("F- Degrés Fahrenheit \n");
              printf("K- Degrés Kelvin \n");
              printf("-------------------------\n");

              printf("Votre choix: ");
              scanf(" %c", &uniteEntree);
                   
              uniteEntree = toupper(uniteEntree);

              puts("\n");

              switch (uniteEntree)
              {
                case 'C': //Température donnée en celsius

                  printf("------------------------------------------------\n");
                  printf("En quoi voulez vous convertir la temperature? \n");
                  printf("F- Degrés Fahrenheit \n");
                  printf("K- Degrés Kelvin \n");
                  printf("------------------------------------------------\n");

                  printf("Votre choix: ");
                  scanf(" %c", &uniteSortie);
                  uniteSortie = toupper(uniteSortie);

                  puts("\n");

                  switch (uniteSortie)
                  {
                    case 'F':
                      temperatureConvertie = (temperature * 9 + 32) / 5;
                      printf(" %f°C ----> %f°F ", temperature, temperatureConvertie);

                      puts("\n");

                      printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
                      scanf("%d",&touche);
                      if(touche == 0)
                        choix = 0;
                      else
                        end = quit();
                        return 0;
                    break;
                
                    case 'K':
                      temperatureConvertie = temperature + 273.15;
                      printf(" %f°C ----> %f°K ", temperature, temperatureConvertie);

                      puts("\n");

                      printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
                      scanf("%d",&touche);
                      if(touche == 0)
                        choix = 0;
                      else
                        end = quit();
                        return 0;
                    break;
                  }
                break;

                case 'F': //temperature donnée en Fahrenheit

                  printf("------------------------------------------------\n");
                  printf("En quoi voulez vous convertir la temperature? \n");
                  printf("F- Degrés Celsius \n");
                  printf("K- Degrés Kelvin \n");
                  printf("------------------------------------------------\n");

                  printf("Votre choix: ");
                  scanf(" %c", &uniteSortie);
                  uniteSortie = toupper(uniteSortie);

                  puts("\n");

                  switch (uniteSortie)
                  {
                    case 'C':
                      temperatureConvertie = (temperature-32) * (5/9);
                      printf(" %f°F ----> %f°C ", temperature, temperatureConvertie);

                      puts("\n");

                      printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
                      scanf("%d",&touche);
                      if(touche == 0)
                        choix = 0;
                      else
                        end = quit();
                        return 0;
                    break;
                
                    case 'K':
                      temperatureConvertie = (temperature + 459.67) * (5/9);
                      printf(" %f°F ----> %f°K ", temperature, temperatureConvertie);

                      puts("\n");

                      printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
                      scanf("%d",&touche);
                      if(touche == 0)
                        choix = 0;
                      else
                        end = quit(); 
                        return 0;
                    break;
                  }
                break;

                case 'K': //Température donnée en Kelvin

                  printf("------------------------------------------------\n");
                  printf("En quoi voulez vous convertir la temperature? \n");
                  printf("K- Degrés Celsius \n");
                  printf("F- Degrés Fahrenheit \n");                
                  printf("------------------------------------------------\n");

                  printf("Votre choix: ");
                  scanf(" %c", &uniteSortie);
                  uniteSortie = toupper(uniteSortie);

                  puts("\n");

                  switch (uniteSortie)
                  {
                    case 'C':
                      temperatureConvertie = temperature - 273.15;
                      printf(" %f°K ----> %f°C ", temperature, temperatureConvertie);

                      puts("\n");

                      printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
                      scanf("%d",&touche);
                      if(touche == 0)
                        choix = 0;
                      else
                        end = quit();
                        return 0;
                    break;
                
                    case 'F':
                      temperatureConvertie = (temperature* (9/5)) - 459.67;
                      printf(" %f°K ----> %f°F ", temperature, temperatureConvertie);

                      puts("\n");

                      printf("ENTREZ 0 POUR CONTINUER ET 1 POUR QUITTER\n");
                      scanf("%d",&touche);
                      if(touche == 0)
                        choix = 0;
                      else
                        end = quit(); 
                        return 0;
                    break;
                  }
                break;
              }       
            break;            
              
              


              


            
            case 20:break;
            case 21:break;
            case 22:break;
            case 23:break;
            case 24:break;
            case 25:break;
            case 26:break;
            case 27:break;
            case 28:break;
            case 29:break;
            case 30:break;
            case 31:break;
            case 32:break;
            case 33:break;
            case 34:break;
            case 35:break;
            case 36:break;
            case 37:break;
            case 38:break;
            case 39:break;
            case 40:break;
          }
        } while (programme!=0);

      case 1:
        printf("\a");
        int choixUn; //local variable who define the choice just in the case 1 statement

        printf("█████▄  ▄▄▄       ██▀███   ██ ▄█▀ ██▀███   ▄▄▄       ██▓     ██████ ▄▄▄█████▓ █    ██   █████▒ █████▒\n");
        printf("██▀ ██▌▒████▄    ▓██ ▒ ██▒ ██▄█▒ ▓██ ▒ ██▒▒████▄    ▓██▒   ▒██    ▒ ▓  ██▒ ▓▒ ██  ▓██▒▓██   ▒▓██   ▒ \n");
        printf("██   █▌▒██  ▀█▄  ▓██ ░▄█ ▒▓███▄░ ▓██ ░▄█ ▒▒██  ▀█▄  ▒██▒   ░ ▓██▄   ▒ ▓██░ ▒░▓██  ▒██░▒████ ░▒████ ░ \n");
        printf("▓█▄   ▌░██▄▄▄▄██ ▒██▀▀█▄  ▓██ █▄ ▒██▀▀█▄  ░██▄▄▄▄██ ░██░     ▒   ██▒░ ▓██▓ ░ ▓▓█  ░██░░▓█▒  ░░▓█▒  ░ \n");
        printf("░▒████▓  ▓█   ▓██▒░██▓ ▒██▒▒██▒ █▄░██▓ ▒██▒ ▓█   ▓██▒░██░   ▒██████▒▒  ▒██▒ ░ ▒▒█████▓ ░▒█░   ░▒█░    \n");;
        printf("▒▒▓  ▒  ▒▒   ▓▒█░░ ▒▓ ░▒▓░▒ ▒▒ ▓▒░ ▒▓ ░▒▓░ ▒▒   ▓▒█░░▓     ▒ ▒▓▒ ▒ ░  ▒ ░░   ░▒▓▒ ▒ ▒  ▒ ░    ▒ ░\n");
        printf("░ ▒  ▒   ▒   ▒▒ ░  ░▒ ░ ▒░░ ░▒ ▒░  ░▒ ░ ▒░  ▒   ▒▒ ░ ▒ ░   ░ ░▒  ░ ░    ░    ░░▒░ ░ ░  ░      ░  \n");
        printf("░ ░  ░   ░   ▒     ░░   ░ ░ ░░ ░   ░░   ░   ░   ▒    ▒ ░   ░  ░  ░    ░       ░░░ ░ ░  ░ ░    ░ ░\n");
        printf("  ░          ░  ░   ░     ░  ░      ░           ░  ░ ░           ░              ░                \n");
        printf("░                                                                                                \n");

        puts(" \n");
        puts(" \n");

        printf("                     _| |____________________________________________| |__ \n");
        printf("                    (__  ____________________________________________   __)\n");
        printf("                      | |          JOUONS À UN JEU                   | |   \n");
        printf("                      | |                                            | |   \n");
        printf("                      | |Tu a 5 essaies pour trouver le nombre auquel| |   \n");
        printf("                      | |je pense entre 0 et 100. Tu est chaud?      | |   \n");
        printf("                      | |                                            | |   \n");
        printf("                      | |                                            | |   \n");
        printf("                      | |0-NON                           1-OUI       | |   \n");
        printf("                    __| |____________________________________________| |__ \n");
        printf("                   (__   ____________________________________________   __)\n");
        printf("                      | |                                            | |   \n");



        printf("VOTRE CHOIX: ");
        scanf("%d", &choixUn);

        while (scanf("%d",&choixUn) != 1)
          {
            printf("VOTRE CHOIX N'EST PAS VALABLE RÉESAYEZ: ");
            while(getchar() != '\n');
          }

        puts(" \n");
        puts(" \n");

        if(choixUn == 1)
        {

          int nombre = 0;
          int essaie;
          int essaiemax = 0;

          nombre = rand() % (100 + 1);

          while (essaie != nombre)
          {
            printf("Entrez un nombre ");
            scanf("%d",&essaie);
            essaiemax++;

            if(essaie < nombre)
              printf("Plus grand! \n");
              
            if(essaie > nombre)
              printf("Plus petit! \n");         

            if(essaiemax == 5)
              printf("PERDU!"); break;
              

            if(essaie == nombre)
              printf("Gagner!");break;                  
          }
        }

        if(choixUn == 0)
        {
          printf("\e[1;1H\e[2J"); //regex method to clean the consol it's fast than a system("clear")
          system("clear");
          choix = 4;
        }
      break;

      case 2:
        printf("\a");
        int choixDeux; //local variable who define the choice just in the case 2 statement

        printf("█████▄  ▄▄▄       ██▀███   ██ ▄█▀ ██▀███   ▄▄▄       ██▓     ██████ ▄▄▄█████▓ █    ██   █████▒ █████▒\n");
        printf("██▀ ██▌▒████▄    ▓██ ▒ ██▒ ██▄█▒ ▓██ ▒ ██▒▒████▄    ▓██▒   ▒██    ▒ ▓  ██▒ ▓▒ ██  ▓██▒▓██   ▒▓██   ▒ \n");
        printf("██   █▌▒██  ▀█▄  ▓██ ░▄█ ▒▓███▄░ ▓██ ░▄█ ▒▒██  ▀█▄  ▒██▒   ░ ▓██▄   ▒ ▓██░ ▒░▓██  ▒██░▒████ ░▒████ ░ \n");
        printf("▓█▄   ▌░██▄▄▄▄██ ▒██▀▀█▄  ▓██ █▄ ▒██▀▀█▄  ░██▄▄▄▄██ ░██░     ▒   ██▒░ ▓██▓ ░ ▓▓█  ░██░░▓█▒  ░░▓█▒  ░ \n");
        printf("░▒████▓  ▓█   ▓██▒░██▓ ▒██▒▒██▒ █▄░██▓ ▒██▒ ▓█   ▓██▒░██░   ▒██████▒▒  ▒██▒ ░ ▒▒█████▓ ░▒█░   ░▒█░    \n");;
        printf("▒▒▓  ▒  ▒▒   ▓▒█░░ ▒▓ ░▒▓░▒ ▒▒ ▓▒░ ▒▓ ░▒▓░ ▒▒   ▓▒█░░▓     ▒ ▒▓▒ ▒ ░  ▒ ░░   ░▒▓▒ ▒ ▒  ▒ ░    ▒ ░\n");
        printf("░ ▒  ▒   ▒   ▒▒ ░  ░▒ ░ ▒░░ ░▒ ▒░  ░▒ ░ ▒░  ▒   ▒▒ ░ ▒ ░   ░ ░▒  ░ ░    ░    ░░▒░ ░ ░  ░      ░  \n");
        printf("░ ░  ░   ░   ▒     ░░   ░ ░ ░░ ░   ░░   ░   ░   ▒    ▒ ░   ░  ░  ░    ░       ░░░ ░ ░  ░ ░    ░ ░\n");
        printf("  ░          ░  ░   ░     ░  ░      ░           ░  ░ ░           ░              ░                \n");
        printf("░                                                                                                \n");

        puts(" \n");
        puts(" \n");

        printf("                    __| |____________________________________________| |__ \n");
        printf("                   (__   ____________________________________________   __)\n");
        printf("                      | | EDITED BY DARKRAI                          | |   \n");
        printf("                      | | DESIGNED BY DARKRAI                        | |   \n");
        printf("                      | | CODED BY DARKRAI                           | |   \n");
        printf("                      | |                                            | |   \n");
        printf("                      | | 1bip--> Choix menu                         | |   \n");
        printf("                      | | 2bip--> Erreur de saisie                   | |   \n");
        printf("                      | | 3bip--> Fin du programme                   | |   \n");
        printf("                      | |                                            | |   \n");
        printf("                      | |is(DARKRAI) == (ALEX); .... TRUE;           | |   \n");
        printf("                      | |is(ALEX)>>>>>ALL; ...... ABSOLUTLY TRUE :)  | |   \n");
        printf("                      | |                                            | |   \n");
        printf("                      | |  0-Précédent                   1-QUITTER   | |   \n");
        printf("                    __| |____________________________________________| |__ \n");
        printf("                   (__   ____________________________________________   __)\n");
        printf("                      | |                                            | |   \n");



        printf("VOTRE CHOIX: ");
        scanf("%d", &choixDeux);

        while (scanf("%d",&choixDeux) != 1)
          {
            printf("VOTRE CHOIX N'EST PAS VALABLE RÉESAYEZ: ");
            while(getchar() != '\n');
          }

        puts(" \n");
        puts(" \n");

        if(choixDeux == 1)
        {
          choixDeux = 0;
          choix = 3;
        }

        if(choixDeux == 0)
        {
          printf("\e[1;1H\e[2J"); //regex method to clean the consol it's fast than a system("clear")
          system("clear");
          choix = 4;
        }

      break;

      case 3:
        end = quit();
          
      break;

    }
  }while(choix!=3); //define condition to close the loop

  return 0;
}

