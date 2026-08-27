/* FUN_2c635dd0 @ 0x2c635dd0 */

void FUN_2c635dd0(int param_1,uint param_2)

{
  if ((param_2 < *(ushort *)(param_1 + 0x30)) || (param_2 == 0xffff)) {
    if ((uint)*(ushort *)(param_1 + 0x34) < (uint)*(ushort *)(param_1 + 0x30)) {
      FUN_2c6352cc(param_1);
    }
    *(short *)(param_1 + 0x34) = (short)param_2;
    if ((param_2 != 0xffff) && (param_2 < *(ushort *)(param_1 + 0x30))) {
      FUN_2c6352cc(param_1,param_2);
      return;
    }
  }
  return;
}

