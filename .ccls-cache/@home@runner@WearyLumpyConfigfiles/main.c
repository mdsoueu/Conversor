#include <stdio.h>

float comprimento() {
  float metro;
  float centrimetro;
  float quilometro;

  int opcao_uni;    /* Unidade desejada */
  char opcao_uni_2; /* Unidade para qual a conversão vai ocorrer */

  float m_etro;      /* Unidade em metro */
  float c_entimetro; /* Unidade em centímetro */
  float q_uilo;      /* Unidade em quilômetro */

  printf("\tConversão das medidas de comprimento.\n\nEscolha abaixo a unidade desejada:\n");
  printf("1) Metro \n2) Centímetro\n3) Quilômetro\n\n");
  do {
    printf("Opção: ");
    scanf("%d", &opcao_uni);
    getchar();
    if (opcao_uni != 1 && opcao_uni != 2 && opcao_uni != 3)
      printf("Resposta inválida!\n");
  } while (opcao_uni != 1 && opcao_uni != 2 && opcao_uni != 3);

  /* Até aqui, eu escolhi a 1º unidade. Agora preciso escolher a 2º unidade.*/
  switch (opcao_uni) {
  case 1: { /* Metro */
    printf("\n\t\t**************************\n");
    printf("\nOpção %d selecionada!\nAgora escolha para qual unidade você "
           "deseja converter:\n",
           opcao_uni);
    printf("a) Metro → Centímetro\nb) Metro → Quilômetro\n\n");

    do { /* Validação */
      printf("Opção: ");
      scanf("%c", &opcao_uni_2);
      getchar();
      if (opcao_uni_2 != 'a' && opcao_uni_2 != 'b')
        printf("Resposta inválida!\n");
    } while (opcao_uni_2 != 'a' && opcao_uni_2 != 'b'); /* Fim da validação */

      switch (opcao_uni_2) {
          case 'a': { /* Centímetro */
            printf("\n\t\t**************************\n");
            printf("Opção '%c' selecionada!\n", opcao_uni_2);
            printf("Por favor, insira o valor abaixo.\n\n");
            printf("Valor: ");
            scanf("%f", &m_etro);
      
            c_entimetro = m_etro * 100;
      
            printf("Resultado \n");
            printf("\t%.2f m ---> %.0f cm", m_etro, c_entimetro);
          } /* Fim do case a */
          break;
      
          case 'b': { /* Quilômetro */
            printf("\n\t\t**************************\n");
            printf("Opção '%c' selecionada!\n", opcao_uni_2);
            printf("Por favor, insira o valor abaixo.\n\n");
            printf("Valor: ");
            scanf("%f", &m_etro);
      
            q_uilo = m_etro / 1000;
      
            printf("Resultado \n");
            printf("\t%.2f m ---> %.5f km", m_etro, q_uilo);
          } /* Fim do case b */
      
            default:
            printf("Valor inválido!");
      } /* Fim do switch opcao_uni_2 */
  }   /* Fim do case 1 */
  break;

  case 2: {
    printf("\n\t\t**************************\n");
    printf("\nOpção %d selecionada!\nAgora escolha para qual unidade você "
           "deseja converter:\n",
           opcao_uni);
    printf("a) Metro\nb) Quilômetro\n\n");

    do { /* Validação */
      printf("Opção: ");
      scanf("%c", &opcao_uni_2);
      getchar();
      if (opcao_uni_2 != 'a' && opcao_uni_2 != 'b')
        printf("Resposta inválida!\n");
    } while (opcao_uni_2 != 'a' && opcao_uni_2 != 'b'); /* Fim da validação */

    switch (opcao_uni_2) {
      case 'a': { /* Centímetro - Metro */
        printf("\n\t\t**************************\n");
        printf("Opção '%c' selecionada!\n", opcao_uni_2);
        printf("Por favor, insira o valor abaixo.\n\n");
        printf("Valor: ");
        scanf("%f", &c_entimetro);
  
        m_etro = c_entimetro / 100;
  
        printf("Resultado \n");
        printf("\t%.2f cm ---> %.5f m", c_entimetro, m_etro);
      } /* Fim do case a */
      break;
  
      case 'b': { /* Cetímetro - Quilômetro */
        printf("\n\t\t**************************\n");
        printf("Opção '%c' selecionada!\n", opcao_uni_2);
        printf("Por favor, insira o valor abaixo.\n\n");
        printf("Valor: ");
        scanf("%f", &c_entimetro);
  
        q_uilo = c_entimetro / 100000;
  
        printf("Resultado \n");
        printf("\t%.2f cm ---> %.5f km", c_entimetro, q_uilo);
      } /* Fim do case b */
      } /* Fim do switch opcao_uni_2 */
  }   /* Fim do case 2 */
  break;

  case 3: {
    printf("\n\t\t**************************\n");
    printf("\nOpção %d selecionada!\nAgora escolha para qual unidade você "
           "deseja converter:\n",
           opcao_uni);
    printf("a) Metro\nb) Centímetro\n\n");

    do { /* Validação */
      printf("Opção: ");
      scanf("%c", &opcao_uni_2);
      getchar();
      if (opcao_uni_2 != 'a' && opcao_uni_2 != 'b')
        printf("Resposta inválida!\n");
    } while (opcao_uni_2 != 'a' && opcao_uni_2 != 'b'); /* Fim da validação */

    switch (opcao_uni_2) {
      case 'a': { /* Centímetro - Metro */
      printf("\n\t\t**************************\n");
      printf("Opção '%c' selecionada!\n", opcao_uni_2);
      printf("Por favor, insira o valor abaixo.\n\n");
      printf("Valor: ");
      scanf("%f", &q_uilo);

      m_etro = q_uilo * 1000;

      printf("Resultado \n");
      printf("\t%.2f km ---> %.5f m", q_uilo, m_etro);
    } /* Fim do case a */
      break;  

      case 'b': { /* Cetímetro - Quilômetro */
        printf("\n\t\t**************************\n");
        printf("Opção '%c' selecionada!\n", opcao_uni_2);
        printf("Por favor, insira o valor abaixo.\n\n");
        printf("Valor: ");
        scanf("%f", &q_uilo);
  
        c_entimetro = q_uilo * 100000;
  
        printf("Resultado \n");
        printf("\t%.2f km ---> %.5f cm", q_uilo, c_entimetro);
      } /* Fim do case b */
      } /* Fim do switch opcao_uni_2 */
  } /* Fim do case 3 */
  break;

  default:
    printf("Valor inválido!");

  } /* Fim do switch da opcao_uni */
} /* Fim da função */

