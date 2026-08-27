/* FUN_2c65a49c @ 0x2c65a49c */

undefined4 FUN_2c65a49c(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_2c64cf04(DAT_2c65a4e0);
  iVar3 = *(int *)(*param_2 + 0xc);
  if (*(int *)(iVar3 + iVar1 * 4) == 0) {
    uVar2 = FUN_2c64ca5c(0x68);
    FUN_2c659230(uVar2,0);
    FUN_2c65959c(uVar2,param_2);
    FUN_2c64d090(*param_2,uVar2,iVar1);
  }
  return *(undefined4 *)(iVar3 + iVar1 * 4);
}

