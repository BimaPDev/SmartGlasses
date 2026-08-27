/* FUN_2c5d107a @ 0x2c5d107a */

void FUN_2c5d107a(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_2c6041dc(*(undefined4 *)(param_1 + 8));
  iVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 8),0);
  if (iVar1 == 0) {
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x72) = 1;
      FUN_2c5d0ff8(param_1,0,0);
      return;
    }
    iVar1 = FUN_2c6041fc();
    if (iVar1 == 2) {
      FUN_2c5d0128(param_1,iVar2);
    }
    *(undefined1 *)(param_1 + 0x72) = 1;
    FUN_2c5d0ff8(param_1,0,0);
    iVar1 = FUN_2c6041fc(iVar2);
  }
  else {
    iVar3 = FUN_2c6041fc(iVar1);
    if (iVar3 == 2) {
      FUN_2c5d0128(param_1,iVar1);
    }
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x72) = 1;
      FUN_2c5d0ff8(param_1,0,0);
      iVar2 = FUN_2c6041fc(iVar1);
      if (iVar2 != 2) {
        return;
      }
      FUN_2c5d00b0(param_1,iVar1);
      return;
    }
    iVar3 = FUN_2c6041fc(iVar2);
    if (iVar3 == 2) {
      FUN_2c5d0128(param_1,iVar2);
    }
    *(undefined1 *)(param_1 + 0x72) = 1;
    FUN_2c5d0ff8(param_1,0);
    iVar3 = FUN_2c6041fc(iVar1);
    if (iVar3 == 2) {
      FUN_2c5d00b0(param_1,iVar1);
    }
    iVar1 = FUN_2c6041fc(iVar2);
  }
  if (iVar1 != 2) {
    return;
  }
  FUN_2c5d00b0(param_1,iVar2);
  return;
}

