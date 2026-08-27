/* FUN_2c5d0ff8 @ 0x2c5d0ff8 */

void FUN_2c5d0ff8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = FUN_2c6041fc(*(undefined4 *)(param_1 + 8));
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar2 = param_2;
  if (param_2 < iVar5) {
    iVar2 = iVar5;
  }
  if (iVar2 <= iVar1) {
    if (param_2 != iVar5) {
      FUN_2c5d0d64(param_1);
      iVar1 = *(int *)(param_1 + 0x2c);
      iVar2 = FUN_2c6041fc(*(undefined4 *)(param_1 + 8));
      if (iVar2 + -1 < iVar1) {
        param_2 = 0;
      }
      *(int *)(param_1 + 0x2c) = param_2;
      uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 8),param_2);
      FUN_2c605208(uVar3,param_3);
      uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x2c));
      uVar3 = FUN_2c6041dc(uVar3,0);
      FUN_2c606b6c(uVar3,0x10);
      uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x2c));
      uVar3 = FUN_2c6041dc(uVar3,1);
      FUN_2c606b6c(uVar3,0x10);
      uVar4 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x2c) * 4) + 8)
      ;
      uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 8));
      uVar3 = FUN_2c6041dc(uVar3,0);
      FUN_2c5eb89c(uVar4,uVar3,0,DAT_2c5d0e04,param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c5d1070,0x28f,DAT_2c5d106c,DAT_2c5d1068,iVar1,iVar5,param_2);
}

