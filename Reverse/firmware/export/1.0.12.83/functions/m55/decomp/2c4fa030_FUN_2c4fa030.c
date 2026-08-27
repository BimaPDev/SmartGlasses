/* FUN_2c4fa030 @ 0x2c4fa030 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4fa030(undefined4 param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  uint uStack_20;
  int iStack_1c;
  
  iVar2 = _LAB_2c4fa178;
  pcVar1 = _LAB_2c4fa174;
  iStack_1c = *DAT_2c4fa170;
  if (*_LAB_2c4fa174 != '\0') {
    if ((*(int *)(_LAB_2c4fa178 + 0xc) == 0) && (iVar6 = FUN_2c4fb39c(1), iVar6 != 0)) {
      uVar5 = FUN_2c673c88();
      *(undefined4 *)(iVar2 + 0xc) = uVar5;
    }
    if ((*(int *)(iVar2 + 0x14) == 0) && (iVar6 = FUN_2c4fb39c(1), iVar6 != 0)) {
      uVar5 = FUN_2c673c88();
      *(undefined4 *)(iVar2 + 0x14) = uVar5;
      *(undefined1 *)(iVar2 + 1) = 1;
    }
    uVar7 = *_LAB_2c4fa17c;
    *_LAB_2c4fa17c = uVar7 + 1;
    if (uVar7 + 1 < 9) {
      FUN_2c674268(param_1,0,param_2);
    }
    else {
      uStack_20 = param_2 >> 1;
      uStack_24 = param_1;
      iVar6 = func_0x2c4fb3d4(1,auStack_28);
      if (iVar6 == 0) {
        if (*(char *)(iVar2 + 1) != '\0') {
          uVar5 = FUN_2c674198();
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x1a5,_LAB_2c4fa19c,_LAB_2c4fa1a0,_LAB_2c4fa198,_LAB_2c4fa194,uVar5);
        }
      }
      else if (*(int *)(iVar2 + 0x10) == 0) {
        uVar5 = FUN_2c673c88();
        *(undefined4 *)(iVar2 + 0x10) = uVar5;
      }
    }
    puVar3 = _LAB_2c4fa180;
    puVar4 = (undefined1 *)FUN_2c6442f0(*_LAB_2c4fa180,0);
    if (puVar4 != (undefined1 *)0x0) {
      uVar5 = *puVar3;
      *puVar4 = 3;
      FUN_2c6442fc(uVar5);
    }
    if ((*_LAB_2c4fa184 == '\0') && (*_LAB_2c4fa188 == '\0')) {
      if ((*_LAB_2c4fa18c != '\0') && (*_LAB_2c4fa190 == '\0')) {
        if (*pcVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x2d2,_LAB_2c4fa19c,_LAB_2c4fa1a0,_LAB_2c4fa1a8,_LAB_2c4fa1a4);
        }
        *_LAB_2c4fa190 = '\x01';
      }
    }
    else {
      FUN_2c674268(param_1,0,param_2);
    }
  }
  if (*DAT_2c4fa170 == iStack_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

