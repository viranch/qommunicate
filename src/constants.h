#ifndef QOM_CONSTANTS
#define QOM_CONSTANTS

const int INT_VERSION=1;

const int UDP_PORT = 2425;

const int QOM_NOOPERATION=0x00000000;
const int QOM_BR_ENTRY=	0x00000001;
const int QOM_BR_EXIT=	0x00000002;
const int QOM_ANSENTRY=	0x00000003;
const int QOM_BR_ABSENCE=	0x00000004;

const int QOM_BR_ISGETLIST=	0x00000010;
const int QOM_OKGETLIST=		0x00000011;
const int QOM_GETLIST=		0x00000012;
const int QOM_ANSLIST=		0x00000013;
const int QOM_BR_ISGETLIST2=	0x00000018;

const int QOM_SENDMSG=		0x00000020;
const int QOM_RECVMSG=		0x00000021;
const int QOM_READMSG=		0x00000030;
const int QOM_DELMSG=		0x00000031;
const int QOM_ANSREADMSG=	0x00000032;

const int QOM_GETINFO=		0x00000040;
const int QOM_SENDINFO=		0x00000041;

const int QOM_GETABSENCEINFO=0x00000050;
const int QOM_SENDABSENCEINFO=0x00000051;

const int QOM_GETFILEDATA=	0x00000060;
const int QOM_RELEASEFILES=	0x00000061;
const int QOM_GETDIRFILES=	0x00000062;

const int QOM_GETPUBKEY=		0x00000072;
const int QOM_ANSPUBKEY=		0x00000073;

const int QOM_ABSENCEOPT=	0x00000100;
const int QOM_SERVEROPT=		0x00000200;
const int QOM_DIALUPOPT=		0x00010000;
const int QOM_FILEATTACHOPT=	0x00200000;
const int QOM_ENCRYPTOPT=	0x00400000;

const int QOM_SENDCHECKOPT=	0x00000100;
const int QOM_SECRETOPT=		0x00000200;
const int QOM_BROADCASTOPT=	0x00000400;
const int QOM_MTICASTOPT=	0x00000800;
const int QOM_NOPOPUPOPT=	0x00001000;
const int QOM_AUTORETOPT=	0x00002000;
const int QOM_RETRYOPT=		0x00004000;
const int QOM_PASSWORDOPT=	0x00008000;
const int QOM_NOLOGOPT=		0x00020000;
const int QOM_NEWMUTIOPT=	0x00040000;
const int QOM_NOADDLISTOPT=	0x00080000;
const int QOM_READCHECKOPT=	0x00100000;
const int QOM_SECRETEXOPT=	(QOM_READCHECKOPT|QOM_SECRETOPT);

const int QOM_RSA_512=		0x00000001;
const int QOM_RSA_1024=		0x00000002;
const int QOM_RSA_2048=		0x00000004;
const int QOM_RC2_40=		0x00001000;
const int QOM_RC2_128=		0x00004000;
const int QOM_RC2_256=		0x00008000;
const int QOM_BLOWFISH_128=	0x00020000;
const int QOM_BLOWFISH_256=	0x00040000;
const int QOM_SIGN_MD5=		0x10000000;

const int QOM_RC2_40OLD=		0x00000010	;
const int QOM_RC2_128OLD=	0x00000040	;
const int QOM_BLOWFISH_128OLD=0x00000400	;
const int QOM_RC2_40ALL=		(QOM_RC2_40|QOM_RC2_40OLD);
const int QOM_RC2_128ALL=	(QOM_RC2_128|QOM_RC2_128OLD);
const int QOM_BLOWFISH_128ALL=(QOM_BLOWFISH_128|QOM_BLOWFISH_128OLD);

const int QOM_FILE_REGULAR=	0x00000001;
const int QOM_FILE_DIR=		0x00000002;
const int QOM_FILE_RETPARENT=0x00000003	;
const int QOM_FILE_SYMLINK=	0x00000004;
const int QOM_FILE_CDEV=		0x00000005	;
const int QOM_FILE_BDEV=		0x00000006	;
const int QOM_FILE_FIFO=		0x00000007	;
const int QOM_FILE_RESFORK=	0x00000010	;

const int QOM_FILE_RONLYOPT=	0x00000100;
const int QOM_FILE_HIDDENOPT=0x00001000;
const int QOM_FILE_EXHIDDENOPT=0x00002000	;
const int QOM_FILE_ARCHIVEOPT=0x00004000;
const int QOM_FILE_SYSTEMOPT=0x00008000;

const int QOM_FILE_UID=		0x00000001;
const int QOM_FILE_USERNAME=	0x00000002	;
const int QOM_FILE_GID=		0x00000003;
const int QOM_FILE_GROUPNAME=0x00000004	;
const int QOM_FILE_PERM=		0x00000010	;
const int QOM_FILE_MAJORNO=	0x00000011	;
const int QOM_FILE_MINORNO=	0x00000012	;
const int QOM_FILE_CTIME=	0x00000013	;
const int QOM_FILE_MTIME=	0x00000014;
const int QOM_FILE_ATIME=	0x00000015;
const int QOM_FILE_CREATETIME=0x00000016;
const int QOM_FILE_CREATOR=	0x00000020	;
const int QOM_FILE_FILETYPE=	0x00000021	;
const int QOM_FILE_FINDERINFO=0x00000022	;
const int QOM_FILE_ACL=		0x00000030;
const int QOM_FILE_ALIASFNAME=0x00000040	;
const int QOM_FILE_UNICODEFNAME=0x00000041	;

const char QOM_FILELIST_SEPARATOR='\a';
const char QOM_HOSTLIST_SEPARATOR='\a';
const char QOM_HOSTLIST_DUMMY=	'\b';

const int QOM_TIMEOUT = 10000;
const int QOM_FILE_WRITE_SIZE = 1024;
const int QOM_COMMAND_MASK = 255;
#endif