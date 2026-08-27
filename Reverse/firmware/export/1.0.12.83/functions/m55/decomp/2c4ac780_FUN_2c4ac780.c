/* FUN_2c4ac780 @ 0x2c4ac780 */

void FUN_2c4ac780(int param_1,int param_2)

{
  undefined2 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(char *)(param_1 + 0x305) == '\0') {
    return;
  }
  if (param_2 == -1) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x340);
    uVar1 = *(undefined2 *)(param_1 + 0xf8);
  }
  else {
    if (param_2 != 1) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x340);
    uVar1 = *(undefined2 *)(param_1 + 0xfc);
  }
                    /* WARNING: Could not recover jumptable at 0x2c4ac7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,*(undefined1 *)(param_1 + 0xf0),*(undefined2 *)(param_1 + 0xf4),uVar1);
  return;
}

