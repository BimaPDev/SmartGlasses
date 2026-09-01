/* FUN_100cca3c @ 0x100cca3c */

void FUN_100cca3c(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_20;
  uint uStack_1c;
  
  local_20 = param_1;
  uStack_1c = param_2;
  puVar1 = (undefined1 *)FUN_100cc7d4();
  if (puVar1 == (undefined1 *)0x0) {
    local_20 = 0;
    uStack_1c = uStack_1c & 0xff000000;
    puVar1 = (undefined1 *)FUN_100cc7d4(0,&local_20);
    if (puVar1 == (undefined1 *)0x0) {
      FUN_100a5b78((DAT_100ccac0 - DAT_100ccac4) * 0x20 & 0xff00U | 0x1900011,DAT_100ccacc,
                   DAT_100ccac8);
      return;
    }
    *puVar1 = (char)param_1;
    FUN_10134778(puVar1 + 1,param_2);
  }
  uVar3 = (uint)*(ushort *)(puVar1 + 10);
  if (*(ushort *)(puVar1 + 8) == 0) {
    if (uVar3 == 0) {
      *(short *)(puVar1 + 8) = (short)param_3;
    }
    else {
LAB_100ccab2:
      if (param_4 <= uVar3) {
        return;
      }
    }
  }
  else {
    if (*(ushort *)(puVar1 + 8) <= param_3) goto LAB_100ccab2;
    *(short *)(puVar1 + 8) = (short)param_3;
    if (param_4 <= uVar3) goto LAB_100cca98;
  }
  *(short *)(puVar1 + 10) = (short)param_4;
LAB_100cca98:
  iVar2 = FUN_101331f8(*puVar1,puVar1 + 1);
  if (iVar2 != 0) {
    FUN_100cc894(puVar1);
  }
  return;
}

