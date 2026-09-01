/* FUN_1012109e @ 0x1012109e */

undefined4 FUN_1012109e(int param_1,ushort *param_2,ushort *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_48 [9];
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 auStack_34 [9];
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  
  iVar2 = *(int *)(param_1 + 0xc);
  local_2b = 0;
  local_2a = 0;
  local_29 = 0;
  local_28 = 0;
  local_3f = 0;
  local_3e = 0;
  local_3d = 0;
  local_3c = 0;
  local_27 = 0;
  local_26 = 0;
  local_25 = 0;
  local_24 = 0;
  local_3b = 0;
  local_3a = 0;
  local_39 = 0;
  local_38 = 0;
  for (iVar1 = 0; iVar1 != param_4; iVar1 = iVar1 + 1) {
    FUN_10120a74(param_1,auStack_48,**(undefined1 **)(iVar2 + 0x74),*param_3 & 0xfff,iVar1);
    FUN_10120a74(param_1,auStack_34,**(undefined1 **)(iVar2 + 0x74),*param_2 & 0xfff,iVar1);
    FUN_10120a4a(param_1,auStack_48,auStack_34);
  }
  return 1;
}

