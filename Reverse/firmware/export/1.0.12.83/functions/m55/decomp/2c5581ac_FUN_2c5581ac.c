/* FUN_2c5581ac @ 0x2c5581ac */

void FUN_2c5581ac(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  int *piVar6;
  int iVar7;
  uint local_30;
  int local_2c;
  
  local_2c = *DAT_2c558330;
  puVar3 = param_1 + 1;
  *param_1 = DAT_2c55832c;
  param_1[3] = 0;
  param_1[1] = puVar3;
  param_1[2] = puVar3;
  piVar1 = DAT_2c558338;
  for (piVar6 = (int *)*param_4; piVar6 != param_4; piVar6 = (int *)*piVar6) {
    if (*piVar1 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    iVar2 = FUN_2c47245c(0,0x20);
    iVar7 = iVar2 + 0x10;
    *(int *)(iVar2 + 8) = iVar7;
    puVar5 = (undefined1 *)piVar6[2];
    uVar4 = piVar6[3];
    if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c558322;
    local_30 = uVar4;
    if (uVar4 < 0x10) {
      if (uVar4 == 1) {
        *(undefined1 *)(iVar2 + 0x10) = *puVar5;
      }
      else if (uVar4 != 0) goto LAB_2c558264;
    }
    else {
      iVar7 = FUN_2c557f50(&local_30,0);
      *(int *)(iVar2 + 8) = iVar7;
      *(uint *)(iVar2 + 0x10) = local_30;
LAB_2c558264:
      FUN_2c674668(iVar7,puVar5,uVar4);
      iVar7 = *(int *)(iVar2 + 8);
    }
    *(uint *)(iVar2 + 0xc) = local_30;
    *(undefined1 *)(iVar7 + local_30) = 0;
    FUN_2c64cdb4(iVar2,puVar3);
    param_1[3] = param_1[3] + 1;
  }
  puVar3 = param_1 + 6;
  param_1[4] = puVar3;
  puVar5 = (undefined1 *)*param_2;
  uVar4 = param_2[1];
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c558322;
  local_30 = uVar4;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 6) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c5582f8;
  }
  else {
    puVar3 = (undefined4 *)FUN_2c557f50(&local_30,0);
    param_1[4] = puVar3;
    param_1[6] = local_30;
LAB_2c5582f8:
    FUN_2c674668(puVar3,puVar5,uVar4);
    puVar3 = (undefined4 *)param_1[4];
  }
  param_1[5] = local_30;
  *(undefined1 *)((int)puVar3 + local_30) = 0;
  puVar3 = param_1 + 0xc;
  param_1[10] = puVar3;
  puVar5 = (undefined1 *)*param_3;
  uVar4 = param_3[1];
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) {
LAB_2c558322:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c558334);
  }
  local_30 = uVar4;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 0xc) = *puVar5;
      goto LAB_2c5582c4;
    }
    if (uVar4 == 0) goto LAB_2c5582c4;
  }
  else {
    puVar3 = (undefined4 *)FUN_2c557f50(&local_30,0);
    param_1[10] = puVar3;
    param_1[0xc] = local_30;
  }
  FUN_2c674668(puVar3,puVar5,uVar4);
  puVar3 = (undefined4 *)param_1[10];
LAB_2c5582c4:
  param_1[0xb] = local_30;
  *(undefined1 *)((int)puVar3 + local_30) = 0;
  if (*DAT_2c558330 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

