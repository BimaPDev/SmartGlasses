/* FUN_2c5d8494 @ 0x2c5d8494 */

void FUN_2c5d8494(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((param_2 != 0) && (iVar2 = FUN_2c5ec194(), iVar2 == 1)) &&
     (iVar2 = thunk_FUN_2c48a2b8(), iVar2 != 0)) {
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_2c62be74();
      FUN_2c62be4c(*(undefined4 *)(param_1 + 0x44));
      return;
    }
    uVar1 = FUN_2c62bdd8(DAT_2c5d84fc,500,param_1);
    *(undefined4 *)(param_1 + 0x44) = uVar1;
    FUN_2c62be70(uVar1,0xffffffff);
    return;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_2c62be40();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  uVar1 = FUN_2c5cfe2c(*(undefined4 *)(param_1 + 0x48));
  FUN_2c63140c(uVar3,uVar1);
  uVar1 = FUN_2c5d68d8();
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}

