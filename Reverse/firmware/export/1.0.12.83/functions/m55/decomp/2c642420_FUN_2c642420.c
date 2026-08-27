/* FUN_2c642420 @ 0x2c642420 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c642420(uint param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = _LAB_2c64252c;
  uVar6 = _LAB_2c642528;
  uVar4 = _LAB_2c642524;
  uVar3 = _LAB_2c642520;
  uVar2 = _LAB_2c642504;
  bVar1 = *_LAB_2c642500;
  switch((uint)bVar1) {
  case 0:
    if (param_1 == 0) {
      *_LAB_2c642500 = 1;
      uVar6 = uVar4;
      goto LAB_2c64244e;
    }
    if (param_1 - 3 < 2) {
      *_LAB_2c642500 = 3;
      goto LAB_2c64244e;
    }
    break;
  case 1:
    if (param_1 == 3) {
LAB_2c642446:
      *_LAB_2c642500 = 2;
      uVar6 = uVar2;
      goto LAB_2c64244e;
    }
    if (param_1 == 1) {
LAB_2c6424dc:
      *_LAB_2c642500 = 0;
      uVar6 = uVar5;
      goto LAB_2c64244e;
    }
    break;
  case 2:
    if ((param_1 & 0xfd) == 1) {
      *_LAB_2c642500 = 3;
      goto LAB_2c64244e;
    }
    goto LAB_2c64249c;
  case 3:
    if (param_1 == 0) goto LAB_2c642446;
    if (param_1 == 2) goto LAB_2c6424dc;
LAB_2c64249c:
    if (param_1 != 5) goto LAB_2c642482;
    *_LAB_2c642500 = 4;
    uVar6 = uVar3;
    goto LAB_2c64244e;
  default:
    goto LAB_2c642482;
  }
  if (param_1 != 5) {
LAB_2c642482:
    if (*_LAB_2c6424fc != *_LAB_2c6424fc) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
  *_LAB_2c642500 = 4;
  uVar6 = uVar3;
LAB_2c64244e:
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c642510,0x187,_LAB_2c642518,_LAB_2c64250c,
               *(undefined4 *)(_LAB_2c642508 + (uint)bVar1 * 8 + 4),uVar6,
               *(undefined4 *)(_LAB_2c642514 + param_1 * 8 + 4));
}

