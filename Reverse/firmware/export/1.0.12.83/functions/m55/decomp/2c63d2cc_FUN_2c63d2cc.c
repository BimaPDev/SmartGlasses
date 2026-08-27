/* FUN_2c63d2cc @ 0x2c63d2cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63d2cc(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int local_38;
  int local_34;
  int local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined4 local_24;
  
  local_28 = param_2 == 1;
  local_24 = *_LAB_2c63d4b8;
  local_27 = (undefined1)param_4;
  local_2c = param_1;
  FUN_2c63d070(&local_2c,param_2,0);
  if ((1 < param_1 - 0xe2U) && (iVar3 = thunk_FUN_2c489a64(), puVar2 = _LAB_2c63d4ec, iVar3 == 0)) {
    FUN_2c644044(*_LAB_2c63d4ec,0xffffffff);
    FUN_2c5e31b4(0x30,&local_38);
    FUN_2c644080(*puVar2);
    if (local_38 != 1 || local_34 != 0) {
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
  if (param_3 != 0) {
    if (param_4 == 7) {
      uVar7 = 0x32;
    }
    else {
      uVar7 = 300;
    }
    iVar3 = FUN_2c673c88();
    uVar5 = FUN_2c6741d8(iVar3 - *piVar1);
                    /* WARNING: Subroutine does not return */
    TRACE(4,199,_LAB_2c63d4c4,_LAB_2c63d4c0,_LAB_2c63d4d0,uVar5,uVar7);
  }
  iVar3 = FUN_2c4969c8();
  if (iVar3 != 0) {
    FUN_2c4967a0(0);
  }
  piVar1 = _LAB_2c63d4e8;
  if ((*_LAB_2c63d4e8 != 0) && (uVar4 = FUN_2c485790(), uVar4 < 0xb)) {
    piVar6 = (int *)FUN_2c4728e8(4,8);
    puVar2 = _LAB_2c63d4ec;
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x103,_LAB_2c63d4c4,_LAB_2c63d4c0,_LAB_2c63d4e4);
    }
    *piVar6 = param_1;
    *(char *)(piVar6 + 1) = (char)param_2;
    FUN_2c644044(*puVar2,0xffffffff);
    iVar3 = FUN_2c4857c8(*piVar1,piVar6);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x10b,_LAB_2c63d4c4,_LAB_2c63d4c0,_LAB_2c63d4dc);
    }
    uVar7 = FUN_2c485790(*piVar1);
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x111,_LAB_2c63d4c4,_LAB_2c63d4c0,_LAB_2c63d4d4,uVar7);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x114,_LAB_2c63d4c4,_LAB_2c63d4c0,_LAB_2c63d4bc);
}

