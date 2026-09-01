/* FUN_1011bade @ 0x1011bade */

undefined1 FUN_1011bade(undefined4 param_1,uint *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar2 = FUN_1013c768(param_1,&local_20);
  iVar3 = FUN_101139a4(&local_18);
  if (iVar2 == 0 && iVar3 == 0) {
    *param_2 = local_20;
    uVar1 = FUN_10004238((int)((ulonglong)local_20 * 100),
                         local_1c * 100 + (int)((ulonglong)local_20 * 100 >> 0x20),local_18,
                         uStack_14);
  }
  else {
    uVar1 = 0x6f;
  }
  return uVar1;
}

