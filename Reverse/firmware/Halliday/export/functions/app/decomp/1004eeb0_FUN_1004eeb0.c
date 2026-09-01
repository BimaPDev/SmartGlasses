/* FUN_1004eeb0 @ 0x1004eeb0 */

void FUN_1004eeb0(uint param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = DAT_1004ef80;
  pbVar1 = DAT_1004ef78;
  iVar4 = *DAT_1004ef5c;
  uVar6 = (DAT_1004ef60 - DAT_1004ef64) * 0x20 & 0xff00;
  if (*DAT_1004ef68 == '\0') {
    if (*DAT_1004ef5c == iVar4) goto LAB_1004eedc;
  }
  else if (param_1 < 3) {
    uVar5 = (uint)*DAT_1004ef78;
    if (uVar5 == param_1) {
      if (*DAT_1004ef5c == iVar4) {
        uVar6 = uVar6 | 0x850000;
        uVar3 = DAT_1004ef7c;
LAB_1004ef32:
        uVar6 = uVar6 | 0x31;
LAB_1004ef0e:
        FUN_100a5b78(uVar6,DAT_1004ef70,uVar3,uVar5);
        return;
      }
    }
    else {
      *DAT_1004ef78 = (byte)param_1;
      *(ushort *)(pbVar1 + 2) = (ushort)*(byte *)(iVar2 + param_1);
      FUN_1004ec7c();
      if (*DAT_1004ef5c == iVar4) {
        uVar5 = (uint)*pbVar1;
        uVar6 = uVar6 | 0x9c0000;
        uVar3 = DAT_1004ef84;
        goto LAB_1004ef32;
      }
    }
  }
  else if (*DAT_1004ef5c == iVar4) {
    uVar6 = uVar6 | 0x800011;
    uVar3 = DAT_1004ef74;
    uVar5 = param_1;
    goto LAB_1004ef0e;
  }
  FUN_1013cdc0();
LAB_1004eedc:
  FUN_100a5b78(uVar6 | 0x7b0011,DAT_1004ef70,DAT_1004ef6c);
  return;
}

