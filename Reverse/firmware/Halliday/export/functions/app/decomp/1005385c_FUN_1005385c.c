/* FUN_1005385c @ 0x1005385c */

int FUN_1005385c(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined4 local_38;
  undefined1 local_2c;
  undefined1 auStack_28 [4];
  int local_24;
  int local_14;
  
  local_14 = *DAT_1005390c;
  uVar5 = (DAT_10053910 - DAT_10053914) * 0x20 & 0xff00;
  FUN_100a5b78(uVar5 | 0x2ac0031,DAT_1005391c,DAT_10053918);
  iVar1 = (**(code **)(DAT_10053920 + 8))();
  if (iVar1 != 0) goto LAB_100538ac;
  FUN_100a5b78(DAT_10053924 | uVar5,DAT_1005391c,DAT_10053928);
  iVar1 = -1;
  while( true ) {
    if (*DAT_1005390c == local_14) break;
    FUN_1013cdc0();
LAB_100538ac:
    FUN_1011ea48(&local_3c,0,0x14);
    local_3c = 0x101;
    local_3a = 1;
    local_38 = 0x14;
    local_2c = 0;
    FUN_1011ea48(auStack_28,0);
    iVar1 = FUN_100537d8(&local_3c,DAT_1005392c,0,auStack_28);
    if (iVar1 == 0) {
      uVar2 = uVar5 | 0x2c00031;
      uVar3 = DAT_10053930;
      iVar4 = local_24;
    }
    else {
      uVar2 = DAT_10053934 | uVar5;
      uVar3 = DAT_10053938;
      iVar4 = iVar1;
    }
    FUN_100a5b78(uVar2,DAT_1005391c,uVar3,iVar4);
  }
  return iVar1;
}

