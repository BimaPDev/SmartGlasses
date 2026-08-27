/* FUN_2c5f53dc @ 0x2c5f53dc */

void FUN_2c5f53dc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_2c5f6ddc();
  iVar2 = FUN_2c5f5250(uVar1,1,1);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x48) = param_2;
    FUN_2c5f534c(param_1,uVar1,iVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c5f5424,0x7b,DAT_2c5f5420,DAT_2c5f541c);
}

