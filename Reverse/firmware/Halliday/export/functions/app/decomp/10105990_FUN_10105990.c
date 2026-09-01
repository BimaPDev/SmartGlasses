/* FUN_10105990 @ 0x10105990 */

uint FUN_10105990(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  uVar6 = *(uint *)(param_1 + 0x2e0);
  if (uVar6 <= param_2) {
    iVar2 = 0;
    uVar1 = 0;
    goto LAB_101059e4;
  }
  if (*(short *)(param_1 + 0xd2) == 0) {
    iVar2 = *(int *)(param_1 + 0x2e4);
    iVar8 = iVar2 + param_2 * 2;
    uVar3 = iVar2 + uVar6 * 2;
    uVar7 = iVar8 + 4;
    uVar1 = (uint)CONCAT11(*(undefined1 *)(iVar2 + param_2 * 2),*(undefined1 *)(iVar8 + 1));
    uVar4 = uVar1;
    uVar5 = uVar7;
    if (uVar7 <= uVar3) {
      uVar4 = (uint)*(byte *)(iVar8 + 3);
      uVar5 = (uint)*(byte *)(iVar8 + 2);
    }
    uVar1 = uVar1 << 1;
    if (uVar7 <= uVar3) {
      uVar4 = uVar4 | uVar5 << 8;
    }
    uVar5 = uVar4 << 1;
LAB_101059d0:
    uVar4 = *(uint *)(param_1 + 0x2cc);
    if (uVar4 < uVar1) goto LAB_101059d8;
  }
  else {
    puVar9 = (uint *)(*(int *)(param_1 + 0x2e4) + param_2 * 4);
    uVar1 = *puVar9;
    uVar1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
            uVar1 >> 0x18;
    uVar5 = uVar1;
    if ((uint *)(*(int *)(param_1 + 0x2e4) + uVar6 * 4) < puVar9 + 2) goto LAB_101059d0;
    uVar5 = puVar9[1];
    uVar5 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
            uVar5 >> 0x18;
    uVar4 = *(uint *)(param_1 + 0x2cc);
    if (uVar4 < uVar1) goto LAB_101059d8;
  }
  if (uVar4 < uVar5) {
    if (uVar6 - 2 != param_2) {
LAB_101059d8:
      *param_3 = 0;
      return 0;
    }
    iVar2 = uVar4 - uVar1;
  }
  else if (uVar5 < uVar1) {
    iVar2 = uVar4 - uVar1;
  }
  else {
    iVar2 = uVar5 - uVar1;
  }
LAB_101059e4:
  *param_3 = iVar2;
  return uVar1;
}

