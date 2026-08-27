/* FUN_2c550910 @ 0x2c550910 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c550910(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint local_30;
  int local_2c;
  
  local_2c = *_LAB_2c550b5c;
  iVar6 = *param_2;
  iVar7 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  iVar7 = iVar7 - iVar6;
  param_1[2] = 0;
  piVar1 = _LAB_2c550b60;
  if (iVar7 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    if (*_LAB_2c550b60 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,iVar7);
  }
  *param_1 = puVar2;
  param_1[1] = puVar2;
  param_1[2] = iVar7 + (int)puVar2;
  iVar6 = *param_2;
  iVar7 = param_2[1];
  do {
    if (iVar7 == iVar6) {
      param_1[1] = puVar2;
      if (*_LAB_2c550b5c == local_2c) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    puVar3 = puVar2 + 3;
    *puVar2 = _LAB_2c550b64;
    puVar2[1] = puVar3;
    puVar10 = *(undefined1 **)(iVar6 + 4);
    uVar8 = *(uint *)(iVar6 + 8);
    if ((puVar10 + uVar8 != (undefined1 *)0x0) && (puVar10 == (undefined1 *)0x0)) goto LAB_2c550b50;
    local_30 = uVar8;
    if (uVar8 < 0x10) {
      if (uVar8 == 1) {
        *(undefined1 *)(puVar2 + 3) = *puVar10;
      }
      else if (uVar8 != 0) goto LAB_2c550aec;
    }
    else {
      puVar3 = (undefined4 *)FUN_2c54f538(&local_30,0);
      puVar2[1] = puVar3;
      puVar2[3] = local_30;
LAB_2c550aec:
      FUN_2c674668(puVar3,puVar10,uVar8);
      puVar3 = (undefined4 *)puVar2[1];
    }
    puVar11 = puVar2 + 9;
    puVar2[2] = local_30;
    *(undefined1 *)((int)puVar3 + local_30) = 0;
    puVar2[7] = puVar11;
    puVar10 = *(undefined1 **)(iVar6 + 0x1c);
    uVar8 = *(uint *)(iVar6 + 0x20);
    if ((puVar10 + uVar8 != (undefined1 *)0x0) && (puVar10 == (undefined1 *)0x0)) goto LAB_2c550b50;
    local_30 = uVar8;
    if (uVar8 < 0x10) {
      if (uVar8 == 1) {
        *(undefined1 *)(puVar2 + 9) = *puVar10;
      }
      else if (uVar8 != 0) goto LAB_2c550b26;
    }
    else {
      puVar11 = (undefined4 *)FUN_2c54f538(&local_30,0);
      puVar2[7] = puVar11;
      puVar2[9] = local_30;
LAB_2c550b26:
      FUN_2c674668(puVar11,puVar10,uVar8);
      puVar11 = (undefined4 *)puVar2[7];
    }
    puVar2[8] = local_30;
    *(undefined1 *)((int)puVar11 + local_30) = 0;
    iVar9 = *(int *)(iVar6 + 0x34);
    iVar5 = *(int *)(iVar6 + 0x38);
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    iVar5 = iVar5 - iVar9;
    puVar2[0xf] = 0;
    if (iVar5 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      if (*_LAB_2c550b60 == 0) {
        FUN_2c4723c4();
        *_LAB_2c550b60 = 1;
      }
      puVar3 = (undefined4 *)FUN_2c47245c(0,iVar5);
    }
    puVar2[0xd] = puVar3;
    puVar2[0xe] = puVar3;
    puVar2[0xf] = iVar5 + (int)puVar3;
    puVar12 = *(undefined4 **)(iVar6 + 0x38);
    for (puVar11 = *(undefined4 **)(iVar6 + 0x34); puVar11 != puVar12; puVar11 = puVar11 + 6) {
      *puVar3 = puVar3 + 2;
      puVar10 = (undefined1 *)*puVar11;
      uVar8 = puVar11[1];
      if ((puVar10 + uVar8 != (undefined1 *)0x0) && (puVar10 == (undefined1 *)0x0))
      goto LAB_2c550b50;
      local_30 = uVar8;
      if (uVar8 < 0x10) {
        puVar4 = (undefined1 *)*puVar3;
        if (uVar8 == 1) {
          *puVar4 = *puVar10;
          puVar4 = (undefined1 *)*puVar3;
        }
        else if (uVar8 != 0) goto LAB_2c550a5c;
      }
      else {
        puVar4 = (undefined1 *)FUN_2c54f538(&local_30,0);
        *puVar3 = puVar4;
        puVar3[2] = local_30;
LAB_2c550a5c:
        FUN_2c674668(puVar4,puVar10,uVar8);
        puVar4 = (undefined1 *)*puVar3;
      }
      puVar3[1] = local_30;
      puVar4[local_30] = 0;
      puVar3 = puVar3 + 6;
    }
    puVar11 = puVar2 + 0x12;
    puVar2[0xe] = puVar3;
    puVar2[0x10] = puVar11;
    puVar10 = *(undefined1 **)(iVar6 + 0x40);
    uVar8 = *(uint *)(iVar6 + 0x44);
    if ((puVar10 + uVar8 != (undefined1 *)0x0) && (puVar10 == (undefined1 *)0x0)) {
LAB_2c550b50:
                    /* WARNING: Subroutine does not return */
      FUN_2c658674(DAT_2c550b68);
    }
    local_30 = uVar8;
    if (uVar8 < 0x10) {
      if (uVar8 == 1) {
        *(undefined1 *)(puVar2 + 0x12) = *puVar10;
      }
      else if (uVar8 != 0) goto LAB_2c550b08;
    }
    else {
      puVar11 = (undefined4 *)FUN_2c54f538(&local_30,0);
      puVar2[0x10] = puVar11;
      puVar2[0x12] = local_30;
LAB_2c550b08:
      FUN_2c674668(puVar11,puVar10,uVar8);
      puVar11 = (undefined4 *)puVar2[0x10];
    }
    iVar6 = iVar6 + 0x58;
    puVar2[0x11] = local_30;
    puVar2 = puVar2 + 0x16;
    *(undefined1 *)((int)puVar11 + local_30) = 0;
  } while( true );
}

