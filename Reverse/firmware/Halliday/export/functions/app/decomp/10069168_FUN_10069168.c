/* FUN_10069168 @ 0x10069168 */

void FUN_10069168(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10069170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_10069174 + 8))();
    return;
  }
  return;
}

