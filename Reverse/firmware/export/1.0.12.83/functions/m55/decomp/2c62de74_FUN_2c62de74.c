/* FUN_2c62de74 @ 0x2c62de74 */

int FUN_2c62de74(undefined4 *param_1,int param_2,uint param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_34;
  uint local_30;
  int local_2c;
  
  local_2c = *DAT_2c62e02c;
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    iVar1 = 0xb;
    goto LAB_2c62dec2;
  }
  pcVar4 = *(code **)(iVar1 + 0x10);
  if (pcVar4 == (code *)0x0) {
    iVar1 = 9;
    goto LAB_2c62dec2;
  }
  local_34 = 0;
  uVar3 = (uint)*(ushort *)(iVar1 + 2);
  if (uVar3 == 0) {
    iVar1 = (*pcVar4)(iVar1,*param_1,param_2,param_3,&local_34);
  }
  else {
    puVar2 = (uint *)param_1[2];
    uVar5 = puVar2[2];
    uVar7 = puVar2[3];
    if ((uVar5 < *puVar2) || (puVar2[1] <= uVar5)) {
      if (uVar3 < param_3) {
        iVar1 = (*pcVar4)(iVar1,*param_1,param_2,param_3,&local_34);
      }
      else {
        if (uVar7 == 0) {
          uVar7 = lv_mem_alloc(uVar3);
          puVar2[3] = uVar7;
          iVar1 = param_1[1];
          uVar7 = *(uint *)(param_1[2] + 0xc);
          pcVar4 = *(code **)(iVar1 + 0x10);
        }
        local_30 = 0;
        iVar1 = (*pcVar4)(iVar1,*param_1,uVar7,uVar3,&local_30);
        *(uint *)param_1[2] = uVar5;
        if (local_30 <= param_3) {
          param_3 = local_30;
        }
        ((int *)param_1[2])[1] = local_30 + *(int *)param_1[2];
        local_34 = param_3;
        FUN_2c62c0d8(param_2,uVar7);
      }
LAB_2c62df32:
      if (iVar1 != 0) goto LAB_2c62debc;
    }
    else {
      uVar6 = puVar2[1] - uVar5;
      uVar5 = uVar5 - *puVar2 & 0xffff;
      if (uVar3 - uVar5 <= uVar6) {
        uVar6 = uVar3 - uVar5;
      }
      if (uVar6 < param_3) {
        FUN_2c62c0d8(param_2,uVar5 + uVar7,uVar6);
        local_30 = 0;
        if (uVar3 < param_3) {
          iVar1 = (**(code **)(param_1[1] + 0x10))
                            (param_1[1],*param_1,param_2 + uVar6,param_3 - uVar6,&local_30);
        }
        else {
          iVar1 = (**(code **)(param_1[1] + 0x10))(param_1[1],*param_1,uVar7,uVar3,&local_30);
          *(undefined4 *)param_1[2] = ((undefined4 *)param_1[2])[1];
          uVar3 = param_3 - uVar6;
          if (local_30 <= param_3 - uVar6) {
            uVar3 = local_30;
          }
          ((int *)param_1[2])[1] = local_30 + *(int *)param_1[2];
          FUN_2c62c0d8(param_2 + uVar6,uVar7,uVar3 & 0xffff);
        }
        local_34 = param_3;
        if (uVar6 + local_30 <= param_3) {
          local_34 = uVar6 + local_30;
        }
        goto LAB_2c62df32;
      }
      FUN_2c62c0d8(param_2,uVar5 + uVar7,param_3);
      local_34 = param_3;
    }
    iVar1 = 0;
    *(uint *)(param_1[2] + 8) = *(int *)(param_1[2] + 8) + local_34;
  }
LAB_2c62debc:
  if (param_4 != (uint *)0x0) {
    *param_4 = local_34;
  }
LAB_2c62dec2:
  if (*DAT_2c62e02c != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar1;
}

