/* FUN_2c4970f8 @ 0x2c4970f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4970f8(int *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *_LAB_2c4971ec;
  if ((param_1 == (int *)0x0) || (param_2 < 0xe)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xed,_LAB_2c4971fc,_LAB_2c497200,_LAB_2c497208,_LAB_2c4971f4);
  }
  if ((((*param_1 == _LAB_2c4971f0) && (param_1[1] == _LAB_2c4971f0 + 0xf608e7)) &&
      (param_1[2] == _LAB_2c4971f0 + -0x3d42fd46)) && ((char)param_1[3] == '\0')) {
    uVar1 = 2;
  }
  else {
    if (((*param_1 != _LAB_2c4971f0) || (param_1[1] != _LAB_2c49720c)) ||
       ((param_1[2] != _LAB_2c497210 || ((char)param_1[3] != '\0')))) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x102,_LAB_2c4971fc,_LAB_2c497200,_LAB_2c4971f8,_LAB_2c4971f4);
    }
    uVar1 = 1;
  }
  if (param_2 == 0xe) {
    uVar2 = 0;
    uVar4 = uVar2;
  }
  else {
    uVar2 = (int)param_1 + 0xe;
    uVar4 = param_2 - 0xe & 0xffff;
  }
  FUN_2c497024(uVar1,*(undefined1 *)((int)param_1 + 0xd),uVar2,uVar4);
  if (*_LAB_2c4971ec == iVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

