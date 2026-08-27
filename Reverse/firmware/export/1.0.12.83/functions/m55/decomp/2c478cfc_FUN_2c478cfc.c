/* FUN_2c478cfc @ 0x2c478cfc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c478cfc(void)

{
  int iVar1;
  
  iVar1 = FUN_2c478b68();
  *_LAB_2c478d18 = iVar1;
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x2c478d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0x30))(_LAB_2c478d20,0x32,_LAB_2c478d1c);
    return;
  }
  return;
}

