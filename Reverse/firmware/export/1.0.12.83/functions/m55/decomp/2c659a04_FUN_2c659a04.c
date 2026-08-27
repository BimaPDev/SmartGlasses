/* FUN_2c659a04 @ 0x2c659a04 */

undefined4 FUN_2c659a04(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_2c64cf04(DAT_2c659a48);
  iVar3 = *(int *)(*param_1 + 0xc);
  if (*(int *)(iVar3 + iVar1 * 4) == 0) {
    uVar2 = FUN_2c64ca5c(0x44);
    FUN_2c659034(uVar2,0);
    FUN_2c6598e8(uVar2,param_1);
    FUN_2c64d090(*param_1,uVar2,iVar1);
  }
  return *(undefined4 *)(iVar3 + iVar1 * 4);
}

