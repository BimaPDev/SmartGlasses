/* FUN_1011f8c2 @ 0x1011f8c2 */

undefined4 FUN_1011f8c2(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x1011f8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 8))();
    return uVar1;
  }
  return 0xffffffea;
}

