/* FUN_2c4c2cd8 @ 0x2c4c2cd8 */

uint * FUN_2c4c2cd8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  undefined4 unaff_lr;
  uint *puVar13;
  
  puVar2 = DAT_2c4c2dec;
  uVar6 = param_2 + 3U & 0xfffffffc;
  if (uVar6 == 0) {
    return (uint *)0x0;
  }
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      if (uVar6 <= (uint)param_1[2]) {
        puVar9 = (uint *)param_1[6];
        iVar11 = 0;
        if (puVar9 != (uint *)0x0) goto LAB_2c4c2d14;
      }
    }
    else {
      iVar11 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar11 = getBasePriority();
      }
      if (iVar11 != 0x40) {
        *DAT_2c4c2dec = 0x2c4c2cfa;
        puVar2[1] = unaff_lr;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
      if ((uVar6 <= (uint)param_1[2]) && (puVar9 = (uint *)param_1[6], puVar9 != (uint *)0x0)) {
LAB_2c4c2d14:
        puVar10 = (uint *)(param_1 + 5);
        if (puVar10 < puVar9) {
          uVar4 = 0xffffffff;
          puVar13 = (uint *)0x0;
          puVar3 = puVar10;
          puVar12 = (uint *)0x0;
          do {
            puVar10 = puVar9;
            puVar7 = puVar3;
            if (-1 < (int)(*puVar10 << 0x1f)) {
                    /* WARNING: Subroutine does not return */
              FUN_2c673ca8(DAT_2c4c2df0,puVar10,uVar6,puVar7,param_4);
            }
            uVar8 = *puVar10 & 0xfffffffc;
            if ((((uVar8 != 0) && (uVar8 = (uVar8 - (int)puVar10) - 4, uVar6 <= uVar8)) &&
                (uVar8 < uVar4)) &&
               (uVar4 = uVar8, puVar13 = puVar10, puVar12 = puVar7, uVar6 == uVar8)) {
LAB_2c4c2d62:
              puVar7[1] = puVar13[1];
              uVar6 = *puVar13 & 0xfffffffc;
              *puVar13 = *puVar13 & 0xfffffffe;
              iVar5 = 0;
              if (uVar6 != 0) {
                iVar5 = (uVar6 - (int)puVar13) + -4;
              }
              param_1[2] = param_1[2] - iVar5;
              FUN_2c4c2a3c(param_1,puVar13);
              if ((uint)param_1[2] < (uint)param_1[3]) {
                param_1[3] = param_1[2];
              }
              if (*param_1 != 0) {
                if (iVar11 == 0) {
                  *DAT_2c4c2dec = 0xffffffff;
                }
                bVar1 = (bool)isCurrentModePrivileged();
                if (bVar1) {
                  setBasePriority(iVar11);
                }
              }
              return puVar13 + 1;
            }
            puVar7 = puVar12;
            puVar9 = (uint *)puVar10[1];
            if (puVar9 == (uint *)0x0) {
              if (puVar13 != (uint *)0x0) goto LAB_2c4c2d62;
              goto LAB_2c4c2dbc;
            }
            puVar3 = puVar10;
            puVar12 = puVar7;
          } while (puVar10 < puVar9);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c4c2df0,puVar10 + 1,uVar6,puVar10,param_4);
      }
LAB_2c4c2dbc:
      if (*param_1 != 0) {
        if (iVar11 == 0) {
          *DAT_2c4c2dec = 0xffffffff;
        }
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(iVar11);
        }
      }
    }
  }
  return (uint *)0x0;
}

