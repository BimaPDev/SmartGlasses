/* FUN_1402e1fc @ 0x1402e1fc */

int FUN_1402e1fc(uint param_1,undefined2 *param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_lr;
  uint local_34;
  uint local_30;
  int local_2c;
  
  uVar7 = DAT_1402e358;
  puVar4 = DAT_1402e354;
  pbVar3 = DAT_1402e350;
  uVar9 = (param_1 & 0xfff) >> 8;
  local_2c = *DAT_1402e34c;
  if (uVar9 < 5) {
    uVar10 = param_1 >> 0xc;
    iVar8 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar8 = getBasePriority();
    }
    if (iVar8 != 0x40) {
      bVar1 = *DAT_1402e350;
      *DAT_1402e354 = 0x1402e230;
      puVar4[1] = unaff_lr;
      uVar6 = bVar1 + 1;
      *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)uVar7 * (ulonglong)uVar6 >> 0x23) * -10;
      *(undefined4 *)(DAT_1402e35c + (uint)bVar1 * 4) = unaff_lr;
    }
    pbVar3 = DAT_1402e378;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    if (*DAT_1402e378 != uVar10) {
      if (*DAT_1402e360 < 2) {
        if (uVar10 == 8) {
          FUN_140278b8(DAT_1402e374);
        }
        else if (*DAT_1402e378 == 8) {
          FUN_140278b8(DAT_1402e36c);
        }
      }
      FUN_14027890(uVar10);
      *pbVar3 = (byte)uVar10;
    }
    if (uVar9 == 0) {
      local_30 = (param_1 & 0xff) << 0x12 | 0x4000000;
      local_34 = uVar9;
      iVar5 = FUN_1402795c(&local_30,&local_34);
      if (iVar5 == 0) {
        *param_2 = (short)(local_34 >> 2);
      }
    }
    else {
      local_30 = (uint)*(ushort *)(DAT_1402e370 + uVar9 * 2) << 2;
      FUN_140278c0(&local_30,4);
      local_30 = (param_1 & 0xff) << 0x12 | 0x4000000;
      local_34 = 0;
      iVar5 = FUN_1402795c(&local_30,&local_34);
      if (iVar5 == 0) {
        *param_2 = (short)(local_34 >> 2);
      }
      local_30 = 0x28000;
      FUN_140278c0(&local_30,4);
    }
    if (iVar8 == 0) {
      *DAT_1402e354 = 0xffffffff;
    }
    bVar1 = *DAT_1402e364;
    uVar7 = bVar1 + 1;
    *DAT_1402e364 =
         (char)uVar7 + (char)(uint)((ulonglong)DAT_1402e358 * (ulonglong)uVar7 >> 0x23) * -10;
    *(undefined4 *)(DAT_1402e368 + (uint)bVar1 * 4) = unaff_lr;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar8);
    }
  }
  else {
    iVar5 = -1;
  }
  if (*DAT_1402e34c != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return iVar5;
}

