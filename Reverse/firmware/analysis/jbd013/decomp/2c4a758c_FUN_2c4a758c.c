/* FUN_2c4a758c @ 0x2c4a758c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a758c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uStack_10;
  undefined1 uStack_f;
  int iStack_c;
  
  iStack_c = *_LAB_2c4a771c;
  switch(param_1) {
  case 0:
    uVar1 = 0x337;
    uVar2 = _LAB_2c4a7744;
    break;
  case 1:
    uVar1 = 0x333;
    uVar2 = _LAB_2c4a7734;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x367,_LAB_2c4a772c,_LAB_2c4a7728,_LAB_2c4a7724,_LAB_2c4a7720,0x367);
  case 0x10:
    uVar1 = 0x33b;
    uVar2 = _LAB_2c4a7738;
    goto LAB_2c4a7682;
  case 0x11:
    uVar1 = 0x353;
    uVar2 = _LAB_2c4a773c;
    goto LAB_2c4a76a4;
  case 0x12:
    if (((code *)*_LAB_2c4a7730 != (code *)0x0) &&
       ((((param_1 == 0x10 || (param_1 == 0x20)) || (param_1 - 0x51U < 2)) || (param_1 == 0x11)))) {
      uStack_10 = (undefined1)param_1;
      uStack_f = 1;
      (*(code *)*_LAB_2c4a7730)(&uStack_10);
    }
    if (*_LAB_2c4a771c == iStack_c) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  case 0x13:
    uVar1 = 0x35b;
    uVar2 = _LAB_2c4a7758;
    break;
  case 0x20:
    uVar1 = 0x33f;
    uVar2 = _LAB_2c4a7740;
LAB_2c4a7682:
                    /* WARNING: Subroutine does not return */
    TRACE(4,uVar1,_LAB_2c4a772c,_LAB_2c4a7728,uVar2,_LAB_2c4a7720,uVar1);
  case 0x30:
    uVar1 = 0x343;
    uVar2 = _LAB_2c4a7754;
    break;
  case 0x40:
    uVar1 = 0x347;
    uVar2 = _LAB_2c4a7760;
    break;
  case 0x50:
    uVar1 = 0x34b;
    uVar2 = _LAB_2c4a774c;
    break;
  case 0x51:
    uVar1 = 0x35f;
    uVar2 = _LAB_2c4a7750;
    goto LAB_2c4a76a4;
  case 0x52:
    uVar1 = 0x363;
    uVar2 = _LAB_2c4a7748;
LAB_2c4a76a4:
                    /* WARNING: Subroutine does not return */
    TRACE(4,uVar1,_LAB_2c4a772c,_LAB_2c4a7728,uVar2,_LAB_2c4a7720,uVar1);
  case 0x60:
    uVar1 = 0x34f;
    uVar2 = _LAB_2c4a775c;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,uVar1,_LAB_2c4a772c,_LAB_2c4a7728,uVar2,_LAB_2c4a7720,uVar1);
}

