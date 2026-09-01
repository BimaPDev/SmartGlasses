/* FUN_101330fa @ 0x101330fa */

undefined4 FUN_101330fa(undefined4 param_1,undefined1 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_100c5d4c(param_1,1);
  if (iVar1 == 0) {
    return 0xffffff97;
  }
  puVar2 = (undefined1 *)FUN_100c1fe4(iVar1 + 8,1);
  *puVar2 = param_2;
  if (param_3 != 0) {
    uVar3 = FUN_100c5e48(param_1,iVar1,0,param_4);
    return uVar3;
  }
  uVar3 = FUN_100c756c(param_1,iVar1);
  return uVar3;
}