float volume (){
  float litro;
  float mili;

  int opcao_uni;    /* Unidade desejada */

  float l_litro; /* Unidade em litro */
  float mi_mili; /* Unidade em mililitro */
  
  printf("\tConversão das medidas de volume.\n\nEscolha abaixo a unidade desejada:\n");
  printf("1) Litro --> Mililitro\n2) Mililitro --> Litro\n\n");

  do {
    printf("Opção: ");
    scanf("%d", &opcao_uni);
    getchar();
    if (opcao_uni != 1 && opcao_uni != 2)
      printf("Resposta inválida!\n");
  } while (opcao_uni != 1 && opcao_uni != 2); /* Fim do do-while */

  switch (opcao_uni){
    case 1:{
      printf("\n\t\t**************************\n");
      printf("\nOpção %d selecionada!\n\n", opcao_uni);
      printf("\t\tPor favor, insira o valor abaixo.\n\n");
      printf("Valor: ");
      scanf("%f", &litro);

      mi_mili = litro * 1000;

      printf("Resultado: \n");
      printf("%.2f l --> %.3f ml", litro, mi_mili);
    } /* Fim do case 1 */
    break;

    case 2:{
      printf("\n ***************************************\n");
      printf("\nOpção %d selecionada!\n\n", opcao_uni);
      printf("\t\tPor favor, insira o valor abaixo.\n\n");
      printf("Valor: ");
      scanf("%f", &mili);

      l_litro = mili /1000;

      printf("Resultado: \n");
      printf("%.2f ml --> %.3 fl", mili, l_litro);
    } /* Fim do case 2 */
    break;

    default:
    printf("Valor inválido!");
  } /* Fim do swich opcao_uni */
} /* Fim da função tempo */

