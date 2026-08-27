/* FUN_140a2bac @ 0x140a2bac */

byte * FUN_140a2bac(int *param_1,int *param_2)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 unaff_lr;
  
  pbVar5 = (byte *)FUN_140e5658(param_2,0,0x20);
  uVar11 = DAT_140a2cd0;
  puVar4 = DAT_140a2ccc;
  pbVar10 = DAT_140a2cc8;
  if (param_1 != (int *)0x0) {
    iVar13 = 0;
    if (*param_1 != 0) {
      iVar13 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        iVar13 = getBasePriority();
      }
      if (iVar13 != 0x40) {
        bVar1 = *DAT_140a2cc8;
        *DAT_140a2ccc = 0x140a2bd4;
        puVar4[1] = unaff_lr;
        uVar8 = bVar1 + 1;
        *pbVar10 = (char)uVar8 + (char)(uint)((ulonglong)uVar11 * (ulonglong)uVar8 >> 0x23) * -10;
        *(undefined4 *)(DAT_140a2cd4 + (uint)bVar1 * 4) = unaff_lr;
        pbVar5 = pbVar10;
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(0x40);
      }
    }
    puVar6 = (uint *)(param_1[5] & 0xfffffffc);
    if ((puVar6 != (uint *)0x0) && ((int)puVar6 <= (int)(param_1 + 5))) {
LAB_140a2cb8:
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a2ce0,puVar6);
    }
    if ((*puVar6 & 0xfffffffc) != 0) {
      iVar7 = param_2[6];
      puVar9 = puVar6;
      do {
        iVar7 = iVar7 + 1;
        param_2[6] = iVar7;
        uVar11 = *puVar9;
        pbVar5 = (byte *)(uVar11 << 0x1f);
        if ((int)pbVar5 < 0) {
          if ((uVar11 & 0xfffffffc) != 0) {
            pbVar10 = (byte *)(((uVar11 & 0xfffffffc) - (int)puVar9) + -4);
            *param_2 = (int)(pbVar10 + *param_2);
            pbVar5 = (byte *)param_2[2];
            if (pbVar5 < pbVar10) {
              param_2[2] = (int)pbVar10;
            }
          }
          param_2[5] = param_2[5] + 1;
        }
        else {
          iVar12 = 0;
          if ((uVar11 & 0xfffffffc) != 0) {
            iVar12 = ((uVar11 & 0xfffffffc) - (int)puVar9) + -4;
          }
          pbVar5 = (byte *)(param_2[4] + 1);
          param_2[1] = iVar12 + param_2[1];
          param_2[4] = (int)pbVar5;
        }
        puVar6 = (uint *)(*puVar9 & 0xfffffffc);
        if ((puVar6 != (uint *)0x0) && ((int)puVar6 <= (int)puVar9)) goto LAB_140a2cb8;
        puVar9 = puVar6;
      } while ((*puVar6 & 0xfffffffc) != 0);
    }
    param_2[3] = param_1[3];
    param_2[7] = param_1[1];
    if (*param_2 != param_1[2]) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a2ce4,param_1);
    }
    if (*param_1 != 0) {
      if (iVar13 == 0) {
        *DAT_140a2ccc = 0xffffffff;
      }
      pbVar10 = DAT_140a2cd8;
      bVar1 = *DAT_140a2cd8;
      *(undefined4 *)(DAT_140a2cdc + (uint)bVar1 * 4) = unaff_lr;
      uVar11 = bVar1 + 1;
      lVar3 = (ulonglong)DAT_140a2cd0 * (ulonglong)uVar11;
      pbVar5 = (byte *)lVar3;
      *pbVar10 = (char)uVar11 + (char)(uint)((ulonglong)lVar3 >> 0x23) * -10;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(iVar13);
      }
    }
  }
  return pbVar5;
}

