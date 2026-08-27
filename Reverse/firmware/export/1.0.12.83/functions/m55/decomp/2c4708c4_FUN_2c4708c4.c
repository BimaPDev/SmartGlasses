/* FUN_2c4708c4 @ 0x2c4708c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4708c4(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _LAB_2c470900;
  if (*_LAB_2c470900 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x4b4,_LAB_2c470910,_LAB_2c47090c,_LAB_2c470904,_LAB_2c470908);
  }
  iVar2 = FUN_2c478b68();
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x2c4708e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 0xb8))(*piVar1,0);
    return;
  }
  return;
}

