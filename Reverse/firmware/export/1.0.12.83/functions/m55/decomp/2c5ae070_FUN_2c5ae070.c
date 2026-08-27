/* FUN_2c5ae070 @ 0x2c5ae070 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ae070(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = param_4;
  FUN_2c48e424(param_2,_LAB_2c5ae0b4);
  pcVar1 = (char *)FUN_2c48de10();
  if ((*pcVar1 == '1') && (pcVar1[1] == '\0')) {
    uStack_18 = registry_lookup(0x4016);
  }
  else {
    if ((*pcVar1 != '0') || (pcVar1[1] != '\0')) {
      return;
    }
    uStack_18 = registry_lookup(0x4017);
  }
  iStack_c = *DAT_2c5e40ac;
  uStack_1c = 0;
  uStack_10 = 1;
  uStack_14 = 0;
  FUN_2c5e4008(&uStack_1c);
  if (*DAT_2c5e40ac == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

