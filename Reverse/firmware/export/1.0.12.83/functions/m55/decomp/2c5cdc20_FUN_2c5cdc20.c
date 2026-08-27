/* FUN_2c5cdc20 @ 0x2c5cdc20 */

void FUN_2c5cdc20(int *param_1,int param_2,uint param_3,int *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined1 *puVar8;
  
  iVar1 = param_1[1];
  if ((param_3 + 0x7fffffff) - iVar1 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(DAT_2c5cddb0);
  }
  iVar7 = param_5 - param_3;
  piVar6 = (int *)*param_1;
  uVar5 = iVar1 + iVar7;
  if (piVar6 == param_1 + 2) {
    uVar2 = 0xf;
  }
  else {
    uVar2 = param_1[2];
  }
  if (uVar2 < uVar5) {
    FUN_2c52263c(param_1,param_2,param_3,param_4,param_5);
    goto LAB_2c5cdc96;
  }
  puVar8 = (undefined1 *)((int)piVar6 + param_2);
  iVar3 = iVar1 - (param_3 + param_2);
  if ((param_4 < piVar6) || ((int *)(iVar1 + (int)piVar6) < param_4)) {
    if ((iVar3 != 0) && (param_3 != param_5)) {
      if (iVar3 == 1) {
        puVar8[param_5] = puVar8[param_3];
      }
      else {
        FUN_2c673eb8(puVar8 + param_5,puVar8 + param_3,iVar3);
      }
    }
    if (param_5 == 0) goto LAB_2c5cdc96;
    if (param_5 != 1) {
      FUN_2c674668(puVar8,param_4,param_5);
      goto LAB_2c5cdc96;
    }
  }
  else {
    if ((param_5 == 0) || (param_3 < param_5)) {
LAB_2c5cdcfc:
      if (iVar3 != 0) {
        if (param_3 == param_5) goto LAB_2c5cdc96;
        goto LAB_2c5cdd04;
      }
    }
    else {
      if (param_5 == 1) {
        *(char *)((int)piVar6 + param_2) = (char)*param_4;
        goto LAB_2c5cdcfc;
      }
      FUN_2c673eb8(puVar8,param_4,param_5);
      if ((param_3 == param_5) || (iVar3 == 0)) goto LAB_2c5cdc96;
LAB_2c5cdd04:
      if (iVar3 == 1) {
        puVar8[param_5] = puVar8[param_3];
      }
      else {
        FUN_2c673eb8(puVar8 + param_5,puVar8 + param_3,iVar3);
      }
    }
    if (param_5 <= param_3) goto LAB_2c5cdc96;
    piVar4 = (int *)(puVar8 + param_3);
    if (piVar4 < (int *)((int)param_4 + param_5)) {
      if (param_4 < piVar4) {
        uVar2 = (int)piVar4 - (int)param_4;
        if (uVar2 == 1) {
          *(char *)((int)piVar6 + param_2) = (char)*param_4;
        }
        else if (uVar2 != 0) {
          FUN_2c673eb8(puVar8,param_4,uVar2);
        }
        if (param_5 - uVar2 == 1) {
          puVar8[uVar2] = puVar8[param_5];
        }
        else if (param_5 != uVar2) {
          FUN_2c674668(puVar8 + uVar2,puVar8 + param_5);
        }
      }
      else if (param_5 == 1) {
        *(undefined1 *)((int)piVar6 + param_2) = *(undefined1 *)((int)param_4 + iVar7);
      }
      else if (param_5 != 0) {
        FUN_2c674668(puVar8,(undefined1 *)((int)param_4 + iVar7),param_5);
      }
      goto LAB_2c5cdc96;
    }
    if (param_5 != 1) {
      if (param_5 != 0) {
        FUN_2c673eb8(puVar8,param_4,param_5);
      }
      goto LAB_2c5cdc96;
    }
  }
  *(char *)((int)piVar6 + param_2) = (char)*param_4;
LAB_2c5cdc96:
  param_1[1] = uVar5;
  *(undefined1 *)(*param_1 + uVar5) = 0;
  return;
}

