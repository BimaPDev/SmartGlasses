/* FUN_2c5d7cfc @ 0x2c5d7cfc */

void FUN_2c5d7cfc(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  if ((iVar3 != 0) && (cVar1 = *(char *)(param_1 + 8), cVar1 != -1)) {
    if (param_3 == 0) {
      uVar2 = FUN_2c66c4ec(param_2);
      FUN_2c5fd5fc(iVar3,(int)cVar1,DAT_2c5d7d68,0x1a,param_2,uVar2,0,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d7d74,0xa3,DAT_2c5d7d70,DAT_2c5d7d6c,param_2);
  }
  if (param_3 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c5d7d74,0x9e,DAT_2c5d7d70,DAT_2c5d7d78);
}

