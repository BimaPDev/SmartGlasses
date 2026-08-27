/* FUN_2c4f2448 @ 0x2c4f2448 */

void FUN_2c4f2448(int param_1,code *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  
  uVar1 = DAT_2c4f25ec;
  uVar5 = DAT_2c4f25e8;
  uVar4 = DAT_2c4f25e4;
  uVar8 = 0;
  local_2c = *DAT_2c4f25e0;
  local_34 = 0;
  local_4c = 0;
  uStack_48 = 0;
  local_44 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_30 = 1;
  do {
    if (*(uint *)(*(int *)(param_1 + 0x68) + 0x20) >> 1 <= uVar8) {
      lVar9 = CONCAT44(local_34,0xffffffac);
      goto LAB_2c4f2568;
    }
    uVar8 = uVar8 + 1;
    lVar9 = (*param_2)(param_3);
    if ((((int)lVar9 != 0) || (lVar9 = (*param_2)(param_3,local_30), (int)lVar9 != 0)) ||
       (lVar9 = FUN_2c4f1b28(param_1,&local_4c,&local_34,0xffffffff,0xffffffff,0,0,0),
       (int)lVar9 != 0)) goto LAB_2c4f2568;
    if ((short)local_38 != 0) {
      uVar6 = 0;
      do {
        lVar9 = FUN_2c4f221c(param_1,&local_4c,uVar1,uVar4 & uVar6 << 10 | uVar5,0,&local_54,8);
        uVar2 = (uint)lVar9;
        if ((int)uVar2 < 0) {
          if (uVar2 != 0xfffffffe) goto LAB_2c4f2568;
        }
        else if (uVar2 >> 0x14 == 0x202) {
          if (local_50 != 0) {
            lVar9 = FUN_2c4f1840(param_1,0,param_1,local_54,local_50,param_2,param_3);
            iVar3 = (int)lVar9;
            goto joined_r0x2c4f2598;
          }
        }
        else if ((uVar2 >> 0x14 == 0x200) && (param_4 != 0)) {
          lVar9 = (*param_2)(param_3,local_54);
          if ((int)lVar9 != 0) goto LAB_2c4f2568;
          lVar9 = (*param_2)(param_3,local_50);
          iVar3 = (int)lVar9;
joined_r0x2c4f2598:
          if (iVar3 != 0) goto LAB_2c4f2568;
        }
        uVar6 = uVar6 + 1;
      } while ((uVar6 & 0xffff) < (local_38 & 0xffff));
    }
  } while ((local_34 != 0xffffffff) && (local_30 != -1));
  uVar4 = local_34;
  for (piVar7 = *(int **)(param_1 + 0x28); piVar7 != (int *)0x0; piVar7 = (int *)*piVar7) {
    if (*(char *)((int)piVar7 + 6) == '\x01') {
      uVar5 = piVar7[0xc];
      uVar4 = uVar5 & 0x110000;
      if ((uVar4 == 0x10000) && (piVar7[0xb] != 0)) {
        lVar9 = FUN_2c4f1840(param_1,piVar7 + 0x10,param_1,piVar7[10],piVar7[0xb],param_2,param_3);
        uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
        if ((int)lVar9 != 0) goto LAB_2c4f2568;
        uVar5 = piVar7[0xc];
      }
      if (((uVar5 & 0x120000) == 0x20000) && (piVar7[0xd] != 0)) {
        lVar9 = FUN_2c4f1840(param_1,piVar7 + 0x10,param_1,piVar7[0xe],piVar7[0xd],param_2,param_3);
        uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
        if ((int)lVar9 != 0) goto LAB_2c4f2568;
      }
    }
  }
  lVar9 = (ulonglong)uVar4 << 0x20;
LAB_2c4f2568:
  if ((*DAT_2c4f25e0 ^ local_2c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)lVar9,(int)((ulonglong)lVar9 >> 0x20),*DAT_2c4f25e0 ^ local_2c,0);
}

