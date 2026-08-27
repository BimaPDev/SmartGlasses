/* FUN_2c665e64 @ 0x2c665e64 */

void FUN_2c665e64(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_2c669494(0);
  iVar2 = FUN_2c66c4ec();
  uVar3 = thunk_FUN_2c64ca5c(iVar2 + 1);
  FUN_2c674668(uVar3,uVar1,iVar2 + 1);
  FUN_2c669494(0,*(undefined4 *)(param_1 + 0x10));
  iVar2 = thunk_FUN_2c66e064(param_2,param_3,param_4,param_5);
  FUN_2c669494(0,uVar3);
  thunk_FUN_2c669588(uVar3);
  if (iVar2 == 0) {
    *param_2 = 0;
  }
  return;
}

