#ifndef _MULTIPART_H
#define _MULTIPART_H

#include "server.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    eStart = 0,
    eDataStart,
    eSubHeader,
    eDataBlock,
    eDataEnd,
    eTerminate,
} BlockType_t;

typedef struct {
    BlockType_t type;
    const char *data;
    int   length;
    void *context;
} BodyDataBlock_t;

typedef void (*BODY_DATABLOCK_CB)(BodyDataBlock_t *);

void setup_multipart(HTTPReqMessage *req, BODY_DATABLOCK_CB data_cb, void *data_context);

void attachment_block_debug(BodyDataBlock_t *);

#ifdef __cplusplus
}
#endif
#endif