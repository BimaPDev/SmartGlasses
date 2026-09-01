/* FUN_100b6620 @ 0x100b6620 */

undefined4 FUN_100b6620(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    FUN_10119dc2(DAT_100b6660,DAT_100b665c,DAT_100b6658,0x73,0,param_2);
    FUN_1011a1f0(DAT_100b6658,0x73,param_3,param_4);
  }
  if (*(code **)(*param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100b6652. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

