/* FUN_10090a38 @ 0x10090a38 */

void FUN_10090a38(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 local_6c;
  int local_68;
  undefined1 auStack_64 [16];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44 [3];
  undefined2 local_38;
  ushort local_36;
  byte local_34;
  undefined1 local_20;
  
  if ((*(int *)(param_2 + 0x14) != 0) && (2 < *(byte *)(param_2 + 0x1e))) {
    iVar1 = FUN_1012a896(auStack_64,param_3,*(undefined4 *)(param_1 + 8));
    if (iVar1 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 8);
      uVar2 = *(undefined4 *)(param_2 + 0x14);
      *(undefined1 **)(param_1 + 8) = auStack_64;
      iVar1 = FUN_101277b8(uVar2);
      if (iVar1 == 2) {
        FUN_1009512c(&local_6c,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),0,0,
                     0x1fffffff,0);
        local_54 = (*param_3 - (int)local_6c / 2) + ((param_3[2] + 1) - *param_3) / 2;
        local_4c = local_54 + (local_6c - 1);
        local_50 = (param_3[1] - local_68 / 2) + ((param_3[3] + 1) - param_3[1]) / 2;
        local_48 = local_50 + local_68 + -1;
        FUN_1008c354(local_44);
        local_44[0] = *(undefined4 *)(param_2 + 0x18);
        local_38 = *(undefined2 *)(param_2 + 0x1c);
        local_20 = *(undefined1 *)(param_2 + 0x1e);
        FUN_1008c388(param_1,local_44,&local_54,*(undefined4 *)(param_2 + 0x14),0);
      }
      else {
        iVar1 = FUN_1008db78(*(undefined4 *)(param_2 + 0x14),&local_6c);
        if (iVar1 == 1) {
          FUN_10127788(local_44);
          local_50 = param_3[1];
          local_34 = local_34 & 0xf0 | *(byte *)(param_2 + 4) & 0xf;
          local_38 = *(undefined2 *)(param_2 + 0x1c);
          local_36 = *(ushort *)(param_2 + 0x1e) << 8 | *(ushort *)(param_2 + 0x1e) >> 8;
          if (*(char *)(param_2 + 0x20) == '\0') {
            local_54 = (*param_3 - ((local_6c & 0x1fffff) >> 0xb)) +
                       ((param_3[2] + 1) - *param_3) / 2;
            local_50 = (local_50 - (uint)(local_6c._2_2_ >> 6)) + ((param_3[3] + 1) - local_50) / 2;
            local_4c = local_54 + (((local_6c & 0x1fffff) >> 10) - 1);
            local_48 = local_50 + ((local_6c._2_2_ >> 5) - 1);
            FUN_1008c0e0(param_1,local_44,&local_54,*(undefined4 *)(param_2 + 0x14));
          }
          else {
            local_48 = ((local_6c._2_2_ >> 5) - 1) + local_50;
            for (; local_50 <= param_3[3]; local_50 = local_50 + (local_6c >> 0x15)) {
              uVar3 = ((local_6c & 0x1fffff) >> 10) - 1;
              local_4c = *param_3;
              for (local_54 = local_4c; local_4c = uVar3 + local_4c, local_54 <= param_3[2];
                  local_54 = local_54 + uVar3) {
                FUN_1008c0e0(param_1,local_44,&local_54,*(undefined4 *)(param_2 + 0x14));
                uVar3 = (local_6c & 0x1fffff) >> 10;
              }
              local_48 = (local_6c >> 0x15) + local_48;
            }
          }
        }
        else {
          FUN_10094174(2,DAT_10090c0c,0x18d,DAT_10090c08,DAT_10090c04);
        }
      }
      *(undefined4 *)(param_1 + 8) = uVar4;
    }
  }
  return;
}

