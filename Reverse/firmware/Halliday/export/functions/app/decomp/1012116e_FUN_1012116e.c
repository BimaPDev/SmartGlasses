/* FUN_1012116e @ 0x1012116e */

undefined4 FUN_1012116e(int param_1,ushort *param_2,ushort *param_3,undefined4 param_4,char param_5)

{
  uint uVar1;
  int *piVar2;
  undefined1 auStack_60 [2];
  char local_5e;
  undefined1 auStack_50 [5];
  int local_4b;
  int local_47;
  undefined1 *local_43;
  undefined1 auStack_3c [5];
  int local_37;
  int local_33;
  undefined1 *local_2f;
  
  piVar2 = *(int **)(param_1 + 0xc);
  local_43 = auStack_60;
  local_47 = (int)piVar2 + 0xc6;
  local_33 = local_47;
  local_2f = local_43;
  FUN_1011ea48(local_43,0xff,0x10);
  local_4b = 0xf;
  FUN_10120a74(param_1,auStack_50,*(undefined1 *)piVar2[0x1d],*param_2 & 0xfff,0);
  FUN_1007e320(param_1,auStack_50);
  FUN_10120a74(param_1,auStack_50,*(undefined1 *)piVar2[0x1d],*param_2 & 0xfff,param_4);
  FUN_10120a74(param_1,auStack_3c,*(undefined1 *)piVar2[0x1d],*param_3 & 0xfff,0);
  uVar1 = (uint)*(byte *)(*piVar2 + 10) * (uint)*(byte *)(*piVar2 + 0xb);
  if (uVar1 == 0x20) {
    local_4b = -1;
  }
  else {
    local_4b = (1 << (uVar1 & 0xff)) + -1;
  }
  local_37 = local_4b;
  FUN_1007e320(param_1,auStack_50);
  local_5e = local_5e + param_5;
  FUN_1007e498(param_1,auStack_3c);
  return 1;
}

