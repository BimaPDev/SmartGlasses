/* FUN_2c627228 @ 0x2c627228 */

int FUN_2c627228(int param_1,int param_2,int param_3,int param_4,short param_5,short *param_6)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  code *pcVar11;
  code *local_3c;
  int local_38;
  int local_30;
  uint local_2c;
  
  local_2c = *DAT_2c6274fc;
  sVar4 = FUN_2c6033b4(param_1,0,1,0);
  sVar5 = FUN_2c6033b4(param_1,0,4);
  uVar10 = (uint)*(byte *)(param_2 + 3);
  if ((int)(uVar10 << 0x1e) < 0) {
    if (-1 < (int)(uVar10 << 0x1f)) {
      if (sVar5 == 0x27d1) goto LAB_2c627282;
      goto LAB_2c627290;
    }
    if (sVar4 == 0x27d1) {
LAB_2c627282:
      bVar1 = *(byte *)(param_2 + 3) & 0xfd;
      *(byte *)(param_2 + 3) = bVar1;
      uVar10 = (uint)bVar1;
      goto LAB_2c62728c;
    }
  }
  else {
LAB_2c62728c:
    if (-1 < (int)(uVar10 << 0x1f)) {
LAB_2c627290:
      local_3c = DAT_2c627504;
      pcVar11 = DAT_2c627500;
      goto LAB_2c627298;
    }
  }
  local_3c = DAT_2c627500;
  pcVar11 = DAT_2c627504;
LAB_2c627298:
  param_6[8] = 0;
  param_6[9] = 0;
  param_6[0] = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  param_6[4] = 0;
  param_6[5] = 0;
  param_6[6] = 0;
  param_6[7] = 0;
  local_30 = param_3;
  iVar7 = FUN_2c6041dc(param_1,param_3);
  uVar3 = DAT_2c62750c;
  if (iVar7 == 0) {
    iVar9 = (int)param_6[2];
    iVar8 = 0;
    bVar2 = false;
  }
  else {
    do {
      if ((local_30 != param_3) && (iVar8 = FUN_2c606b94(iVar7,0x800000), iVar8 != 0)) {
        iVar9 = (int)param_6[2];
        bVar2 = param_3 == local_30;
        goto LAB_2c627456;
      }
      iVar8 = FUN_2c606ba4(iVar7,uVar3);
      if (iVar8 == 0) {
        uVar10 = FUN_2c6033b4(iVar7,0,*DAT_2c627508);
        if ((uVar10 & 0xff) == 0) {
          iVar8 = (*local_3c)(iVar7);
          iVar9 = (int)param_6[2];
          if (((int)((uint)*(byte *)(param_2 + 3) << 0x1e) < 0) && (param_4 < iVar9 + iVar8)) {
            bVar2 = param_3 == local_30;
            goto LAB_2c627456;
          }
          param_6[2] = (short)iVar8 + param_5 + param_6[2];
        }
        else {
          iVar8 = *(int *)(param_6 + 8);
          param_6[2] = param_6[2] + param_5;
          *(int *)(param_6 + 8) = iVar8 + 1;
          if ((int)((uint)*(byte *)(param_6 + 10) << 0x1f) < 0) {
            iVar9 = FUN_2c62bf1c((iVar8 + 1) * 0x14);
            iVar8 = 0;
            if (iVar9 == 0) goto LAB_2c62746e;
            if (*(int *)(param_6 + 6) != 0) {
              FUN_2c62c0d8(iVar9,*(int *)(param_6 + 6),*(int *)(param_6 + 8) * 0x14 + -0x14);
              FUN_2c62c040(*(undefined4 *)(param_6 + 6));
            }
            *(int *)(iVar9 + *(int *)(param_6 + 8) * 0x14 + -0x14) = iVar7;
            if ((*(byte *)(param_2 + 3) & 1) == 0) {
              uVar6 = FUN_2c6033b4(iVar7,*(byte *)(param_2 + 3) & 1,5);
            }
            else {
              uVar6 = FUN_2c6033b4(iVar7,0,2);
            }
            *(undefined2 *)(iVar9 + *(int *)(param_6 + 8) * 0x14 + -0x10) = uVar6;
            if ((*(byte *)(param_2 + 3) & 1) == 0) {
              uVar6 = FUN_2c6033b4(iVar7,*(byte *)(param_2 + 3) & 1,6);
            }
            else {
              uVar6 = FUN_2c6033b4(iVar7,0,3);
            }
            *(undefined2 *)(iVar9 + *(int *)(param_6 + 8) * 0x14 + -0xe) = uVar6;
            *(uint *)(iVar9 + *(int *)(param_6 + 8) * 0x14 + -8) = uVar10 & 0xff;
            iVar8 = iVar9 + *(int *)(param_6 + 8) * 0x14;
            *(byte *)(iVar8 + -4) = *(byte *)(iVar8 + -4) & 0xfe;
            *(int *)(param_6 + 6) = iVar9;
          }
        }
        iVar8 = (*pcVar11)(iVar7);
        iVar9 = (int)*param_6;
        if (*param_6 < iVar8) {
          iVar8 = (*pcVar11)(iVar7);
          iVar9 = iVar8;
        }
        *param_6 = (short)iVar9;
        *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
      }
      if ((*(byte *)(param_2 + 3) & 4) == 0) {
        iVar7 = 1;
      }
      else {
        iVar7 = -1;
      }
      local_30 = iVar7 + local_30;
      if (local_30 < 0) {
        iVar9 = (int)param_6[2];
        bVar2 = local_30 == param_3;
        goto LAB_2c627456;
      }
      iVar7 = FUN_2c6041dc(param_1);
    } while (iVar7 != 0);
    iVar9 = (int)param_6[2];
    iVar8 = 0;
    bVar2 = false;
  }
LAB_2c627456:
  if (0 < iVar9) {
    param_6[2] = (short)iVar9 - param_5;
  }
  local_38 = param_4;
  if (*(int *)(param_6 + 8) == 0) {
    local_38 = (int)param_6[2];
  }
  param_6[1] = (short)local_38;
  if (bVar2) {
    iVar7 = *(int *)(**(int **)(param_1 + 8) + local_30 * 4);
    iVar8 = FUN_2c6271f8(param_1,(*(byte *)(param_2 + 3) & 7) >> 2,&local_30);
    if (iVar7 != 0) {
      sVar4 = (*pcVar11)(iVar7);
      *param_6 = sVar4;
      iVar8 = (*local_3c)(iVar7);
      param_6[1] = (short)iVar8;
      param_6[4] = 1;
      param_6[5] = 0;
    }
  }
LAB_2c62746e:
  if ((*DAT_2c6274fc ^ local_2c) == 0) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(iVar8,*DAT_2c6274fc ^ local_2c,0);
}

