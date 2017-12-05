/*
   This file has been generated by IDA.
   It contains local type definitions from
   libduml_frwk.idb
*/

#define __int8 char
#define __int16 short
#define __int32 int
#define __int64 long long

struct mb_client_t;
struct route_link_t;

/* 1 */
struct CUDTSocket;

/* 2 */
struct CUDTUnited;

/* 3 */
struct CUDT;

/* 4 */
struct UDT;

/* 5 */
struct CSndBuffer;

/* 6 */
struct CPktTimeWindow;

/* 7 */
struct CRcvBuffer;

/* 8 */
struct CRcvUList;

/* 9 */
struct CInfoBlock;

/* 10 */
struct CUDTCC;

/* 11 */
struct CCC;

/* 12 */
struct CPacket;

/* 13 */
struct CChannel;

/* 14 */
struct CUDTException;

/* 15 */
struct CTimer;

/* 16 */
struct CGuard;

/* 17 */
struct CIPAddress;

/* 18 */
struct CHandShake;

/* 19 */
struct CUnitQueue;

/* 20 */
struct CSndUList;

/* 21 */
struct CSndQueue;

/* 22 */
struct CHash;

/* 23 */
struct CRcvQueue;

/* 24 */
struct CACKWindow;

/* 25 */
struct CSndLossList;

/* 26 */
struct CRcvLossList;

/* 27 */
struct std::bad_exception;

/* 28 */
struct __cxxabiv1::__forced_unwind;

/* 29 */
struct __cxxabiv1::__foreign_exception;

/* 30 */
struct std::bad_alloc;

/* 31 */
struct std::__exception_ptr::exception_ptr;

/* 32 */
struct std::bad_typeid;

/* 33 */
struct std::bad_cast;

/* 34 */
struct CMD5;

/* 35 */
struct CRendezvousQueue;

/* 36 */
struct __cxxabiv1::__class_type_info;

/* 37 */
struct __cxxabiv1::__vmi_class_type_info;

/* 38 */
struct __cxxabiv1::__si_class_type_info;

/* 39 */
struct CEPoll;

/* 41 */
#pragma pack(push, 1)
struct client_t
{
  __int16 host_id;
  char gap_2[2];
  mb_client_t *mb_client;
  _DWORD msgq;
  int task;
  _DWORD wait_ack_mutex;
  _DWORD wait_ack_event;
  _BYTE gap18[640];
  _DWORD wait_ack_cnt;
  char exit_event_task;
  char gap_29D[3];
  int functions[21];
  int indexes[21];
  _DWORD unk;
};
#pragma pack(pop)

/* 42 */
#pragma pack(push, 1)
struct __attribute__((aligned(1))) msgq_msg_t
{
  _DWORD msg_id;
  unsigned __int16 to_from;
  uint16_t attrib;
  _WORD seq_id;
  char gap_A[2];
  _DWORD len;
  char data[4];
};
#pragma pack(pop)

/* 43 */
#pragma pack(push, 1)
struct __attribute__((aligned(1))) route_item_t
{
  _BYTE status;
  char target[17];
  _WORD index;
  _BYTE channel_idx;
  _BYTE distance;
  _BYTE protocol_idx;
  _BYTE channel_specific_data[21];
  _DWORD filter_size;
  _DWORD filters;
};
#pragma pack(pop)

/* 44 */
#pragma pack(push, 1)
struct func_tab_struc
{
  int function;
  int index;
};
#pragma pack(pop)

/* 49 */
#pragma pack(push, 1)
struct mb_msg_head_t
{
  int sof;
  unsigned __int16 target;
  uint16_t source;
  uint16_t seq_id;
  uint16_t attrib;
  int msg_id;
  uint16_t size;
};
#pragma pack(pop)

/* 51 */
struct cJSON
{
  struct cJSON *next;
  struct cJSON *prev;
  struct cJSON *child;
  int type;
  char *valuestring;
  int valueint;
  double valuedouble;
  char *string;
};

/* 52 */
#pragma pack(push, 1)
struct __attribute__((aligned(2))) routes_table_t
{
  _DWORD dword0;
  _DWORD routes_cnt;
  route_item_t *routes[128];
};
#pragma pack(pop)

/* 53 */
struct chnl_op_t
{
  char *name;
  void *checksame;
  void *create;
  void *destroy;
  void *send;
  void *recv;
};

/* 54 */
#pragma pack(push, 1)
struct __attribute__((aligned(2))) pack_opt_t
{
  char *name;
  unsigned int index;
  void *send;
  void *parse;
};
#pragma pack(pop)

/* 55 */
#pragma pack(push, 1)
struct prot_v1_head_t
{
  uint8_t sof;
  __int16 length_version;
  uint8_t crc8;
  uint8_t source;
  uint8_t target;
  uint16_t seq_id;
  uint8_t attrib;
  uint16_t msg_id;
};
#pragma pack(pop)

/* 56 */
#pragma pack(push, 1)
struct prot_v0_head_t
{
  uint8_t sof;
  __int16 length_version;
  uint8_t crc8;
};
#pragma pack(pop)

/* 57 */
#pragma pack(push, 1)
struct __attribute__((aligned(2))) mb_client_t
{
  uint16_t host_id;
  char gap_2[2];
  int (__cdecl *event_cb)(mb_client_t *mb_client, int from, int seq_id, unsigned int atrib, unsigned int msg_id, char *msg, unsigned int len, client_t *client);
  client_t *client;
  _DWORD filter_cb;
  client_t *client2;
  _DWORD route_table;
  int mb_locker_mutex;
  int task;
  char gap_20[132];
  _BYTE byteA4;
  char gap_A5[3];
  char route_channels_cnt;
  char gap_A9[3];
  void *route_channels[32];
  char route_link_cnt;
  char gap_12D[3];
  route_link_t *route_links[64];
  routes_table_t routes_table;
};
#pragma pack(pop)

/* 58 */
#pragma pack(push, 1)
struct route_channel_t
{
  struct mb_client_t *mb_client;
  struct route_item_t *route_item;
  _DWORD protocol_cnt;
  int task;
  char gap_10[4];
  int tx_timer;
  int cb_timer;
  int dev;
  char gap_20[20];
  void *protocols[4];
  _DWORD some_idx;
  int out_idx;
  int input_idx;
  _DWORD recv_bytes;
  char char54;
};
#pragma pack(pop)

/* 59 */
#pragma pack(push, 1)
struct __attribute__((aligned(2))) route_link_t
{
  route_item_t *route_item;
  route_channel_t *route_channel;
  __int16 seq_id;
  char gap_A[2];
  int target_mutex;
  char gap_10[112];
  int field_80;
};
#pragma pack(pop)

/* 60 */
#pragma pack(push, 1)
struct __attribute__((aligned(2))) cmd_t
{
  int (__cdecl *recv_cb)(client_t *, msgq_msg_t *, void *);
  int (__cdecl *ack_cb)(client_t *, msgq_msg_t *, void *);
  unsigned int attrib;
};
#pragma pack(pop)

/* 61 */
#pragma pack(push, 1)
struct __attribute__((aligned(2))) struct_a1
{
  _BYTE gap0[4];
  _DWORD codec;
  void *prot;
  void *dev;
  _BYTE gap10[4];
  _DWORD prot_ops;
  _DWORD dev_ops;
  _DWORD wp_ops;
  char *device_name;
  char gap_24[14];
  _BYTE input_fmt;
  _BYTE output_fmt;
  _BYTE gap34[23];
  _BYTE prot_type;
};
#pragma pack(pop)

