/* FUN_100fecc8 @ 0x100fecc8 */

int FUN_100fecc8(int param_1,uint param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int local_2c [2];
  
  uVar6 = 0;
  uVar10 = *(undefined4 *)(param_1 + 100);
  puVar2 = *(undefined2 **)(param_1 + 0x164);
  local_2c[0] = 0;
  if (*(ushort *)(param_1 + 0x154) == 0) goto LAB_100fed3c;
  uVar9 = 0xffffffff;
  uVar4 = 0xffffffff;
  uVar11 = 0xffffffff;
  bVar1 = false;
  puVar5 = puVar2;
  uVar13 = 0xffffffff;
  do {
    uVar12 = uVar13;
    if (((ushort)puVar5[3] == param_2) && (puVar5[4] != 0)) {
      switch(*puVar5) {
      case 0:
      case 2:
        uVar9 = uVar6;
        break;
      case 1:
        uVar12 = uVar6;
        if ((puVar5[2] != 0) && (uVar12 = uVar13, puVar5[1] == 0)) {
          uVar11 = uVar6;
        }
        break;
      case 3:
        if (((uVar4 == 0xffffffff) || ((puVar5[2] & 0x3ff) == 9)) &&
           (((ushort)puVar5[1] < 2 || (puVar5[1] == 10)))) {
          bVar1 = (puVar5[2] & 0x3ff) == 9;
          uVar4 = uVar6;
        }
      }
    }
    uVar6 = uVar6 + 1;
    puVar5 = puVar5 + 10;
    uVar13 = uVar12;
  } while ((uVar6 & 0xffff) < (uint)*(ushort *)(param_1 + 0x154));
  pcVar7 = DAT_100fee40;
  if (uVar12 == 0xffffffff) {
    if (uVar4 == 0xffffffff) {
      if ((uVar11 == 0xffffffff) && (pcVar7 = DAT_100fee44, uVar11 = uVar9, uVar9 == 0xffffffff))
      goto LAB_100fed3c;
      goto LAB_100fed8e;
    }
    if (uVar11 != 0xffffffff) goto LAB_100fed24;
LAB_100fed28:
    puVar2 = puVar2 + uVar4 * 10;
    pcVar7 = DAT_100fee44;
    if ((1 < (ushort)puVar2[1]) && (puVar2[1] != 10)) {
LAB_100fed3c:
      *param_3 = 0;
      return 0;
    }
  }
  else {
    uVar11 = uVar12;
    if (uVar4 != 0xffffffff) {
LAB_100fed24:
      if (bVar1) goto LAB_100fed28;
    }
LAB_100fed8e:
    puVar2 = puVar2 + uVar11 * 10;
    if (puVar2 == (undefined2 *)0x0) {
      *param_3 = 0;
      return 0;
    }
  }
  if (*(int *)(puVar2 + 8) == 0) {
    uVar8 = *(undefined4 *)(param_1 + 0x170);
    uVar3 = FUN_100fb280(uVar10,1,0,puVar2[4],0,local_2c);
    *(undefined4 *)(puVar2 + 8) = uVar3;
    if (local_2c[0] == 0) {
      local_2c[0] = FUN_100fad58(uVar8,*(undefined4 *)(puVar2 + 6));
      if ((local_2c[0] == 0) &&
         (local_2c[0] = FUN_100fadb0(uVar8,*(undefined4 *)(puVar2 + 8),puVar2[4]), local_2c[0] == 0)
         ) goto LAB_100fed94;
      uVar3 = *(undefined4 *)(puVar2 + 8);
    }
    FUN_100fb5cc(uVar10,uVar3);
    *(undefined4 *)(puVar2 + 8) = 0;
    puVar2[4] = 0;
    uVar10 = 0;
  }
  else {
LAB_100fed94:
    uVar10 = (*pcVar7)(puVar2,uVar10);
  }
  *param_3 = uVar10;
  return local_2c[0];
}

