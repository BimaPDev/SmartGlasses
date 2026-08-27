/* FUN_1408e414 @ 0x1408e414 */

undefined4 FUN_1408e414(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1408c8cc(param_1,param_2,0,0,param_3,param_4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
  }
  return uVar2;
}

