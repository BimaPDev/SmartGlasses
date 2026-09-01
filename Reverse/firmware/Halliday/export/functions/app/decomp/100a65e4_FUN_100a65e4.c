/* FUN_100a65e4 @ 0x100a65e4 */

uint FUN_100a65e4(undefined1 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  byte local_3c [2];
  undefined2 local_3a;
  uint local_38;
  int local_34 [9];
  
  if ((param_1[1] & 0xf0) != 0x30) {
    if ((param_1[1] & 0xf0) != 0x10) {
      return param_3;
    }
    if ((*DAT_100a6608 & 0x40) == 0) {
      return *DAT_100a6608 & 0x40;
    }
  }
  if ((param_1[1] & 0xf0) == 0x30) {
    FUN_1011ea48(local_3c,0,0x2c);
    iVar6 = *(int *)(param_1 + 0xc);
    local_3a = *(undefined2 *)(param_1 + 2);
    local_3c[0] = (byte)(iVar6 << 4) | 5;
    local_3c[1] = *param_1;
    local_38 = (uint)(byte)((param_1[1] & 7) << 2 | 0x60) << 0x18;
    uVar4 = *(uint *)(param_1 + 0x10);
    if ((uVar4 < DAT_100a65d4) || (DAT_100a65d8 < uVar4)) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 - DAT_100a65d4;
    }
    local_38 = local_38 | uVar4 & 0xffffff;
    iVar5 = *(int *)(param_1 + 8);
    if (iVar5 != 0) {
      local_38 = local_38 | 0x1000000;
      local_34[0] = iVar5;
    }
    uVar4 = (uint)(iVar5 != 0);
    if (*(int *)(param_1 + 4) != 0) {
      local_38 = local_38 | 0x2000000;
      local_34[uVar4] = *(int *)(param_1 + 4);
      uVar4 = uVar4 + 1;
    }
    puVar7 = (undefined4 *)(param_1 + 0x14);
    puVar1 = puVar7 + iVar6;
    pbVar3 = local_3c + (uVar4 + 2) * 4;
    for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
      *(undefined4 *)pbVar3 = *puVar7;
      pbVar3 = pbVar3 + 4;
    }
    uVar4 = (iVar6 + 2 + uVar4) * 4;
  }
  else if ((param_1[1] & 0xf0) == 0x10) {
    FUN_1011ea48(local_3c,0,0x2c);
    local_3c[0] = 0x15;
    local_3c[1] = *param_1;
    local_3a = *(undefined2 *)(param_1 + 2);
    local_38 = CONCAT13((param_1[1] & 7) << 2,(undefined3)local_38) | 0x20000000;
    uVar4 = FUN_1012db86(param_1 + 0x10,0x24);
    local_38 = local_38 & 0xff000000 | uVar4 & 0xffffff;
    FUN_1013d03e(local_34,param_1 + 0x10,uVar4,0x24);
    uVar4 = uVar4 + 8;
  }
  else {
    uVar4 = 0;
  }
  puVar1 = DAT_100a65dc;
  uVar8 = *DAT_100a65dc;
  uVar2 = FUN_1011a0bc(DAT_100a65dc + 4);
  if (uVar2 < uVar4) {
    FUN_100a68d8(uVar8,puVar1[1]);
  }
  FUN_1005457c(DAT_100a65e0,local_3c,uVar4);
  return uVar4;
}