float velocidade (){
  float quilometro;
  float metro;

  int opcao_uni;    /* Unidade desejada */
  char opcao_uni_2; /* Unidade para qual a conversão vai ocorrer */

  float qui_quilometro;
  float me_metro;

  printf("   Conversão das medidas de velocidade.\n\nEscolha abaixo a unidade desejada:\n");
  printf("1) Quilomêtro --> Metro\n2) Metro --> Quilômetro\n\n");
  
   do {
    printf("Opção: ");
    scanf("%d", &opcao_uni);
    getchar();
    if (opcao_uni != 1 && opcao_uni != 2)
      printf("Resposta inválida!\n");
  } while (opcao_uni != 1 && opcao_uni != 2); /* Fim do do-while */

  switch (opcao_uni){
    case 1:{
      printf("\n\t\t**************************\n");
      printf("\nOpção %d selecionada!\n", opcao_uni);
      printf("Por favor, insira o valor abaixo.\n\n");
      printf("Valor: ");
      scanf("%f", &quilometro);

      me_metro = quilometro /3.6;

      printf("Resultado: \n");
      printf("%.2f km/h --> %.3f m/s", quilometro, me_metro);
    } /*Fim do case 1 */
    break;

    case 2:{
      printf("\n ***************************************\n");
      printf("\nOpção %d selecionada!\n", opcao_uni);
      printf("Por favor, insira o valor abaixo.\n\n");
      printf("Valor: ");
      scanf("%f", &metro);

      qui_quilometro = metro * 3.6;

      printf("Resultado: \n");
      printf("%.2f m/s --> %.3f km/h", metro, qui_quilometro);
    } /* Fim do case 2 */
    break;

    default:
    printf("Valor inválido!");
    break;
  } /* Fim do switch opcao_uni */
  
  
} /* Fim da funcão velocidade */

float massa (){
  float quilograma;
  float grama;
  float miligrama;

  int opcao_uni;    /* Unidade desejada */
  char opcao_uni_2; /* Unidade para qual a conversão vai ocorrer */

  float qui_quilograma;
  float gra_grama;
  float mili_miligrama;

  printf("\tConversão das medidas de massa.\n\nEscolha abaixo a unidade desejada:\n");
  printf("1) Quilograma\n2) Grama\n3) Miligrama\n\n");

  do {
    printf("Opção: ");
    scanf("%d", &opcao_uni);
    getchar();
    if (opcao_uni != 1 && opcao_uni != 2 && opcao_uni != 3)
      printf("Resposta inválida!\n");
  } while (opcao_uni != 1 && opcao_uni != 2 && opcao_uni != 3);

  switch (opcao_uni){
    case 1:{
      printf("\n\t\t**************************\n");
      printf("\nOpção %d selecionada!\n", opcao_uni);
      printf("Por favor, insira o valor abaixo.\n\n");
      printf("Valor: ");
      scanf("%f", &quilograma);

      gra_grama = quilograma * 1000;

      printf("Resultado: \n");
      printf("%.2f kg --> %.3f g", quilograma, gra_grama);
    } /* Fim do case 1 */
    break;

    case 2:{
      printf("\n\t\t**************************\n");
      printf("\nOpção %d selecionada!\nAgora escolha para qual unidade você deseja converter:\n", opcao_uni);
      printf("a) Grama → Quilograma\nb) Grama → Miligrama\n\n");

      do { /* Validação */
        printf("Opção: ");
        scanf("%c", &opcao_uni_2);
        getchar();
        if (opcao_uni_2 != 'a' && opcao_uni_2 != 'b')
          printf("Resposta inválida!\n");
      } while (opcao_uni_2 != 'a' && opcao_uni_2 != 'b'); /* Fim da validação */

      switch(opcao_uni_2){
        case 'a':{
          printf("\n\t\t**************************\n");
          printf("Opção '%c' selecionada!\n", opcao_uni_2);
          printf("Por favor, insira o valor abaixo.\n\n");
          printf("Valor: ");
          scanf("%f", &grama);

          qui_quilograma = grama / 1000;

          printf("Resultado: \n");
          printf("%.2f g --> %.3f kg", grama, qui_quilograma);
        } /* Fim do case a */
        break;

        case 'b':{
          printf("\n\t\t**************************\n");
          printf("Opção '%c' selecionada!\n", opcao_uni_2);
          printf("Por favor, insira o valor abaixo.\n\n");
          printf("Valor: ");
          scanf("%f", &grama);

          mili_miligrama = grama * 1000;

          printf("Resultado: \n");
          printf("%.2f g --> %.3f s", grama, mili_miligrama);
        } /* Fim do case b */
        break;
        
        default:
        printf("Valor inválido!");
        break;
      } /* Fim do switch opcao_uni_2 */
    } /* Fim do case 2 */
    break;

    case 3:{
      printf("\n\t\t**************************\n");
      printf("\nOpção %d selecionada!\n", opcao_uni);
      printf("Por favor, insira o valor abaixo.\n\n");
      printf("Valor: ");
      scanf("%f", &miligrama);

      gra_grama = miligrama / 1000;

      printf("Resultado: \n");
      printf("%.2f mg --> %.3f g", miligrama, gra_grama);
    } /* Fim do case 3 */
    break;

    default:
    printf("Valor inválido!");
  } /* Fim do switch opcao_uni */
} /* Fim da função massa */

