/* FUN_1011ae78 @ 0x1011ae78 */

bool FUN_1011ae78(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)((int *)*param_1 + 0xf);
  if (*(int *)*param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_1011ea10();
    uVar3 = (uint)uVar2;
  }
  uVar3 = uVar3 + uVar1;
  return uVar3 == (uint)*(ushort *)(*param_1 + 0x2a) * (uVar3 / *(ushort *)(*param_1 + 0x2a));
}

