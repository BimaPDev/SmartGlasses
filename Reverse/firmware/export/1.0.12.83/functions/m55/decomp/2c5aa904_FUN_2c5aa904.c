/* FUN_2c5aa904 @ 0x2c5aa904 */

void FUN_2c5aa904(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((param_2 != 0) && (iVar4 = *(int *)(param_1 + 0x20), iVar4 != 0)) {
    iVar1 = FUN_2c66b624(param_2,DAT_2c5aa9a0);
    if ((iVar1 == 0) || (iVar1 = FUN_2c66b624(param_2,DAT_2c5aa9a4), iVar1 == 0)) {
      uVar2 = registry_lookup(0x5059);
      FUN_2c638730(iVar4,uVar2);
    }
    else {
      FUN_2c5a2398();
      iVar4 = FUN_2c5a27bc();
      if (iVar4 == 0) {
        FUN_2c638730(*(undefined4 *)(param_1 + 0x20),param_2);
      }
      else {
        iVar4 = FUN_2c5a72ec(DAT_2c5aa9b8);
        if (iVar4 == 0) {
          uVar3 = *(undefined4 *)(param_1 + 0x20);
          uVar2 = registry_lookup(0x5007);
          FUN_2c638730(uVar3,uVar2);
        }
        else {
          FUN_2c638730(*(undefined4 *)(param_1 + 0x20),param_2);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5aa9b0,0x132,DAT_2c5aa9ac,DAT_2c5aa9a8,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5aa9b0,0x122,DAT_2c5aa9ac,DAT_2c5aa9b4);
}

