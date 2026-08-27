/* FUN_2c478b98 @ 0x2c478b98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c478b98(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = _LAB_2c478bbc;
  puVar2 = (undefined4 *)FUN_2c478b68();
  *piVar1 = (int)puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    (*(code *)*puVar2)(_LAB_2c478bc0);
                    /* WARNING: Could not recover jumptable at 0x2c478bb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x40))(_LAB_2c478bc4);
    return;
  }
  return;
}

