/* FUN_101331c0 @ 0x101331c0 */

undefined4 FUN_101331c0(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_100c5d4c(param_1,4);
  if (iVar1 != 0) {
    puVar2 = (undefined2 *)FUN_100c1fe4(iVar1 + 8,4);
    *puVar2 = param_2;
    puVar2[1] = param_3;
    uVar3 = FUN_100c756c(param_1,iVar1);
    return uVar3;
  }
  return 0xffffff97;
}

