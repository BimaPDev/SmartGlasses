/* FUN_2c6447a6 @ 0x2c6447a6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c6447a6(char *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_1 != (char *)0x0) && (*param_1 == -0xe)) && (param_2 != 0)) {
    if (param_1[1] == '\x02') {
      iVar1 = *(int *)(param_1 + 0xc);
      uVar2 = 0;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + *(int *)(param_4 + 0x10);
        *(undefined4 *)(*(int *)(param_4 + 0xc) + 8) = *(undefined4 *)(param_4 + 8);
        uVar2 = *(undefined4 *)(param_4 + 0xc);
      }
      if (*(int *)(param_4 + 8) == 0) {
        *(undefined4 *)(_LAB_2c644814 + 0x44) = uVar2;
      }
      else {
        *(undefined4 *)(*(int *)(param_4 + 8) + 0xc) = uVar2;
      }
    }
    else {
      if (*(int *)(_LAB_2c644814 + 0x50) == 0) {
        FUN_2c643ad8(param_1,0xfffffffd);
        return 0xfffffffd;
      }
      *(int *)(param_1 + 0x14) = param_2;
      param_1[1] = '\x02';
    }
    func_0x2c644534(param_4);
    func_0x2c643aec();
    return 0;
  }
  FUN_2c643ad8(param_4,0xfffffffc);
  return 0xfffffffc;
}

