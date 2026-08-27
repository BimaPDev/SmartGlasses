/* FUN_2c504aac @ 0x2c504aac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c504aac(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_2c478b68();
  if (iVar1 != 0) {
    uVar2 = FUN_2c471604(1);
                    /* WARNING: Could not recover jumptable at 0x2c504ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0x58))(uVar2,_LAB_2c504ac8);
    return;
  }
  return;
}

