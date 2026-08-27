/* FUN_2c63d62e @ 0x2c63d62e */

/* WARNING: Removing unreachable block (ram,0x2c63d388) */
/* WARNING: Removing unreachable block (ram,0x2c63d320) */
/* WARNING: Removing unreachable block (ram,0x2c63d3c8) */
/* WARNING: Removing unreachable block (ram,0x2c63d328) */
/* WARNING: Removing unreachable block (ram,0x2c63d332) */
/* WARNING: Removing unreachable block (ram,0x2c63d3d0) */
/* WARNING: Removing unreachable block (ram,0x2c63d49c) */
/* WARNING: Removing unreachable block (ram,0x2c63d3de) */
/* WARNING: Removing unreachable block (ram,0x2c63d400) */
/* WARNING: Removing unreachable block (ram,0x2c63d464) */
/* WARNING: Removing unreachable block (ram,0x2c63d33a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63d62e(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r2;
  int iStack_38;
  int iStack_34;
  int iStack_2c;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined4 uStack_24;
  
  iVar3 = func_0x2c63d260(*param_1);
  if (iVar3 != 0) {
    if ((extraout_r2 == 0xf) || (extraout_r2 == 0x62)) {
      iVar3 = func_0x2c63d1d8(extraout_r2);
      uStack_24 = *_LAB_2c63d4b8;
      uStack_28 = 0;
      uStack_27 = 1;
      iStack_2c = iVar3;
      FUN_2c63d070(&iStack_2c,0,0);
      if ((1 < iVar3 - 0xe2U) && (iVar3 = thunk_FUN_2c489a64(), puVar2 = _LAB_2c63d4ec, iVar3 == 0))
      {
        FUN_2c644044(*_LAB_2c63d4ec,0xffffffff);
        FUN_2c5e31b4(0x30,&iStack_38);
        FUN_2c644080(*puVar2);
        if (iStack_38 != 1 || iStack_34 != 0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0xea,_LAB_2c63d4c4,_LAB_2c63d4c0,_LAB_2c63d4d8);
        }
      }
      iVar3 = FUN_2c63c57c();
      if ((iVar3 != 1) && (iVar3 = thunk_FUN_2c489a64(), iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0xef,_LAB_2c63d4c4,_LAB_2c63d4c0,_LAB_2c63d4c8);
      }
      piVar1 = _LAB_2c63d4cc;
      iVar3 = FUN_2c673c88();
      uVar4 = FUN_2c6741d8(iVar3 - *piVar1);
                    /* WARNING: Subroutine does not return */
      TRACE(4,199,_LAB_2c63d4c4,_LAB_2c63d4c0,_LAB_2c63d4d0,uVar4,300);
    }
    uVar4 = func_0x2c63d1d8(extraout_r2);
    iVar3 = FUN_2c63d2cc(uVar4,1,1);
    if ((iVar3 != 0) && (iVar3 = thunk_FUN_2c489a64(), iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1ec,DAT_2c63b924,DAT_2c63b920);
    }
  }
  return;
}

