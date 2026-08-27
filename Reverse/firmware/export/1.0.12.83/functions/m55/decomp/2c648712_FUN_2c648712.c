/* FUN_2c648712 @ 0x2c648712 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c648712(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*_DAT_2c648738 == '\0') {
    pcVar1 = (code *)FUN_2c648328();
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1,param_2);
    }
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x2c673a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*DAT_2c673a34)(param_1,param_2,param_3,param_4);
  return uVar2;
}

