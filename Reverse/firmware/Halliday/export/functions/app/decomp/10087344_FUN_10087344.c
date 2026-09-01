/* FUN_10087344 @ 0x10087344 */

void FUN_10087344(int param_1)

{
  int iVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 0x1c) << 0x1f) < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_10124408(param_1,DAT_1008736c,DAT_10087370);
  }
  if ((*(code **)(param_1 + 0x14) != (code *)0x0) && (iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x10087364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x14))(param_1);
    return;
  }
  return;
}

