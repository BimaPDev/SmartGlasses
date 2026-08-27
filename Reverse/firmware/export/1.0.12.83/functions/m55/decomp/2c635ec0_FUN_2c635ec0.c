/* FUN_2c635ec0 @ 0x2c635ec0 */

void FUN_2c635ec0(int param_1,ushort param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  if (*(short *)(param_1 + 0x30) != 0) {
    uVar1 = 0;
    do {
      uVar2 = uVar1 + 1;
      *(ushort *)(*(int *)(param_1 + 0x2c) + (uint)uVar1 * 2) =
           *(ushort *)(*(int *)(param_1 + 0x2c) + (uint)uVar1 * 2) & ~param_2;
      if ((uVar1 != 0xffff) && (uVar1 < *(ushort *)(param_1 + 0x30))) {
        FUN_2c6352cc(param_1);
      }
      if ((param_2 & 0x200) != 0) {
        FUN_2c600bac(param_1);
      }
      uVar1 = uVar2;
    } while (uVar2 < *(ushort *)(param_1 + 0x30));
    return;
  }
  return;
}

