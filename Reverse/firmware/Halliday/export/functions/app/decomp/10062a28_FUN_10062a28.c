/* FUN_10062a28 @ 0x10062a28 */

uint FUN_10062a28(uint param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  uint uVar18;
  int iVar19;
  uint *local_30;
  
  piVar2 = DAT_10062d08;
  iVar4 = DAT_10062d04;
  pbVar1 = DAT_10062f68;
  switch(param_1) {
  case 0:
    puVar17 = *(undefined4 **)(param_2 + 0x10);
    if (puVar17 == (undefined4 *)0x0) {
      return 2;
    }
    puVar17[9] = 0;
    puVar17[10] = 0;
    *puVar17 = 0;
    puVar17[2] = 0;
    puVar17[6] = 0;
    puVar17[1] = 0;
    puVar17[3] = 0;
    puVar17[7] = 0;
    puVar17[0xc] = 0;
    *(undefined4 *)(iVar4 + 0x44) = 0;
    *(undefined4 *)(iVar4 + 0x48) = 0x8000;
    iVar6 = *piVar2;
    *(undefined4 *)(iVar4 + 0x38) = 0;
    *(undefined4 *)(iVar4 + 0x3c) = 0;
    *piVar2 = iVar6 + 1;
    *(undefined4 *)(iVar4 + 0x40) = 0;
    *(undefined4 *)(iVar4 + 0x34) = 0;
    if (iVar6 == 0) {
      FUN_10063160();
      FUN_1011c2fe(1);
    }
    else {
      FUN_100630e4(1);
    }
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    if (*(int *)param_2 == 0) {
LAB_10062ac0:
      iVar6 = DAT_10062d60;
      if (*(int *)(iVar4 + 0x48) != 0) {
        uVar14 = FUN_1006295c(*(int *)(iVar4 + 0x48),0,DAT_10062d60 + 4,DAT_10062d60 + 8,
                              DAT_10062d60 + 0xc,DAT_10062d60);
        if (uVar14 != 0) {
          FUN_10062994(iVar6 + -0x34);
          uVar5 = FUN_10062fe4(uVar14);
          uVar11 = 0x1bd;
          goto LAB_10062b5a;
        }
        iVar6 = 0;
        puVar12 = DAT_10062d14;
        do {
          iVar6 = iVar6 + 1;
          *puVar12 = 0xffffffff;
          puVar12 = puVar12 + 1;
        } while (iVar6 != 0x1000);
        uVar5 = FUN_100629f4(DAT_10062d18,0);
        uVar5 = FUN_100629f4(DAT_10062d1c,uVar5);
        uVar5 = FUN_100629f4(DAT_10062d20,uVar5);
        uVar5 = FUN_100629f4(DAT_10062d24,uVar5);
        uVar5 = FUN_100629f4(DAT_10062d28,uVar5);
        uVar5 = FUN_100629f4(DAT_10062d2c,uVar5);
        uVar5 = FUN_100629f4(DAT_10062d30,uVar5);
        uVar5 = FUN_100629f4(DAT_10062d34,uVar5);
        uVar5 = FUN_100629f4(DAT_10062d38,uVar5);
        uVar5 = FUN_100629f4(DAT_10062d3c,uVar5);
        uVar5 = FUN_100629f4(DAT_10062d40,uVar5);
        uVar5 = FUN_100629f4(DAT_10062d44,uVar5);
        uVar5 = FUN_100629f4(DAT_10062d48,uVar5);
        uVar5 = FUN_100629f4(DAT_10062d1c,uVar5);
        uVar5 = FUN_100629f4(DAT_10062d1c,uVar5);
        uVar5 = FUN_100629f4(DAT_10062d4c,uVar5);
        uVar5 = FUN_100629f4(DAT_10062d50,uVar5);
        uVar5 = FUN_100629f4(DAT_10062d54,uVar5);
        uVar5 = FUN_100629f4(DAT_10062d58,uVar5);
        iVar6 = FUN_100629f4(DAT_10062d5c,uVar5);
        *(int *)(iVar4 + 0x44) = iVar6 << 2;
      }
      uVar18 = *(uint *)(param_2 + 4);
      if ((0 < (int)uVar18) && (0 < *(int *)(param_2 + 8))) {
        if ((uVar18 & 0x7f) == 0) {
          bVar8 = 3;
        }
        else {
          bVar8 = 2;
        }
        param_2[0x14] = param_2[0x14] & 0xfc | bVar8;
        uVar3 = *(int *)(param_2 + 8) + 0xfU & 0xfffffff0;
        iVar6 = (int)(uVar3 + 0xd) / 0xe;
        iVar4 = uVar3 * 0x80 + iVar6 * 0x40;
        if (iVar4 < 0x2000) {
          iVar4 = 0x2000;
        }
        uVar14 = FUN_1006295c(iVar4,param_2[0xd],puVar17 + 10,puVar17 + 0xb,puVar17 + 0xc,
                              puVar17 + 9);
        if (uVar14 != 0) {
          FUN_10062994(puVar17);
          uVar5 = FUN_10062fe4(uVar14);
          uVar11 = 0x22f;
          goto LAB_10062b5a;
        }
        *(undefined4 *)(param_2 + 0x28) = puVar17[0xc];
        uVar5 = puVar17[10];
        *(int *)(param_2 + 0x34) = iVar6 << 6;
        *(undefined4 *)(param_2 + 0x2c) = uVar5;
        *(int *)(param_2 + 0x30) = iVar4 + iVar6 * -0x40;
        *(uint *)(param_2 + 0x38) = uVar18 | uVar3 << 0x10;
      }
      FUN_10063194(0);
      FUN_1011c48e(0x14,0xffffffff);
    }
    else {
      uVar14 = FUN_1006295c(*(int *)param_2,param_2[0xc],puVar17 + 2,puVar17 + 4,puVar17 + 6,puVar17
                           );
      if (uVar14 == 0) {
        *(undefined4 *)(param_2 + 0x18) = puVar17[2];
        *(undefined4 *)(param_2 + 0x20) = puVar17[6];
        uVar14 = FUN_1006295c(*(undefined4 *)param_2,param_2[0xc],puVar17 + 3,puVar17 + 5,
                              puVar17 + 7,puVar17 + 1);
        if (uVar14 == 0) {
          *(undefined4 *)(param_2 + 0x1c) = puVar17[3];
          *(undefined4 *)(param_2 + 0x24) = puVar17[7];
          goto LAB_10062ac0;
        }
      }
      FUN_10062994(puVar17);
      uVar5 = FUN_10062fe4(uVar14);
      uVar11 = 0x1a4;
LAB_10062b5a:
      FUN_1011c460(DAT_10062d10,uVar14,uVar5,DAT_10062d0c,uVar11);
      param_1 = uVar14;
    }
    FUN_100630e4(0);
    return param_1;
  case 1:
    FUN_10062994(*(undefined4 *)param_2);
    break;
  case 2:
    uVar14 = FUN_1006295c(*(undefined4 *)param_2,param_2[0xc],param_2 + 0x14,param_2 + 0x18,
                          param_2 + 0x1c,param_2 + 0x10);
    return uVar14;
  case 3:
    FUN_1006309c(*(undefined4 *)param_2);
    break;
  case 4:
    iVar15 = *(int *)param_2;
    iVar13 = *(int *)(iVar15 + (*(int *)(param_2 + 0xc) + 6) * 4);
    FUN_1011c454();
    iVar6 = DAT_10062f74;
    uVar18 = DAT_10062f70;
    uVar14 = DAT_10062f6c;
    iVar4 = DAT_10062f54;
    iVar9 = *(int *)(param_2 + 8);
    iVar15 = iVar15 + *(int *)(param_2 + 0xc) * 4;
    iVar16 = *(int *)(param_2 + 4) - *(int *)(iVar15 + 8);
    local_30 = (uint *)(*(int *)(iVar15 + 0x10) + iVar16);
    if (local_30 != (uint *)0x0) {
      iVar15 = *DAT_10062f50;
      for (uVar3 = 0; iVar9 + 3U >> 2 != uVar3; uVar3 = uVar3 + 1) {
        uVar7 = *local_30;
        if (((uVar7 & uVar14) == uVar18) && (-1 < (int)(uVar3 << 0x1f))) {
          uVar10 = local_30[1];
          iVar19 = *(int *)(iVar6 + (uVar7 & 0xffff) * 4);
          if ((uVar7 & 0xf000) != 0) {
            FUN_1011c47a(DAT_10062f58);
            break;
          }
          if (iVar19 == -1) {
            *(uint *)(iVar15 + (*(uint *)(iVar4 + 0x44) & 0xfffffffc)) = uVar7;
            *(uint *)((*(uint *)(iVar4 + 0x44) & 0xfffffffc) + iVar15 + 4) = uVar10;
            uVar10 = *(uint *)(iVar4 + 0x44);
            *(uint *)(iVar6 + (uVar7 & 0xffff) * 4) = uVar10 >> 2;
            *(uint *)(iVar4 + 0x44) = uVar10 + 8;
          }
          else {
            *(uint *)(iVar15 + (iVar19 + 1) * 4) = uVar10;
          }
        }
        local_30 = local_30 + 1;
      }
    }
    FUN_10063194(1);
    FUN_1011c48e(0x500,iVar13 + iVar16);
    uVar5 = 0x504;
    uVar14 = *(int *)(param_2 + 8) + 7U >> 3;
    goto LAB_10062df2;
  case 5:
    iVar4 = FUN_100631d8(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),param_2 + 0xc);
    if (iVar4 == 0) {
      uVar5 = FUN_1011c482(4);
      uVar14 = FUN_1011c482(4);
      if ((~uVar14 & 0xb05) != 0) {
        FUN_1011c47a(DAT_10062f5c);
        FUN_1011c47a(DAT_10062f60,uVar5);
      }
      return 4;
    }
    FUN_10063194(0);
    break;
  case 6:
    FUN_1011c2fe(1);
    FUN_10062810();
    uVar14 = 0xffffffff;
    uVar5 = 0x14;
LAB_10062df2:
    FUN_1011c48e(uVar5,uVar14);
    break;
  case 7:
  case 0x15:
    break;
  case 8:
    iVar4 = FUN_1011c4bc(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                         *(undefined4 *)(param_2 + 0x10),param_2 + 0x18);
    *(int *)(param_2 + 0x14) = iVar4;
    if (iVar4 == 0) {
      return 5;
    }
    if (iVar4 == -1) {
      return 7;
    }
    break;
  case 9:
    FUN_1011c4ea(*(undefined4 *)param_2);
    break;
  case 10:
    FUN_100630e4(1);
    uVar5 = FUN_1011c482(*(undefined4 *)param_2);
    *(undefined4 *)(param_2 + 4) = uVar5;
    FUN_100630e4(0);
    break;
  case 0xb:
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    return 7;
  default:
    return 1;
  case 0x10:
    uVar14 = FUN_1011c4a2(param_2);
    return uVar14;
  case 0x11:
    return 0;
  case 0x12:
    FUN_1011c2fe(0);
    FUN_1011c47a(DAT_10062f64);
    break;
  case 0x13:
    iVar4 = *(int *)(param_2 + 4);
    if (*param_2 == 0) {
      uVar14 = iVar4 + 0xc8000000;
      if (0x3ffffff < uVar14) {
        return 0;
      }
      uVar5 = 4;
    }
    else {
      if (1 < *param_2 - 1) {
        return 0;
      }
      uVar14 = iVar4 + 0xcc000000;
      if (0x7ffffff < uVar14) {
        return 0;
      }
      uVar5 = 7;
    }
    FUN_10056824(uVar5,iVar4,0,uVar14,param_4);
    return 0;
  case 0x14:
    return 0;
  case 0x16:
    pbVar1[0] = 1;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    break;
  case 0x17:
    return (uint)*DAT_10062f68;
  case 0x18:
    if (*(int *)DAT_10062f68 != 0) {
      FUN_10063160();
      FUN_1011c2fe(1);
      FUN_10062810();
      FUN_1011c48e(0x14,0xffffffff);
      FUN_100630e4(0);
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      return 0;
    }
  }
  return 0;
}

