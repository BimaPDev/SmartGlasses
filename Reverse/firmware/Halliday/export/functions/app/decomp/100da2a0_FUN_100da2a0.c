/* FUN_100da2a0 @ 0x100da2a0 */

undefined4 FUN_100da2a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int local_1c;
  undefined4 uStack_18;
  
  local_1c = 0;
  uVar1 = *(ushort *)(*DAT_100da308 + 0x32);
  uStack_18 = param_3;
  iVar2 = FUN_101165e0(DAT_100da30c);
  if (iVar2 == 0) {
    uVar3 = thunk_FUN_1013650a();
    iVar2 = FUN_10136c54();
    FUN_100d4f4c(uVar3,&local_1c);
    uVar5 = iVar2 - local_1c;
    uVar3 = 0;
    if (uVar5 < uVar1) {
      iVar4 = local_1c + (uint)uVar1;
    }
    else {
      uVar5 = iVar2 - *DAT_100da310;
      if (299 < uVar5) {
        FUN_100d9f70(0,0);
        return 0;
      }
      iVar4 = *DAT_100da310 + 300;
    }
    FUN_10116500(DAT_100da30c,iVar4 - iVar2,0,uVar5,param_1);
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

