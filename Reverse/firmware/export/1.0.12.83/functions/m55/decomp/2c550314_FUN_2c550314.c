/* FUN_2c550314 @ 0x2c550314 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c550314(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint local_30;
  int local_2c;
  
  local_2c = *DAT_2c550618;
  puVar2 = param_1 + 3;
  *param_1 = DAT_2c550614;
  param_1[1] = puVar2;
  puVar13 = (undefined1 *)*param_2;
  uVar9 = param_2[1];
  if ((puVar13 + uVar9 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0)) goto LAB_2c5508f8;
  local_30 = uVar9;
  if (uVar9 < 0x10) {
    if (uVar9 == 1) {
      *(undefined1 *)(param_1 + 3) = *puVar13;
    }
    else if (uVar9 != 0) goto LAB_2c5508de;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c54f538(&local_30,0);
    param_1[1] = puVar2;
    param_1[3] = local_30;
LAB_2c5508de:
    FUN_2c674668(puVar2,puVar13,uVar9);
    puVar2 = (undefined4 *)param_1[1];
  }
  param_1[2] = local_30;
  *(undefined1 *)((int)puVar2 + local_30) = 0;
  iVar7 = *param_3;
  iVar10 = param_3[1];
  param_1[7] = 0;
  param_1[8] = 0;
  iVar10 = iVar10 - iVar7;
  param_1[9] = 0;
  piVar1 = DAT_2c55061c;
  if (iVar10 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    if (*DAT_2c55061c == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,iVar10);
  }
  param_1[7] = puVar2;
  param_1[8] = puVar2;
  param_1[9] = iVar10 + (int)puVar2;
  iVar7 = *param_3;
  iVar10 = param_3[1];
  while( true ) {
    if (iVar7 == iVar10) {
      param_1[8] = puVar2;
      if (*_LAB_2c550904 == local_2c) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    puVar3 = puVar2 + 3;
    *puVar2 = DAT_2c550620;
    puVar2[1] = puVar3;
    puVar13 = *(undefined1 **)(iVar7 + 4);
    uVar9 = *(uint *)(iVar7 + 8);
    if ((puVar13 + uVar9 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0)) break;
    local_30 = uVar9;
    if (uVar9 < 0x10) {
      if (uVar9 == 1) {
        *(undefined1 *)(puVar2 + 3) = *puVar13;
      }
      else if (uVar9 != 0) goto LAB_2c5507d6;
    }
    else {
      puVar3 = (undefined4 *)FUN_2c54f538(&local_30,0);
      puVar2[1] = puVar3;
      puVar2[3] = local_30;
LAB_2c5507d6:
      FUN_2c674668(puVar3,puVar13,uVar9);
      puVar3 = (undefined4 *)puVar2[1];
    }
    puVar4 = puVar2 + 9;
    puVar2[2] = local_30;
    *(undefined1 *)((int)puVar3 + local_30) = 0;
    puVar2[7] = puVar4;
    puVar13 = *(undefined1 **)(iVar7 + 0x1c);
    uVar9 = *(uint *)(iVar7 + 0x20);
    if ((puVar13 + uVar9 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0)) break;
    local_30 = uVar9;
    if (uVar9 < 0x10) {
      if (uVar9 == 1) {
        *(undefined1 *)(puVar2 + 9) = *puVar13;
      }
      else if (uVar9 != 0) goto LAB_2c5508ac;
    }
    else {
      puVar4 = (undefined4 *)FUN_2c54f538(&local_30,0);
      puVar2[7] = puVar4;
      puVar2[9] = local_30;
LAB_2c5508ac:
      FUN_2c674668(puVar4,puVar13,uVar9);
      puVar4 = (undefined4 *)puVar2[7];
    }
    puVar2[8] = local_30;
    puVar3 = puVar2 + 0xf;
    *(undefined1 *)((int)puVar4 + local_30) = 0;
    puVar2[0xd] = puVar3;
    puVar13 = *(undefined1 **)(iVar7 + 0x34);
    uVar9 = *(uint *)(iVar7 + 0x38);
    if ((puVar13 + uVar9 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0)) break;
    local_30 = uVar9;
    if (uVar9 < 0x10) {
      if (uVar9 == 1) {
        *(undefined1 *)(puVar2 + 0xf) = *puVar13;
      }
      else if (uVar9 != 0) goto LAB_2c550888;
    }
    else {
      puVar3 = (undefined4 *)FUN_2c54f538(&local_30,0);
      puVar2[0xd] = puVar3;
      puVar2[0xf] = local_30;
LAB_2c550888:
      FUN_2c674668(puVar3,puVar13,uVar9);
      puVar3 = (undefined4 *)puVar2[0xd];
    }
    puVar4 = puVar2 + 0x15;
    puVar2[0xe] = local_30;
    *(undefined1 *)((int)puVar3 + local_30) = 0;
    puVar2[0x13] = puVar4;
    puVar13 = *(undefined1 **)(iVar7 + 0x4c);
    uVar9 = *(uint *)(iVar7 + 0x50);
    if ((puVar13 + uVar9 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0)) break;
    local_30 = uVar9;
    if (uVar9 < 0x10) {
      if (uVar9 == 1) {
        *(undefined1 *)(puVar2 + 0x15) = *puVar13;
      }
      else if (uVar9 != 0) goto LAB_2c55081c;
    }
    else {
      puVar4 = (undefined4 *)FUN_2c54f538(&local_30,0);
      puVar2[0x13] = puVar4;
      puVar2[0x15] = local_30;
LAB_2c55081c:
      FUN_2c674668(puVar4,puVar13,uVar9);
      puVar4 = (undefined4 *)puVar2[0x13];
    }
    puVar2[0x14] = local_30;
    puVar3 = puVar2 + 0x1b;
    *(undefined1 *)((int)puVar4 + local_30) = 0;
    puVar2[0x19] = puVar3;
    puVar13 = *(undefined1 **)(iVar7 + 100);
    uVar9 = *(uint *)(iVar7 + 0x68);
    if ((puVar13 + uVar9 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0)) break;
    local_30 = uVar9;
    if (uVar9 < 0x10) {
      if (uVar9 == 1) {
        *(undefined1 *)(puVar2 + 0x1b) = *puVar13;
      }
      else if (uVar9 != 0) goto LAB_2c5507f8;
    }
    else {
      puVar3 = (undefined4 *)FUN_2c54f538(&local_30,0);
      puVar2[0x19] = puVar3;
      puVar2[0x1b] = local_30;
LAB_2c5507f8:
      FUN_2c674668(puVar3,puVar13,uVar9);
      puVar3 = (undefined4 *)puVar2[0x19];
    }
    puVar4 = puVar2 + 0x21;
    puVar2[0x1a] = local_30;
    *(undefined1 *)((int)puVar3 + local_30) = 0;
    puVar2[0x1f] = puVar4;
    puVar13 = *(undefined1 **)(iVar7 + 0x7c);
    uVar9 = *(uint *)(iVar7 + 0x80);
    if ((puVar13 + uVar9 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0)) break;
    local_30 = uVar9;
    if (uVar9 < 0x10) {
      if (uVar9 == 1) {
        *(undefined1 *)(puVar2 + 0x21) = *puVar13;
      }
      else if (uVar9 != 0) goto LAB_2c550864;
    }
    else {
      puVar4 = (undefined4 *)FUN_2c54f538(&local_30,0);
      puVar2[0x1f] = puVar4;
      puVar2[0x21] = local_30;
LAB_2c550864:
      FUN_2c674668(puVar4,puVar13,uVar9);
      puVar4 = (undefined4 *)puVar2[0x1f];
    }
    puVar2[0x20] = local_30;
    puVar3 = puVar2 + 0x27;
    *(undefined1 *)((int)puVar4 + local_30) = 0;
    puVar2[0x25] = puVar3;
    puVar13 = *(undefined1 **)(iVar7 + 0x94);
    uVar9 = *(uint *)(iVar7 + 0x98);
    if ((puVar13 + uVar9 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0)) break;
    local_30 = uVar9;
    if (uVar9 < 0x10) {
      if (uVar9 == 1) {
        *(undefined1 *)(puVar2 + 0x27) = *puVar13;
      }
      else if (uVar9 != 0) goto LAB_2c550840;
    }
    else {
      puVar3 = (undefined4 *)FUN_2c54f538(&local_30,0);
      puVar2[0x25] = puVar3;
      puVar2[0x27] = local_30;
LAB_2c550840:
      FUN_2c674668(puVar3,puVar13,uVar9);
      puVar3 = (undefined4 *)puVar2[0x25];
    }
    puVar2[0x26] = local_30;
    *(undefined1 *)((int)puVar3 + local_30) = 0;
    puVar2[0x2b] = *(undefined4 *)(iVar7 + 0xac);
    iVar8 = *(int *)(iVar7 + 0xb0);
    iVar11 = *(int *)(iVar7 + 0xb4);
    puVar2[0x2c] = 0;
    puVar2[0x2d] = 0;
    iVar11 = iVar11 - iVar8;
    puVar2[0x2e] = 0;
    if (iVar11 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      if (*DAT_2c55061c == 0) {
        FUN_2c4723c4();
        *_LAB_2c550908 = 1;
      }
      puVar3 = (undefined4 *)FUN_2c47245c(0,iVar11);
    }
    puVar2[0x2c] = puVar3;
    puVar2[0x2d] = puVar3;
    puVar2[0x2e] = iVar11 + (int)puVar3;
    iVar11 = *(int *)(iVar7 + 0xb4);
    for (iVar8 = *(int *)(iVar7 + 0xb0); iVar8 != iVar11; iVar8 = iVar8 + 0x58) {
      puVar4 = puVar3 + 3;
      *puVar3 = DAT_2c550624;
      puVar3[1] = puVar4;
      puVar13 = *(undefined1 **)(iVar8 + 4);
      uVar9 = *(uint *)(iVar8 + 8);
      if ((puVar13 + uVar9 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0))
      goto LAB_2c5508f8;
      local_30 = uVar9;
      if (uVar9 < 0x10) {
        if (uVar9 == 1) {
          *(undefined1 *)(puVar3 + 3) = *puVar13;
        }
        else if (uVar9 != 0) goto LAB_2c55076e;
      }
      else {
        puVar4 = (undefined4 *)FUN_2c54f538(&local_30,0);
        puVar3[1] = puVar4;
        puVar3[3] = local_30;
LAB_2c55076e:
        FUN_2c674668(puVar4,puVar13,uVar9);
        puVar4 = (undefined4 *)puVar3[1];
      }
      puVar3[2] = local_30;
      *(undefined1 *)((int)puVar4 + local_30) = 0;
      puVar4 = puVar3 + 9;
      puVar3[7] = puVar4;
      puVar13 = *(undefined1 **)(iVar8 + 0x1c);
      uVar9 = *(uint *)(iVar8 + 0x20);
      if ((puVar13 + uVar9 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0))
      goto LAB_2c5508f8;
      local_30 = uVar9;
      if (uVar9 < 0x10) {
        if (uVar9 == 1) {
          *(undefined1 *)(puVar3 + 9) = *puVar13;
        }
        else if (uVar9 != 0) goto LAB_2c550736;
      }
      else {
        puVar4 = (undefined4 *)FUN_2c54f538(&local_30,0);
        puVar3[7] = puVar4;
        puVar3[9] = local_30;
LAB_2c550736:
        FUN_2c674668(puVar4,puVar13,uVar9);
        puVar4 = (undefined4 *)puVar3[7];
      }
      puVar3[8] = local_30;
      *(undefined1 *)((int)puVar4 + local_30) = 0;
      iVar12 = *(int *)(iVar8 + 0x34);
      iVar6 = *(int *)(iVar8 + 0x38);
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      iVar6 = iVar6 - iVar12;
      puVar3[0xf] = 0;
      if (iVar6 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        if (*DAT_2c55061c == 0) {
          FUN_2c4723c4();
          *_LAB_2c550908 = 1;
        }
        puVar4 = (undefined4 *)FUN_2c47245c(0,iVar6);
      }
      puVar3[0xd] = puVar4;
      puVar3[0xe] = puVar4;
      puVar3[0xf] = iVar6 + (int)puVar4;
      puVar15 = *(undefined4 **)(iVar8 + 0x38);
      for (puVar14 = *(undefined4 **)(iVar8 + 0x34); puVar14 != puVar15; puVar14 = puVar14 + 6) {
        *puVar4 = puVar4 + 2;
        puVar13 = (undefined1 *)*puVar14;
        uVar9 = puVar14[1];
        if ((puVar13 + uVar9 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0))
        goto LAB_2c5508f8;
        local_30 = uVar9;
        if (uVar9 < 0x10) {
          puVar5 = (undefined1 *)*puVar4;
          if (uVar9 == 1) {
            *puVar5 = *puVar13;
            puVar5 = (undefined1 *)*puVar4;
          }
          else if (uVar9 != 0) goto LAB_2c55067e;
        }
        else {
          puVar5 = (undefined1 *)FUN_2c54f538(&local_30,0);
          *puVar4 = puVar5;
          puVar4[2] = local_30;
LAB_2c55067e:
          FUN_2c674668(puVar5,puVar13,uVar9);
          puVar5 = (undefined1 *)*puVar4;
        }
        puVar4[1] = local_30;
        puVar5[local_30] = 0;
        puVar4 = puVar4 + 6;
      }
      puVar14 = puVar3 + 0x12;
      puVar3[0xe] = puVar4;
      puVar3[0x10] = puVar14;
      puVar13 = *(undefined1 **)(iVar8 + 0x40);
      uVar9 = *(uint *)(iVar8 + 0x44);
      if ((puVar13 + uVar9 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0))
      goto LAB_2c5508f8;
      local_30 = uVar9;
      if (uVar9 < 0x10) {
        if (uVar9 == 1) {
          *(undefined1 *)(puVar3 + 0x12) = *puVar13;
        }
        else if (uVar9 != 0) goto LAB_2c550752;
      }
      else {
        puVar14 = (undefined4 *)FUN_2c54f538(&local_30,0);
        puVar3[0x10] = puVar14;
        puVar3[0x12] = local_30;
LAB_2c550752:
        FUN_2c674668(puVar14,puVar13,uVar9);
        puVar14 = (undefined4 *)puVar3[0x10];
      }
      puVar3[0x11] = local_30;
      puVar3 = puVar3 + 0x16;
      *(undefined1 *)((int)puVar14 + local_30) = 0;
    }
    iVar7 = iVar7 + 0xbc;
    puVar2[0x2d] = puVar3;
    puVar2 = puVar2 + 0x2f;
  }
LAB_2c5508f8:
                    /* WARNING: Subroutine does not return */
  FUN_2c658674(DAT_2c55090c);
}

