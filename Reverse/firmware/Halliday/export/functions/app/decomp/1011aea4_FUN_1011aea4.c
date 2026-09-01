/* FUN_1011aea4 @ 0x1011aea4 */

bool FUN_1011aea4(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(ushort *)((int)*(int **)(param_1 + 8) + 0x3e);
  if (**(int **)(param_1 + 8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_1011ea10();
    uVar4 = (uint)uVar2;
  }
  uVar4 = uVar4 + uVar1;
  uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 8) + 0x2a);
  return uVar4 == uVar3 * (uVar4 / uVar3);
}

