#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <wchar.h>

int main(){
    short int i = 0;
    short int j = 0;
    short int k = 0;
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
    setlocale(LC_ALL, "");
    if(f==NULL){
        puts("Ih, rapaz, deu merda, vou sair.");
        exit(1);
    }
    puts("\t\t\t\tSimSemen v3.0\n\n\t\t\t\t\t\t   Produzido por: TheTrojahn\n\n\tUma distribuição Herbert Richards.\n\nOlá, este é um jogo onde você pergunta e o SimSemen responde, deveras divertido, não é mesmo?\n\nVamos lá, pergunte alguma coisa.\n\nDigite sair para sair.\nDigite help para ajuda.\nDigite ensinar para ensinar.\n");
    while(1){
        *(playerText +0) = '\0';
        *(buffer1 +0) = '\0';
        *(buffer2 +0) = '\0';
        *(buffer3 +0) = '\0';
        *(buffer4 +0) = '\0';
        wprintf("Sua pergunta: ");
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
            puts("Para o que vossa pessoa está a comentar em sua pergunta?");
            continue;
        }
        if((*(playerText + 0)=='e'||*(playerText + 0)=='E')&&(*(playerText + 1)=='n'||*(playerText + 1)=='N')&&(*(playerText + 2)=='s'||*(playerText + 2)=='S')&&(*(playerText + 3)=='i'||*(playerText + 3)=='I')&&(*(playerText + 4)=='n'||*(playerText + 4)=='N')&&(*(playerText + 5)=='a'||*(playerText + 5)=='A')&&(*(playerText + 6)=='r'||*(playerText + 6)=='R')&&(*(playerText + 7)=='\0')){
            printf("Regras para criação de perguntas e respostas:\nNão crie perguntas que conflitem com comandos! São eles: sair, cls, easter egg, ensinar e help.\nLembre-se que os comandos não são case sensitive. Não crie perguntas como SaIr, por exemplo.\nDuas barras são entendidas como comentários, portanto, não crie perguntas que comecem com //.\nLinhas que têm somente um enter são ignoradas pelo programa.\nA alteração de perguntas que já existem no arquivo só podem ser feitas manualmente.\nAgora estás a ensinar o SimSemen.\nPergunta: ");
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
                    puts("Já existe essa pergunta ou você fez um comentário ou ainda você não digitou nada.");
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
            fwprintf(f, L"P%s",buffer3);
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
            fwprintf(f, L"R%s\n\n", buffer4);
            rewind(f);
            puts("Pronto!");
            rewind(f);
            continue;
        }
        *(playerText + wcslen(playerText) + 1) = '\0';
        *(playerText + wcslen(playerText)) = '\n';
        do{
            if(fgetws(buffer1, 500, f)==NULL){
                printf("Nossa, nem sei o que dizer.\n\n");
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
                    printf("%c", *(buffer2 + i +1));
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
    system("pause >lixo.txt");
    system("del lixo.txt");
    return 0;
}
