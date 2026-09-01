/* FUN_1013412e @ 0x1013412e */

void FUN_1013412e(undefined4 param_1,undefined4 param_2,undefined2 param_3,int param_4,byte param_5)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = FUN_100cb5a8(1,param_2,param_5 + 2);
  if (iVar1 != 0) {
    puVar2 = (undefined2 *)FUN_100c1fe4(iVar1 + 8,2);
    *puVar2 = param_3;
    if (param_4 != 0) {
      FUN_101327a0(iVar1 + 8,param_4,(uint)param_5);
    }
    FUN_1013411a(param_1,iVar1);
    return;
  }
  return;
}

