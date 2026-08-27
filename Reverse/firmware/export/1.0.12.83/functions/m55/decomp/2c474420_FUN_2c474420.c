/* FUN_2c474420 @ 0x2c474420 */

int FUN_2c474420(uint param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 < 0x10) {
    iVar5 = 1;
  }
  else if (param_1 < 0x800) {
    iVar5 = 2;
  }
  else if (param_1 < 0x40000) {
    iVar5 = 3;
  }
  else if (param_1 < 0x2000000) {
    iVar5 = 4;
  }
  else {
    iVar5 = 5;
  }
  switch(param_2) {
  case 0:
  case 0xd:
    uVar2 = *param_3;
    if ((int)uVar2 < 0) {
      return iVar5 + 10;
    }
    if ((int)uVar2 < 0x80) break;
    if ((int)uVar2 < 0x4000) goto LAB_2c4745ac;
    if (0x1fffff < (int)uVar2) {
      if ((int)uVar2 < 0x10000000) {
        iVar1 = 4;
      }
      else {
        iVar1 = 5;
      }
      return iVar1 + iVar5;
    }
    goto LAB_2c4745b2;
  case 1:
    uVar2 = (int)*param_3 >> 0x1f ^ *param_3 << 1;
    goto joined_r0x2c474578;
  case 2:
  case 7:
  case 10:
    return iVar5 + 4;
  case 3:
  case 8:
    uVar2 = *param_3;
    uVar3 = param_3[1];
    if (uVar3 != 0) {
      if (uVar3 < 8) {
LAB_2c4745a2:
        return iVar5 + 5;
      }
      if (uVar3 < 0x400) {
LAB_2c474604:
        return iVar5 + 6;
      }
      if (uVar3 < 0x20000) {
LAB_2c47460a:
        return iVar5 + 7;
      }
      if (0xffffff < uVar3) {
        if ((int)uVar3 < 0) {
          iVar1 = 10;
        }
        else {
          iVar1 = 9;
        }
        return iVar1 + iVar5;
      }
LAB_2c474616:
      return iVar5 + 8;
    }
    if (0x7f < uVar2) {
      if (uVar2 < 0x4000) goto LAB_2c4745ac;
      if (0x1fffff < uVar2) {
        if (uVar2 < 0x10000000) {
          iVar1 = 4;
        }
        else {
          iVar1 = 5;
        }
        return iVar1 + iVar5;
      }
      goto LAB_2c4745b2;
    }
    break;
  case 4:
    uVar3 = *param_3;
    uVar2 = (int)param_3[1] >> 0x1f;
    uVar4 = uVar3 * 2 ^ uVar2;
    uVar2 = param_3[1] * 2 + (uint)CARRY4(uVar3,uVar3) ^ uVar2;
    if (uVar2 != 0) {
      if (uVar2 < 8) goto LAB_2c4745a2;
      if (uVar2 < 0x400) goto LAB_2c474604;
      if (uVar2 < 0x20000) goto LAB_2c47460a;
      if (0xffffff < uVar2) {
        if ((int)uVar2 < 0) {
          iVar1 = 10;
        }
        else {
          iVar1 = 9;
        }
        return iVar1 + iVar5;
      }
      goto LAB_2c474616;
    }
    if (0x7f < uVar4) {
      if (uVar4 < 0x4000) goto LAB_2c4745ac;
      if (0x1fffff < uVar4) {
        if (uVar4 < 0x10000000) {
          iVar1 = 4;
        }
        else {
          iVar1 = 5;
        }
        return iVar1 + iVar5;
      }
      goto LAB_2c4745b2;
    }
    break;
  case 5:
  case 9:
  case 0xb:
    return iVar5 + 8;
  case 6:
    uVar2 = *param_3;
joined_r0x2c474578:
    if (0x7f < uVar2) {
      if (uVar2 < 0x4000) {
LAB_2c4745ac:
        return iVar5 + 2;
      }
      if (0x1fffff < uVar2) {
        if (uVar2 < 0x10000000) {
          iVar1 = 4;
        }
        else {
          iVar1 = 5;
        }
        return iVar1 + iVar5;
      }
LAB_2c4745b2:
      return iVar5 + 3;
    }
    break;
  case 0xc:
    return iVar5 + 1;
  case 0xe:
    if (*param_3 != 0) {
      uVar2 = FUN_2c66c4ec();
joined_r0x2c474596:
      if (uVar2 < 0x80) {
        return uVar2 + 1 + iVar5;
      }
      if (uVar2 < 0x4000) {
        return uVar2 + 2 + iVar5;
      }
      if (uVar2 < 0x200000) {
        return uVar2 + 3 + iVar5;
      }
      if (uVar2 < 0x10000000) {
        iVar1 = uVar2 + 4;
      }
      else {
        iVar1 = uVar2 + 5;
      }
      return iVar1 + iVar5;
    }
    break;
  case 0xf:
    uVar2 = *param_3;
    if (uVar2 < 0x80) {
      iVar1 = 1;
    }
    else if (uVar2 < 0x4000) {
      iVar1 = 2;
    }
    else if (uVar2 < 0x200000) {
      iVar1 = 3;
    }
    else if (uVar2 < 0x10000000) {
      iVar1 = 4;
    }
    else {
      iVar1 = 5;
    }
    return uVar2 + iVar5 + iVar1;
  case 0x10:
    if ((undefined4 *)*param_3 != (undefined4 *)0x0) {
      if (**(int **)*param_3 != DAT_2c47463c) {
                    /* WARNING: Subroutine does not return */
        FUN_2c668484(DAT_2c474648,0x2da,DAT_2c474644,DAT_2c474640);
      }
      uVar2 = FUN_2c474654();
      goto joined_r0x2c474596;
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_2c668484(DAT_2c474648,0x1dc,DAT_2c474650,DAT_2c47464c);
  }
  return iVar5 + 1;
}

