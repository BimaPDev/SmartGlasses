/* FUN_2c625be0 @ 0x2c625be0 */

int FUN_2c625be0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int local_44;
  byte local_3b;
  char local_3a;
  undefined1 local_39;
  undefined4 local_38;
  undefined2 local_34;
  short local_30;
  char local_2e;
  int local_2c;
  
  local_2c = *DAT_2c625ed8;
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar7 = *(int *)(param_1 + 0x14);
    iVar1 = *(int *)(param_1 + 0xc);
    local_30 = *(short *)(iVar1 + iVar7);
    iVar10 = iVar7 + 3;
    local_2e = *(char *)(iVar1 + iVar7 + 2);
    *(int *)(param_1 + 0x14) = iVar10;
    if ((local_30 == 0x4947) && (local_2e == 'F')) {
LAB_2c625d26:
      local_30 = *(short *)(iVar1 + iVar10);
      iVar7 = iVar10 + 3;
      local_2e = *(char *)(iVar1 + iVar10 + 2);
      *(int *)(param_1 + 0x14) = iVar7;
      if ((local_30 == 0x3938) && (local_2e == 'a')) {
LAB_2c625d4c:
        iVar10 = iVar7 + 2;
        uVar8 = (uint)(byte)*(ushort *)(iVar1 + iVar7);
        uVar2 = (uint)(*(ushort *)(iVar1 + iVar7) >> 8);
        *(int *)(param_1 + 0x14) = iVar10;
LAB_2c625d5c:
        local_34 = *(ushort *)(iVar1 + iVar10);
        iVar10 = iVar10 + 2;
        uVar11 = (uint)(byte)local_34;
        uVar3 = (uint)(local_34 >> 8);
        *(int *)(param_1 + 0x14) = iVar10;
LAB_2c625d6c:
        local_3b = *(byte *)(iVar1 + iVar10);
        uVar6 = (uint)local_3b;
        iVar10 = iVar10 + 1;
        *(int *)(param_1 + 0x14) = iVar10;
        if ((int)(uVar6 << 0x18) < 0) {
          iVar7 = (uVar6 & 7) + 1;
          sVar5 = (short)((uVar6 & 0x7f) >> 4) + 1;
          local_44 = 1 << iVar7;
LAB_2c625d94:
          local_3a = *(char *)(iVar1 + iVar10);
          iVar10 = iVar10 + 1;
          *(int *)(param_1 + 0x14) = iVar10;
LAB_2c625d9e:
          local_39 = *(undefined1 *)(iVar1 + iVar10);
          *(int *)(param_1 + 0x14) = iVar10 + 1;
LAB_2c625da8:
          iVar9 = uVar8 + uVar2 * 0x100;
          iVar4 = uVar11 + uVar3 * 0x100;
          iVar10 = iVar4 * iVar9;
          iVar12 = iVar10 * 4;
          iVar1 = lv_mem_alloc(iVar10 * 5 + 0x65c);
          if (iVar1 != 0) {
            FUN_2c674668(iVar1,param_1,0x65c);
            iVar7 = 3 << iVar7;
            *(short *)(iVar1 + 0x1c) = (short)iVar9;
            *(short *)(iVar1 + 0x1e) = (short)iVar4;
            *(short *)(iVar1 + 0x20) = sVar5;
            *(int *)(iVar1 + 0x338) = local_44;
            if (*(char *)(iVar1 + 0x10) == '\0') {
              iVar4 = *(int *)(iVar1 + 0x14);
              FUN_2c674668(iVar1 + 0x33c,*(int *)(iVar1 + 0xc) + iVar4,iVar7);
              *(int *)(iVar1 + 0x14) = iVar4 + iVar7;
            }
            else {
              FUN_2c62de74(iVar1,iVar1 + 0x33c,iVar7,0);
              iVar10 = (uint)*(ushort *)(iVar1 + 0x1c) * (uint)*(ushort *)(iVar1 + 0x1e);
            }
            iVar7 = iVar1 + 0x338;
            *(int *)(iVar1 + 0x30) = iVar7;
            *(char *)(iVar1 + 0x650) = local_3a;
            *(int *)(iVar1 + 0x654) = iVar1 + 0x65c;
            *(int *)(iVar1 + 0x658) = iVar1 + 0x65c + iVar12;
            uVar2 = 0;
            if (local_3a != '\0') {
              FUN_2c674268();
              iVar7 = *(int *)(iVar1 + 0x30);
              uVar2 = (uint)*(byte *)(iVar1 + 0x650);
              iVar10 = (uint)*(ushort *)(iVar1 + 0x1e) * (uint)*(ushort *)(iVar1 + 0x1c);
            }
            iVar4 = uVar2 * 3 + 4 + iVar7;
            if (iVar10 != 0) {
              iVar9 = 0;
              iVar10 = 0;
              do {
                iVar10 = iVar10 + 1;
                *(undefined1 *)(*(int *)(iVar1 + 0x654) + iVar9) = *(undefined1 *)(iVar4 + 2);
                *(undefined1 *)(*(int *)(iVar1 + 0x654) + iVar9 + 1) = *(undefined1 *)(iVar4 + 1);
                *(undefined1 *)(*(int *)(iVar1 + 0x654) + iVar9 + 2) =
                     *(undefined1 *)(iVar7 + uVar2 * 3 + 4);
                iVar12 = *(int *)(iVar1 + 0x654) + iVar9;
                iVar9 = iVar9 + 4;
                *(undefined1 *)(iVar12 + 3) = 0xff;
                iVar12 = (uint)*(ushort *)(iVar1 + 0x1e) * (uint)*(ushort *)(iVar1 + 0x1c);
              } while (iVar12 - iVar10 != 0 && iVar10 <= iVar12);
            }
            if (*(char *)(iVar1 + 0x10) == '\0') {
              local_38 = *(undefined4 *)(iVar1 + 0x14);
            }
            else {
              FUN_2c62e030(iVar1,0,1);
              FUN_2c62e0f4(iVar1,&local_38);
            }
            *(undefined4 *)(iVar1 + 0x18) = local_38;
            goto LAB_2c625c40;
          }
          goto LAB_2c625c0e;
        }
      }
    }
  }
  else {
    FUN_2c62de74(param_1,&local_30,3,0);
    if ((local_30 == 0x4947) && (local_2e == 'F')) {
      if (*(char *)(param_1 + 0x10) == '\0') {
        iVar10 = *(int *)(param_1 + 0x14);
        iVar1 = *(int *)(param_1 + 0xc);
        goto LAB_2c625d26;
      }
      FUN_2c62de74(param_1,&local_30,3,0);
      if ((local_30 == 0x3938) && (local_2e == 'a')) {
        if (*(char *)(param_1 + 0x10) == '\0') {
          iVar7 = *(int *)(param_1 + 0x14);
          iVar1 = *(int *)(param_1 + 0xc);
          goto LAB_2c625d4c;
        }
        FUN_2c62de74(param_1,&local_34,2,0);
        uVar8 = (uint)(byte)local_34;
        uVar2 = (uint)local_34._1_1_;
        if (*(char *)(param_1 + 0x10) == '\0') {
          iVar10 = *(int *)(param_1 + 0x14);
          iVar1 = *(int *)(param_1 + 0xc);
          goto LAB_2c625d5c;
        }
        FUN_2c62de74(param_1,&local_34,2,0);
        uVar11 = (uint)(byte)local_34;
        uVar3 = (uint)local_34._1_1_;
        if (*(char *)(param_1 + 0x10) == '\0') {
          iVar10 = *(int *)(param_1 + 0x14);
          iVar1 = *(int *)(param_1 + 0xc);
          goto LAB_2c625d6c;
        }
        FUN_2c62de74(param_1,&local_3b,1,0);
        if (-1 < (char)local_3b) goto LAB_2c625c0e;
        iVar7 = (local_3b & 7) + 1;
        sVar5 = (short)((local_3b & 0x7f) >> 4) + 1;
        local_44 = 1 << iVar7;
        if (*(char *)(param_1 + 0x10) == '\0') {
          iVar1 = *(int *)(param_1 + 0xc);
          iVar10 = *(int *)(param_1 + 0x14);
          goto LAB_2c625d94;
        }
        FUN_2c62de74(param_1,&local_3a,1,0);
        if (*(char *)(param_1 + 0x10) == '\0') {
          iVar1 = *(int *)(param_1 + 0xc);
          iVar10 = *(int *)(param_1 + 0x14);
          goto LAB_2c625d9e;
        }
        FUN_2c62de74(param_1,&local_39,1,0);
        goto LAB_2c625da8;
      }
    }
LAB_2c625c0e:
    if (*(char *)(param_1 + 0x10) != '\0') {
      iVar1 = 0;
      FUN_2c62de2c(param_1);
      goto LAB_2c625c40;
    }
  }
  iVar1 = 0;
LAB_2c625c40:
  if (*DAT_2c625ed8 == local_2c) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

