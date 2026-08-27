/* FUN_2c543af4 @ 0x2c543af4 */

void FUN_2c543af4(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint local_30;
  int local_2c;
  
  piVar5 = DAT_2c543d70;
  local_2c = *DAT_2c543d6c;
  if (*param_1 == 0) {
    iVar3 = param_1[1];
    if (iVar3 == 1) {
      piVar5 = param_1 + 6;
      *piVar5 = 0;
    }
    else {
      if (*DAT_2c543d70 == 0) {
        FUN_2c4723c4();
        *piVar5 = 1;
      }
      iVar3 = iVar3 << 2;
      piVar5 = (int *)FUN_2c47245c(0,iVar3);
      FUN_2c674268(piVar5,0,iVar3);
    }
    *param_1 = (int)piVar5;
  }
  piVar5 = *(int **)(param_2 + 8);
  if (piVar5 != (int *)0x0) {
    puVar1 = (undefined4 *)FUN_2c54392c(param_3,piVar5 + 1);
    puVar1[0xd] = piVar5[0xd];
    param_1[2] = (int)puVar1;
    *(int **)(*param_1 + (puVar1[0xd] - param_1[1] * ((uint)puVar1[0xd] / (uint)param_1[1])) * 4) =
         param_1 + 2;
    piVar5 = (int *)*piVar5;
    while (piVar5 != (int *)0x0) {
      puVar6 = (undefined4 *)*param_3;
      if (puVar6 == (undefined4 *)0x0) {
        if (*DAT_2c543d70 == 0) {
          FUN_2c4723c4();
          *DAT_2c543d70 = 1;
        }
        puVar6 = (undefined4 *)FUN_2c47245c(0,0x38);
        puVar2 = puVar6 + 3;
        *puVar6 = 0;
        puVar6[1] = puVar2;
        puVar8 = (undefined1 *)piVar5[1];
        uVar7 = piVar5[2];
        if ((puVar8 + uVar7 != (undefined1 *)0x0) && (puVar8 == (undefined1 *)0x0))
        goto LAB_2c543d60;
        local_30 = uVar7;
        if (uVar7 < 0x10) {
          if (uVar7 == 1) {
            *(undefined1 *)(puVar6 + 3) = *puVar8;
          }
          else if (uVar7 != 0) goto LAB_2c543cec;
        }
        else {
          puVar2 = (undefined4 *)FUN_2c54345c(&local_30,0);
          puVar6[1] = puVar2;
          puVar6[3] = local_30;
LAB_2c543cec:
          FUN_2c674668(puVar2,puVar8,uVar7);
          puVar2 = (undefined4 *)puVar6[1];
        }
        puVar4 = puVar6 + 9;
        puVar6[2] = local_30;
        *(undefined1 *)((int)puVar2 + local_30) = 0;
        puVar6[7] = puVar4;
        puVar8 = (undefined1 *)piVar5[7];
        uVar7 = piVar5[8];
        if ((puVar8 + uVar7 != (undefined1 *)0x0) && (puVar8 == (undefined1 *)0x0)) {
LAB_2c543d60:
                    /* WARNING: Subroutine does not return */
          FUN_2c658674(DAT_2c543d74);
        }
        local_30 = uVar7;
        if (uVar7 < 0x10) {
          if (uVar7 == 1) {
            *(undefined1 *)(puVar6 + 9) = *puVar8;
          }
          else if (uVar7 != 0) goto LAB_2c543d16;
        }
        else {
          puVar4 = (undefined4 *)FUN_2c54345c(&local_30,0);
          puVar6[7] = puVar4;
          puVar6[9] = local_30;
LAB_2c543d16:
          FUN_2c674668(puVar4,puVar8,uVar7);
          puVar4 = (undefined4 *)puVar6[7];
        }
        puVar6[8] = local_30;
        *(undefined1 *)((int)puVar4 + local_30) = 0;
      }
      else {
        puVar2 = puVar6 + 9;
        *param_3 = *puVar6;
        *puVar6 = 0;
        if ((undefined4 *)puVar6[7] != puVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        puVar4 = puVar6 + 3;
        if ((undefined4 *)puVar6[1] != puVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        puVar6[1] = puVar4;
        puVar8 = (undefined1 *)piVar5[1];
        uVar7 = piVar5[2];
        if ((puVar8 + uVar7 != (undefined1 *)0x0) && (puVar8 == (undefined1 *)0x0))
        goto LAB_2c543d60;
        local_30 = uVar7;
        if (uVar7 < 0x10) {
          if (uVar7 == 1) {
            *(undefined1 *)(puVar6 + 3) = *puVar8;
          }
          else if (uVar7 != 0) goto LAB_2c543ca2;
        }
        else {
          puVar4 = (undefined4 *)FUN_2c54345c(&local_30,0);
          puVar6[1] = puVar4;
          puVar6[3] = local_30;
LAB_2c543ca2:
          FUN_2c674668(puVar4,puVar8,uVar7);
          puVar4 = (undefined4 *)puVar6[1];
        }
        puVar6[2] = local_30;
        *(undefined1 *)((int)puVar4 + local_30) = 0;
        puVar6[7] = puVar2;
        puVar8 = (undefined1 *)piVar5[7];
        uVar7 = piVar5[8];
        if ((puVar8 + uVar7 != (undefined1 *)0x0) && (puVar8 == (undefined1 *)0x0))
        goto LAB_2c543d60;
        local_30 = uVar7;
        if (uVar7 < 0x10) {
          if (uVar7 == 1) {
            *(undefined1 *)(puVar6 + 9) = *puVar8;
          }
          else if (uVar7 != 0) goto LAB_2c543cc4;
        }
        else {
          puVar2 = (undefined4 *)FUN_2c54345c(&local_30,0);
          puVar6[7] = puVar2;
          puVar6[9] = local_30;
LAB_2c543cc4:
          FUN_2c674668(puVar2,puVar8,uVar7);
          puVar2 = (undefined4 *)puVar6[7];
        }
        puVar6[8] = local_30;
        *(undefined1 *)((int)puVar2 + local_30) = 0;
      }
      *puVar1 = puVar6;
      uVar7 = piVar5[0xd];
      puVar6[0xd] = uVar7;
      iVar3 = uVar7 - param_1[1] * (uVar7 / (uint)param_1[1]);
      if (*(int *)(*param_1 + iVar3 * 4) == 0) {
        *(undefined4 **)(*param_1 + iVar3 * 4) = puVar1;
        piVar5 = (int *)*piVar5;
        puVar1 = puVar6;
      }
      else {
        piVar5 = (int *)*piVar5;
        puVar1 = puVar6;
      }
    }
  }
  if (*DAT_2c543d6c == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

