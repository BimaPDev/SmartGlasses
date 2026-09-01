/* FUN_1006fb38 @ 0x1006fb38 */

undefined4 FUN_1006fb38(int param_1,uint *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  puVar10 = *(undefined4 **)(param_1 + 0x10);
  if (param_2 == (uint *)0x0) {
LAB_1006fbe2:
    uVar8 = 0xffffffea;
  }
  else {
    if ((uint *)puVar10[1] != param_2) {
      if (((0x200 < *(ushort *)((int)param_2 + 10)) || (0x200 < *(ushort *)((int)param_2 + 0x12)))
         || ((*param_2 & 0xe9) == 0)) goto LAB_1006fbe2;
      FUN_10055e80(0xe,param_2[1] * 1000);
      puVar6 = DAT_1006fbe8;
      *DAT_1006fbe8 = *DAT_1006fbe8 & 0xffffe3cf;
      uVar9 = *puVar6;
      if (*param_2 != 0x20) {
        uVar9 = uVar9 | 0x20;
      }
      *puVar6 = uVar9;
      if (*(short *)*puVar10 == 0x405) {
        uVar1 = *(ushort *)((int)param_2 + 10);
        iVar7 = FUN_1005fb14();
        puVar6 = DAT_1006fbe8;
        uVar2 = *(ushort *)((int)param_2 + 0xe);
        uVar9 = param_2[4];
        uVar4 = param_2[3];
        uVar3 = *(ushort *)((int)param_2 + 0x16);
        uVar5 = param_2[5];
        DAT_1006fbe8[0x13] = ((uint)uVar1 * iVar7 & 0x3ffff) >> 2;
        puVar6[0xf] = (uVar3 - 1) * 0x100 & 0xffff |
                      ((uint)(ushort)uVar4 + (uint)(ushort)uVar9 + (uint)uVar2) * 0x10000 |
                      (ushort)uVar5 - 1 & 0xff;
      }
      else if (*(short *)*puVar10 == 0x200) {
        DAT_1006fbe8[0x25] =
             CONCAT22(*(undefined2 *)((int)param_2 + 0x12),*(undefined2 *)((int)param_2 + 10));
      }
      puVar10[1] = param_2;
    }
    uVar8 = 0;
  }
  return uVar8;
}

