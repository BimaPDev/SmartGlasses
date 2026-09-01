/* FUN_100ba32c @ 0x100ba32c */

undefined4 FUN_100ba32c(int param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  
  pbVar1 = DAT_100ba3a8;
  if (param_1 == 3) {
    bVar3 = *DAT_100ba3a8;
    if ((bVar3 & 3) == 0) goto LAB_100ba360;
    *DAT_100ba3a8 = bVar3 & 0xfc | bVar3 + 3 & 3;
    if (pbVar1[4] != 0x16) {
      FUN_100a1b34(0x12);
    }
    bVar3 = *pbVar1 & 3;
    if ((*pbVar1 & 3) != 0) goto LAB_100ba360;
    FUN_100a1b34(0x13);
    uVar2 = 3;
LAB_100ba35c:
    FUN_100bb198(uVar2,bVar3);
  }
  else {
    if (param_1 == 7) {
      uVar2 = 0x14;
    }
    else {
      if (param_1 != 2) goto LAB_100ba360;
      bVar3 = *DAT_100ba3a8 + 1 & 3;
      *DAT_100ba3a8 = *DAT_100ba3a8 & 0xfc | bVar3;
      if (bVar3 == 1) {
        FUN_100a1b34(0x10);
        bVar3 = 0;
        uVar2 = 2;
        goto LAB_100ba35c;
      }
      uVar2 = 0x11;
    }
    FUN_100a1b34(uVar2);
  }
LAB_100ba360:
  *(short *)(pbVar1 + 2) = (short)param_1;
  return 0;
}

