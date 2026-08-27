/* FUN_2c47b912 @ 0x2c47b912 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47b912(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = _LAB_2c47b938;
  uVar2 = *_LAB_2c47b938;
  *_LAB_2c47b93c = 0;
  FUN_2c644958(uVar2);
  *puVar1 = 0;
  if ((code *)*_LAB_2c479a8c != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c479a86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*_LAB_2c479a8c)(0);
    return;
  }
  return;
}

