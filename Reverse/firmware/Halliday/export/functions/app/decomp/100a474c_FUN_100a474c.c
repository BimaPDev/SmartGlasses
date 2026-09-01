/* FUN_100a474c @ 0x100a474c */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_100a474c(void)

{
  uint *puVar1;
  undefined3 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  short sVar9;
  uint uVar10;
  byte bVar11;
  uint local_30;
  undefined3 uStack_2c;
  byte local_29;
  undefined4 local_28;
  undefined2 local_24;
  
  iVar3 = thunk_FUN_10112e84(DAT_100a499c);
  local_30 = 0;
  _uStack_2c = 0;
  local_28 = 0;
  local_24 = 0;
  if (iVar3 == 0) {
    uVar4 = (DAT_100a49a0 - DAT_100a49a4) * 0x20 & 0xff00U | 0x640000;
    uVar7 = DAT_100a49a8;
LAB_100a477c:
    FUN_100a5b78(uVar4 | 0x11,DAT_100a49ac,uVar7);
    return 0xffffffff;
  }
  iVar5 = FUN_1012da5e(iVar3,&stack0xffffffd4);
  FUN_10083358(&stack0xffffffd4);
  puVar1 = DAT_100a49b4;
  if (iVar5 != 0) {
    uVar4 = (DAT_100a49a0 - DAT_100a49a4) * 0x20 & 0xff00U | 0x6a0000;
    uVar7 = DAT_100a49b0;
    goto LAB_100a477c;
  }
  FUN_1012da64(&stack0xffffffd4,&local_30);
  iVar5 = 0;
  puVar8 = puVar1;
  do {
    if (puVar8[1] == 3) {
      puVar8 = puVar1 + iVar5 * 2;
LAB_100a47d2:
      uVar4 = 2;
LAB_100a47d4:
      puVar8[1] = uVar4;
      break;
    }
    if (puVar8[0x33] == 3) {
      puVar8 = puVar1 + (iVar5 + 0x19) * 2;
      if ((local_30 < puVar1[(iVar5 + 0x19) * 2]) && (puVar1[(iVar5 + 0x19) * 2] - local_30 < 36000)
         ) goto LAB_100a47d2;
      uVar4 = 0;
      goto LAB_100a47d4;
    }
    iVar5 = iVar5 + 1;
    puVar8 = puVar8 + 2;
  } while (iVar5 != 0x19);
  iVar5 = 0;
  uVar4 = 0xffffffff;
  puVar8 = DAT_100a49b4;
  do {
    uVar10 = uVar4;
    if ((((puVar8[1] == 2) && (uVar6 = *puVar8, local_30 < uVar6)) &&
        (uVar10 = uVar6, -1 < (int)uVar4)) && (uVar10 = uVar4, (int)uVar6 <= (int)uVar4)) {
      uVar10 = uVar6;
    }
    uVar4 = uVar10;
    if (((puVar8[0x33] == 2) && (uVar6 = puVar8[0x32], local_30 < uVar6)) &&
       ((uVar4 = uVar6, -1 < (int)uVar10 && (uVar4 = uVar10, (int)uVar6 <= (int)uVar10)))) {
      uVar4 = uVar6;
    }
    iVar5 = iVar5 + 1;
    puVar8 = puVar8 + 2;
  } while (iVar5 != 0x19);
  if ((int)uVar4 < 0) {
    iVar5 = 0;
    puVar8 = DAT_100a49b4;
    do {
      uVar10 = uVar4;
      if (((puVar8[1] == 2) && (uVar6 = *puVar8, uVar6 <= local_30)) &&
         ((uVar10 = uVar6, -1 < (int)uVar4 && (uVar10 = uVar4, (int)uVar6 <= (int)uVar4)))) {
        uVar10 = uVar6;
      }
      uVar4 = uVar10;
      if ((((puVar8[0x33] == 2) && (uVar6 = puVar8[0x32], uVar6 <= local_30)) &&
          (uVar4 = uVar6, -1 < (int)uVar10)) && (uVar4 = uVar10, (int)uVar6 <= (int)uVar10)) {
        uVar4 = uVar6;
      }
      iVar5 = iVar5 + 1;
      puVar8 = puVar8 + 2;
    } while (iVar5 != 0x19);
    if ((int)uVar4 < 0) goto LAB_100a4968;
  }
  FUN_1012da7a(&stack0xffffffd4,uVar4);
  if (uVar4 <= local_30) {
    bVar11 = local_29 + 1;
    _uStack_2c = CONCAT13(bVar11,uStack_2c);
    iVar5 = FUN_100831e8(local_28 & 0xff,local_28._2_2_);
    if (iVar5 < (int)(uint)bVar11) {
      _uStack_2c = CONCAT13(1,uStack_2c);
      uVar2 = local_28._1_3_;
      if ((byte)((char)local_28 + 1U) < 0xd) {
        local_28 = CONCAT31(local_28._1_3_,(char)local_28 + 1U);
      }
      else {
        sVar9 = local_28._2_2_ + 1;
        local_28 = CONCAT31(uVar2,1);
        local_28 = CONCAT22(sVar9,(undefined2)local_28);
      }
    }
  }
  iVar5 = FUN_100a464c(iVar3,&stack0xffffffd4);
  iVar3 = 0;
  puVar8 = puVar1;
  if (iVar5 != 0) {
    FUN_100a5b78((DAT_100a49a0 - DAT_100a49a4) * 0x20 & 0xff00U | 0xba0011,DAT_100a49ac,DAT_100a49b8
                );
    return 0xffffffff;
  }
  do {
    if ((puVar8[1] == 2) && (*puVar8 == uVar4)) {
      puVar1[iVar3 * 2 + 1] = 3;
      break;
    }
    if ((puVar8[0x33] == 2) && (puVar8[0x32] == uVar4)) {
      puVar1[iVar3 * 2 + 0x33] = 3;
      break;
    }
    iVar3 = iVar3 + 1;
    puVar8 = puVar8 + 2;
  } while (iVar3 != 0x19);
LAB_100a4968:
  iVar3 = thunk_FUN_1009efe8(DAT_100a49bc,DAT_100a49b4,400);
  if (iVar3 < 0) {
    FUN_100a5b78((DAT_100a49a0 - DAT_100a49a4) * 0x20 & 0xff00U | 0xd30012,DAT_100a49ac,DAT_100a49c0
                 ,DAT_100a49bc,iVar3);
    return 0xffffffff;
  }
  return 0;
}

