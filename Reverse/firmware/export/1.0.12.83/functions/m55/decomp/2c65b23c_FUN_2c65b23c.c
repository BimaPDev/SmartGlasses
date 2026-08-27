/* FUN_2c65b23c @ 0x2c65b23c */

undefined4 *
FUN_2c65b23c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,uint *param_7,int param_8,int param_9,int param_10
            ,uint *param_11)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint auStack_40 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar2 = param_9;
  iVar1 = param_8;
  uStack_30 = param_3;
  uStack_2c = param_4;
  uVar5 = FUN_2c659524(param_10 + 0x6c);
  puVar9 = auStack_40 + iVar2 * -2;
  iVar6 = FUN_2c652d9a(&uStack_30,&param_5);
  if (iVar6 == 0) {
LAB_2c65b2e4:
    uVar8 = 0;
    uVar10 = 0;
    puVar12 = (uint *)0x0;
  }
  else {
    bVar3 = FUN_2c652d58(&uStack_30);
    auStack_40[3] = iVar2 << 1;
    uVar8 = (uint)bVar3;
    uVar11 = 0;
    for (uVar10 = 0; auStack_40[3] != uVar10; uVar10 = uVar10 + 1) {
      if ((**(byte **)(iVar1 + uVar10 * 4) == uVar8) ||
         (auStack_40[1] = uVar8, auStack_40[2] = uVar10, uVar7 = FUN_2c6523ac(uVar5),
         uVar8 = auStack_40[1], uVar10 = auStack_40[2], uVar7 == auStack_40[1])) {
        puVar9[uVar11] = uVar10;
        uVar11 = uVar11 + 1;
      }
    }
    if (uVar11 == 0) goto LAB_2c65b2e4;
    uVar8 = 0;
    FUN_2c659e18(&uStack_30);
    iVar6 = -(uVar11 * 4 + 7 & 0xfffffff8);
    puVar12 = (uint *)((int)puVar9 + iVar6);
    do {
      uVar5 = FUN_2c66c4ec(*(undefined4 *)(iVar1 + puVar9[uVar8] * 4));
      *(undefined4 *)((int)puVar9 + uVar8 * 4 + iVar6) = uVar5;
      uVar8 = uVar8 + 1;
    } while (uVar11 != uVar8);
    uVar10 = 1;
  }
  while (iVar6 = FUN_2c652d9a(&uStack_30,&param_5), iVar6 != 0) {
    cVar4 = FUN_2c652d58(&uStack_30);
    uVar7 = 0;
    uVar11 = 0;
    while (uVar7 < uVar8) {
      if (uVar10 < puVar12[uVar7]) {
        if (*(char *)(*(int *)(iVar1 + puVar9[uVar7] * 4) + uVar10) == cVar4) goto LAB_2c65b31c;
        uVar8 = uVar8 - 1;
        puVar9[uVar7] = puVar9[uVar8];
        puVar12[uVar7] = puVar12[uVar8];
      }
      else {
        uVar11 = uVar11 + 1;
LAB_2c65b31c:
        uVar7 = uVar7 + 1;
      }
    }
    if (uVar8 == uVar11) break;
    uVar10 = uVar10 + 1;
    FUN_2c659e18(&uStack_30);
  }
  if (uVar8 == 1) {
    uVar8 = *puVar12;
LAB_2c65b358:
    if (uVar8 != uVar10) {
LAB_2c65b390:
      uVar8 = *param_11 | 4;
      param_7 = param_11;
      goto LAB_2c65b36a;
    }
  }
  else {
    if (uVar8 != 2) goto LAB_2c65b390;
    if (*puVar12 != uVar10) {
      uVar8 = puVar12[1];
      goto LAB_2c65b358;
    }
  }
  uVar8 = *puVar9;
  if (iVar2 <= (int)uVar8) {
    uVar8 = uVar8 - iVar2;
  }
LAB_2c65b36a:
  *param_7 = uVar8;
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  return param_1;
}

