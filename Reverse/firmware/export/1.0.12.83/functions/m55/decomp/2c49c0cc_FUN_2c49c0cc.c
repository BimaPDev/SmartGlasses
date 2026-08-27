/* FUN_2c49c0cc @ 0x2c49c0cc */

void FUN_2c49c0cc(int param_1,uint param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint extraout_r1;
  uint uVar6;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  byte local_21;
  undefined4 local_20;
  uint local_1c;
  
  puVar3 = DAT_2c49c37c;
  puVar2 = DAT_2c49c374;
  local_1c = *DAT_2c49c370;
  if (*(int *)(DAT_2c49c36c + 4) != 1) {
LAB_2c49c49c:
    param_1 = -1;
    goto LAB_2c49c13e;
  }
  uVar6 = param_2;
  switch(param_1) {
  case 0x14:
    *DAT_2c49c378 = param_2;
    break;
  case 0x15:
    *DAT_2c49c37c = param_2;
    break;
  default:
    if (((int)*DAT_2c49c374 < 0) && (param_1 - 0x17U < 3)) goto LAB_2c49c2ea;
    break;
  case 0x17:
    *DAT_2c49c374 = param_2;
    if (0 < (int)param_2) {
      uVar5 = 0xf;
      if ((int)param_2 < 0x32) {
        param_2 = 0x32;
      }
      lVar1 = (ulonglong)DAT_2c49c4b8 * (ulonglong)(param_2 - 0x32);
      uVar10 = (undefined4)lVar1;
      uVar6 = ((uint)((ulonglong)lVar1 >> 0x20) & 0xfff) >> 4;
LAB_2c49c190:
      FUN_2c49b35c(0x10,uVar5,uVar6,uVar10);
      iVar4 = FUN_2c49b318(0x1d,&local_21);
      if ((iVar4 == 0) && ((char)local_21 < '\0')) {
        local_21 = local_21 & 0x7f;
        FUN_2c49b2c0(0x1d);
      }
      goto LAB_2c49c1ea;
    }
    goto LAB_2c49c162;
  case 0x18:
    *DAT_2c49c374 = param_2;
    if (0 < (int)param_2) {
      uVar5 = 0xf0;
      uVar6 = 0xf28;
      if (0xf28 < (int)param_2) {
        uVar6 = param_2;
      }
      lVar1 = (ulonglong)DAT_2c49c380 * (ulonglong)(uVar6 - 0xf28);
      uVar10 = (undefined4)lVar1;
      uVar6 = (uint)((ulonglong)lVar1 >> 0x22) & 0xf0;
      goto LAB_2c49c190;
    }
LAB_2c49c162:
    if (param_2 == 0) {
      FUN_2c49b5d0();
      param_2 = *puVar2;
    }
LAB_2c49c166:
    if ((int)param_2 < 0) {
LAB_2c49c2ea:
      FUN_2c49b35c(0x10,0xf);
      FUN_2c49b35c(0x10,0xf0,0x70);
      iVar4 = FUN_2c49b318(0x1d,&local_21);
      if ((iVar4 == 0) && ((char)local_21 < '\0')) {
        local_21 = local_21 & 0x7f;
        FUN_2c49b2c0(0x1d);
      }
      FUN_2c49b970();
    }
    break;
  case 0x19:
    *DAT_2c49c374 = param_2;
    if ((int)param_2 < 1) {
      if (param_2 == 0) {
        iVar4 = FUN_2c49b318(0x1d,&local_21);
        if ((iVar4 == 0) && (-1 < (int)((uint)local_21 << 0x19))) {
          local_21 = local_21 & 0xbf | 0x40;
          FUN_2c49b2c0(0x1d);
        }
        goto LAB_2c49c1ea;
      }
    }
    else {
      FUN_2c49b35c(0x12,0xff,(param_2 & 0x1ff) >> 1);
      iVar4 = FUN_2c49b318(0x1d,&local_21);
      if ((iVar4 == 0) && ((int)((uint)local_21 << 0x19) < 0)) {
        local_21 = local_21 & 0xbf;
        FUN_2c49b2c0(0x1d);
      }
LAB_2c49c1ea:
      param_2 = *puVar2;
    }
    goto LAB_2c49c166;
  case 0x1a:
    *DAT_2c49c374 = param_2;
    if ((int)param_2 < 1) {
      if (((param_2 == 0) && (iVar4 = FUN_2c49b318(0x1d,&local_21), iVar4 == 0)) &&
         (-1 < (int)((uint)local_21 << 0x19))) {
        local_21 = local_21 & 0xbf | 0x40;
        FUN_2c49b2c0(0x1d);
      }
    }
    else {
      FUN_2c49b530(param_2);
      iVar4 = FUN_2c49b318(0x1d,&local_21);
      if ((iVar4 == 0) && ((int)((uint)local_21 << 0x19) < 0)) {
        local_21 = local_21 & 0xbf;
        FUN_2c49b2c0(0x1d);
      }
    }
    break;
  case 0x1b:
    if (param_2 == 0) {
      uVar7 = 0;
      uVar8 = *DAT_2c49c370 ^ local_1c;
      if ((*DAT_2c49c370 ^ local_1c) == 0) {
        uVar5 = 0;
LAB_2c49c23c:
        FUN_2c49b620(8,uVar5,0,0);
        return;
      }
    }
    else {
      uVar7 = *DAT_2c49c4b4 ^ local_1c;
      uVar6 = 0;
      uVar8 = param_2;
      if (uVar7 == 0) {
        uVar5 = 1;
        goto LAB_2c49c23c;
      }
    }
    goto LAB_2c49c4ac;
  case 0x1c:
    uVar7 = 0;
    uVar8 = *DAT_2c49c370 ^ local_1c;
    if ((*DAT_2c49c370 ^ local_1c) == 0) {
      FUN_2c49b778(4,param_2 != 0,0);
      return;
    }
    goto LAB_2c49c4ac;
  case 0x1d:
    if ((param_2 == 1) || (param_2 == 0)) {
      FUN_2c49b778(0x10,param_2);
    }
    else if (param_2 == 3) {
      FUN_2c49b620(0x10,1);
    }
    else if (param_2 == 2) {
      FUN_2c49b620(0x10,0);
    }
    break;
  case 0x27:
    uVar8 = (param_2 & 0xffff) >> 8;
    uVar6 = (param_2 & 0xffffff) >> 0x10;
    local_20 = CONCAT31((int3)((uint)*(undefined4 *)(DAT_2c49c384 + 0x18) >> 8),(char)(param_2 >> 8)
                       );
    if ((param_2 & 0xff0000) == 0) {
      FUN_2c648600(DAT_2c49c4bc,uVar8);
      FUN_2c673bc8(&local_20,1);
      FUN_2c4c0248(uVar8,1,param_2 & 0xff);
      uVar6 = extraout_r1_01;
    }
    else if (uVar6 == 1) {
      FUN_2c4c0248(0x58,1,0);
      for (param_2 = param_2 & 0xffff; 0x96 < param_2; param_2 = param_2 - 0x96) {
        FUN_2c6444fc(param_2);
      }
      FUN_2c6444fc(param_2);
      FUN_2c4c0248(0x58,1);
      uVar6 = extraout_r1_00;
    }
    goto LAB_2c49c13c;
  case 0x28:
    *DAT_2c49c378 = 0xffffffff;
    *puVar3 = 0xffffffff;
    *puVar2 = 0xffffffff;
    goto LAB_2c49c2ea;
  case 0x2a:
    FUN_2c49b444();
    FUN_2c4c1a28(1);
    uVar10 = *DAT_2c49c388;
    iVar4 = FUN_2c674658();
    uVar11 = *DAT_2c49c38c;
    uVar12 = *DAT_2c49c390;
    uVar5 = FUN_2c4c1638();
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x590,DAT_2c49c39c,DAT_2c49c398,DAT_2c49c394,uVar10,iVar4 == 0,uVar11,uVar12,uVar5);
  case 0x2b:
    if ((param_2 & 0xffffff) >> 0x10 == 1) {
      uVar9 = (param_2 & 0xffff) >> 8;
      uVar13 = FUN_2c648600(DAT_2c49c4b0,uVar9,param_2 & 0xff);
      param_1 = (int)uVar13;
      uVar7 = *DAT_2c49c4b4 ^ local_1c;
      uVar8 = (uint)((ulonglong)uVar13 >> 0x20);
      uVar6 = 0;
      if (uVar7 == 0) {
        FUN_2c49b2c0(uVar9,param_2 & 0xff,0,0);
        return;
      }
      goto LAB_2c49c4ac;
    }
    goto LAB_2c49c49c;
  }
  FUN_2c4c15dc();
  uVar6 = extraout_r1;
LAB_2c49c13c:
  param_1 = 0;
  param_2 = uVar6;
LAB_2c49c13e:
  uVar7 = *DAT_2c49c370 ^ local_1c;
  uVar8 = param_2;
  uVar6 = 0;
  if (uVar7 == 0) {
    return;
  }
LAB_2c49c4ac:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(param_1,uVar8,uVar7,uVar6);
}

