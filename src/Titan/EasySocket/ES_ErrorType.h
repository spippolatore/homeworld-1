#ifndef ES_ERRORTYPE_H
#define ES_ERRORTYPE_H

#include <limits.h>

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
/*
  enum ES_ErrorType
    These errors include all of the winsock errors as well as additional 
    WONMisc Socket errors.
*/
namespace WONMisc {

enum ES_ErrorType {
	ES_NO_ERROR = 0,
	ES_ERROR_NO_TYPE = -100,
	ES_INVALID_ADDR = -101,
	ES_INVALID_SOCKET = -102,
	ES_INCOMPLETE_SEND = -103,
	ES_INCOMPLETE_RECV = -104,
	ES_DISCONNECTED = -105,
	ES_TMSG_TOO_LARGE = -106,
	ES_WRONG_TSERVICE = -107,
	ES_WRONG_TMESSAGE = -108,
	ES_INVALID_TMSG = -109,
	ES_PARTIAL_SENDTO = -110,
	ES_TIMED_OUT = -111,
	ES_ERROR_STREAM_NOT_ALLOWED = -112,
	ES_ERROR_DATAGRAM_NOT_ALLOWED = -113,
	ES_SHUTDOWN = -114,
	ES_UNKNOWN_ERROR = -115,

	ES_UNEXPECTED_ENCRYPTED_MESSAGE = -116,
	ES_SESSIONID_MISMATCH = -117,
	ES_DECRYPT_FAILURE = -118,
	ES_SEQUENCE_NUM_MISMATCH = -119,
	ES_GET_PUB_KEY_FAILURE = -120,
	ES_AUTH_INVALID_REPLY = -121,
	ES_NEED_CERTIFICATE = -122,

#ifdef WIN32
	ES_WSAEINTR = WSAEINTR,
	ES_WSAEBADF = WSAEBADF,
	ES_WSAEACCES = WSAEACCES,
	ES_WSAEFAULT = WSAEFAULT, 
	ES_WSAEINVAL = WSAEINVAL,  
	ES_WSAEMFILE = WSAEMFILE, 

	ES_WSAEWOULDBLOCK = WSAEWOULDBLOCK,         
	ES_WSAEINPROGRESS = WSAEINPROGRESS,
	ES_WSAEALREADY = WSAEALREADY,
	ES_WSAENOTSOCK = WSAENOTSOCK,
	ES_WSAEDESTADDRREQ = WSAEDESTADDRREQ,
	ES_WSAEMSGSIZE = WSAEMSGSIZE,
	ES_WSAEPROTOTYPE = WSAEPROTOTYPE,
	ES_WSAENOPROTOOPT = WSAENOPROTOOPT,         
	ES_WSAEPROTONOSUPPORT = WSAEPROTONOSUPPORT,
	ES_WSAESOCKTNOSUPPORT = WSAESOCKTNOSUPPORT,
	ES_WSAEOPNOTSUPP = WSAEOPNOTSUPP,
	ES_WSAEPFNOSUPPORT = WSAEPFNOSUPPORT,
	ES_WSAEAFNOSUPPORT = WSAEAFNOSUPPORT,
	ES_WSAEADDRINUSE = WSAEADDRINUSE,
	ES_WSAEADDRNOTAVAIL = WSAEADDRNOTAVAIL,
	ES_WSAENETDOWN = WSAENETDOWN,	

	ES_WSAENETUNREACH = WSAENETUNREACH,
	ES_WSAENETRESET = WSAENETRESET,           
	ES_WSAECONNABORTED = WSAECONNABORTED,        
	ES_WSAECONNRESET = WSAECONNRESET,    
	ES_WSAENOBUFS = WSAENOBUFS,       
	ES_WSAEISCONN = WSAEISCONN,           
	ES_WSAENOTCONN = WSAENOTCONN,           
	ES_WSAESHUTDOWN = WSAESHUTDOWN,          
	ES_WSAETOOMANYREFS = WSAETOOMANYREFS,        
	ES_WSAETIMEDOUT = WSAETIMEDOUT,          
	ES_WSAECONNREFUSED = WSAECONNREFUSED,      
	ES_WSAELOOP = WSAELOOP,              
	ES_WSAENAMETOOLONG = WSAENAMETOOLONG,      
	ES_WSAEHOSTDOWN = WSAEHOSTDOWN,          
	ES_WSAEHOSTUNREACH = WSAEHOSTUNREACH,       
	ES_WSAENOTEMPTY = WSAENOTEMPTY,         
	ES_WSAEPROCLIM = WSAEPROCLIM,           
	ES_WSAEUSERS = WSAEUSERS,             
	ES_WSAEDQUOT =  WSAEDQUOT,            
	ES_WSAESTALE =  WSAESTALE,            
	ES_WSAEREMOTE = WSAEREMOTE,            

	ES_WSASYSNOTREADY = WSASYSNOTREADY,        
	ES_WSAVERNOTSUPPORTED = WSAVERNOTSUPPORTED,    
	ES_WSANOTINITIALISED = WSANOTINITIALISED,    
	ES_WSAEDISCON = WSAEDISCON,            
#else
	ES_WSAEINTR = EINTR,
	ES_WSAEBADF = EBADF,
	ES_WSAEACCES = EACCES,
	ES_WSAEFAULT = EFAULT, 
	ES_WSAEINVAL = EINVAL,  
	ES_WSAEMFILE = EMFILE, 

