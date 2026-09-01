/* FUN_100e14ac @ 0x100e14ac */

undefined4 FUN_100e14ac(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  while( true ) {
    if ((int)((*DAT_100e1508 & 0x7f) >> 4) <= iVar3) {
      uVar1 = (DAT_100e1514 - DAT_100e1510) * 0x20 & 0xff00;
      FUN_100a5b78(DAT_100e1518 | uVar1,DAT_100e151c,param_1,uVar1,param_4);
      return 0xfffffff4;
    }
    iVar2 = iVar3 * 0x68;
    iVar4 = iVar2 + DAT_100e150c;
    if (*(int *)(iVar2 + DAT_100e150c) == 0) break;
    iVar3 = iVar3 + 1;
  }
  *(undefined4 *)(iVar4 + 4) = DAT_100e1520;
  iVar3 = DAT_100e1524;
  *param_2 = iVar4;
  *(undefined4 *)(iVar2 + iVar3) = 0;
  return 0;
}

