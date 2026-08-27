/* FUN_2c63d67e @ 0x2c63d67e */

/* WARNING: Removing unreachable block (ram,0x2c63d388) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63d67e(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 extraout_r2;
  int extraout_r2_00;
  undefined8 uVar8;
  int iStack_38;
  int iStack_34;
  int iStack_2c;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined4 uStack_24;
  
  uVar8 = func_0x2c63d260(*param_1);
  iVar7 = (int)((ulonglong)uVar8 >> 0x20);
  if ((int)uVar8 != 0) {
    if ((iVar7 == 0xf) || (iVar7 == 0x62)) {
      iVar7 = func_0x2c63d1d8(iVar7,iVar7,1);
      uStack_24 = *_LAB_2c63d4b8;
      uStack_28 = 0;
      uStack_27 = 4;
      iStack_2c = iVar7;
      FUN_2c63d070(&iStack_2c,0,0);
      if ((1 < iVar7 - 0xe2U) && (iVar3 = thunk_FUN_2c489a64(), puVar2 = _LAB_2c63d4ec, iVar3 == 0))
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
      if (extraout_r2_00 != 0) {
        iVar7 = FUN_2c673c88();
        uVar6 = FUN_2c6741d8(iVar7 - *piVar1);
                    /* WARNING: Subroutine does not return */
        TRACE(4,199,_LAB_2c63d4c4,_LAB_2c63d4c0,_LAB_2c63d4d0,uVar6,300);
      }
      iVar3 = FUN_2c4969c8();
      if (iVar3 != 0) {
        FUN_2c4967a0(0);
      }
      piVar1 = _LAB_2c63d4e8;
      if ((*_LAB_2c63d4e8 != 0) && (uVar4 = FUN_2c485790(), uVar4 < 0xb)) {
        piVar5 = (int *)FUN_2c4728e8(4,8);
        puVar2 = _LAB_2c63d4ec;
        if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x103,_LAB_2c63d4c4,_LAB_2c63d4c0,_LAB_2c63d4e4);
        }
        *piVar5 = iVar7;
        *(undefined1 *)(piVar5 + 1) = 0;
        FUN_2c644044(*puVar2,0xffffffff);
        iVar7 = FUN_2c4857c8(*piVar1,piVar5);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x10b,_LAB_2c63d4c4,_LAB_2c63d4c0,_LAB_2c63d4dc);
        }
        uVar6 = FUN_2c485790(*piVar1);
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x111,_LAB_2c63d4c4,_LAB_2c63d4c0,_LAB_2c63d4d4,uVar6);
      }
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x114,_LAB_2c63d4c4,_LAB_2c63d4c0,_LAB_2c63d4bc);
    }
    uVar6 = func_0x2c63d1d8(iVar7,iVar7,1);
    iVar7 = FUN_2c63d2cc(uVar6,extraout_r2);
    if ((iVar7 != 0) && (iVar7 = thunk_FUN_2c489a64(), iVar7 != 0)) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1ec,DAT_2c63b924,DAT_2c63b920);
    }
  }
  return;
}

