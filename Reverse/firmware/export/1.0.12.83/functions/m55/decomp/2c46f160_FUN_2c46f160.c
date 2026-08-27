/* FUN_2c46f160 @ 0x2c46f160 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46f160(void)

{
  int iVar1;
  
  iVar1 = FUN_2c478b68();
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0x70))(_LAB_2c46f1b4);
    (**(code **)(iVar1 + 0x7c))(_LAB_2c46f1b8);
    (**(code **)(iVar1 + 0x8c))(_LAB_2c46f1bc);
    (**(code **)(iVar1 + 0x90))(_DAT_2c46f1c0);
    (**(code **)(iVar1 + 0x9c))(_LAB_2c46f1c4);
    (**(code **)(iVar1 + 0x98))(_LAB_2c46f1c8);
    (**(code **)(iVar1 + 0xa4))(_LAB_2c46f1cc);
    (**(code **)(iVar1 + 0xa8))(_LAB_2c46f1d0);
                    /* WARNING: Could not recover jumptable at 0x2c46f1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xac))(_LAB_2c46f1d4);
    return;
  }
  return;
}

