/* FUN_14025890 @ 0x14025890 */

undefined4
FUN_14025890(char *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 unaff_lr;
  
  pbVar5 = DAT_140259bc;
  uVar7 = DAT_140259a8;
  puVar4 = DAT_140259a4;
  iVar9 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar9 = getBasePriority();
  }
  if (iVar9 != 0x40) {
    bVar1 = *DAT_140259bc;
    *DAT_140259a4 = 0x140258a4;
    puVar4[1] = unaff_lr;
    uVar8 = bVar1 + 1;
    *pbVar5 = (char)uVar8 + (char)(uint)((ulonglong)uVar7 * (ulonglong)uVar8 >> 0x23) * -10;
    *(undefined4 *)(DAT_140259ac + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  if ((*param_1 == '\x01') || (*param_1 == '\x04')) {
    *param_1 = '\x02';
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0xc) = param_3;
      *(undefined4 *)(param_1 + 0x10) = param_4;
    }
    iVar3 = DAT_140259c0;
    if (param_5 == 0) {
      param_5 = 1;
    }
    if (*(int *)(DAT_140259c0 + 0x130) == 0) {
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      *(char **)(iVar3 + 0x130) = param_1;
      FUN_14029348(param_5);
    }
    else {
      uVar7 = FUN_140293b0();
      iVar10 = *(int *)(iVar3 + 0x130);
      if ((*(uint *)(iVar10 + 8) < uVar7) && (1 < uVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140259b8,uVar7);
      }
      if (param_5 < uVar7) {
        *(uint *)(iVar10 + 8) = uVar7 - param_5;
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar3 + 0x130);
        *(char **)(iVar3 + 0x130) = param_1;
        FUN_14029378();
        FUN_14029348(param_5);
      }
      else {
        param_5 = param_5 - uVar7;
        for (iVar3 = *(int *)(iVar10 + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
          uVar7 = *(uint *)(iVar3 + 8);
          if (param_5 <= uVar7) {
            *(uint *)(iVar3 + 8) = uVar7 - param_5;
            break;
          }
          param_5 = param_5 - uVar7;
          iVar10 = iVar3;
        }
        *(char **)(iVar10 + 4) = param_1;
        *(int *)(param_1 + 4) = iVar3;
      }
    }
    uVar6 = 0;
    *(uint *)(param_1 + 8) = param_5;
  }
  else {
    uVar6 = 3;
  }
  if (iVar9 == 0) {
    *DAT_140259a4 = 0xffffffff;
  }
  bVar1 = *DAT_140259b0;
  uVar7 = bVar1 + 1;
  *DAT_140259b0 =
       (char)uVar7 + (char)(uint)((ulonglong)DAT_140259a8 * (ulonglong)uVar7 >> 0x23) * -10;
  *(undefined4 *)(DAT_140259b4 + (uint)bVar1 * 4) = unaff_lr;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar9);
  }
  return uVar6;
}

