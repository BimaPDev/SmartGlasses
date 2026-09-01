/* FUN_100fdd08 @ 0x100fdd08 */

undefined4 FUN_100fdd08(int *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = param_1[8];
  iVar4 = param_1[4];
  if (param_2 < uVar9) {
    iVar7 = (uVar9 + 1) * 2;
    iVar5 = (iVar7 + -2) * 2 + param_2 * 2 + iVar7 + iVar4;
    iVar6 = iVar7 + -2 + param_2 * 2 + iVar7 + iVar4;
    do {
      uVar1 = CONCAT11(*(undefined1 *)(iVar4 + 0xe + param_2 * 2),
                       *(undefined1 *)(iVar4 + 0xf + param_2 * 2));
      param_1[0xb] = (uint)uVar1;
      iVar8 = iVar5 + 0xe;
      uVar2 = CONCAT11(*(undefined1 *)(iVar7 + iVar4 + 0xe + param_2 * 2),
                       *(undefined1 *)(iVar7 + iVar4 + 0xf + param_2 * 2));
      param_1[10] = (uint)uVar2;
      param_1[0xc] = (int)CONCAT11(*(undefined1 *)(iVar6 + 0xe),*(undefined1 *)(iVar6 + 0xf));
      iVar6 = iVar6 + 2;
      uVar3 = (uint)CONCAT11(*(undefined1 *)(iVar5 + 0xe),*(undefined1 *)(iVar5 + 0xf));
      iVar5 = iVar5 + 2;
      if ((uVar9 - 1 <= param_2) && ((uVar2 & uVar1) == 0xffff)) {
        if (uVar3 == 0) goto LAB_100fddc0;
        if ((uint)(*(int *)(*param_1 + 0x200) + *(int *)(*param_1 + 0x1fc)) < uVar3 + 2 + iVar8) {
          uVar3 = 0;
          param_1[0xc] = 1;
          goto LAB_100fddc0;
        }
      }
      if (uVar3 != 0xffff) {
        if (uVar3 != 0) {
          param_1[0xd] = uVar3 + iVar8;
          param_1[9] = param_2;
          return 0;
        }
LAB_100fddc0:
        param_1[0xd] = uVar3;
        param_1[9] = param_2;
        return 0;
      }
      param_2 = param_2 + 1;
    } while (uVar9 != param_2);
  }
  return 0xffffffff;
}

