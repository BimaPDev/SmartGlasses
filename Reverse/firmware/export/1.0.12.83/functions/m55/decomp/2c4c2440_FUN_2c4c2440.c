/* FUN_2c4c2440 @ 0x2c4c2440 */

undefined4
FUN_2c4c2440(char *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_lr;
  
  puVar3 = DAT_2c4c250c;
  iVar8 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar8 = getBasePriority();
  }
  if (iVar8 != 0x40) {
    *DAT_2c4c250c = 0x2c4c2452;
    puVar3[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if ((*param_1 == '\x01') || (*param_1 == '\x04')) {
    *param_1 = '\x02';
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0xc) = param_3;
      *(undefined4 *)(param_1 + 0x10) = param_4;
    }
    iVar2 = DAT_2c4c2514;
    if (param_5 == 0) {
      param_5 = 1;
    }
    if (*(int *)(DAT_2c4c2514 + 0x130) == 0) {
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      *(char **)(iVar2 + 0x130) = param_1;
      FUN_2c6742c8(param_5);
    }
    else {
      uVar5 = FUN_2c674798();
      iVar7 = *(int *)(iVar2 + 0x130);
      uVar6 = *(uint *)(iVar7 + 8);
      if (uVar6 == 0) {
        uVar6 = 1;
      }
      if (uVar6 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c4c2510,uVar5);
      }
      if (param_5 < uVar5) {
        *(uint *)(iVar7 + 8) = uVar5 - param_5;
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar2 + 0x130);
        *(char **)(iVar2 + 0x130) = param_1;
        FUN_2c6739f8();
        FUN_2c6742c8(param_5);
      }
      else {
        param_5 = param_5 - uVar5;
        for (iVar2 = *(int *)(iVar7 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
          uVar5 = *(uint *)(iVar2 + 8);
          if (param_5 <= uVar5) {
            *(uint *)(iVar2 + 8) = uVar5 - param_5;
            break;
          }
          param_5 = param_5 - uVar5;
          iVar7 = iVar2;
        }
        *(char **)(iVar7 + 4) = param_1;
        *(int *)(param_1 + 4) = iVar2;
      }
    }
    uVar4 = 0;
    *(uint *)(param_1 + 8) = param_5;
  }
  else {
    uVar4 = 3;
  }
  if (iVar8 == 0) {
    *DAT_2c4c250c = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar8);
  }
  return uVar4;
}

