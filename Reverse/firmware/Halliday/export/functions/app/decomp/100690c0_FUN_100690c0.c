/* FUN_100690c0 @ 0x100690c0 */

void FUN_100690c0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_1006910c;
  puVar1 = DAT_10069108;
  if (param_2 != 0) {
    *DAT_1006910c = *DAT_10069108;
    *puVar1 = 0x1000;
    if (param_1 == 0) {
      puVar2[1] = puVar1[-0xe];
      puVar1[-0xe] = 0x1000;
      puVar2[2] = puVar1[-3];
      puVar2 = DAT_10069110;
      puVar1[-3] = 0x1000;
      *puVar2 = 0x1000;
      puVar2[3] = 0x1000;
    }
  }
  puVar1 = DAT_10069114;
  *DAT_10069114 = 0x1000;
  puVar1[-0x14] = 0x1000;
  puVar1[-0x13] = 0x1000;
  puVar1[-0x12] = 0x1000;
  puVar1[-0x11] = 0x1000;
  return;
}

