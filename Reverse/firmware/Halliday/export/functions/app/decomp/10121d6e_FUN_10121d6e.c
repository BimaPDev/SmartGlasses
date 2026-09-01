/* FUN_10121d6e @ 0x10121d6e */

uint FUN_10121d6e(int param_1,uint param_2,ushort *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint local_1c;
  ushort *puStack_18;
  
  piVar5 = *(int **)(param_1 + 0xc);
  if (param_4 == 0x72) {
    uVar3 = *(ushort *)(*(int *)(piVar5[0x23] + 8) + param_2 * 2);
    *param_3 = uVar3;
    uVar2 = 0;
    if ((uVar3 & 0xfff) != 0xfff) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
    if (*(ushort *)(*piVar5 + 0xe) != 0) {
      uVar4 = (uint)*(ushort *)((int)piVar5 + 0xc2) / (uint)*(ushort *)(*piVar5 + 0xe);
      uVar6 = param_2 - uVar4 * (param_2 / uVar4);
      local_1c = param_2;
      puStack_18 = param_3;
      FUN_10121d3e(param_1,*(undefined2 *)
                            (*(int *)(piVar5[0x1d] + 0xc) + (uint)*(ushort *)(piVar5[0x23] + 2) * 8)
                   ,&local_1c,*(int *)(piVar5[0x1d] + 0xc),param_1);
      uVar2 = *(ushort *)(*(int *)(piVar5[0x1d] + 0xc) + local_1c * 8 + 4) & 0xfff;
      uVar1 = uVar2 - uVar4 * (uVar2 / uVar4);
      if (uVar6 <= uVar1) {
        uVar2 = uVar4 + uVar2;
      }
      uVar4 = (uint)*(ushort *)((int)piVar5 + 0xc2);
      uVar1 = ((uVar6 & 0xffff) + uVar2) - uVar1 & 0xfff;
      uVar3 = (ushort)uVar1;
      if (uVar4 <= uVar1) {
        uVar3 = 0xfff;
      }
      uVar2 = uVar4;
      if (uVar4 <= uVar1) {
        uVar2 = 0;
      }
      if (uVar1 < uVar4) {
        uVar2 = 1;
      }
      *param_3 = *param_3 & 0xf000 | uVar3;
    }
  }
  return uVar2;
}

