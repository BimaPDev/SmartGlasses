/* FUN_2c5f110c @ 0x2c5f110c */

void FUN_2c5f110c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_2c5f114c;
  while( true ) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5f1158,0x5d,DAT_2c5f1154,DAT_2c5f1150);
    }
    iVar2 = FUN_2c606c04(param_1,uVar1);
    if (iVar2 != 0) break;
    param_1 = *(int *)(param_1 + 4);
  }
  FUN_2c6073ec(param_1);
  return;
}

