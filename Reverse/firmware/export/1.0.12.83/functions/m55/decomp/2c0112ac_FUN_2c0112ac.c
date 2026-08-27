/* FUN_2c0112ac @ 0x2c0112ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0112ac(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  ushort uStack_16;
  int iStack_14;
  
  pbVar2 = _DAT_2c011354;
  iStack_14 = *_DAT_2c011350;
  if (*_DAT_2c011354 - 1 < 2) {
    FUN_2c008e4c(0x1e,&uStack_16);
    uStack_16 = uStack_16 & 0xfc07 | 0x210;
    FUN_2c008f74(0x1e);
  }
  else {
    FUN_2c008e4c(0x1e,&uStack_16);
    uStack_16 = uStack_16 & 0xffe7;
    FUN_2c008f74(0x1e);
  }
  bVar1 = *pbVar2;
  if ((bVar1 == 0) || (bVar1 == 3)) {
    uVar3 = 0x60;
  }
  else {
    uVar3 = 0x101;
  }
  FUN_2c008e4c(uVar3,&uStack_16);
  bVar1 = *pbVar2;
  uStack_16 = uStack_16 & 0xffbf;
  if ((bVar1 == 0) || (bVar1 == 3)) {
    uVar3 = 0x60;
  }
  else {
    uVar3 = 0x101;
  }
  FUN_2c008f74(uVar3);
  if (*_DAT_2c011350 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

