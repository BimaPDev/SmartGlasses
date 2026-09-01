/* FUN_100c9c14 @ 0x100c9c14 */

void FUN_100c9c14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  int local_118;
  int local_114 [2];
  int *local_10c;
  undefined1 local_108;
  undefined1 *local_104;
  uint local_100;
  undefined4 local_fc;
  undefined3 uStack_f8;
  undefined1 uStack_d8;
  undefined1 auStack_d7 [199];
  
  for (iVar8 = *DAT_100c9c64; iVar8 != 0; iVar8 = *(int *)(iVar8 + 0x2c)) {
    if (*(code **)(iVar8 + 4) != (code *)0x0) {
      (**(code **)(iVar8 + 4))(param_1,*(undefined1 *)(param_1 + 0xc));
    }
  }
  if (*(char *)(param_1 + 2) == '\x02') {
    *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0xc0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  if ((*(char *)(param_1 + 0xc) != '\0') || (*(char *)(param_1 + 2) != '\x01')) {
    return;
  }
  iVar8 = param_1 + 0x90;
  if (*(char *)(param_1 + 8) == '\0') {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_10119c46(&local_fc,4,*(char *)(param_1 + 8),param_4);
    puVar4 = &local_fc;
  }
  FUN_100c2210(&uStack_d8,0x24,DAT_100cee64,iVar8,puVar4);
  iVar2 = FUN_1011ea10(DAT_100cee64);
  puVar5 = auStack_d7 + iVar2;
  iVar2 = FUN_1011ea10(puVar5);
  if (puVar5 == (undefined1 *)0x0) {
    iVar2 = DAT_100cee6c - DAT_100cee68;
    uVar3 = DAT_100cee78;
    uVar7 = DAT_100cee74;
LAB_100cebdc:
    FUN_100a5b78(uVar3 | iVar2 * 0x20 & 0xff00U,DAT_100cee70,uVar7);
  }
  else {
    iVar6 = FUN_10132850(puVar5,&local_10c);
    if (iVar6 == 0) {
      FUN_10132824(puVar5,local_114);
      if (local_114[0] == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_10118c74(local_114[0],0,10);
      }
      puVar4 = (undefined4 *)FUN_100cc7d4(uVar1,&local_10c);
      if (puVar4 == (undefined4 *)0x0) {
        if (iVar2 != 0) {
          local_fc = 0;
          uStack_f8 = 0;
          puVar4 = (undefined4 *)FUN_100cc7d4(0,&local_fc);
          if (puVar4 == (undefined4 *)0x0) {
            iVar2 = DAT_100cee6c - DAT_100cee68;
            uVar3 = DAT_100cee9c;
            uVar7 = DAT_100cee98;
            goto LAB_100cebdc;
          }
          *(undefined1 *)puVar4 = uVar1;
          FUN_10134778((int)puVar4 + 1,&local_10c);
LAB_100cecdc:
          thunk_FUN_1009efa0(&uStack_d8,puVar4 + 2,4);
        }
      }
      else {
        if (iVar2 != 0) goto LAB_100cecdc;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
      }
    }
    else {
      FUN_100a5b78(DAT_100cee7c | (DAT_100cee6c - DAT_100cee68) * 0x20 & 0xff00U,DAT_100cee70,
                   DAT_100cee80,puVar5);
    }
  }
  FUN_10134580(DAT_100cee84,0xfffffffd);
  uVar9 = FUN_1013457a(DAT_100cee84);
  if ((int)uVar9 << 0x1f < 0) {
    FUN_1013cbaa(DAT_100cee88,(int)((ulonglong)uVar9 >> 0x20),10,0);
  }
  if (*(char *)(param_1 + 8) == '\0') {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_10119c46(&local_fc,4);
    puVar4 = &local_fc;
  }
  FUN_100c2210(&uStack_d8,0x24,DAT_100cee8c,iVar8,puVar4);
  iVar2 = FUN_1011ea10(DAT_100cee8c);
  puVar5 = auStack_d7 + iVar2;
  iVar2 = FUN_1011ea10(puVar5);
  if (puVar5 == (undefined1 *)0x0) {
    iVar2 = DAT_100cee6c - DAT_100cee68;
    uVar3 = DAT_100cee94;
    uVar7 = DAT_100cee74;
LAB_100cec76:
    FUN_100a5b78(uVar3 | iVar2 * 0x20 & 0xff00U,DAT_100cee90,uVar7);
  }
  else {
    iVar6 = FUN_10132850(puVar5,&local_fc);
    if (iVar6 != 0) {
      FUN_100a5b78(DAT_100ceea0 | (DAT_100cee6c - DAT_100cee68) * 0x20 & 0xff00U,DAT_100cee90,
                   DAT_100cee80,puVar5);
      goto LAB_100ced16;
    }
    FUN_10132824(puVar5,&local_10c);
    if (local_10c == (int *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_10118c74(local_10c,0,10);
    }
    puVar5 = (undefined1 *)FUN_100cc858(uVar1,&local_fc);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)FUN_100cc790();
      if (puVar5 == (undefined1 *)0x0) {
        iVar2 = DAT_100cee6c - DAT_100cee68;
        uVar3 = DAT_100ceeb0;
        uVar7 = DAT_100ceeac;
        goto LAB_100cec76;
      }
      *puVar5 = uVar1;
      FUN_10134778(puVar5 + 1,&local_fc);
    }
    if (iVar2 == 0) {
      FUN_10134980(puVar5);
    }
    else {
      thunk_FUN_1009efa0(&uStack_d8,puVar5 + 8,1);
    }
  }
LAB_100ced16:
  if (*(char *)(param_1 + 8) == '\0') {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    FUN_10119c46(&uStack_d8,4);
    puVar5 = &uStack_d8;
  }
  FUN_100c2210(&local_fc,0x24,DAT_100ceea4,iVar8,puVar5);
  iVar8 = FUN_1011ea10(DAT_100ceea4);
  iVar2 = (int)&local_fc + iVar8 + 1;
  iVar8 = FUN_1011ea10(iVar2);
  FUN_10132824(iVar2,&local_118);
  if (iVar2 == 0) {
    FUN_100a5b78((DAT_100cee6c - DAT_100cee68) * 0x20 & 0xff00U | 0x12310011,DAT_100ceea8,
                 DAT_100cee74);
  }
  else {
    local_108 = 0;
    if (local_118 != 0) {
      local_108 = FUN_10118c74(local_118,0,10);
    }
    iVar6 = FUN_10132850(iVar2,local_114);
    if (iVar6 == 0) {
      local_10c = local_114;
      if (iVar8 == 0) {
        local_104 = (undefined1 *)0x0;
        local_100 = 0;
      }
      else {
        local_100 = thunk_FUN_1009efa0(&local_fc,&uStack_d8,0xc0);
        if ((int)local_100 < 0) {
          return;
        }
        local_104 = &uStack_d8;
        local_100 = local_100 >> 2;
      }
      FUN_10134be0(1,0xffff,DAT_100ceeb8,&local_10c);
    }
    else {
      FUN_100a5b78(DAT_100ceeb4 | (DAT_100cee6c - DAT_100cee68) * 0x20 & 0xff00U,DAT_100ceea8,
                   DAT_100cee80,iVar2);
    }
  }
  return;
}

