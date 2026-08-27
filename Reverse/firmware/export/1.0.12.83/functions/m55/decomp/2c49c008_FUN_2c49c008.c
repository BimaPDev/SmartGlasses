/* FUN_2c49c008 @ 0x2c49c008 */

/* WARNING: Removing unreachable block (ram,0x2c49b794) */
/* WARNING: Removing unreachable block (ram,0x2c49b7b4) */
/* WARNING: Removing unreachable block (ram,0x2c49b7bc) */
/* WARNING: Removing unreachable block (ram,0x2c49b7be) */
/* WARNING: Removing unreachable block (ram,0x2c49b7c6) */
/* WARNING: Removing unreachable block (ram,0x2c49b7cc) */
/* WARNING: Removing unreachable block (ram,0x2c49b7d2) */
/* WARNING: Removing unreachable block (ram,0x2c49b7da) */
/* WARNING: Removing unreachable block (ram,0x2c49b882) */
/* WARNING: Removing unreachable block (ram,0x2c49b892) */
/* WARNING: Removing unreachable block (ram,0x2c49b89a) */
/* WARNING: Removing unreachable block (ram,0x2c49b872) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c49c008(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bStack_15;
  int iStack_14;
  int in_stack_fffffff0;
  
  iVar6 = *param_3;
  if (*(int *)(param_4 + 4) == 1) {
    iVar4 = FUN_2c49b318(0x1d,&stack0xfffffff3,0);
    if ((iVar4 == 0) && (in_stack_fffffff0 < 0)) {
      FUN_2c49b2c0(0x1d);
    }
    puVar2 = DAT_2c49b8b4;
    if (*_LAB_2c49c078 == iVar6) {
      iStack_14 = *DAT_2c49b8b0;
      uVar8 = *DAT_2c49b8b4;
      uVar7 = uVar8 | 0x40;
      *DAT_2c49b8b4 = uVar7;
      if (uVar8 != uVar7) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x25a,DAT_2c49b8c0,DAT_2c49b8bc,DAT_2c49b8b8,uVar7);
      }
      if (*DAT_2c49b8c4 != 0) {
        if (*DAT_2c49b8b0 == iStack_14) {
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      *DAT_2c49b8c4 = 1;
      iVar6 = FUN_2c49b318(0x1d,&bStack_15);
      if ((iVar6 == 0) && (-1 < (int)((uint)bStack_15 << 0x19))) {
        bStack_15 = bStack_15 & 0xbf | 0x40;
        iVar6 = FUN_2c49b2c0(0x1d);
      }
      uVar3 = DAT_2c49b8e0;
      uVar5 = DAT_2c49b8d4;
      uVar7 = *puVar2;
      uVar1 = DAT_2c49b8d0;
      if (uVar7 != 0) {
        uVar1 = DAT_2c49b8dc;
      }
      *(bool *)(DAT_2c49b8cc + 0xc) = uVar7 == 0;
      if (iVar6 != 0) {
        uVar5 = uVar3;
      }
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x272,DAT_2c49b8c0,DAT_2c49b8bc,DAT_2c49b8d8,uVar1,uVar5,uVar7);
    }
  }
  else if (*_LAB_2c49c078 == iVar6) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

