/* FUN_2c591ec8 @ 0x2c591ec8 */

void FUN_2c591ec8(int *param_1,int param_2,uint param_3,int *param_4,uint param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint local_30;
  int local_2c;
  
  local_2c = *DAT_2c59213c;
  iVar3 = param_1[1];
  if ((param_3 + 0x7fffffff) - iVar3 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(DAT_2c592140);
  }
  iVar8 = param_5 - param_3;
  piVar7 = (int *)*param_1;
  uVar6 = iVar3 + iVar8;
  if (piVar7 == param_1 + 2) {
    if (0xf < uVar6) {
      uVar1 = 0xf;
      goto LAB_2c591fa4;
    }
  }
  else {
    uVar1 = param_1[2];
    if (uVar1 < uVar6) {
LAB_2c591fa4:
      iVar8 = param_3 + param_2;
      iVar3 = iVar3 - iVar8;
      local_30 = uVar6;
      puVar2 = (undefined1 *)FUN_2c591d68(&local_30,uVar1);
      if (param_2 != 0) {
        if (param_2 == 1) {
          *puVar2 = *(undefined1 *)*param_1;
        }
        else {
          FUN_2c674668(puVar2,(undefined1 *)*param_1,param_2);
        }
      }
      if ((param_4 != (int *)0x0) && (param_5 != 0)) {
        if (param_5 == 1) {
          puVar2[param_2] = (char)*param_4;
        }
        else {
          FUN_2c674668(puVar2 + param_2,param_4,param_5);
        }
      }
      if (iVar3 != 0) {
        if (iVar3 == 1) {
          puVar2[param_5 + param_2] = *(undefined1 *)(*param_1 + iVar8);
        }
        else {
          FUN_2c674668(puVar2 + param_5 + param_2,*param_1 + iVar8,iVar3);
        }
      }
      if (param_1 + 2 != (int *)*param_1) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      *param_1 = (int)puVar2;
      param_1[2] = local_30;
      goto LAB_2c591f3c;
    }
  }
  puVar2 = (undefined1 *)((int)piVar7 + param_2);
  iVar4 = iVar3 - (param_3 + param_2);
  if ((param_4 < piVar7) || ((int *)(iVar3 + (int)piVar7) < param_4)) {
    if ((iVar4 != 0) && (param_3 != param_5)) {
      if (iVar4 != 1) {
        FUN_2c673eb8(puVar2 + param_5,puVar2 + param_3,iVar4);
        goto LAB_2c591f36;
      }
      puVar2[param_5] = puVar2[param_3];
      if (param_5 == 0) goto LAB_2c591f38;
LAB_2c591f86:
      if (param_5 != 1) {
        FUN_2c674668(puVar2,param_4,param_5);
        puVar2 = (undefined1 *)*param_1;
        goto LAB_2c591f3c;
      }
LAB_2c592016:
      *(char *)((int)piVar7 + param_2) = (char)*param_4;
      puVar2 = (undefined1 *)*param_1;
      goto LAB_2c591f3c;
    }
LAB_2c591f36:
    if (param_5 != 0) goto LAB_2c591f86;
  }
  else {
    if ((param_5 == 0) || (param_3 < param_5)) {
LAB_2c59204e:
      if (iVar4 != 0) {
        if (param_3 == param_5) goto LAB_2c591f38;
        goto LAB_2c592056;
      }
    }
    else {
      if (param_5 == 1) {
        *(char *)((int)piVar7 + param_2) = (char)*param_4;
        goto LAB_2c59204e;
      }
      FUN_2c673eb8(puVar2,param_4,param_5);
      if ((param_3 == param_5) || (iVar4 == 0)) goto LAB_2c591f38;
LAB_2c592056:
      if (iVar4 == 1) {
        puVar2[param_5] = puVar2[param_3];
      }
      else {
        FUN_2c673eb8(puVar2 + param_5,puVar2 + param_3,iVar4);
      }
    }
    if (param_3 < param_5) {
      piVar5 = (int *)(puVar2 + param_3);
      if (piVar5 < (int *)((int)param_4 + param_5)) {
        if (param_4 < piVar5) {
          uVar1 = (int)piVar5 - (int)param_4;
          if (uVar1 == 1) {
            *(char *)((int)piVar7 + param_2) = (char)*param_4;
          }
          else if (uVar1 != 0) {
            FUN_2c673eb8(puVar2,param_4,uVar1);
          }
          if (param_5 - uVar1 == 1) {
            puVar2[uVar1] = puVar2[param_5];
          }
          else if (param_5 != uVar1) {
            FUN_2c674668(puVar2 + uVar1,puVar2 + param_5);
            puVar2 = (undefined1 *)*param_1;
            goto LAB_2c591f3c;
          }
        }
        else {
          if (param_5 == 1) {
            *(undefined1 *)((int)piVar7 + param_2) = *(undefined1 *)((int)param_4 + iVar8);
            puVar2 = (undefined1 *)*param_1;
            goto LAB_2c591f3c;
          }
          if (param_5 != 0) {
            FUN_2c674668(puVar2,(undefined1 *)((int)param_4 + iVar8),param_5);
            puVar2 = (undefined1 *)*param_1;
            goto LAB_2c591f3c;
          }
        }
      }
      else {
        if (param_5 == 1) goto LAB_2c592016;
        if (param_5 != 0) {
          FUN_2c673eb8(puVar2,param_4,param_5);
          puVar2 = (undefined1 *)*param_1;
          goto LAB_2c591f3c;
        }
      }
    }
  }
LAB_2c591f38:
  puVar2 = (undefined1 *)*param_1;
LAB_2c591f3c:
  param_1[1] = uVar6;
  puVar2[uVar6] = 0;
  if (*DAT_2c59213c != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

