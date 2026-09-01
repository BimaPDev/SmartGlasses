/* FUN_100b65a8 @ 0x100b65a8 */

void FUN_100b65a8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_100a5b78((DAT_100b65e4 - DAT_100b65e0) * 0x20 & 0xff00U | 0xb10031,DAT_100b65e8,DAT_100b65ec,
               param_2);
  uVar1 = *param_1;
  *param_1 = param_2;
  if ((code *)param_1[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100b65da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[3])(param_2,uVar1);
    return;
  }
  return;
}

