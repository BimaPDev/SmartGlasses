/* FUN_2c642e60 @ 0x2c642e60 */

/* WARNING: Removing unreachable block (ram,0x2c6424ae) */
/* WARNING: Removing unreachable block (ram,0x2c6424b2) */
/* WARNING: Removing unreachable block (ram,0x2c6424b6) */
/* WARNING: Removing unreachable block (ram,0x2c6424c4) */
/* WARNING: Removing unreachable block (ram,0x2c6424dc) */
/* WARNING: Removing unreachable block (ram,0x2c6424a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c642e60(undefined4 param_1,undefined4 param_2,int *param_3,char *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  uVar2 = _LAB_2c642ed0;
  iStack_14 = *param_3;
  if (*param_4 != '\x02') {
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    FUN_2c6742b8(&uStack_34,0x20,0);
    FUN_2c643084(_LAB_2c642ed4,_LAB_2c642ed4,_LAB_2c642ed4,_LAB_2c642edc,_LAB_2c642ed8,uVar2,0,
                 &uStack_34);
  }
  uVar3 = _LAB_2c642528;
  uVar2 = _LAB_2c642504;
  if (*_LAB_2c642ecc == iStack_14) {
    iStack_14 = *_LAB_2c6424fc;
    uStack_1c = CONCAT13(1,(undefined3)uStack_1c);
    bVar1 = *_LAB_2c642500;
    switch((uint)bVar1) {
    case 0:
      *_LAB_2c642500 = 3;
      break;
    case 1:
      *_LAB_2c642500 = 2;
      uVar3 = uVar2;
      break;
    case 2:
      *_LAB_2c642500 = 3;
      break;
    case 3:
    default:
      if (*_LAB_2c6424fc != iStack_14) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return;
    }
    uStack_30 = _LAB_2c64250c;
    uStack_2c = *(undefined4 *)(_LAB_2c642508 + (uint)bVar1 * 8 + 4);
    uStack_24 = *(undefined4 *)(_LAB_2c642514 + 0x1c);
    uStack_28 = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c642510,0x187,_LAB_2c642518);
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

