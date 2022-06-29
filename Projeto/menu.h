void menu(){
    
    int escolha=0;
    printf("\n____________________________\n");
    printf("\n|      Oque deseja ver?    |\n");
    printf("\n|--------------------------|\n");
    printf("\n|(1)|   Lista de Treino    |\n");
    printf("\n|(2)|  Ficha de nutricao   |\n");
    printf("\n|(3)|  Lista de contatos   |\n");
    printf("\n|(4)|  Dados do usuario    |\n");
    printf("\n|(0)|    SAIR DO MENU      |\n");
    printf("\n|__________________________|\n");
    scanf("%d",&escolha);
    /*if ((escolha!=1) && (escolha!=2) && (escolha!=3) && (escolha!=4) && (escolha!=0))
    {
        printf("\nEste valor e invalido!");
        goto menu;
    }*/
        return escolha;
}