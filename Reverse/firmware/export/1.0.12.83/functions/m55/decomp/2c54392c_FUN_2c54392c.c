/* FUN_2c54392c @ 0x2c54392c */

undefined4 * FUN_2c54392c(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  uint local_28;
  int local_24;
  
  piVar1 = DAT_2c543aec;
  puVar2 = (undefined4 *)*param_1;
  local_24 = *DAT_2c543ae8;
  if (puVar2 == (undefined4 *)0x0) {
    if (*DAT_2c543aec == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,0x38);
    puVar4 = puVar2 + 3;
    *puVar2 = 0;
    puVar2[1] = puVar4;
    puVar6 = (undefined1 *)*param_2;
    uVar3 = param_2[1];
    if ((puVar6 + uVar3 != (undefined1 *)0x0) && (puVar6 == (undefined1 *)0x0)) goto LAB_2c543ade;
    local_28 = uVar3;
    if (uVar3 < 0x10) {
      if (uVar3 == 1) {
        *(undefined1 *)(puVar2 + 3) = *puVar6;
      }
      else if (uVar3 != 0) goto LAB_2c543ad0;
    }
    else {
      puVar4 = (undefined4 *)FUN_2c54345c(&local_28,0);
      puVar2[1] = puVar4;
      puVar2[3] = local_28;
LAB_2c543ad0:
      FUN_2c674668(puVar4,puVar6,uVar3);
      puVar4 = (undefined4 *)puVar2[1];
    }
    puVar2[2] = local_28;
    *(undefined1 *)((int)puVar4 + local_28) = 0;
    puVar4 = puVar2 + 9;
    puVar2[7] = puVar4;
    puVar6 = (undefined1 *)param_2[6];
    uVar3 = param_2[7];
    if ((puVar6 + uVar3 != (undefined1 *)0x0) && (puVar6 == (undefined1 *)0x0)) goto LAB_2c543ade;
    local_28 = uVar3;
    if (uVar3 < 0x10) {
      if (uVar3 == 1) {
        *(undefined1 *)(puVar2 + 9) = *puVar6;
      }
      else if (uVar3 != 0) goto LAB_2c543ab4;
    }
    else {
      puVar4 = (undefined4 *)FUN_2c54345c(&local_28,0);
      puVar2[7] = puVar4;
      puVar2[9] = local_28;
LAB_2c543ab4:
      FUN_2c674668(puVar4,puVar6,uVar3);
      puVar4 = (undefined4 *)puVar2[7];
    }
    puVar2[8] = local_28;
    *(undefined1 *)((int)puVar4 + local_28) = 0;
    goto LAB_2c5439c2;
  }
  puVar4 = puVar2 + 9;
  *param_1 = *puVar2;
  *puVar2 = 0;
  if ((undefined4 *)puVar2[7] != puVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  puVar5 = puVar2 + 3;
  if ((undefined4 *)puVar2[1] != puVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  puVar2[1] = puVar5;
  puVar6 = (undefined1 *)*param_2;
  uVar3 = param_2[1];
  if ((puVar6 + uVar3 != (undefined1 *)0x0) && (puVar6 == (undefined1 *)0x0)) goto LAB_2c543ade;
  local_28 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(puVar2 + 3) = *puVar6;
    }
    else if (uVar3 != 0) goto LAB_2c543a58;
  }
  else {
    puVar5 = (undefined4 *)FUN_2c54345c(&local_28,0);
    puVar2[1] = puVar5;
    puVar2[3] = local_28;
LAB_2c543a58:
    FUN_2c674668(puVar5,puVar6,uVar3);
    puVar5 = (undefined4 *)puVar2[1];
  }
  puVar2[2] = local_28;
  *(undefined1 *)((int)puVar5 + local_28) = 0;
  puVar2[7] = puVar4;
  puVar6 = (undefined1 *)param_2[6];
  uVar3 = param_2[7];
  if ((puVar6 + uVar3 != (undefined1 *)0x0) && (puVar6 == (undefined1 *)0x0)) {
LAB_2c543ade:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c543af0);
  }
  local_28 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(puVar2 + 9) = *puVar6;
    }
    else if (uVar3 != 0) goto LAB_2c543a86;
  }
  else {
    puVar4 = (undefined4 *)FUN_2c54345c(&local_28,0);
    puVar2[7] = puVar4;
    puVar2[9] = local_28;
LAB_2c543a86:
    FUN_2c674668(puVar4,puVar6,uVar3);
    puVar4 = (undefined4 *)puVar2[7];
  }
  puVar2[8] = local_28;
  *(undefined1 *)((int)puVar4 + local_28) = 0;
LAB_2c5439c2:
  if (*DAT_2c543ae8 != local_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return puVar2;
}

