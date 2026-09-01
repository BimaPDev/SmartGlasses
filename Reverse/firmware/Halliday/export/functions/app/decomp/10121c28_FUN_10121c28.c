/* FUN_10121c28 @ 0x10121c28 */

int FUN_10121c28(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  undefined1 local_54 [20];
  undefined1 auStack_40 [5];
  uint local_3b;
  int local_37;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 auStack_2c [5];
  uint local_27;
  int local_23;
  int *local_1f;
  
  piVar3 = *(int **)(param_1 + 0xc);
  if ((char)piVar3[0x43a] == 'w') {
    FUN_10120a74(param_1,local_54,*(undefined1 *)piVar3[0x1d],
                 *(ushort *)((int)piVar3 + 0x10fa) & 0xfff,(short)piVar3[0x43f]);
    FUN_101208e6(param_1,local_54[0]);
    puVar4 = (uint *)(piVar3 + 0x440);
    uVar2 = (uint)*(byte *)(*piVar3 + 10) * (uint)*(byte *)(*piVar3 + 0xb);
    if (uVar2 == 0x20) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = (1 << (uVar2 & 0xff)) - 1;
    }
    if ((*puVar4 != uVar2) && (*puVar4 != 0)) {
      FUN_10120a74(param_1,auStack_40,*(undefined1 *)piVar3[0x1d],
                   *(ushort *)(piVar3 + 0x43c) & 0xfff,*(undefined2 *)((int)piVar3 + 0x10ee));
      FUN_10120a74(param_1,auStack_2c,*(undefined1 *)piVar3[0x1d],
                   *(ushort *)((int)piVar3 + 0x10fa) & 0xfff,(short)piVar3[0x43f]);
      uVar2 = (uint)*(byte *)(*piVar3 + 10) * (uint)*(byte *)(*piVar3 + 0xb);
      if (uVar2 == 0x20) {
        local_3b = 0xffffffff;
      }
      else {
        local_3b = (1 << (uVar2 & 0xff)) - 1;
      }
      local_3b = local_3b ^ *puVar4;
      local_37 = (int)piVar3 + 0xc6;
      local_1f = piVar3 + 0x768;
      local_33 = 0;
      local_32 = 0;
      local_31 = 0;
      local_30 = 0;
      local_27 = local_3b;
      local_23 = local_37;
      iVar1 = FUN_1007e320(param_1,auStack_40);
      if (iVar1 != 1) {
        return iVar1;
      }
      iVar1 = FUN_1007e498(param_1,auStack_2c);
      if (iVar1 != 1) {
        return iVar1;
      }
      FUN_101208e6(param_1,local_54[0]);
      *puVar4 = 0;
    }
    *(undefined1 *)(piVar3 + 0x43a) = 0x6e;
  }
  return 1;
}

