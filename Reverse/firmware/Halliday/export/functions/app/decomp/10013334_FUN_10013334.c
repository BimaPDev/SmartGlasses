/* FUN_10013334 @ 0x10013334 */

void FUN_10013334(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_10013388;
  iVar1 = FUN_10012d08();
  if (iVar1 == 0) {
    if (*DAT_10013388 == iVar2) {
      iVar2 = *DAT_1001309c;
      iVar1 = *DAT_100130a0;
      if (-1 < (int)((uint)*(byte *)(iVar1 + 4) << 0x1b)) {
        *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) | 0x10;
      }
      if (*DAT_1001309c != iVar2) {
        iVar1 = FUN_1013cdc0();
      }
      FUN_10116500(iVar1 + 0x264,10,0);
      return;
    }
  }
  else if (*DAT_10013388 == iVar2) goto LAB_10013354;
  FUN_1013cdc0();
LAB_10013354:
  FUN_100a5b78((DAT_10013390 - DAT_1001338c) * 0x20 & 0xff00U | 0xb90011,DAT_10013398,DAT_10013394);
  return;
}

