/* FUN_2c6120d8 @ 0x2c6120d8 */

void FUN_2c6120d8(int param_1,int param_2)

{
  if ((*(short *)(param_2 + 4) != 0) && (2 < *(byte *)(param_2 + 10))) {
                    /* WARNING: Could not recover jumptable at 0x2c6120ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x24))();
    return;
  }
  return;
}

