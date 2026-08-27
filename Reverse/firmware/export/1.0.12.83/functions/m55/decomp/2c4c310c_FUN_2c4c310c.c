/* FUN_2c4c310c @ 0x2c4c310c */

void FUN_2c4c310c(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_lr;
  
  FUN_2c674268(param_2,0,0x20,param_4,param_4);
  puVar2 = DAT_2c4c31e4;
  if (param_1 != (int *)0x0) {
    iVar8 = 0;
    if (*param_1 != 0) {
      iVar8 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar8 = getBasePriority();
      }
      if (iVar8 != 0x40) {
        *DAT_2c4c31e4 = 0x2c4c3132;
        puVar2[1] = unaff_lr;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
    }
    puVar4 = (uint *)(param_1[5] & 0xfffffffc);
    if ((puVar4 != (uint *)0x0) && ((int)puVar4 <= (int)(param_1 + 5))) {
LAB_2c4c31d6:
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4c31e8);
    }
    if ((*puVar4 & 0xfffffffc) != 0) {
      iVar3 = param_2[6];
      do {
        iVar3 = iVar3 + 1;
        param_2[6] = iVar3;
        uVar6 = *puVar4;
        if ((int)(uVar6 << 0x1f) < 0) {
          if ((uVar6 & 0xfffffffc) != 0) {
            uVar6 = ((uVar6 & 0xfffffffc) - (int)puVar4) - 4;
            *param_2 = *param_2 + uVar6;
            if ((uint)param_2[2] < uVar6) {
              param_2[2] = uVar6;
            }
          }
          param_2[5] = param_2[5] + 1;
        }
        else {
          iVar7 = 0;
          if ((uVar6 & 0xfffffffc) != 0) {
            iVar7 = ((uVar6 & 0xfffffffc) - (int)puVar4) + -4;
          }
          param_2[4] = param_2[4] + 1;
          param_2[1] = iVar7 + param_2[1];
        }
        puVar5 = (uint *)(*puVar4 & 0xfffffffc);
        if ((puVar5 != (uint *)0x0) && ((int)puVar5 <= (int)puVar4)) goto LAB_2c4c31d6;
        puVar4 = puVar5;
      } while ((*puVar5 & 0xfffffffc) != 0);
    }
    param_2[3] = param_1[3];
    param_2[7] = param_1[1];
    if (*param_2 != param_1[2]) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4c31ec,param_1);
    }
    if (*param_1 != 0) {
      if (iVar8 == 0) {
        *DAT_2c4c31e4 = 0xffffffff;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(iVar8);
      }
    }
  }
  return;
}

