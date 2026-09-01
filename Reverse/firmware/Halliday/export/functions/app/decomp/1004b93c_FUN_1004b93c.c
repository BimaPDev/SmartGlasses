/* FUN_1004b93c @ 0x1004b93c */

char FUN_1004b93c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *DAT_1004b9b0;
  cVar1 = *DAT_1004b9b4;
  if (cVar1 != '\0') {
    uVar6 = (DAT_1004b9bc - DAT_1004b9b8) * 0x20 & 0xff00;
    FUN_100a5b78(uVar6 | 0x180031,DAT_1004b9c4,DAT_1004b9c0,1,param_1,iVar5,param_3);
    iVar2 = FUN_1004b7d8();
    iVar4 = DAT_1004b9c8;
    if (iVar2 == 0) {
      uVar3 = (**(code **)(DAT_1004b9c8 + 8))();
      FUN_100a5b78(uVar6 | 0xd0031,DAT_1004b9d0,DAT_1004b9cc,uVar3);
      iVar4 = (**(code **)(iVar4 + 8))();
      if (iVar4 != 0x6f) {
        FUN_1013965a(0x6f,0);
      }
    }
  }
  if (*DAT_1004b9b0 != iVar5) {
    FUN_1013cdc0();
  }
  return cVar1;
}

