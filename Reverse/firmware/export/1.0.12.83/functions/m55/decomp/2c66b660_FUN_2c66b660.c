/* FUN_2c66b660 @ 0x2c66b660 */

int FUN_2c66b660(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *DAT_2c66b66c;
  iVar2 = FUN_2c66c4ec(param_1);
  iVar3 = FUN_2c669c14(uVar1,iVar2 + 1);
  if (iVar3 != 0) {
    FUN_2c674668(iVar3,param_1,iVar2 + 1);
  }
  return iVar3;
}

