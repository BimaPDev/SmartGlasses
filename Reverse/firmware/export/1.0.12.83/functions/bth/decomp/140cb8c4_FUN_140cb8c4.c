/* FUN_140cb8c4 @ 0x140cb8c4 */

void FUN_140cb8c4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_140ccae4(param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_140cc580(param_2);
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  iVar1 = FUN_140ccb20(param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_140cc6f0(param_2);
  }
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  iVar1 = FUN_140ccb5c(param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_140cc72c(param_2);
  }
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  return;
}