	ES_WSAEWOULDBLOCK = EWOULDBLOCK,         
	ES_WSAEINPROGRESS = EINPROGRESS,
	ES_WSAEALREADY = EALREADY,
	ES_WSAENOTSOCK = ENOTSOCK,
	ES_WSAEDESTADDRREQ = EDESTADDRREQ,
	ES_WSAEMSGSIZE = EMSGSIZE,
	ES_WSAEPROTOTYPE = EPROTOTYPE,
	ES_WSAENOPROTOOPT = ENOPROTOOPT,         
	ES_WSAEPROTONOSUPPORT = EPROTONOSUPPORT,
	ES_WSAESOCKTNOSUPPORT = ESOCKTNOSUPPORT,
	ES_WSAEOPNOTSUPP = EOPNOTSUPP,
	ES_WSAEPFNOSUPPORT =EPFNOSUPPORT,
	ES_WSAEAFNOSUPPORT = EAFNOSUPPORT,
	ES_WSAEADDRINUSE = EADDRINUSE,
	ES_WSAEADDRNOTAVAIL = EADDRNOTAVAIL,
	ES_WSAENETDOWN = ENETDOWN,	

	ES_WSAENETUNREACH = ENETUNREACH,
	ES_WSAENETRESET = ENETRESET,           
	ES_WSAECONNABORTED = ECONNABORTED,        
	ES_WSAECONNRESET = ECONNRESET,    
	ES_WSAENOBUFS = ENOBUFS,       
	ES_WSAEISCONN = EISCONN,           
	ES_WSAENOTCONN = ENOTCONN,           
	ES_WSAESHUTDOWN = ESHUTDOWN,          
	ES_WSAETOOMANYREFS = ETOOMANYREFS,        
	ES_WSAETIMEDOUT = ETIMEDOUT,          
	ES_WSAECONNREFUSED = ECONNREFUSED,      
	ES_WSAELOOP = ELOOP,              
	ES_WSAENAMETOOLONG = ENAMETOOLONG,      
	ES_WSAEHOSTDOWN = EHOSTDOWN,          
	ES_WSAEHOSTUNREACH = EHOSTUNREACH,       
//	ES_WSAENOTEMPTY = WSAENOTEMPTY,         
//	ES_WSAEPROCLIM = WSAEPROCLIM,           
//	ES_WSAEUSERS = WSAEUSERS,             
//	ES_WSAEDQUOT =  WSAEDQUOT,            
//	ES_WSAESTALE =  WSAESTALE,            
//	ES_WSAEREMOTE = WSAEREMOTE,            

//	ES_WSAEDISCON = WSAEDISCON,            
	ES_WSAHOST_NOT_FOUND = HOST_NOT_FOUND,     
#endif // WIN32

#ifdef _USE_WINSOCK2_
	ES_WSAENOMORE = WSAENOMORE,            
	ES_WSAECANCELLED = WSAECANCELLED,         
	ES_WSAEINVALIDPROCTABLE = WSAEINVALIDPROCTABLE,  
	ES_WSAEINVALIDPROVIDER = WSAEINVALIDPROVIDER,  
	ES_WSAEPROVIDERFAILEDINIT = WSAEPROVIDERFAILEDINIT,
	ES_WSASYSCALLFAILURE = WSASYSCALLFAILURE,     
	ES_WSASERVICE_NOT_FOUND = WSASERVICE_NOT_FOUND,  
	ES_WSATYPE_NOT_FOUND = WSATYPE_NOT_FOUND,     
	ES_WSAHOST_NOT_FOUND = WSAHOST_NOT_FOUND,     
	ES_WSA_E_NO_MORE = WSA_E_NO_MORE,         
	ES_WSA_E_CANCELLED = WSA_E_CANCELLED,       
	ES_WSAEREFUSED = WSAEREFUSED           
#endif // _USE_WINSOCK2_

	// Titan Server Status
	ES_StatusCommon_Failure					= -1,
	ES_StatusCommon_NotAvailable			= -2,
	ES_StatusCommon_NotAllowed				= -3,
	ES_StatusCommon_InvalidParameters		= -4,
	ES_StatusCommon_AlreadyExists			= -5,
	ES_StatusCommon_MessageExceedsMax		= -6,
	ES_StatusCommon_InvalidMessage			= -7,
	ES_StatusCommon_NotAuthorized			= -8,
	ES_StatusCommon_ResourcesLow			= -9,
	ES_StatusCommon_NoPortAvailable			= -10,
	ES_StatusCommon_TimedOut				= -11,
	ES_StatusCommon_NotSupported			= -12,
	ES_StatusCommon_DecryptionFailed      	= -13,
	ES_StatusCommon_InvalidSessionId      	= -14,
	ES_StatusCommon_InvalidSequenceNumber 	= -15,


    ES_StatusAuth_ExpiredKey				= -1500, 
    ES_StatusAuth_VerifyFailed				= -1501,
	ES_StatusAuth_LockedOut					= -1502,
	ES_StatusAuth_KeyInUse					= -1503,
	ES_StatusAuth_CRCFailed					= -1504,
    ES_StatusAuth_UserExists				= -1505,
    ES_StatusAuth_UserNotFound				= -1506,
    ES_StatusAuth_BadPassword				= -1507,
    ES_StatusAuth_DirtyWord					= -1508,
    ES_StatusAuth_InvalidName				= -1509,
	ES_StatusAuthFailureEnd					= -1510

};

}; // namespace WONMisc

#endif // ES_ERRORTYPE_H
