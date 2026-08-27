/* FUN_2c4c19e0 @ 0x2c4c19e0 */

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

undefined4 FUN_2c4c19e0(void)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bStack_15;
  int iStack_14;
  int in_stack_fffffff0;
  
  FUN_2c4be268(0);
  FUN_2c4be268(1);
  FUN_2c4be268(2);
  FUN_2c4be268(3);
  FUN_2c4be268(4);
  FUN_2c4be268(5);
  FUN_2c4be268(6);
  FUN_2c6745b8();
  uVar4 = FUN_2c674708();
  iVar6 = *_LAB_2c49c078;
  if (*(int *)(_LAB_2c49c074 + 4) == 1) {
    iVar3 = FUN_2c49b318(0x1d,&stack0xfffffff3,0);
    if ((iVar3 == 0) && (in_stack_fffffff0 < 0)) {
      FUN_2c49b2c0(0x1d);
    }
    puVar1 = DAT_2c49b8b4;
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
      uVar2 = DAT_2c49b8e0;
      uVar5 = DAT_2c49b8d4;
      uVar7 = *puVar1;
      uVar4 = DAT_2c49b8d0;
      if (uVar7 != 0) {
        uVar4 = DAT_2c49b8dc;
      }
      *(bool *)(DAT_2c49b8cc + 0xc) = uVar7 == 0;
      if (iVar6 != 0) {
        uVar5 = uVar2;
      }
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x272,DAT_2c49b8c0,DAT_2c49b8bc,DAT_2c49b8d8,uVar4,uVar5,uVar7);
    }
  }
  else if (*_LAB_2c49c078 == iVar6) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

