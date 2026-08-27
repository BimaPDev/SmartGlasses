/* FUN_1409de08 @ 0x1409de08 */

void FUN_1409de08(int param_1,int param_2)

{
  if (param_2 == 1) {
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1409de34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x18))
                (*(undefined1 *)(param_1 + 6),*(undefined1 *)(param_1 + 0x10),0xffffffff);
      return;
    }
  }
  else if (param_2 == 2) {
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1409de24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x18))
                (*(undefined1 *)(param_1 + 6),*(undefined1 *)(param_1 + 0x10),0xfffffffe);
      return;
    }
  }
  else if ((param_2 == 3) && (*(code **)(param_1 + 0x18) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1409de44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))
              (*(undefined1 *)(param_1 + 6),*(undefined1 *)(param_1 + 0x10),0xfffffffd);
    return;
  }
  return;
}

