/* FUN_2c49b778 @ 0x2c49b778 */

undefined4 FUN_2c49b778(uint param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte local_15;
  int local_14;
  
  puVar1 = DAT_2c49b8b4;
  local_14 = *DAT_2c49b8b0;
  uVar6 = *DAT_2c49b8b4;
  if (param_1 == 0x400) {
    FUN_2c648600(DAT_2c49b8e4,*(undefined1 *)(DAT_2c49b8cc + 0xc),uVar6);
LAB_2c49b7fc:
    if (*DAT_2c49b8b0 != local_14) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return 0;
  }
  if (param_2 == 0) {
    param_1 = uVar6 | param_1;
    *DAT_2c49b8b4 = param_1;
    if (uVar6 != param_1) goto LAB_2c49b79e;
    if (*DAT_2c49b8c4 != 0) goto LAB_2c49b7fc;
    *DAT_2c49b8c4 = 1;
LAB_2c49b824:
    iVar3 = FUN_2c49b318(0x1d,&local_15);
    if ((iVar3 == 0) && (-1 < (int)((uint)local_15 << 0x19))) {
      local_15 = local_15 & 0xbf | 0x40;
      iVar3 = FUN_2c49b2c0(0x1d);
    }
  }
  else {
    param_1 = uVar6 & ~param_1;
    *DAT_2c49b8b4 = param_1;
    if (uVar6 != param_1) {
LAB_2c49b79e:
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x25a,DAT_2c49b8c0,DAT_2c49b8bc,DAT_2c49b8b8,param_1);
    }
    if (((param_1 == 0) != (uVar6 != 0)) && (*DAT_2c49b8c4 != 0)) goto LAB_2c49b7fc;
    *DAT_2c49b8c4 = 1;
    uVar4 = DAT_2c49b8d0;
    if (param_1 != 0) goto LAB_2c49b824;
    if (*DAT_2c49b8c8 != 1) {
      *(undefined1 *)(DAT_2c49b8cc + 0xc) = 1;
      uVar6 = 0;
      uVar5 = DAT_2c49b8d4;
      goto LAB_2c49b7e4;
    }
    iVar3 = FUN_2c49b318(0x1d,&local_15);
    if ((iVar3 == 0) && ((int)((uint)local_15 << 0x19) < 0)) {
      local_15 = local_15 & 0xbf;
      iVar3 = FUN_2c49b2c0(0x1d);
    }
  }
  uVar2 = DAT_2c49b8e0;
  uVar5 = DAT_2c49b8d4;
  uVar6 = *puVar1;
  uVar4 = DAT_2c49b8d0;
  if (uVar6 != 0) {
    uVar4 = DAT_2c49b8dc;
  }
  *(bool *)(DAT_2c49b8cc + 0xc) = uVar6 == 0;
  if (iVar3 != 0) {
    uVar5 = uVar2;
  }
LAB_2c49b7e4:
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x272,DAT_2c49b8c0,DAT_2c49b8bc,DAT_2c49b8d8,uVar4,uVar5,uVar6);
}

