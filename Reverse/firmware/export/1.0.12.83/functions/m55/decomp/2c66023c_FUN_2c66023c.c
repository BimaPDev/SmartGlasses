/* FUN_2c66023c @ 0x2c66023c */

undefined4 FUN_2c66023c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_2c64cf04(DAT_2c660280);
  iVar3 = *(int *)(*param_1 + 0xc);
  if (*(int *)(iVar3 + iVar1 * 4) == 0) {
    uVar2 = FUN_2c64ca5c(0x70);
    FUN_2c65f634(uVar2,0);
    FUN_2c6600f4(uVar2,param_1);
    FUN_2c64d090(*param_1,uVar2,iVar1);
  }
  return *(undefined4 *)(iVar3 + iVar1 * 4);
}

