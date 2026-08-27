/* FUN_2c5aef20 @ 0x2c5aef20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5aef20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_2c63e0e0();
  if (*(int *)(param_1 + 0x24) != -1) {
    FUN_2c5c55d8();
    uVar1 = _LAB_2c5af008;
    uVar3 = func_0x2c5c5dc4();
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5af014,0x5f,_LAB_2c5af010,_LAB_2c5af024,uVar1,uVar3);
  }
  if (iVar2 == *(int *)(param_1 + 4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5af014,0x5a,_LAB_2c5af010,_LAB_2c5af00c,_LAB_2c5af008,iVar2);
}

