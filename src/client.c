#include <string.h>
#include <stdlib.h>
#include <cnik/client.h>

struct Client *clientCreate(const char *nickname, const  char *username, void *channels, const char *server, short unsigned  int port)
{
	struct Client *c = malloc(sizeof(struct Client));
	
	memset(c,0,sizeof(struct Client));

	if(c)
	{
		strncpy(c->nickname, nickname, 64);
		strncpy(c->username, username, 64);
		strncpy(c->server, server, 64);
		c->port = port;
	}

	return c;
}

void clientDestroy(struct Client *client)
{
	/* TODO:  Make some fun stuff here */

}

void clientConnect(struct Client *client)
{
	/* TODO:  Make other fun stuff here */
}

void clientDisconnect(struct Client *client, const char *message)
{
	/* TODO:  Some stuff */
}

void clientPart(struct Client *client, const char *channel)
{
	/* TODO:  I need to learn how to code */
}

void clientJoin(struct Client *client, const char *channel, const char *password)
{
	/* TODO:  Is this done yet? */
}

void clientSetNick(struct Client *client, const char *nickname)
{
	strncpy(client->nickname, nickname, 64);
}

void clientSetServer(struct Client *client, const char *server)
{
	strncpy(client->server, server, 64);
}

void clientSetUsername(struct Client *client, const char *username)
{
	strncpy(client->username, username, 64);
}

void clientSetPort(struct Client *client, short unsigned int port)
{
	client->port = port;
}
