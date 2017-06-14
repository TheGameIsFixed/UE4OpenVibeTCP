#include "UE4OpenVibeTCP.h"
#include "Socket.h"

bool USocket::SetSocket(FSocket* Socket)
{
	_Socket = Socket;
	return false;
}

FSocket* USocket::GetSocket()
{
	return _Socket;
}
