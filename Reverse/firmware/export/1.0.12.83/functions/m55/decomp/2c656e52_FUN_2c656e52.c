/* FUN_2c656e52 @ 0x2c656e52 */

undefined4 *
FUN_2c656e52(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,uint *param_7,int param_8,int param_9,int param_10
            ,uint *param_11)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint auStack_38 [5];
  
  iVar1 = param_8;
  puVar10 = auStack_38 + 2;
  auStack_38[2] = param_3;
  auStack_38[3] = param_4;
  uVar2 = FUN_2c65faf0(param_10 + 0x6c);
  puVar7 = auStack_38 + param_9 * -2;
  iVar3 = FUN_2c656c1a(puVar10,&param_5);
  if (iVar3 == 0) {
LAB_2c656ef8:
    uVar4 = 0;
    uVar6 = 0;
    puVar10 = (uint *)0x0;
  }
  else {
    uVar4 = FUN_2c656bd8(puVar10);
    uVar8 = 0;
    uVar6 = param_9 << 1;
    for (uVar9 = 0; uVar6 != uVar9; uVar9 = uVar9 + 1) {
      if ((**(uint **)(iVar1 + uVar9 * 4) == uVar4) ||
         (auStack_38[0] = uVar4, auStack_38[1] = uVar6, uVar5 = FUN_2c656bcc(uVar2),
         uVar6 = auStack_38[1], uVar4 = auStack_38[0], uVar5 == auStack_38[0])) {
        puVar7[uVar8] = uVar9;
        uVar8 = uVar8 + 1;
      }
    }
    if (uVar8 == 0) goto LAB_2c656ef8;
    uVar4 = 0;
    FUN_2c6561e8(puVar10);
    iVar3 = -(uVar8 * 4 + 7 & 0xfffffff8);
    puVar10 = (uint *)((int)puVar7 + iVar3);
    do {
      uVar2 = FUN_2c66ea0c(*(undefined4 *)(iVar1 + puVar7[uVar4] * 4));
      *(undefined4 *)((int)puVar7 + uVar4 * 4 + iVar3) = uVar2;
      uVar4 = uVar4 + 1;
    } while (uVar8 != uVar4);
    uVar6 = 1;
  }
  while (iVar3 = FUN_2c656c1a(auStack_38 + 2,&param_5), iVar3 != 0) {
    iVar3 = FUN_2c656bd8(auStack_38 + 2);
    uVar9 = 0;
    uVar8 = 0;
    while (uVar9 < uVar4) {
      if (uVar6 < puVar10[uVar9]) {
        if (*(int *)(*(int *)(iVar1 + puVar7[uVar9] * 4) + uVar6 * 4) == iVar3) goto LAB_2c656f34;
        uVar4 = uVar4 - 1;
        puVar7[uVar9] = puVar7[uVar4];
        puVar10[uVar9] = puVar10[uVar4];
      }
      else {
        uVar8 = uVar8 + 1;
LAB_2c656f34:
        uVar9 = uVar9 + 1;
      }
    }
    if (uVar4 == uVar8) break;
    uVar6 = uVar6 + 1;
    FUN_2c6561e8(auStack_38 + 2);
  }
  if (uVar4 == 1) {
    uVar4 = *puVar10;
LAB_2c656f72:
    if (uVar4 != uVar6) {
LAB_2c656fac:
      uVar6 = *param_11 | 4;
      goto LAB_2c656f82;
    }
  }
  else {
    if (uVar4 != 2) goto LAB_2c656fac;
    if (*puVar10 != uVar6) {
      uVar4 = puVar10[1];
      goto LAB_2c656f72;
    }
  }
  uVar6 = *puVar7;
  param_11 = param_7;
  if (param_9 <= (int)uVar6) {
    uVar6 = uVar6 - param_9;
  }
LAB_2c656f82:
  *param_11 = uVar6;
  *param_1 = auStack_38[2];
  param_1[1] = auStack_38[3];
  return param_1;
}

