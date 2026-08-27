/* FUN_2c46c5e8 @ 0x2c46c5e8 */

void FUN_2c46c5e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c46a3d4(*(undefined4 *)(param_1 + 0x18));
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      FUN_2c46c514();
    }
    *(undefined4 *)(iVar1 + 4) = param_3;
    return;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = FUN_2c66b660(param_2);
  FUN_2c46a2a8(uVar3,uVar2,param_3,param_4);
  return;
}

