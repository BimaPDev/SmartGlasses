/* FUN_1012102e @ 0x1012102e */

void FUN_1012102e(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined1 local_34 [16];
  undefined1 auStack_24 [5];
  int local_1f;
  int local_1b;
  undefined4 local_17;
  
  piVar3 = *(int **)(param_1 + 0xc);
  if ((*(short *)(*piVar3 + 0xe) != 0) &&
     (iVar1 = FUN_10120a74(param_1,auStack_24,*(undefined1 *)piVar3[0x1d],param_3,0), iVar1 == 1)) {
    local_17 = FUN_1011ea48(local_34,0xff,0x10);
    local_34[0] = 0xfc;
    local_1b = (int)piVar3 + 0xc6;
    uVar2 = (uint)*(byte *)(*piVar3 + 0xb) * (uint)*(byte *)(*piVar3 + 10);
    if (uVar2 == 0x20) {
      local_1f = -1;
    }
    else {
      local_1f = (1 << (uVar2 & 0xff)) + -1;
    }
    thunk_FUN_1007e6ec(param_1,auStack_24);
    FUN_1007e498(param_1,auStack_24);
  }
  return;
}