float temperatura (){
  float celsius;
  float fahrenheit;
  float kelvin;

  int opcao_uni;    /* Unidade desejada */
  char opcao_uni_2; /* Unidade para qual a conversão vai ocorrer */

  float c_celsius;
  float f_farenheit;
  float k_kelvin;

  printf("  Conversão das medidas de temperatura.\n\nEscolha abaixo a unidade desejada:\n");
  printf("1) Celsius\n2) Fahrenheit\n3) Kelvin\n\n");

  do {
    printf("Opção: ");
    scanf("%d", &opcao_uni);
    getchar();
    if (opcao_uni != 1 && opcao_uni != 2 && opcao_uni != 3)
      printf("Resposta inválida!\n");
  } while (opcao_uni != 1 && opcao_uni != 2 && opcao_uni != 3);

  switch (opcao_uni){
    case 1:{
      printf("\n\t\t**************************\n");
      printf("\nOpção %d selecionada!\nAgora escolha para qual unidade você deseja converter:\n", opcao_uni);
      printf("a) Celsius → Fahrenheit\nb) Celsius → Kelvin\n\n");
        do { /* Validação */
          printf("Opção: ");
          scanf("%c", &opcao_uni_2);
          getchar();
        if (opcao_uni_2 != 'a' && opcao_uni_2 != 'b')
          printf("Resposta inválida!\n");
      } while (opcao_uni_2 != 'a' && opcao_uni_2 != 'b'); /* Fim da validação */

        switch (opcao_uni_2){
          case 'a':{
            printf("\n\t\t**************************\n");
            printf("Opção '%c' selecionada!\n", opcao_uni_2);
            printf("Por favor, insira o valor abaixo.\n\n");
            printf("Valor: ");
            scanf("%f", &celsius);

            f_farenheit = (celsius*9/5)+32;

            printf("Resultado: \n");
            printf("%.2f °C --> %.2f °F", celsius, f_farenheit);
          } /* Fim do case a */
          break;

          case 'b':{
            printf("\n\t\t**************************\n");
            printf("Opção '%c' selecionada!\n", opcao_uni_2);
            printf("Por favor, insira o valor abaixo.\n\n");
            printf("Valor: ");
            scanf("%f", &celsius);

            k_kelvin = celsius + 273,15;

            printf("Resultado: \n");
            printf("%.2f °C --> %.2f °K", celsius, k_kelvin);
          } /* Fim do case b */
          break;
        } /* Fim do switch opcao_uni_2 */
    } /* Fim do case 1*/
    break;

    case 2:{
      printf("\n\t\t**************************\n");
      printf("\nOpção %d selecionada!\nAgora escolha para qual unidade você deseja converter:\n", opcao_uni);
      printf("a) Fahrenheit → Celsius\nb) Fahrenheit → Kelvin\n\n");
        do { /* Validação */
          printf("Opção: ");
          scanf("%c", &opcao_uni_2);
          getchar();
        if (opcao_uni_2 != 'a' && opcao_uni_2 != 'b')
          printf("Resposta inválida!\n");
      } while (opcao_uni_2 != 'a' && opcao_uni_2 != 'b'); /* Fim da validação */

      switch (opcao_uni_2){
          case 'a':{
            printf("\n\t\t**************************\n");
            printf("Opção '%c' selecionada!\n", opcao_uni_2);
            printf("Por favor, insira o valor abaixo.\n\n");
            printf("Valor: ");
            scanf("%f", &fahrenheit);

            c_celsius = (fahrenheit-32) * 5/9;

            printf("Resultado: \n");
            printf("%.2f °F --> %.2f °C", fahrenheit, c_celsius);
          } /* Fim do case a */
          break;

          case 'b':{
            printf("\n\t\t**************************\n");
            printf("Opção '%c' selecionada!\n", opcao_uni_2);
            printf("Por favor, insira o valor abaixo.\n\n");
            printf("Valor: ");
            scanf("%f", &fahrenheit);

            k_kelvin = (fahrenheit-32) * 5/9 + 273.15;

            printf("Resultado: \n");
            printf("%.2f °F --> %.2f °K", fahrenheit, k_kelvin);
          } /* Fim do case b */
          break;
        } /* Fim do switch opcao_uni_2 */
    } /* Fim do case 2*/
    break;

    case 3:{
       printf("\n\t\t**************************\n");
      printf("\nOpção %d selecionada!\nAgora escolha para qual unidade você deseja converter:\n", opcao_uni);
      printf("a) Kelvin → Celsius\nb) Kelvin → Fahrenheit\n\n");
        do { /* Validação */
          printf("Opção: ");
          scanf("%c", &opcao_uni_2);
          getchar();
        if (opcao_uni_2 != 'a' && opcao_uni_2 != 'b')
          printf("Resposta inválida!\n");
      } while (opcao_uni_2 != 'a' && opcao_uni_2 != 'b'); /* Fim da validação */

      switch (opcao_uni_2){
          case 'a':{
            printf("\n\t\t**************************\n");
            printf("Opção '%c' selecionada!\n", opcao_uni_2);
            printf("Por favor, insira o valor abaixo.\n\n");
            printf("Valor: ");
            scanf("%f", &kelvin);

            c_celsius = kelvin - 273.15;

            printf("Resultado: \n");
            printf("%.2f °K --> %.2f °C", kelvin, c_celsius);
          } /* Fim do case a */
          break;

          case 'b':{
            printf("\n\t\t**************************\n");
            printf("Opção '%c' selecionada!\n", opcao_uni_2);
            printf("Por favor, insira o valor abaixo.\n\n");
            printf("Valor: ");
            scanf("%f", &kelvin);

            f_farenheit = (kelvin - 273.15) * 9/5 + 32;

            printf("Resultado: \n");
            printf("%.2f °K --> %.2f °F", kelvin, f_farenheit);
          } /* Fim do case b */
          break;
        } /* Fim do switch opcao_uni_2 */
      
    } /* Fim do case 3 */
    break;

    default:
    printf("Valor inválido!");
  } /* Fim do switch opcao_uni */

  }/* Fim da função temperatura */

