/* FUN_2c5a3f9c @ 0x2c5a3f9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5a3f9c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_14;
  
  iVar3 = *(int *)(param_1 + 0x18);
  iStack_14 = param_2;
  if ((iVar3 == 0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5a402c,0x17f,_LAB_2c5a4020,_LAB_2c5a4030);
  }
  iVar1 = FUN_2c66b624(param_2,_LAB_2c5a4018);
  if ((iVar1 != 0) && (iVar1 = FUN_2c66b624(param_2,_LAB_2c5a401c), iVar1 != 0)) {
    FUN_2c5a3e3c(param_1,&iStack_14,iVar3 + 4);
    iVar3 = iStack_14;
    uVar2 = FUN_2c66c4ec(iStack_14);
    FUN_2c5a72a8(0x1773,uVar2,iVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x185,_LAB_2c5a402c,_LAB_2c5a4028,_LAB_2c5a4024,_LAB_2c5a4020);
}

