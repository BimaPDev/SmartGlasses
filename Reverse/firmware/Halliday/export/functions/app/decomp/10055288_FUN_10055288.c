/* FUN_10055288 @ 0x10055288 */

int FUN_10055288(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1011a5a2(*DAT_100552b4);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0x10;
    iVar2 = FUN_10054dfc(param_1);
    *(int *)(iVar1 + 0x10) = iVar2;
    if (iVar2 == 0) {
      FUN_10054e90(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}

