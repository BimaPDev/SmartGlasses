/* FUN_2c5ae300 @ 0x2c5ae300 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ae300(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iVar1 = FUN_2c48e424(param_3);
  if (iVar1 == 0) {
    uVar3 = 0x1a9;
    uStack_18 = _LAB_2c5ae390;
  }
  else {
    pcVar2 = (char *)FUN_2c48de10();
    if ((*pcVar2 == '0') && (pcVar2[1] == '\0')) {
      uStack_18 = registry_lookup(0x4011);
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
    if ((*pcVar2 == '1') && (pcVar2[1] == '\0')) {
      registry_lookup(0x4010);
      FUN_2c5e4068();
      uStack_10 = DAT_2c5ae2e0;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5ae2e8,0x39b,DAT_2c5ae2e4);
    }
    uVar3 = 0x1b4;
    uStack_18 = _LAB_2c5ae388;
  }
  uStack_10 = _LAB_2c5ae380;
  uStack_14 = _LAB_2c5ae384;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5ae38c,uVar3);
}

