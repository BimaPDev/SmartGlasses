/* FUN_101333be @ 0x101333be */

undefined4 FUN_101333be(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  
  iVar1 = FUN_100c5d4c(0xfc30,1);
  if (iVar1 != 0) {
    puVar2 = (undefined1 *)FUN_100c1fe4(iVar1 + 8,1);
    *puVar2 = param_1;
    uVar3 = FUN_100c756c(0xfc30,iVar1,extraout_r2,param_4);
    return uVar3;
  }
  return 0xffffff97;
}

