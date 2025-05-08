#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>

typedef struct{
	char host[32];
	int port, mysock, conect;
}Servidor;

void clean_buffer()
{
	int c;
	while((c = getchar()), c != '\n' && c != EOF);
}

int main(void)
{
	Servidor server;
	struct sockaddr_in alvo;

	printf("HOST: ");
	fgets(server.host, sizeof(server.host), stdin);
	server.host[strcspn(server.host, "\n")] = 0;

	printf("PORT: ");
	scanf("%d", &server.port);
	clean_buffer();

	server.mysock = socket(AF_INET, SOCK_STREAM, 0);
	if(server.mysock <= -1)
	{
		printf("Erro ao criar socket.");
		close(server.mysock);
		return 1;
	}

	alvo.sin_family = AF_INET;
	alvo.sin_addr.s_addr = inet_addr(server.host);
	alvo.sin_port = htons(server.port);
	server.conect = connect(server.mysock, (struct sockaddr *)&alvo, sizeof(alvo));
	if(server.conect == 0)
	{
		printf("Porta %d Aberta.\n", server.port);
		close(server.mysock);
		return 1;
	}
	else
	{
		printf("Porta %d Fechada.\n", server.port);
		close(server.mysock);
		return 1;
	}
	return 0;
}
