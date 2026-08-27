/* FUN_2c635e10 @ 0x2c635e10 */

void FUN_2c635e10(int param_1,uint param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  
  if (*(ushort *)(param_1 + 0x30) <= param_2) {
    return;
  }
  if ((((int)((uint)*(byte *)(param_1 + 0x36) << 0x1f) < 0) && (param_3 << 0x18 < 0)) &&
     (*(short *)(param_1 + 0x30) != 0)) {
    uVar2 = 0;
    do {
      *(ushort *)(*(int *)(param_1 + 0x2c) + (uint)uVar2 * 2) =
           *(ushort *)(*(int *)(param_1 + 0x2c) + (uint)uVar2 * 2) & 0xff7f;
      uVar1 = *(ushort *)(param_1 + 0x30);
      if ((uVar2 != 0xffff) && (uVar2 < uVar1)) {
        FUN_2c6352cc(param_1);
        uVar1 = *(ushort *)(param_1 + 0x30);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  *(ushort *)(*(int *)(param_1 + 0x2c) + param_2 * 2) =
       *(ushort *)(*(int *)(param_1 + 0x2c) + param_2 * 2) | (ushort)param_3;
  if ((param_2 != 0xffff) && (param_2 < *(ushort *)(param_1 + 0x30))) {
    FUN_2c6352cc(param_1,param_2);
  }
  if (param_3 << 0x16 < 0) {
    FUN_2c600bac(param_1);
    return;
  }
  return;
}

