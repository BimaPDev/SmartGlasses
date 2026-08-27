/* FUN_1404d18c @ 0x1404d18c */

void FUN_1404d18c(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_lr;
  
  uVar9 = DAT_1404d168;
  puVar6 = DAT_1404d164;
  pbVar5 = DAT_1404d160;
  uVar7 = DAT_1404d00c;
  puVar4 = DAT_1404d008;
  pbVar3 = DAT_1404d004;
  if (param_1 != 0) {
    if (param_3 < 3) {
      iVar8 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        iVar8 = getBasePriority();
      }
      if (iVar8 != 0x40) {
        bVar1 = *DAT_1404d004;
        *DAT_1404d008 = 0x1404cee0;
        puVar4[1] = unaff_lr;
        uVar9 = bVar1 + 1;
        *pbVar3 = (char)uVar9 + (char)(uint)((ulonglong)uVar7 * (ulonglong)uVar9 >> 0x23) * -10;
        *(undefined4 *)(DAT_1404d010 + (uint)bVar1 * 4) = unaff_lr;
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(0x40);
      }
      uVar7 = DAT_1404d014[param_3];
      DAT_1404d014[param_3] = 1 << (param_2 & 0xff) | uVar7;
      if (iVar8 == 0) {
        *DAT_1404d008 = 0xffffffff;
      }
      pbVar3 = DAT_1404d018;
      uVar9 = DAT_1404d00c;
      bVar1 = *DAT_1404d018;
      *(undefined4 *)(DAT_1404d01c + (uint)bVar1 * 4) = unaff_lr;
      uVar10 = bVar1 + 1;
      *pbVar3 = (char)uVar10 + (char)(uint)((ulonglong)uVar9 * (ulonglong)uVar10 >> 0x23) * -10;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(iVar8);
      }
      if (uVar7 == 0) {
        FUN_1404ca1c();
        FUN_1404be3c(param_3 & 0xff);
      }
    }
    else if (param_3 == 3) {
      iVar8 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        iVar8 = getBasePriority();
      }
      if (iVar8 != 0x40) {
        bVar1 = *DAT_1404d004;
        *DAT_1404d008 = 0x1404cf80;
        puVar4[1] = unaff_lr;
        uVar9 = bVar1 + 1;
        *pbVar3 = (char)uVar9 + (char)(uint)((ulonglong)uVar7 * (ulonglong)uVar9 >> 0x23) * -10;
        *(undefined4 *)(DAT_1404d010 + (uint)bVar1 * 4) = unaff_lr;
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(0x40);
      }
      uVar7 = *DAT_1404d014;
      *DAT_1404d014 = 1 << (param_2 & 0xff) | uVar7;
      if (iVar8 == 0) {
        *DAT_1404d008 = 0xffffffff;
      }
      pbVar3 = DAT_1404d018;
      uVar9 = DAT_1404d00c;
      bVar1 = *DAT_1404d018;
      *(undefined4 *)(DAT_1404d01c + (uint)bVar1 * 4) = unaff_lr;
      uVar10 = bVar1 + 1;
      *pbVar3 = (char)uVar10 + (char)(uint)((ulonglong)uVar9 * (ulonglong)uVar10 >> 0x23) * -10;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(iVar8);
      }
      if (uVar7 == 0) {
        FUN_1404ca1c(0);
        FUN_1404be3c(0);
      }
    }
    FUN_1402a6e8(4,0x18a4,DAT_1404d028,DAT_1404d024,DAT_1404d020,param_2,param_3);
    FUN_1402a9fc(DAT_1404d02c,4,3,DAT_1404d014);
    return;
  }
  if (param_3 < 3) {
    iVar8 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar8 = getBasePriority();
    }
    if (iVar8 != 0x40) {
      bVar1 = *DAT_1404d160;
      *DAT_1404d164 = 0x1404d048;
      puVar6[1] = unaff_lr;
      uVar7 = bVar1 + 1;
      *pbVar5 = (char)uVar7 + (char)(uint)((ulonglong)uVar9 * (ulonglong)uVar7 >> 0x23) * -10;
      *(undefined4 *)(DAT_1404d16c + (uint)bVar1 * 4) = unaff_lr;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    uVar7 = DAT_1404d170[param_3];
    DAT_1404d170[param_3] = uVar7 & ~(1 << (param_2 & 0xff));
    if (iVar8 == 0) {
      *DAT_1404d164 = 0xffffffff;
    }
    pbVar3 = DAT_1404d174;
    uVar9 = DAT_1404d168;
    bVar1 = *DAT_1404d174;
    *(undefined4 *)(DAT_1404d178 + (uint)bVar1 * 4) = unaff_lr;
    uVar10 = bVar1 + 1;
    *pbVar3 = (char)uVar10 + (char)(uint)((ulonglong)uVar9 * (ulonglong)uVar10 >> 0x23) * -10;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar8);
    }
    if (uVar7 != 0) {
      FUN_1404bf78(param_3);
    }
  }
  else if (param_3 == 3) {
    iVar8 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar8 = getBasePriority();
    }
    if (iVar8 != 0x40) {
      bVar1 = *DAT_1404d160;
      *DAT_1404d164 = 0x1404d0ea;
      puVar6[1] = unaff_lr;
      uVar7 = bVar1 + 1;
      *pbVar5 = (char)uVar7 + (char)(uint)((ulonglong)uVar9 * (ulonglong)uVar7 >> 0x23) * -10;
      *(undefined4 *)(DAT_1404d16c + (uint)bVar1 * 4) = unaff_lr;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    uVar7 = *DAT_1404d170;
    *DAT_1404d170 = uVar7 & ~(1 << (param_2 & 0xff));
    if (iVar8 == 0) {
      *DAT_1404d164 = 0xffffffff;
    }
    pbVar3 = DAT_1404d174;
    uVar9 = DAT_1404d168;
    bVar1 = *DAT_1404d174;
    *(undefined4 *)(DAT_1404d178 + (uint)bVar1 * 4) = unaff_lr;
    uVar10 = bVar1 + 1;
    *pbVar3 = (char)uVar10 + (char)(uint)((ulonglong)uVar9 * (ulonglong)uVar10 >> 0x23) * -10;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar8);
    }
    if (uVar7 != 0) {
      FUN_1404bf78(0);
    }
  }
  FUN_1402a6e8(4,0x18d8,DAT_1404d184,DAT_1404d180,DAT_1404d17c,param_2,param_3);
  FUN_1402a9fc(DAT_1404d188,4,3,DAT_1404d170);
  return;
}

