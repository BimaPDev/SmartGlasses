/* FUN_100db2dc @ 0x100db2dc */

undefined4 FUN_100db2dc(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  char local_24;
  undefined1 local_23;
  byte local_22;
  byte local_21 [5];
  
  uVar1 = FUN_100d55bc();
  iVar2 = FUN_100d5748(param_1,&local_24,&local_23,&local_22,local_21);
  if (iVar2 < 0) {
    return 0xfffffffd;
  }
  uVar5 = param_2;
  switch(param_2) {
  case 2:
    local_22 = 1;
    if ((1 < uVar1) && (uVar1 != 8)) {
LAB_100db4d6:
      if (uVar1 - 5 < 2) goto LAB_100db496;
      goto switchD_100db314_caseD_6;
    }
LAB_100db43e:
    uVar6 = 5;
    uVar5 = 2;
    break;
  case 3:
    local_21[0] = 1;
    if ((1 < uVar1) && (uVar1 != 8)) goto LAB_100db4d6;
LAB_100db44c:
    uVar6 = 6;
    uVar5 = 3;
    break;
  case 4:
    local_21[0] = 1;
    if (((uVar1 & 0xfffffff7) != 0) && (uVar1 != 3)) goto LAB_100db4d6;
    uVar6 = 0xb;
    break;
  case 5:
    local_24 = '\x01';
    if (((uVar1 & 0xfffffff7) == 0) || (uVar1 - 2 < 3)) {
      uVar6 = 9;
      break;
    }
    if (uVar1 != 6) goto switchD_100db314_caseD_6;
    goto LAB_100db4ba;
  case 8:
    if (1 < uVar1) {
      iVar2 = FUN_10136574();
      if ((param_1 == iVar2) || (iVar2 = FUN_100d5dac(3), param_1 == iVar2)) {
        FUN_100da9c4();
        (*(code *)*DAT_100db600)(0x11,0);
      }
      uVar5 = 0xffffffff;
    }
    FUN_100d5604(param_1,2);
    iVar2 = FUN_10136574();
    if (param_1 == iVar2) {
      FUN_100d5e14();
    }
    uVar6 = 0x11;
    break;
  case 9:
    if (uVar1 == 8) {
      FUN_100d5604(param_1,0);
      uVar6 = 0x12;
LAB_100db35c:
      uVar5 = 1;
      break;
    }
    iVar2 = FUN_10136574();
    if ((param_1 == iVar2) || (iVar2 = FUN_100d5dac(3), param_1 == iVar2)) {
      (*(code *)*DAT_100db600)(0x12,0);
    }
    FUN_100d5604(param_1,1 < uVar1);
    uVar6 = 0x12;
    goto LAB_100db598;
  case 10:
    local_24 = '\0';
    local_23 = 0;
    if (0 < (int)uVar1) {
      if (local_22 == 0) {
        if (local_21[0] == 0) goto LAB_100db350;
      }
      else if (local_22 == 1) goto LAB_100db43e;
      if (local_21[0] == 1) goto LAB_100db44c;
    }
  default:
switchD_100db314_caseD_6:
    uVar6 = 0xff;
LAB_100db598:
    uVar5 = 0xffffffff;
    break;
  case 0xb:
    if (local_22 == 0) {
      if (local_21[0] != 0) {
        local_21[0] = local_22;
      }
    }
    else {
      local_22 = 0;
    }
    if (uVar1 - 2 < 3) {
LAB_100db350:
      iVar2 = FUN_100d5674(param_1);
      if (iVar2 == 1) {
        FUN_100d5604(param_1,0);
      }
      uVar6 = 0xc;
      goto LAB_100db35c;
    }
    if (uVar1 != 6) goto switchD_100db314_caseD_6;
LAB_100db4aa:
    uVar6 = 9;
    uVar5 = 5;
    break;
  case 0xc:
    local_24 = '\0';
    goto LAB_100db4b6;
  case 0xd:
    local_24 = '\x01';
LAB_100db4b6:
    local_23 = 1;
LAB_100db4ba:
    uVar6 = 10;
    uVar5 = 7;
    break;
  case 0xe:
    local_23 = 0;
    if (uVar1 != 7) goto switchD_100db314_caseD_6;
    if (((uint)local_22 + (uint)local_21[0] == 0) || (local_24 == '\0')) {
      if (local_22 != 1) {
        if (local_21[0] != 1) {
          local_24 = '\x01';
          goto LAB_100db4aa;
        }
        goto LAB_100db44c;
      }
      goto LAB_100db43e;
    }
LAB_100db496:
    uVar6 = 8;
    uVar5 = 6;
  }
  uVar7 = (DAT_100db5dc - DAT_100db5e0) * 0x20 & 0xff00;
  FUN_100a5b78(uVar7 | DAT_100db5e4,DAT_100db5ec,DAT_100db5e8,uVar1,uVar5,param_2);
  FUN_100a5b78(uVar7 | DAT_100db5f0,DAT_100db5ec,DAT_100db5f4,local_24,local_23,
               (uint)local_22 + (uint)local_21[0]);
  FUN_100d56d4(param_1,local_24,local_23,local_22,local_21[0]);
  if (uVar5 == 0xffffffff) {
    return 0;
  }
  if (uVar5 - 2 < 7) {
    iVar2 = FUN_1013650a();
    if ((param_1 != iVar2) || (iVar2 = FUN_100d4dbc(), iVar2 == 0)) goto LAB_100db3f0;
    FUN_100d4b84(param_1,1);
    uVar3 = DAT_100db5fc;
    uVar4 = DAT_100db5f8;
  }
  else {
    if ((uVar5 != 1) || (iVar2 = FUN_1013650a(), param_1 != iVar2)) goto LAB_100db3f0;
    FUN_100d4b84(iVar2,0);
    uVar3 = DAT_100db608;
    uVar4 = DAT_100db604;
  }
  FUN_100a5b78(uVar7 | uVar3,DAT_100db5ec,uVar4,param_1);
LAB_100db3f0:
  iVar2 = FUN_10136574();
  if (((param_1 == iVar2) && (uVar1 == 2)) && (iVar2 = FUN_100d54fc(), iVar2 != 0)) {
    (*(code *)*DAT_100db600)(4,0);
    FUN_100d54ac(param_1,0);
  }
  FUN_100d5544(param_1,uVar5 & 0xff);
  FUN_100dabf8(param_1,uVar6,uVar5 & 0xff);
  return 0;
}

