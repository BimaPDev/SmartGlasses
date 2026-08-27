/* FUN_2c59c3d4 @ 0x2c59c3d4 */

void FUN_2c59c3d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 uVar1;
  int iVar2;
  int extraout_r3;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  do {
    FUN_2c59c3d4(*(undefined4 *)(param_1 + 0xc));
    iVar3 = *(int *)(param_1 + 8);
    uVar1 = extraout_r2;
    if (*(int *)(param_1 + 0x28) != param_1 + 0x30) {
      thunk_FUN_2c669588(*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x30) + 1,extraout_r2,
                         param_1 + 0x30,param_4);
      uVar1 = extraout_r2_00;
    }
    iVar2 = param_1 + 0x18;
    if (*(int *)(param_1 + 0x10) != iVar2) {
      thunk_FUN_2c669588(*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x18) + 1,uVar1,iVar2,param_4);
      iVar2 = extraout_r3;
      uVar1 = extraout_r2_01;
    }
    thunk_FUN_2c669588(param_1,0x40,uVar1,iVar2,param_4);
    param_1 = iVar3;
  } while (iVar3 != 0);
  return;
}

