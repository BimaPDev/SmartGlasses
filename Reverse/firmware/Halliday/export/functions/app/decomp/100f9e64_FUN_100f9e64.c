/* FUN_100f9e64 @ 0x100f9e64 */

undefined4 FUN_100f9e64(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  
  if (param_1 == 0) {
    return 0x21;
  }
  if (param_2 != (undefined4 *)0x0) {
    piVar5 = (int *)(param_1 + 0x14);
    piVar8 = piVar5 + *(int *)(param_1 + 0x10);
    if (piVar5 < piVar8) {
      while (piVar12 = piVar5 + 1, (undefined4 *)*piVar5 != param_2) {
        piVar5 = piVar12;
        if (piVar8 <= piVar12) {
          return 0x22;
        }
      }
      piVar4 = piVar8 + -1;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      if (piVar5 < piVar4) {
        uVar10 = (int)piVar8 + (-5 - (int)piVar5);
        if (((((uint)piVar12 | (uint)piVar5) & 7) == 0) && (0x2b < uVar10)) {
          uVar10 = (uVar10 >> 2) + 1;
          piVar12 = piVar5;
          do {
            piVar4 = piVar12 + 2;
            *piVar12 = piVar12[1];
            piVar12[1] = piVar12[2];
            piVar12 = piVar4;
          } while (piVar5 + (uVar10 & 0xfffffffe) != piVar4);
          uVar2 = uVar10 & 0xfffffffe;
          if (uVar2 != uVar10) {
            piVar5[uVar2] = piVar5[uVar2 + 1];
          }
        }
        else {
          do {
            piVar12 = piVar5 + 1;
            *piVar5 = piVar5[1];
            if (piVar4 <= piVar12) break;
            piVar1 = piVar5 + 2;
            piVar5 = piVar5 + 2;
            *piVar12 = *piVar1;
          } while (piVar5 < piVar4);
        }
      }
      piVar5 = (int *)param_2[1];
      iVar11 = param_2[2];
      piVar12 = (int *)*param_2;
      piVar8[-1] = 0;
      if (piVar5 == (int *)0x0) {
        iVar3 = *piVar12;
      }
      else {
        if (param_2 == (undefined4 *)piVar5[0x28]) {
          piVar5[0x28] = 0;
        }
        iVar3 = *piVar12;
        if ((iVar3 << 0x1e < 0) && (piVar5 != (int *)0xffffff6c)) {
          for (piVar8 = (int *)piVar5[0x25]; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[1]) {
            if (param_2 == (undefined4 *)piVar8[2]) {
              iVar3 = *piVar5;
              if ((*(int *)(param_2[3] + 0x24) == DAT_100f9ff8) && (param_2[0xd] != 0)) {
                (**(code **)(*(int *)(param_2[3] + 0x38) + 0x14))();
              }
              iVar6 = *piVar8;
              piVar4 = (int *)piVar8[1];
              if (iVar6 == 0) {
                piVar5[0x25] = (int)piVar4;
              }
              else {
                *(int **)(iVar6 + 4) = piVar4;
              }
              if (piVar4 == (int *)0x0) {
                piVar5[0x26] = iVar6;
              }
              else {
                *piVar4 = iVar6;
              }
              pcVar7 = *(code **)(iVar3 + 8);
              (*pcVar7)(iVar3,piVar8,piVar4,pcVar7,param_4);
              iVar3 = piVar5[0x25];
              goto joined_r0x100f9f78;
            }
          }
        }
      }
      goto LAB_100f9efa;
    }
  }
  return 0x22;
joined_r0x100f9f78:
  if (iVar3 == 0) goto LAB_100f9fec;
  iVar6 = *(int *)(iVar3 + 8);
  if (*(int *)(iVar6 + 0x10) == DAT_100f9ff8) goto LAB_100f9f8c;
  iVar3 = *(int *)(iVar3 + 4);
  goto joined_r0x100f9f78;
LAB_100f9fec:
  iVar6 = 0;
LAB_100f9f8c:
  piVar8 = (int *)*param_2;
  piVar5[0x27] = iVar6;
  iVar3 = *piVar8;
LAB_100f9efa:
  if (((iVar3 << 0x1f < 0) && (param_2 != (undefined4 *)0xfffffff0)) &&
     (iVar3 = param_2[2], iVar3 != 0)) {
    iVar6 = param_2[4];
    while (iVar6 != 0) {
      iVar9 = *(int *)(iVar6 + 4);
      FUN_100f8ad0(iVar3,*(undefined4 *)(iVar6 + 8),param_2);
      (**(code **)(iVar3 + 8))(iVar3,iVar6);
      iVar6 = iVar9;
    }
    param_2[4] = 0;
    param_2[5] = 0;
  }
  if ((code *)piVar12[7] != (code *)0x0) {
    (*(code *)piVar12[7])(param_2);
  }
  (**(code **)(iVar11 + 8))(iVar11,param_2);
  return 0;
}

