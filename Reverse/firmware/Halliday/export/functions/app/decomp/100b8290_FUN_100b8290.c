/* FUN_100b8290 @ 0x100b8290 */

void FUN_100b8290(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    FUN_10119dc2(DAT_100b82d4,DAT_100b82d0,DAT_100b82cc,0xb0,param_1,param_2);
    FUN_1011a1f0(DAT_100b82cc,0xb0,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x100b82ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x18))(piVar1,param_2,param_3,param_4);
  return;
}

