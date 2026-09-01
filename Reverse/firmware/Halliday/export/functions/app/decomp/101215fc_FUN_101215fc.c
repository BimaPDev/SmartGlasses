/* FUN_101215fc @ 0x101215fc */

undefined4 FUN_101215fc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  int *piVar5;
  undefined1 auStack_3c [3];
  undefined1 local_39;
  undefined1 auStack_2c [5];
  int local_27;
  undefined4 local_23;
  undefined1 *local_1f;
  
  piVar5 = *(int **)(param_1 + 0xc);
  iVar1 = piVar5[param_2 + 0x19];
  uVar4 = *(ushort *)((int)piVar5 + (param_2 + 0x18) * 4 + 6);
  FUN_1011ea48(auStack_3c,0xff,0x10);
  local_39 = 0x55;
  local_23 = FUN_1011ea48((int)piVar5 + 0xc6,0x55,0x200);
  uVar4 = uVar4 & 0xfff;
  local_1f = auStack_3c;
  FUN_10120a74(param_1,auStack_2c,*(undefined1 *)piVar5[0x1d],(short)iVar1,uVar4 + 2);
  uVar3 = (uint)*(byte *)(*piVar5 + 0xb) * (uint)*(byte *)(*piVar5 + 10);
  if (uVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if (uVar3 == 0x20) {
      local_27 = -1;
    }
    else {
      local_27 = (1 << (uVar3 & 0xff)) + -1;
    }
    FUN_1007e498(param_1,auStack_2c);
    FUN_10120a74(param_1,auStack_2c,*(undefined1 *)piVar5[0x1d],(short)iVar1,uVar4 + 3);
    uVar3 = (uint)*(byte *)(*piVar5 + 10) * (uint)*(byte *)(*piVar5 + 0xb);
    if (uVar3 == 0x20) {
      local_27 = -1;
    }
    else {
      local_27 = (1 << (uVar3 & 0xff)) + -1;
    }
    FUN_1007e498(param_1,auStack_2c);
    uVar2 = 1;
  }
  return uVar2;
}

