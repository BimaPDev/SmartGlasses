/* FUN_101343e6 @ 0x101343e6 */

void FUN_101343e6(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 0x12);
  if (*(ushort *)(param_2 + 0x12) < *(ushort *)(param_2 + 0x1c)) {
    uVar1 = *(ushort *)(param_2 + 0x1c);
  }
  if (uVar1 < *(ushort *)(param_2 + 0x26)) {
    uVar1 = *(ushort *)(param_2 + 0x26);
  }
  if (uVar1 < *(ushort *)(param_2 + 8)) {
    uVar1 = *(ushort *)(param_2 + 8);
  }
  if (uVar1 < *(ushort *)(param_2 + 0x30)) {
    uVar1 = *(ushort *)(param_2 + 0x30);
  }
  if (*(ushort *)(param_2 + 0x32) != uVar1) {
    *(ushort *)(param_2 + 0x32) = uVar1;
    if (*(code **)(param_2 + 0x34) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10134416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2 + 0x34))();
      return;
    }
  }
  return;
}

