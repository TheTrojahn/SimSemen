#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <wchar.h>

int main(){
    unsigned short int i = 0;
    unsigned char j = 0;
    unsigned short int k = 0;
    wchar_t *playerText = malloc(501);
    wchar_t *buffer1 = malloc(501);
    wchar_t *buffer2 = malloc(501);
    wchar_t *buffer3 = malloc(501);
    wchar_t *buffer4 = malloc(501);
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 224);
    system("cls");
    FILE *f;
    f = fopen("SimSemen_Data.txt", "a+");
    system("MODE con cols=169 lines=57");
    system("title SimSemen 3.0");
    if(f==NULL){
        puts("Ih, rapaz, deu merda, vou sair.");
        exit(1);
    }
    printf("\t\t\t\tSimSemen v3.0\n\n\t\t\t\t\t\t   Produzido por: TheTrojahn\n\n\tUma distribui%c%co Herbert Richards.\n\nOl%c, este %c um jogo onde voc%c pergunta e o SimSemen responde, deveras divertido, n%co %c mesmo?\n\nVamos l%c, pergunte alguma coisa.\n\nDigite sair para sair.\nDigite help para ajuda.\nDigite ensinar para ensinar.\n", 135, 198, 160, 130, 136, 198, 130, 160);
    while(1){
        *(playerText +0) = '\0';
        *(buffer1 +0) = '\0';
        *(buffer2 +0) = '\0';
        *(buffer3 +0) = '\0';
        *(buffer4 +0) = '\0';
        printf("Sua pergunta: ");
        _getws(playerText);
        if((*(playerText + 0)=='s'||*(playerText + 0)=='S')&&(*(playerText + 1)=='a'||*(playerText + 1)=='A')&&(*(playerText + 2)=='i'||*(playerText + 2)=='I')&&(*(playerText + 3)=='r'||*(playerText + 3)=='R')&&(*(playerText + 4)=='\0'))
            break;
        if((*(playerText + 0)=='c'||*(playerText + 0)=='C')&&(*(playerText + 1)=='l'||*(playerText + 1)=='L')&&(*(playerText + 2)=='s'||*(playerText + 2)=='S')&&(*(playerText + 3)=='\0')){
            system("cls");
            continue;
        }
        if((*(playerText + 0)=='h'||*(playerText + 0)=='H')&&(*(playerText + 1)=='e'||*(playerText + 1)=='E')&&(*(playerText + 2)=='l'||*(playerText + 2)=='L')&&(*(playerText + 3)=='p'||*(playerText + 3)=='P')&&(*(playerText + 4)=='\0')){
            puts("Digite sair para sair.\nDigite cls para limpar a tela.\nDigite help para obter ajuda.");
            continue;
        }
        if((*(playerText + 0)=='e'||*(playerText + 0)=='E')&&(*(playerText + 1)=='a'||*(playerText + 1)=='A')&&(*(playerText + 2)=='s'||*(playerText + 2)=='S')&&(*(playerText + 3)=='t'||*(playerText + 3)=='T')&&(*(playerText + 4)=='e'||*(playerText + 4)=='E')&&(*(playerText + 5)=='r'||*(playerText + 5)=='R')&&(*(playerText + 6)==' ')&&(*(playerText + 7)=='e'||*(playerText + 7)=='E')&&(*(playerText + 8)=='g'||*(playerText + 8)=='G')&&(*(playerText + 9)=='g'||*(playerText + 9)=='G')&&(*(playerText + 10)=='\0')){
        puts("Nema vise easter egg. :/\n");
        continue;
        }
        if(*(playerText + 0)== '\0'){
            puts("Digite alguma coisa.");
            continue;
        }
        if(*(playerText + 0)=='/'&&*(playerText + 1)=='/'){
            printf("Para o que vossa pessoa est%c a comentar em sua pergunta?\n", 160);
            continue;
        }
        if((*(playerText + 0)=='e'||*(playerText + 0)=='E')&&(*(playerText + 1)=='n'||*(playerText + 1)=='N')&&(*(playerText + 2)=='s'||*(playerText + 2)=='S')&&(*(playerText + 3)=='i'||*(playerText + 3)=='I')&&(*(playerText + 4)=='n'||*(playerText + 4)=='N')&&(*(playerText + 5)=='a'||*(playerText + 5)=='A')&&(*(playerText + 6)=='r'||*(playerText + 6)=='R')&&(*(playerText + 7)=='\0')){
            printf("Regras para cria%c%co de perguntas e respostas:\nN%co crie perguntas que conflitem com comandos! S%co eles: sair, cls, easter egg, ensinar e help.\nLembre-se que os comandos n%co s%co case sensitive. N%co crie perguntas como SaIr, por exemplo.\nDuas barras s%co entendidas como coment%crios, portanto, n%co crie perguntas que comecem com //.\nLinhas que t%cm somente um enter s%co ignoradas pelo programa.\nA altera%c%co de perguntas que j%c existem no arquivo s%c podem ser feitas manualmente.\nAgora est%cs a ensinar o SimSemen.\nPergunta: ", 135, 198, 198, 198, 198, 198, 198, 198, 160, 198, 136, 198, 135, 198, 160, 162, 160);
            _getws(buffer3);
            *(buffer3 + wcslen(buffer3) + 1) = '\0';
            *(buffer3 + wcslen(buffer3)) = '\n';
            while(!(feof(f))){
                i = 0;
                if(*(buffer1 + wcslen(buffer1) + 1) != '\0')
                    *(buffer1 + wcslen(buffer1) + 1) = '\0';
                for(i=0;;i++){
                fgetws(buffer1, 500, f);
                if(*(buffer1 + 0)=='R')
                    continue;
                if(feof(f))
                    break;
                if(*(buffer1 + 1)=='\0' || (*(buffer1 + 0)=='/' && *(buffer1 + 1)=='/'))
                    continue;
                for(k = 0; k < wcslen(buffer1); k++)
                    *(buffer1 + k) = *(buffer1 + 1 +k);
                if(wcscmp(buffer3, buffer1) == 0){
                    rewind(f);
                    j = 1;
                    printf("J%c existe essa pergunta ou voc%c fez um coment%crio ou ainda voc%c n%co digitou nada.\n", 160, 136, 160, 136, 198);
                    break;
                }
                if(!(feof(f)))
                    continue;
                break;
                }
             if(j == 1)
                break;
            }
            if(j == 1)
                continue;
            rewind(f);
            *(buffer1 + 0) = '\0';
            fwprintf(f, L"P%ls",buffer3);
            rewind(f);
            printf("Resposta: ");
            _getws(buffer4);
            *(buffer4 + wcslen(buffer4) + 1) = '\0';
            *(buffer3 + wcslen(buffer3)) = '\n';
            while((fgetws(buffer2, 500, f))!= NULL){
                fgetws(buffer2, 500, f);
                if(*(buffer2 + wcslen(buffer2) + 1) != '\0')
                    *(buffer2 + wcslen(buffer2) + 1) = '\0';
                for(i=0;i<wcslen(buffer2);i++)
                *(buffer2 + i) = *(buffer2 + 1 +i);
                if((wcscmp(buffer4, buffer2) == 0) || *(buffer4 +0 ) == '\0' || (*(buffer4 + 0)=='/' && *(buffer4 + 1)=='/')){
                    rewind(f);
                    break;
                }
            }
            *(buffer2 + 0) = '\n';
            rewind(f);
            fwprintf(f, L"R%ls\n\n", buffer4);
            rewind(f);
            puts("Pronto!");
            rewind(f);
            continue;
        }
        *(playerText + wcslen(playerText) + 1) = '\0';
        *(playerText + wcslen(playerText)) = '\n';
        do{
            if(fgetws(buffer1, 500, f)==NULL){
                puts("Nossa, nem sei o que dizer.");
                rewind(f);
                break;
            }
            if((*(buffer1 + 1) == '/' && *(buffer1 + 1) == '/')||*(buffer1 + 0) == '\n')
                continue;
            if(*(buffer1+0)!='P')
                continue;
            for(i=0;i< wcslen(buffer1);i++)
                *(buffer1 + i) = *(buffer1 + 1 +i);
            if(wcscmp(buffer1, playerText)==0){
                fgetws(buffer2, 500, f);
                if(*(buffer2 + 0)=='\0'){
                    rewind(f);
                    continue;
                }
                printf("SimSemen: ");
                for(i=0;i<501;i++){
                    putwchar(*(buffer2 + i +1));
                    if(*(buffer2 + i + 1) == '\n')
                        break;
                }
                rewind(f);
                break;
            }
        }while(1);
        continue;
    }
    free(playerText);
    free(buffer1);
    free(buffer2);
    free(buffer3);
    free(buffer4);
    fclose(f);
    getchar();
    return 0;
}
