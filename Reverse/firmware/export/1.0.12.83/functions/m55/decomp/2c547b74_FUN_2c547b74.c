/* FUN_2c547b74 @ 0x2c547b74 */

void FUN_2c547b74(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    FUN_2c59a4a8();
  }
  else if (*(int *)(*(int *)(param_1 + 0x114) + 8) == *(int *)(param_1 + 0x14)) {
    FUN_2c59a46c();
  }
  FUN_2c59a6b0(param_2);
  *(int *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  iVar1 = FUN_2c5e317c(0xb,1,param_2,0,1);
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c547bd4,0xca,DAT_2c547bcc,DAT_2c547bd0,DAT_2c547bcc);
}

