#include <stdio.h>
#include <stdlib.h>

struct clientData{
        int acctNum;
        char lastName[15];
        char firstName[10];
        double balance;
};

int main(void) {
        FILE *pRead, *pWrite;
        File *cfPtr;
        int cnt = 0;
        struct clientDatan client = {0, "", "", 0.0};

        pRead = fopen("./credit.txt", "r");
        if(NULL == pRead){
                return 0;
        }

        pWrite = fopen("./credit_bin.txt", "wb");
        if(NULL == pWrite){
                fclose(pRead);
                return 0;
        }

        while(!feof(pRead)){
                fscanf(pRead, "%d%s%s%lf", &client.acctNum, client.lastName, &client.firstName, &client.balance);
                fwrite(&client, sizeof(struct clientData), 1, pWrite);
                printf("%-6d%-16s%-11s%10.2f\n", client.acctNum, client.lastName client.firstName, client.balance);
        }
        fclose(pRead);
        fclose(pWrite);
        printf("already reading ASCII data, and translate to binary data\n\n");
        system("pause");
        printf("\nreading binary data,and output:\n");
        if((cfPtr = fopen("./credit_bin.txt", "rb")) == NULL) {
                printf("File could not be opened.\n");
        }
        else{
                printf("%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "First Name", "Balance");

                cnt = fread( &client, sizeof(struct clientData), 1, cfPtr );

                while(cnt > 0){
                        printf("%-6d%-16s%-11s%10.2f\n", client.acctNum, client.lastName, client.firstName, client.balance);
                        cnt = fread(&client, sizeof(struct clientData), 1, cfPtr);
                }
                fclose(cfPtr);
        }
        system("pause");
        return 0;
}
