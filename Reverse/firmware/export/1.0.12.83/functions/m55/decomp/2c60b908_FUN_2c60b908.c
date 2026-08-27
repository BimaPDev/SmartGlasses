/* FUN_2c60b908 @ 0x2c60b908 */

void FUN_2c60b908(int param_1,int param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  short sVar7;
  uint uVar8;
  undefined4 local_6c;
  undefined1 auStack_68 [8];
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  undefined4 local_58 [3];
  undefined4 local_4c;
  undefined1 local_38;
  undefined4 local_2c;
  ushort local_28;
  byte local_26;
  int local_1c;
  
  local_1c = *DAT_2c60bb3c;
  if (((*(int *)(param_2 + 0x24) != 0) && (2 < *(byte *)(param_2 + 0x30))) &&
     (iVar2 = FUN_2c62a6b4(auStack_68,param_3,*(undefined4 *)(param_1 + 8)), iVar2 != 0)) {
    uVar6 = *(undefined4 *)(param_1 + 8);
    *(undefined1 **)(param_1 + 8) = auStack_68;
    iVar2 = FUN_2c614f58(*(undefined4 *)(param_2 + 0x24));
    if (iVar2 == 2) {
      FUN_2c62b954(&local_6c,*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),0,0,
                   0x1fff,0);
      iVar2 = (int)(short)local_6c;
      iVar5 = (int)(short)((param_3[2] + 1) - *param_3);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 1;
      }
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      local_60 = (short)(iVar5 >> 1) + (*param_3 - (short)(iVar2 >> 1));
      local_5c = (short)local_6c + -1 + local_60;
      iVar2 = (int)(short)local_6c._2_2_;
      iVar5 = (int)(short)((param_3[3] + 1) - param_3[1]);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 1;
      }
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      local_5e = (short)(iVar5 >> 1) + (param_3[1] - (short)(iVar2 >> 1));
      local_5a = local_6c._2_2_ + -1 + local_5e;
      FUN_2c6129e4(local_58);
      local_58[0] = *(undefined4 *)(param_2 + 0x28);
      local_38 = *(undefined1 *)(param_2 + 0x30);
      local_4c = *(undefined4 *)(param_2 + 0x2c);
      FUN_2c612a20(param_1,local_58,&local_60,*(undefined4 *)(param_2 + 0x24),0);
    }
    else {
      iVar2 = FUN_2c612838(*(undefined4 *)(param_2 + 0x24),&local_6c);
      if (iVar2 == 1) {
        FUN_2c614a0c(local_58);
        local_26 = local_26 & 0xf0 | *(byte *)(param_2 + 2) & 0xf;
        local_28 = *(ushort *)(param_2 + 0x30) << 8 | *(ushort *)(param_2 + 0x30) >> 8;
        local_2c = *(undefined4 *)(param_2 + 0x2c);
        if (*(char *)(param_2 + 0x32) == '\0') {
          iVar2 = (int)(short)((param_3[2] + 1) - *param_3);
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          local_60 = (short)(iVar2 >> 1) + (*param_3 - (short)((local_6c & 0x1fffff) >> 0xb));
          iVar2 = (int)(short)((param_3[3] + 1) - param_3[1]);
          local_5c = local_60 + ((ushort)((local_6c << 0xb) >> 0x15) - 1);
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          local_5e = (short)(iVar2 >> 1) + (param_3[1] - (local_6c._2_2_ >> 6));
          local_5a = ((local_6c._2_2_ >> 5) - 1) + local_5e;
          FUN_2c614a3c(param_1,local_58,&local_60,*(undefined4 *)(param_2 + 0x24));
        }
        else {
          uVar8 = (uint)local_6c._2_2_;
          local_5e = param_3[1];
          sVar7 = param_3[3];
          local_5a = ((local_6c._2_2_ >> 5) - 1) + local_5e;
          if (local_5e <= sVar7) {
            sVar4 = param_3[2];
            uVar3 = local_6c;
            do {
              local_60 = *param_3;
              local_5c = ((ushort)((uVar3 << 0xb) >> 0x15) - 1) + local_60;
              if (local_60 <= sVar4) {
                do {
                  FUN_2c614a3c(param_1,local_58,&local_60,*(undefined4 *)(param_2 + 0x24));
                  uVar1 = (ushort)((local_6c << 0xb) >> 0x10);
                  local_60 = local_60 + (uVar1 >> 5);
                  local_5c = (uVar1 >> 5) + local_5c;
                  sVar4 = param_3[2];
                } while (local_60 <= sVar4);
                uVar8 = local_6c >> 0x10;
                sVar7 = param_3[3];
                uVar3 = local_6c;
              }
              local_5e = local_5e + ((ushort)uVar8 >> 5);
              local_5a = (short)(uVar8 >> 5) + local_5a;
            } while (local_5e <= sVar7);
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 8) = uVar6;
  }
  if (*DAT_2c60bb3c != local_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

