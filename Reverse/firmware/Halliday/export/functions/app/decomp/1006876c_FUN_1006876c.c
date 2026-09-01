/* FUN_1006876c @ 0x1006876c */

void FUN_1006876c(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  uint uVar3;
  uint extraout_r3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  char local_9d;
  undefined1 auStack_9c [28];
  uint local_80;
  undefined4 local_34;
  undefined4 *puStack_30;
  uint local_2c;
  
  uVar7 = *(uint *)(DAT_100689ac + 4);
  bVar8 = false;
  uVar9 = FUN_1005d1dc();
  uVar6 = uVar7 & 0x1ff;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar3 = param_3 & 0xff000000;
  uVar5 = extraout_r2;
  if (uVar3 == 0xff000000) {
    uVar3 = param_3 & 0xc;
    if (uVar3 == 8) {
      uVar9 = FUN_100a5b78(DAT_100689b8 | (DAT_100689b4 - DAT_100689b0) * 0x20 & 0xff00U,
                           DAT_100689c0,DAT_100689bc);
      uVar5 = extraout_r2_00;
      uVar3 = extraout_r3;
      goto LAB_100687bc;
    }
    bVar8 = (param_3 & 8) == 0;
    if (bVar8) {
      param_2 = param_1;
    }
    if (param_2 == (undefined4 *)0x0) goto LAB_100687bc;
  }
  else {
LAB_100687bc:
    FUN_10119dc2(DAT_100689cc,DAT_100689c8,DAT_100689c4,0x3f8,uVar9);
    FUN_10119dc2(DAT_100689d0);
    FUN_1011a1f0(DAT_100689c4,0x3f8,uVar5,uVar3);
    param_2 = (undefined4 *)0x0;
  }
  *DAT_100689d4 = param_2;
  local_9d = '\0';
  switch(uVar6) {
  case 3:
    uVar6 = (DAT_100689b4 - DAT_100689b0) * 0x20 & 0xff00;
    uVar9 = FUN_100a5b78(DAT_100689d8 | uVar6,DAT_100689e0,DAT_100689dc);
    local_9d = '\0';
    if ((*(uint *)(DAT_100689ac + 0x2c) & 2) == 0) {
      uVar7 = *(uint *)(DAT_100689ac + 0x2c);
      uVar5 = 0;
      if ((int)uVar7 < 0) {
        FUN_100a5b78(DAT_100689e8 | uVar6,DAT_100689e0,DAT_100689ec);
        goto LAB_10068860;
      }
      iVar4 = *(int *)(DAT_100689ac + 0x2c) << 1;
      if (iVar4 < 0) {
        uVar9 = FUN_100a5b78(uVar6 | 0x2b40011,DAT_100689e0,DAT_100689f0);
        uVar7 = (uint)*(ushort *)(param_2[6] + -2);
        if (uVar7 == 0xdf02) {
          FUN_100a5b78(DAT_100689f4 | uVar6,DAT_100689e0,DAT_100689f8,*param_2);
          uVar5 = *param_2;
          goto LAB_10068860;
        }
        if (DAT_e000ed28 != '\0') {
          uVar5 = 1;
          goto LAB_100688d4;
        }
        if (*DAT_100689fc != '\0') {
          uVar5 = 1;
          goto LAB_100688fa;
        }
        if (*DAT_10068a00 != 0) goto switchD_10068802_caseD_6;
        FUN_10119dc2(DAT_100689cc,DAT_10068a04,DAT_100689c4,0x2c3,uVar9);
        FUN_10119dc2(DAT_10068a08);
        uVar2 = 0x2c3;
        iVar4 = 0;
      }
      else {
        FUN_10119dc2(DAT_100689cc,DAT_10068a04,DAT_100689c4,0x2c7,uVar9);
        FUN_10119dc2(DAT_10068a0c);
        uVar2 = 0x2c7;
      }
      FUN_1011a1f0(DAT_100689c4,uVar2,uVar7,iVar4);
      goto LAB_10068860;
    }
    uVar6 = uVar6 | 0x2b00011;
    uVar5 = DAT_100689e0;
    uVar2 = DAT_100689e4;
    break;
  case 4:
    uVar5 = 0;
LAB_100688d4:
    uVar5 = FUN_10068424(uVar5,&local_9d);
    goto LAB_10068860;
  case 5:
    uVar5 = 0;
LAB_100688fa:
    uVar5 = FUN_10068560(uVar5,&local_9d);
    goto LAB_10068860;
  case 6:
switchD_10068802_caseD_6:
    uVar5 = FUN_1006866c();
    goto LAB_10068860;
  default:
    uVar5 = DAT_10068a24;
    if ((uVar7 & 0x1f0) == 0) {
      uVar5 = DAT_10068a1c;
    }
    FUN_100a5b78(DAT_10068a20 | (DAT_100689b4 - DAT_100689b0) * 0x20 & 0xff00U,DAT_10068a28,
                 DAT_10068a2c,uVar5,uVar6 - 0x10);
    goto LAB_1006884a;
  case 0xc:
    uVar6 = DAT_10068a10 | (DAT_100689b4 - DAT_100689b0) * 0x20 & 0xff00U;
    uVar5 = DAT_10068a18;
    uVar2 = DAT_10068a14;
  }
  local_9d = '\0';
  FUN_100a5b78(uVar6,uVar5,uVar2);
LAB_1006884a:
  uVar5 = 0;
LAB_10068860:
  if (local_9d == '\0') {
    FUN_1011ea40(auStack_9c,param_2,0x68);
    if (bVar8) {
      if ((local_80 & 0x1ff) == 0) {
        local_80 = ~(~(local_80 >> 9) << 9);
      }
    }
    else {
      local_80 = local_80 & 0xfffffe00;
    }
    local_34 = param_4;
    puStack_30 = param_1;
    local_2c = param_3;
    FUN_10067fa0(uVar5,auStack_9c);
  }
  return;
}