float tempo (){
  int segundos;
  int minutos;
  int horas;
  int dias;
  int semana;
  int mes;
  int ano;

  int opcao_uni;    /* Unidade desejada */
  char opcao_uni_2; /* Unidade para qual a conversão vai ocorrer */

  int s_segundo;
  int m_minutos;
  int h_horas;
  int d_dias;
  int s_semana;
  int m_mes;
  int a_ano;

  printf("\tConversão das medidas de tempo.\n\nEscolha abaixo a unidade desejada:\n");
  printf("1) Segundos\n2) Minutos\n3) Horas\n4) Dias\n5) Semana\n6) Mês\n7) Ano\n\n");

  do {
    printf("Opção: ");
    scanf("%d", &opcao_uni);
    getchar();
    if (opcao_uni != 1 && opcao_uni != 2 && opcao_uni != 3 && opcao_uni !=5 && opcao_uni !=6 && opcao_uni !=7)
      printf("Resposta inválida!\n");
  } while (opcao_uni != 1 && opcao_uni != 2 && opcao_uni != 3 && opcao_uni !=5 && opcao_uni !=6 && opcao_uni !=7);

  switch (opcao_uni) {
    case 1: { /* Metro */
      printf("\n\t\t**************************\n");
      printf("\nOpção %d selecionada!\nAgora escolha para qual unidade você "
             "deseja converter:\n",
             opcao_uni);
      printf("a) Segundos → Minutos\nb) Segundos → Hora\n\n");
  
      do { /* Validação */
        printf("Opção: ");
        scanf("%c", &opcao_uni_2);
        getchar();
        if (opcao_uni_2 != 'a' && opcao_uni_2 != 'b')
          printf("Resposta inválida!\n");
      } while (opcao_uni_2 != 'a' && opcao_uni_2 != 'b'); /* Fim da validação */
  
        switch (opcao_uni_2) {
            case 'a': { /* Centímetro */
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &segundos);
        
              m_minutos = segundos / 60;
        
              printf("Resultado \n");
              printf("\t%d segundos ---> %d minutos", segundos, m_minutos);
            } /* Fim do case a */
            break;
        
            case 'b': { /* Quilômetro */
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &segundos);
        
              h_horas = segundos / 3600;
        
              printf("Resultado \n");
              printf("\t%d segundos ---> %d horas", segundos, h_horas);
            } /* Fim do case b */
        
            default:
              printf("Valor inválido!");
      } /* Fim do switch opcao_uni_2 */ 
  }   /* Fim do case 1 */ /* Segundos */
    break;

    case 2: {
      printf("\n\t\t**************************\n");
      printf("\nOpção %d selecionada!\nAgora escolha para qual unidade você "
             "deseja converter:\n",
             opcao_uni);
      printf("a) Minutos → Segundo\nb) Minutos → Hora\n\n");
  
      do { /* Validação */
        printf("Opção: ");
        scanf("%c", &opcao_uni_2);
        getchar();
        if (opcao_uni_2 != 'a' && opcao_uni_2 != 'b')
          printf("Resposta inválida!\n");
      } while (opcao_uni_2 != 'a' && opcao_uni_2 != 'b'); /* Fim da validação */
      
       switch (opcao_uni_2) {
            case 'a': { /* Centímetro */
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &minutos);
        
              s_segundo = minutos * 60;
        
              printf("Resultado \n");
              printf("\t%d minutos ---> %d segundos", minutos, s_segundo);
            } /* Fim do case a */
            break;
        
            case 'b': { /* Quilômetro */
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &minutos);
        
              h_horas = minutos / 60;
        
              printf("Resultado \n");
              printf("\t%d segundos ---> %d horas", minutos, h_horas);
            } /* Fim do case b */
        
            default:
              printf("Valor inválido!");
      } /* Fim do switch opcao_uni_2 */
    } /* Fim do case 2 */ /* Minutos */
    break;

    case 3: {
      printf("\n\t\t**************************\n");
      printf("\nOpção %d selecionada!\nAgora escolha para qual unidade você "
             "deseja converter:\n",
             opcao_uni);
      printf("a) Horas → Segundos\nb) Horas → Minutos\nc) Horas → Dias\n\n");
  
      do { /* Validação */
        printf("Opção: ");
        scanf("%c", &opcao_uni_2);
        getchar();
        if (opcao_uni_2 != 'a' && opcao_uni_2 != 'b' && opcao_uni_2 != 'c')
          printf("Resposta inválida!\n");
      } while (opcao_uni_2 != 'a' && opcao_uni_2 != 'b' && opcao_uni_2 != 'c'); /* Fim da validação */

      switch (opcao_uni_2) {
            case 'a': {
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &horas);
        
              s_segundo = horas * 3600;
        
              printf("Resultado \n");
              printf("\t%d horas ---> %d segundos", horas, s_segundo);
            } /* Fim do case a */
            break;
        
            case 'b': {
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &horas);
        
              m_minutos = horas * 60;
        
              printf("Resultado \n");
              printf("\t%d horas ---> %d minutos", horas, m_minutos);
            } /* Fim do case b */
            break;

            case 'c':{
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &horas);
    
              d_dias = horas /24;
    
              printf("Resultado \n");
              printf("\t%d horas ---> %d minutos", horas, d_dias);
            }/* Fim do case c */
            break;
            
            default:
              printf("Valor inválido!");
          } /* Fim do switch opcao_uni_2 */
      } /* Fim do case 3 */ /* Horas */
      break;

    case 4: {
      printf("\n\t\t**************************\n");
      printf("\nOpção %d selecionada!\nAgora escolha para qual unidade você "
             "deseja converter:\n",
             opcao_uni);
      printf("a) Dia → Hora\nb) Dia → Semana\nc) Dia → Mês\n d) Dia → ano-calendário\n\n");
  
      do { /* Validação */
        printf("Opção: ");
        scanf("%c", &opcao_uni_2);
        getchar();
        if (opcao_uni_2 != 'a' && opcao_uni_2 != 'b' && opcao_uni_2 != 'c' && opcao_uni_2 != 'd')
          printf("Resposta inválida!\n");
      } while (opcao_uni_2 != 'a' && opcao_uni_2 != 'b' && opcao_uni_2 != 'c' && opcao_uni_2 !='d'); /* Fim da validação */
      switch (opcao_uni_2) {
            case 'a': {
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &dias);
        
              h_horas = dias * 24;
        
              printf("Resultado \n");
              printf("\t%d dias ---> %d horas", dias, h_horas);
            } /* Fim do case a */
            break;
        
            case 'b': {
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &dias);
        
              s_semana = dias / 7;
        
              printf("Resultado \n");
              printf("\t%d dias ---> %d semanas", dias, s_semana);
            } /* Fim do case b */
            break;

            case 'c':{
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &dias);
        
              m_mes = dias /30.417;
        
              printf("Resultado \n");
              printf("\t%d dias ---> %d meses", dias, m_mes);
            }/* Fim do case c */
            break;

            case 'd':{
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &dias);
        
              a_ano = dias / 365;
        
              printf("Resultado \n");
              printf("\t%d dias ---> %d anos", dias, a_ano);
            } /* Fim do case d*/
            break;
            
            default:
              printf("Valor inválido!");
          } /* Fim do switch opcao_uni_2 */
    } /* Fim do case 4 */ /* Dias */
    break;

    case 5: {
      printf("\n\t\t**************************\n");
      printf("\nOpção %d selecionada!\nAgora escolha para qual unidade você "
             "deseja converter:\n",
             opcao_uni);
      printf("a) Semana → Dia\nb) Semana → Mês\nc) Semana → Ano-calendário\n\n");
  
      do { /* Validação */
        printf("Opção: ");
        scanf("%c", &opcao_uni_2);
        getchar();
        if (opcao_uni_2 != 'a' && opcao_uni_2 != 'b' && opcao_uni_2 != 'c')
          printf("Resposta inválida!\n");
      } while (opcao_uni_2 != 'a' && opcao_uni_2 != 'b' && opcao_uni_2 != 'c'); /* Fim da validação */

      switch (opcao_uni_2) {
            case 'a': {
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &semana);
        
              d_dias = semana * 7;
        
              printf("Resultado \n");
              printf("\t%d semanas ---> %d dias", semana, d_dias);
            } /* Fim do case a */
            break;
        
            case 'b': {
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &semana);
        
              m_mes = semana / 4.345;
        
              printf("Resultado \n");
              printf("\t%d semanas ---> %d meses", semana, m_mes);
            } /* Fim do case b */
            break;

            case 'c':{
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &semana);
        
              a_ano = semana / 52.143;
        
              printf("Resultado \n");
              printf("\t%d semanas ---> %d anos", semana, a_ano);
            }/* Fim do case c */
            break;
            
            default:
              printf("Valor inválido!");
          } /* Fim do switch opcao_uni_2 */
    } /* Fim do case 5 */ /* Semana */
    break;

    case 6: {
      printf("\n\t\t**************************\n");
      printf("\nOpção %d selecionada!\nAgora escolha para qual unidade você "
             "deseja converter:\n",
             opcao_uni);
      printf("a) Mês → Dia\nb) Mês → Semana\nc) Mês → Ano-calendário\n\n");
  
      do { /* Validação */
        printf("Opção: ");
        scanf("%c", &opcao_uni_2);
        getchar();
        if (opcao_uni_2 != 'a' && opcao_uni_2 != 'b' && opcao_uni_2 != 'c')
          printf("Resposta inválida!\n");
      } while (opcao_uni_2 != 'a' && opcao_uni_2 != 'b' && opcao_uni_2 != 'c'); /* Fim da validação */

      switch (opcao_uni_2) {
            case 'a': {
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &mes);
        
              d_dias = mes * 30.417;
        
              printf("Resultado \n");
              printf("\t%d meses ---> %d dias", mes, d_dias);
            } /* Fim do case a */
            break;
        
            case 'b': {
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &mes);
        
              s_semana = mes * 4.345;
        
              printf("Resultado \n");
              printf("\t%d meses ---> %d semanas", mes, s_semana);
            } /* Fim do case b */
            break;

            case 'c':{
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &mes);
        
              a_ano = mes / 12;
        
              printf("Resultado \n");
              printf("\t%d meses ---> %d anos", mes, a_ano);
            }/* Fim do case c */
            break;
            
            default:
              printf("Valor inválido!");
          } /* Fim do switch opcao_uni_2 */
    } /* Fim d case 6 */ /* Mês */
    break;

    case 7: {
      printf("\n\t\t**************************\n");
      printf("\nOpção %d selecionada!\nAgora escolha para qual unidade você "
             "deseja converter:\n",
             opcao_uni);
      printf("a) Ano-calendário → Dia\nb) Ano-calendário → Semana\nc) Ano-calendário → Mês\n\n");
  
      do { /* Validação */
        printf("Opção: ");
        scanf("%c", &opcao_uni_2);
        getchar();
        if (opcao_uni_2 != 'a' && opcao_uni_2 != 'b' && opcao_uni_2 != 'c')
          printf("Resposta inválida!\n");
      } while (opcao_uni_2 != 'a' && opcao_uni_2 != 'b' && opcao_uni_2 != 'c'); /* Fim da validação */

      switch (opcao_uni_2) {
            case 'a': {
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &ano);
        
              d_dias = ano *365;
        
              printf("Resultado \n");
              printf("\t%d anos ---> %d dias", ano, d_dias);
            } /* Fim do case a */
            break;
        
            case 'b': {
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &ano);
        
              s_semana = ano * 52.143;
        
              printf("Resultado \n");
              printf("\t%d anos ---> %d semanas", ano, s_semana);
            } /* Fim do case b */
            break;

            case 'c':{
              printf("\n\t\t**************************\n");
              printf("Opção '%c' selecionada!\n", opcao_uni_2);
              printf("Por favor, insira o valor abaixo.\n\n");
              printf("Valor: ");
              scanf("%d", &ano);
        
              m_mes = ano * 12;
        
              printf("Resultado \n");
              printf("\t%d anos ---> %d meses", ano, m_mes);
            }/* Fim do case c */
            break;
            
            default:
              printf("Valor inválido!");
          } /* Fim do switch opcao_uni_2 */
    } /* Fim do case 7 */ /* Ano */
    break;

    default:    
    printf("Valor inválido!");
    
    } /* Fim do switch opcao_uni */    
} /* Fim da função tempo */

int main() { 
  int opcao;
  
  printf("Bem-vindo a calculadora de conversão!\nEscolha abaixo opção desejada:\n");
  printf("1) Comprimento\n2) Volume\n3) Velocidade\n4) Massa\n5) Temperatura\n6) Tempo\n\n");
  printf("Opção: ");
  scanf("%d", &opcao);

  switch (opcao){
    case 1: {
      printf("Opção selecionada!\n\n");
      printf(" ******************************************\n");
      comprimento();
    }
    break;

    case 2: {
      printf("Opção selecionada!\n\n");
      printf(" ***************************************\n");
      volume();
    }
    break;

    case 3: {
      printf("Opção selecionada!\n\n");
      printf(" ***************************************\n");
      velocidade();
    }
    break;

    case 4:{
      printf("Opção selecionada!\n\n");
      printf(" ***************************************\n");
      massa();
    }
    break;

    case 5:{
      printf("Opção selecionada!\n\n");
      printf(" ***************************************\n");
      temperatura();
    }
    break;

    case 6:{
      printf("Opção selecionada!\n\n");
      printf(" ***************************************\n");
      tempo();
    }
    break;

    default:
    printf("Valor inválido!");
  } /* Fim do switch opcao */
}