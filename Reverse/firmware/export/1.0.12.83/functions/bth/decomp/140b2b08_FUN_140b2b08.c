/* FUN_140b2b08 @ 0x140b2b08 */

void FUN_140b2b08(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 local_18;
  undefined1 uStack_17;
  byte bStack_16;
  byte bStack_15;
  int iStack_14;
  undefined1 uStack_10;
  undefined2 local_f;
  int local_c;
  
  local_c = *DAT_140b2b88;
  uVar3 = 0xffff;
  pbVar4 = &bStack_16;
  iStack_14 = *param_1 << 8;
  uStack_10 = (undefined1)((uint)*param_1 >> 0x18);
  local_f = (short)param_1[1];
  do {
    iVar2 = 8;
    pbVar4 = pbVar4 + 1;
    uVar3 = uVar3 ^ *pbVar4;
    do {
      iVar1 = uVar3 << 0x1f;
      uVar3 = (int)uVar3 >> 1;
      if (iVar1 < 0) {
        uVar3 = uVar3 ^ 0xa001;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  } while ((byte *)((int)&local_f + 1) != pbVar4);
  _local_18 = CONCAT31(CONCAT21(0x100,(char)uVar3),0x26);
  _local_18 = CONCAT13(1,CONCAT12((char)(uVar3 >> 8),_local_18));
  FUN_140b20d4(&local_18,0xb);
  if (*DAT_140b2b88 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

