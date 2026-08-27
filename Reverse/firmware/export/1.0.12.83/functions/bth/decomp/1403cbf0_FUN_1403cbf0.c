/* FUN_1403cbf0 @ 0x1403cbf0 */

undefined4 FUN_1403cbf0(void)

{
  undefined4 uVar1;
  
  if ((code *)*DAT_1403cbfc != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1403cbf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*DAT_1403cbfc)();
    return uVar1;
  }
  return 0;
}

