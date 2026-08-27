/* FUN_2c5dab10 @ 0x2c5dab10 */

undefined4 * FUN_2c5dab10(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  uint local_30;
  int local_2c;
  
  local_2c = *DAT_2c5dabfc;
  iVar5 = *(int *)(param_2 + 0x34);
  iVar4 = *(int *)(param_2 + 0x38);
  *param_1 = 0;
  param_1[1] = 0;
  iVar4 = iVar4 - iVar5;
  param_1[2] = 0;
  piVar1 = DAT_2c5dac00;
  if (iVar4 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    if (*DAT_2c5dac00 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,iVar4);
  }
  *param_1 = puVar2;
  param_1[1] = puVar2;
  param_1[2] = iVar4 + (int)puVar2;
  puVar7 = *(undefined4 **)(param_2 + 0x34);
  puVar9 = *(undefined4 **)(param_2 + 0x38);
  piVar1 = DAT_2c5dabfc;
  do {
    DAT_2c5dabfc = piVar1;
    if (puVar7 == puVar9) {
      param_1[1] = puVar2;
      if (*piVar1 == local_2c) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    *puVar2 = puVar2 + 2;
    puVar8 = (undefined1 *)*puVar7;
    uVar6 = puVar7[1];
    if ((puVar8 + uVar6 != (undefined1 *)0x0) && (puVar8 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c658674(DAT_2c5dac04);
    }
    local_30 = uVar6;
    if (uVar6 < 0x10) {
      puVar3 = (undefined1 *)*puVar2;
      if (uVar6 == 1) {
        *puVar3 = *puVar8;
        puVar3 = (undefined1 *)*puVar2;
      }
      else if (uVar6 != 0) goto LAB_2c5dabb8;
    }
    else {
      puVar3 = (undefined1 *)FUN_2c5da228(&local_30,0);
      *puVar2 = puVar3;
      puVar2[2] = local_30;
LAB_2c5dabb8:
      FUN_2c674668(puVar3,puVar8,uVar6);
      puVar3 = (undefined1 *)*puVar2;
    }
    puVar7 = puVar7 + 6;
    puVar2[1] = local_30;
    puVar3[local_30] = 0;
    puVar2 = puVar2 + 6;
    piVar1 = DAT_2c5dabfc;
  } while( true );
}

