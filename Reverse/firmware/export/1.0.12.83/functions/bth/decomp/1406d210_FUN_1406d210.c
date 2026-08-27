/* FUN_1406d210 @ 0x1406d210 */

void FUN_1406d210(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  
  if (param_3 == 2) {
    bVar1 = *(byte *)(param_2 + 0x12);
    bVar2 = 1;
LAB_1406d230:
    *(byte *)(param_2 + 0x12) = bVar2 | bVar1 & 0xf0;
    FUN_14058748(param_2 + 8,param_4);
    return;
  }
  if (param_3 == 6) {
    bVar2 = 5;
    bVar1 = *(byte *)(param_2 + 0x12);
    goto LAB_1406d230;
  }
  if (param_3 != 8) {
    if ((param_3 & 0xf0) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x44,DAT_1406cb84,0x238,DAT_1406cb80,0xf,param_3);
    }
    bVar1 = *(byte *)(param_2 + 0x12) & 0xf0 | (byte)param_3;
    *(byte *)(param_2 + 0x12) = bVar1;
    if ((param_3 != 4) || ((*(byte *)(param_2 + 0x11) & 5) != 0)) goto LAB_1406cb2e;
  }
  FUN_140587d4(param_2 + 8);
  bVar1 = *(byte *)(param_2 + 0x12);
LAB_1406cb2e:
  *(byte *)(param_2 + 0x12) = bVar1 | 0x10;
  (**(code **)(param_2 + 4))(param_1,param_2,param_3,param_4);
  bVar1 = *(byte *)(param_2 + 0x12);
  *(byte *)(param_2 + 0x12) = bVar1 & 0xef;
  if (-1 < (int)((uint)bVar1 << 0x19)) {
    return;
  }
  FUN_14074168(param_2);
  return;
}

