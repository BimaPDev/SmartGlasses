/* FUN_140cb958 @ 0x140cb958 */

void FUN_140cb958(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_140d2ba8(param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_140d2a04(param_2);
  }
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  iVar1 = FUN_140d2be4(param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_140d2a7c(param_2);
  }
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  iVar1 = FUN_140d2c20(param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_140d2ab8(param_2);
  }
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  return;
}

