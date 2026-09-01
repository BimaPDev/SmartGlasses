/* FUN_1011bb52 @ 0x1011bb52 */

undefined4 FUN_1011bb52(int param_1)

{
  undefined4 uVar1;
  
  if ((code *)**(undefined4 **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1011bb60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 8))();
    return uVar1;
  }
  return 0xffffff7a;
}

