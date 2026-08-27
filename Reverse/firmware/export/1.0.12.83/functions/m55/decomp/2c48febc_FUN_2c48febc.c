/* FUN_2c48febc @ 0x2c48febc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c48febc(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  undefined1 uStack_21;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  piVar1 = _DAT_2c48ffe4;
  iStack_14 = *_LAB_2c48ffe0;
  FUN_2c4969dc(0x22,0xf,param_3,0);
  puVar2 = _LAB_2c48ffec;
  iVar3 = *piVar1;
  if (iVar3 == 0) {
    *(undefined4 *)(_DAT_2c48ffe8 + param_2 * 0x18 + 0x14) = 0;
    piVar1 = _LAB_2c48fff0;
    *puVar2 = 1;
    *piVar1 = param_2;
  }
  else {
    FUN_2c644044(iVar3,0xffffffff);
    puVar2 = _LAB_2c48ffec;
    iVar3 = *piVar1;
    *(undefined4 *)(_DAT_2c48ffe8 + param_2 * 0x18 + 0x14) = 0;
    piVar1 = _LAB_2c48fff0;
    *puVar2 = 1;
    *piVar1 = param_2;
    if (iVar3 != 0) {
      FUN_2c644080();
    }
  }
  FUN_2c674268(auStack_38,0,0x24);
  uVar4 = param_2 - 8U & 0xff;
  uStack_2b = 0x10;
  if (uVar4 < 10) {
    uStack_34 = 0xac44;
LAB_2c48ff2c:
    uStack_2c = 2;
    uStack_30 = 6;
    uStack_2a = 0xb01;
    if (*_DAT_2c48fff4 == '\0') {
      if ((param_2 == 0) || (param_2 == 0x14)) {
        uStack_21 = 9;
        goto LAB_2c48ff4a;
      }
      if (uVar4 < 10) {
        uStack_21 = FUN_2c4fab44();
        goto LAB_2c48ff4a;
      }
LAB_2c48ffd4:
      uStack_2a = 0xb01;
      uStack_2c = 2;
      uStack_30 = 6;
      uStack_21 = 7;
      goto LAB_2c48ff4a;
    }
  }
  else {
    if (param_2 != 0x12) {
      uStack_34 = 16000;
      goto LAB_2c48ff2c;
    }
    uStack_34 = 8000;
    if (*_DAT_2c48fff4 == '\0') goto LAB_2c48ffd4;
  }
  uStack_2a = 0xb01;
  uStack_2c = 2;
  uStack_30 = 6;
  uStack_21 = *_LAB_2c48fff8;
LAB_2c48ff4a:
  uStack_20 = _LAB_2c48fffc;
  uStack_1c = _LAB_2c490000;
  uStack_18 = 0x2000;
  func_0x2c6747d8();
  func_0x2c4c3d1c(0,0,auStack_38);
  FUN_2c4c40ec(0);
  func_0x2c6739c8();
  if (*_LAB_2c48ffe0 == iStack_14) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

