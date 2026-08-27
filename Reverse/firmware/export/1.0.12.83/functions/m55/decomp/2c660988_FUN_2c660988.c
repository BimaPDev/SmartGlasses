/* FUN_2c660988 @ 0x2c660988 */

undefined4 FUN_2c660988(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_2c64cf04(DAT_2c6609d0);
  iVar3 = *(int *)(*param_2 + 0xc);
  if (*(int *)(iVar3 + iVar1 * 4) == 0) {
    uVar2 = FUN_2c64ca5c(0x128);
    FUN_2c65f7f8(uVar2,0);
    FUN_2c660284(uVar2,param_2);
    FUN_2c64d090(*param_2,uVar2,iVar1);
  }
  return *(undefined4 *)(iVar3 + iVar1 * 4);
}

