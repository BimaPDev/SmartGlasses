/* FUN_2c470874 @ 0x2c470874 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c470874(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _LAB_2c4708b0;
  if (*_LAB_2c4708b0 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x4a7,_LAB_2c4708c0,_LAB_2c4708bc,_LAB_2c4708b4,_LAB_2c4708b8);
  }
  iVar2 = FUN_2c478b68();
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x2c470892. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 0xb8))(*piVar1,1);
    return;
  }
  return;
}

