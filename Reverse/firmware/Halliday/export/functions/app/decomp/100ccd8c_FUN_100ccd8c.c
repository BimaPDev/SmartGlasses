/* FUN_100ccd8c @ 0x100ccd8c */

void FUN_100ccd8c(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  uint uStack_1c;
  undefined4 uStack_18;
  
  iVar3 = 0;
  local_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  FUN_1013cbaa(DAT_100ccddc,param_2,10,0);
  iVar2 = DAT_100ccde0;
  do {
    local_20 = 0;
    uStack_1c = uStack_1c & 0xff000000;
    iVar1 = FUN_10134500(iVar2,&local_20);
    if ((iVar1 != 0) && ((int)((uint)*(byte *)(iVar2 + 7) << 0x1f) < 0)) {
      FUN_10134580(iVar2 + 0xb,0xfffffffd);
      FUN_10134580(iVar2 + 0xb,0xfffffffe);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 != 9);
  return;
}

