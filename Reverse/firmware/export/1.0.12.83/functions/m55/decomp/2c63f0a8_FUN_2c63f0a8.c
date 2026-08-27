/* FUN_2c63f0a8 @ 0x2c63f0a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c63f0a8(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iStack_24 = *_LAB_2c63f2c0;
  uStack_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  uStack_28 = param_1[4];
  if (*(char *)(param_1 + 4) == '\0') {
    if (param_2 == 0) {
      iVar1 = FUN_2c48f2d4(*(undefined1 *)param_1);
      if (iVar1 << 0x18 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,uRam2c63f2d4,0x1df,uRam2c63f2d0,uRam2c63f2f0,*param_1);
      }
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  else if (param_2 != 0) {
    iVar1 = FUN_2c48f380(*(undefined1 *)param_1);
    if (iVar1 << 0x18 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,uRam2c63f2d4,0x1d4,uRam2c63f2d0,uRam2c63f2ec,*param_1);
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if ((int)param_2 < (int)param_1[1]) {
    param_2 = param_1[1] & 0xff;
  }
  if ((int)param_1[2] < (int)param_2) {
    param_2 = param_1[2] & 0xff;
  }
  if ((param_3 == 0) ||
     ((param_2 == param_1[3] && (uVar2 = FUN_2c48ee94(*(undefined1 *)param_1), param_2 == uVar2))))
  {
    param_3 = 0;
  }
  else {
    iVar1 = FUN_2c48ef34(*(undefined1 *)param_1,param_2,1);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,uRam2c63f2d4,0x1f1,uRam2c63f2d0,_LAB_2c63f2cc);
    }
  }
  iVar1 = FUN_2c640dc0();
  if ((iVar1 == 0) && (param_4 != 0)) {
    FUN_2c64078c(_LAB_2c63f2c4);
    iVar3 = FUN_2c640a50();
    if (iVar3 != 0) {
      param_1[3] = param_2;
      FUN_2c640a6c(param_1,&uStack_38);
      goto LAB_2c63f24a;
    }
LAB_2c63f17c:
    FUN_2c6411e0();
    iVar3 = FUN_2c63e140();
    if (iVar3 != 0) {
      FUN_2c63dc4c(0,1);
    }
    iVar3 = FUN_2c640b70(param_1,0);
    if (iVar3 == 0) {
      if (*_LAB_2c63f2c8 != '\0') goto LAB_2c63f19c;
LAB_2c63f124:
      if (param_4 != 1) goto LAB_2c63f12a;
    }
    else {
      param_1[3] = param_2;
      FUN_2c640a6c(param_1,&uStack_38);
      if (iVar1 == 0) {
LAB_2c63f24a:
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,uRam2c63f2d4,0xc5,uRam2c63f2dc,uRam2c63f2d8,0);
      }
      if (*_LAB_2c63f2c8 != '\0') goto LAB_2c63f19c;
    }
  }
  else {
    if (iVar1 != 1) goto LAB_2c63f124;
    FUN_2c64078c(_LAB_2c63f2c4);
    iVar3 = FUN_2c640a50();
    if (iVar3 == 0) goto LAB_2c63f17c;
    param_1[3] = param_2;
    FUN_2c640a6c(param_1,&uStack_38);
    if (*_LAB_2c63f2c8 == '\0') goto LAB_2c63f124;
LAB_2c63f19c:
    FUN_2c490020(0);
    if (param_4 == 1) goto LAB_2c63f1aa;
LAB_2c63f12a:
    if (iVar1 == 0) {
      param_1[3] = param_2;
      func_0x2c63ef20(*(undefined1 *)param_1,param_2);
      goto joined_r0x2c63f1b6;
    }
  }
LAB_2c63f1aa:
  func_0x2c63ef20(*(undefined1 *)param_1,*(undefined1 *)(param_1 + 3));
joined_r0x2c63f1b6:
  if (param_3 == 0) {
    param_3 = 1;
  }
  else {
    FUN_2c63ec24(*(undefined1 *)param_1,*(undefined1 *)(param_1 + 3),*(undefined1 *)(param_1 + 4),0)
    ;
  }
  if (*_LAB_2c63f2c0 == iStack_24) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

