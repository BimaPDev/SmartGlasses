/* FUN_2c496e30 @ 0x2c496e30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c496e30(undefined1 param_1,undefined4 param_2)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;
  undefined8 uVar6;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 auStack_3c [32];
  int local_1c;
  
  pcVar1 = DAT_2c496fd4;
  uVar5 = _LAB_2c496fbc;
  uVar3 = _LAB_2c496fb8;
  local_1c = *_LAB_2c496fa8;
  switch(param_1) {
  case 0:
    iVar4 = FUN_2c673c88();
    piVar2 = DAT_2c496fe0;
    *DAT_2c496fe4 = param_2;
    pcVar1 = DAT_2c496fd4;
    *piVar2 = iVar4;
    *pcVar1 = '\x01';
    break;
  case 1:
    if (*DAT_2c496fd4 == '\0') {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x122,DAT_2c496ff4,DAT_2c496ff0,DAT_2c496fec);
    }
    local_44 = DAT_2c496fd8;
    local_4c = _LAB_2c496fb8;
    uStack_48 = _LAB_2c496fbc;
    local_54 = _LAB_2c496fb8;
    uStack_50 = _LAB_2c496fb8;
    uVar3 = FUN_2c48e738();
    FUN_2c6742b8(auStack_3c,0x20);
    FUN_2c48e5b4(uVar3,DAT_2c496fdc,auStack_3c);
    iVar4 = FUN_2c673c88();
    uVar5 = FUN_2c6741d8(iVar4 - *DAT_2c496fe0);
    uVar6 = VectorSignedToFloat(*DAT_2c496fe4,(byte)(in_fpscr >> 0x16) & 3);
    FUN_2c48e518((int)uVar6,uVar3,DAT_2c496fc4);
    uVar6 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
    FUN_2c48e518((int)uVar6,uVar3,DAT_2c496fe8);
    local_40 = uVar3;
    FUN_2c4861f4(&local_54);
    *pcVar1 = '\0';
    break;
  case 2:
    FUN_2c674268(_LAB_2c496fac,0,0x20);
    FUN_2c6742b8(_LAB_2c496fac,0x20);
    pcVar1 = _LAB_2c496fb4;
    *_LAB_2c496fb0 = param_2;
    *pcVar1 = '\x01';
    break;
  case 3:
    if (*_LAB_2c496fb4 == '\0') {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x148,DAT_2c496ff4,DAT_2c496ff0,DAT_2c496ff8);
    }
    *_LAB_2c496fb4 = '\0';
    local_4c = uVar3;
    uStack_48 = uVar5;
    local_54 = uVar3;
    uStack_50 = uVar3;
    local_44 = DAT_2c496fc0;
    uVar3 = FUN_2c48e738();
    uVar6 = VectorSignedToFloat(*_LAB_2c496fb0,(byte)(in_fpscr >> 0x16) & 3);
    FUN_2c48e518((int)uVar6,uVar3,DAT_2c496fc4);
    FUN_2c48e5b4(uVar3,DAT_2c496fc8,_LAB_2c496fac);
    FUN_2c6742b8(auStack_3c,0x20);
    FUN_2c48e5b4(uVar3,DAT_2c496fcc,auStack_3c);
    uVar6 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    FUN_2c48e518((int)uVar6,uVar3,DAT_2c496fd0);
    local_40 = uVar3;
    FUN_2c4861f4(&local_54);
  }
  if (*_LAB_2c496fa8 != local_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 1;
}

