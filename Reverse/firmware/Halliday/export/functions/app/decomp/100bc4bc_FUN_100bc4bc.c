/* FUN_100bc4bc @ 0x100bc4bc */

undefined4 FUN_100bc4bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  pbVar1 = DAT_100bc520;
  iVar3 = DAT_100bc51c - DAT_100bc518;
  uVar4 = (*DAT_100bc520 & 0x7f) >> 5;
  *DAT_100bc520 = *DAT_100bc520 | 0x60;
  uVar2 = FUN_100a5b78(iVar3 * 0x20 & 0xff00U | 0x680034,DAT_100bc528,DAT_100bc524,uVar4,3,param_1,
                       param_2,param_4);
  if (uVar4 == 3) {
    if ((*pbVar1 & 0x60) == 0x60) {
      return uVar2;
    }
    uVar2 = 0;
  }
  else {
    if ((*pbVar1 & 0x60) != 0x60) {
      return uVar2;
    }
    uVar2 = 1;
  }
  FUN_100d3fe0(uVar2);
  return 0;
}

