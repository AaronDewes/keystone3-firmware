#ifndef _GUI_XRP_H
#define _GUI_XRP_H

#include "rust.h"

char *GuiGetXrpPath(uint16_t index);
PtrT_TransactionCheckResult GuiGetXrpCheckResult(void);
char *GuiGetXrpAddressByIndex(uint16_t index);
void GuiSetXrpUrData(void *data, bool multi);
void *GuiGetXrpData(void);
void FreeXrpMemory(void);
int GetXrpDetailLen(void *param);
void GetXrpDetail(void *indata, void *param);
UREncodeResult *GuiGetXrpSignQrCodeData(void);

#endif
