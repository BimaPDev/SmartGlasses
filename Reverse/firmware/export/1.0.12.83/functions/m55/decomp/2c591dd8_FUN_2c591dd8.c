/* FUN_2c591dd8 @ 0x2c591dd8 */

undefined4 * FUN_2c591dd8(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint local_20;
  int local_1c;
  
  piVar1 = DAT_2c591ec0;
  local_1c = *DAT_2c591ebc;
  if (*DAT_2c591ec0 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,0x38);
  puVar3 = puVar2 + 3;
  *puVar2 = 0;
  puVar2[1] = puVar3;
  puVar5 = (undefined1 *)*param_1;
  uVar4 = param_1[1];
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c591eb0;
  local_20 = uVar4;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(puVar2 + 3) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c591e86;
  }
  else {
    puVar3 = (undefined4 *)FUN_2c591d68(&local_20,0);
    puVar2[1] = puVar3;
    puVar2[3] = local_20;
LAB_2c591e86:
    FUN_2c674668(puVar3,puVar5,uVar4);
    puVar3 = (undefined4 *)puVar2[1];
  }
  puVar2[2] = local_20;
  *(undefined1 *)((int)puVar3 + local_20) = 0;
  puVar3 = puVar2 + 9;
  puVar2[7] = puVar3;
  puVar5 = (undefined1 *)param_1[6];
  uVar4 = param_1[7];
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) {
LAB_2c591eb0:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c591ec4);
  }
  local_20 = uVar4;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(puVar2 + 9) = *puVar5;
      goto LAB_2c591e48;
    }
    if (uVar4 == 0) goto LAB_2c591e48;
  }
  else {
    puVar3 = (undefined4 *)FUN_2c591d68(&local_20,0);
    puVar2[7] = puVar3;
    puVar2[9] = local_20;
  }
  FUN_2c674668(puVar3,puVar5,uVar4);
  puVar3 = (undefined4 *)puVar2[7];
LAB_2c591e48:
  puVar2[8] = local_20;
  *(undefined1 *)((int)puVar3 + local_20) = 0;
  if (*DAT_2c591ebc != local_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return puVar2;
}

