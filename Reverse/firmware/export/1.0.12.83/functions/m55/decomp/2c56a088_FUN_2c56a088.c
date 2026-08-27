/* FUN_2c56a088 @ 0x2c56a088 */

int * FUN_2c56a088(int *param_1,int param_2,undefined1 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint local_30;
  int local_2c;
  
  piVar4 = DAT_2c56a1fc;
  local_2c = *DAT_2c56a200;
  if (*DAT_2c56a1fc == 0) {
    FUN_2c4723c4();
    *piVar4 = 1;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,0x38);
  puVar7 = puVar2 + 3;
  *puVar2 = 0;
  puVar2[1] = puVar7;
  uVar3 = FUN_2c66c4ec(param_3);
  local_30 = uVar3;
  if (uVar3 < 0x10) {
    puVar6 = puVar7;
    if (uVar3 == 1) {
      *(undefined1 *)(puVar2 + 3) = *param_3;
    }
    else if (uVar3 != 0) goto LAB_2c56a1c2;
  }
  else {
    puVar6 = (undefined4 *)FUN_2c5694c8(&local_30,0);
    puVar2[1] = puVar6;
    puVar2[3] = local_30;
LAB_2c56a1c2:
    FUN_2c674668(puVar6,param_3,uVar3);
    puVar6 = (undefined4 *)puVar2[1];
  }
  puVar2[2] = local_30;
  puVar8 = puVar2 + 9;
  *(undefined1 *)((int)puVar6 + local_30) = 0;
  puVar9 = (undefined1 *)*param_4;
  puVar2[7] = puVar8;
  if (puVar9 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c56a208);
  }
  uVar3 = FUN_2c66c4ec(puVar9);
  local_30 = uVar3;
  if (uVar3 < 0x10) {
    puVar6 = puVar8;
    if (uVar3 == 1) {
      *(undefined1 *)(puVar2 + 9) = *puVar9;
      goto LAB_2c56a11a;
    }
    if (uVar3 == 0) goto LAB_2c56a11a;
  }
  else {
    puVar6 = (undefined4 *)FUN_2c5694c8(&local_30,0);
    puVar2[7] = puVar6;
    puVar2[9] = local_30;
  }
  FUN_2c674668(puVar6,puVar9,uVar3);
  puVar6 = (undefined4 *)puVar2[7];
LAB_2c56a11a:
  puVar2[8] = local_30;
  uVar1 = DAT_2c56a204;
  *(undefined1 *)((int)puVar6 + local_30) = 0;
  uVar3 = FUN_2c64c9f4(puVar2[1],puVar2[2],uVar1);
  iVar5 = uVar3 - *(uint *)(param_2 + 4) * (uVar3 / *(uint *)(param_2 + 4));
  piVar4 = (int *)FUN_2c56a02c(param_2,iVar5,puVar2 + 1,uVar3);
  if ((piVar4 == (int *)0x0) || (*piVar4 == 0)) {
    iVar5 = FUN_2c569538(param_2,iVar5,uVar3,puVar2,1);
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = iVar5;
    if (*DAT_2c56a200 != local_2c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return param_1;
  }
  puVar6 = (undefined4 *)puVar2[7];
  *param_1 = *piVar4;
  *(undefined1 *)(param_1 + 1) = 0;
  if (puVar8 != puVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puVar7 == (undefined4 *)puVar2[1]) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

