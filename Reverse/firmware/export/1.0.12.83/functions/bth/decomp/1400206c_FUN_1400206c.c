/* FUN_1400206c @ 0x1400206c */

undefined4 FUN_1400206c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar3 = DAT_1400223c;
  iVar2 = DAT_14002238;
  iVar1 = DAT_14002234;
  uVar9 = *(uint *)(*(int *)(DAT_14002238 + (uint)*(byte *)(DAT_14002234 + param_1) * 4) + 0x14);
  param_2 = param_2 & uVar9;
  if ((int)(param_2 << 0x1a) < 0) {
    uVar4 = 0x20;
joined_r0x140020a8:
    if ((int)(param_2 << 0xd) < 0) {
      uVar7 = 0x40000;
      goto LAB_140020ae;
    }
  }
  else {
    if ((int)(param_2 << 0x1b) < 0) {
      uVar4 = 0x10;
      goto joined_r0x140020a8;
    }
    if ((int)(param_2 << 0x1c) < 0) {
      uVar4 = 8;
    }
    else if ((int)(param_2 << 0x1d) < 0) {
      uVar4 = 4;
    }
    else if ((int)(param_2 << 0x1e) < 0) {
      uVar4 = 2;
    }
    else {
      uVar4 = param_2 & 1;
      if (uVar4 == 0) {
        return 1;
      }
    }
    if ((int)(param_2 << 0xd) < 0) {
      return 1;
    }
  }
  if ((int)(param_2 << 0xe) < 0) {
    uVar7 = 0x20000;
  }
  else {
    if (-1 < (int)(param_2 << 0xf)) {
      return 1;
    }
    uVar7 = 0x10000;
  }
LAB_140020ae:
  uVar5 = 0;
  if ((param_2 & 0x28) != 0) {
    uVar5 = param_2 & 0x1000;
  }
  if ((~param_2 & 0x4020) == 0) {
    uVar5 = uVar5 | 0x4000;
  }
  uVar8 = uVar7 | uVar4 | uVar5;
  uVar7 = *(uint *)(DAT_1400223c + param_1 * 4);
  if (uVar7 != uVar8) {
    if (((uVar9 & 0x28) != 0) && ((uVar9 & 0x1000) != 0)) {
      FUN_14001c8c(param_1,0,uVar4,uVar7,param_4);
    }
    FUN_1400183c(param_1,0);
    FUN_1400181c(param_1,0);
    if ((int)(uVar4 << 0x1a) < 0) {
      pcVar6 = *(code **)(*(int *)(iVar2 + (uint)*(byte *)(iVar1 + param_1) * 4) + 0x18);
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(param_1,1);
      }
      FUN_1400183c(param_1,1);
      FUN_1400175c(param_1);
    }
    else if ((int)(uVar4 << 0x1b) < 0) {
      pcVar6 = *(code **)(*(int *)(iVar2 + (uint)*(byte *)(iVar1 + param_1) * 4) + 0x18);
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(param_1,1);
      }
      FUN_140018a0(param_1,0x6b);
      FUN_1400175c(param_1);
    }
    else if ((int)(uVar4 << 0x1c) < 0) {
      FUN_1400181c(param_1,1);
      FUN_1400175c(param_1);
    }
    else if ((int)(uVar4 << 0x1d) < 0) {
      FUN_140018a0(param_1,0x3b);
      FUN_1400175c(param_1);
    }
    else if ((int)(uVar4 << 0x1e) < 0) {
      FUN_140018a0(param_1,0xb);
      FUN_1400175c(param_1);
    }
    else if ((int)(uVar4 << 0x1f) < 0) {
      FUN_140018a0(param_1,3);
      FUN_1400175c(param_1);
    }
    if ((uVar9 & 0x4000) != 0) {
      if ((uVar5 & 0x4000) == 0) {
        FUN_14001e54(param_1,0);
        FUN_14002d3c(0);
        FUN_14002d3c(1);
      }
      else {
        FUN_14001e54(param_1,0x20);
        FUN_14002d28(0);
        FUN_14002d28(1);
      }
    }
    if ((int)(uVar8 << 0x13) < 0) {
      FUN_14001554(param_1);
      FUN_14001520(param_1,*(undefined1 *)
                            (*(int *)(iVar2 + (uint)*(byte *)(iVar1 + param_1) * 4) + 5));
      FUN_1400175c(param_1);
    }
    *(uint *)(iVar3 + param_1 * 4) = uVar8;
  }
  FUN_14001720(param_1);
  FUN_14001c60(param_1);
  return 0;
}

