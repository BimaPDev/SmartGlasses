/* FUN_2c53cb5a @ 0x2c53cb5a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c53cb5a(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_2c53cac4(param_1,*(undefined2 *)(param_4 + 6),*(undefined2 *)(param_4 + 8));
  param_1[8] = iVar1;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (iVar1 == -1) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c53cbc8,0xde,_DAT_2c53cbc4,_DAT_2c53cbc0,uVar2);
}

