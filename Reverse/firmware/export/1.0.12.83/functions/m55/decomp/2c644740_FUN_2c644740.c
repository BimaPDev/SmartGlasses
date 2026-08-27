/* FUN_2c644740 @ 0x2c644740 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c644740(byte *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (byte *)0x0) && (param_3 = (uint)*param_1, param_3 == 0xf2)) {
    if (param_1[1] == 2) {
      iVar1 = *(int *)(param_1 + 0xc);
      param_1[1] = 1;
      uVar2 = 0;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + *(int *)(param_1 + 0x10);
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = *(undefined4 *)(param_1 + 8);
        uVar2 = *(undefined4 *)(param_1 + 0xc);
      }
      if (*(int *)(param_1 + 8) == 0) {
        *(undefined4 *)(_LAB_2c6447a0 + 0x44) = uVar2;
      }
      else {
        *(undefined4 *)(*(int *)(param_1 + 8) + 0xc) = uVar2;
      }
      func_0x2c643af4(param_1);
      return 0;
    }
    FUN_2c643ad8(param_1,0xfffffffd,param_1[1],param_1,param_4);
    return 0xfffffffd;
  }
  FUN_2c643ad8(param_1,0xfffffffc,param_3,param_1,param_4);
  return 0xfffffffc;
}

