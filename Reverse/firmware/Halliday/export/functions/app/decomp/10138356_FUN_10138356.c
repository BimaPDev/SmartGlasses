/* FUN_10138356 @ 0x10138356 */

void FUN_10138356(int param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = FUN_1011ea10(param_2);
  uVar2 = (uint)bVar1;
  if (0x1e < uVar2) {
    uVar2 = 0x1f;
  }
  FUN_1011ea40(param_1 + 0x1c8,param_2,uVar2);
  *(undefined1 *)(param_1 + uVar2 + 0x1c8) = 0;
  return;
}

