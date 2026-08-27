/* FUN_2c644698 @ 0x2c644698 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c644698(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 == -0xe)) {
    if (param_1[1] == '\x02') {
      iVar1 = *(int *)(param_1 + 0xc);
      uVar2 = 0;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + *(int *)(param_1 + 0x10);
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = *(undefined4 *)(param_1 + 8);
        uVar2 = *(undefined4 *)(param_1 + 0xc);
      }
      if (*(int *)(param_1 + 8) == 0) {
        *(undefined4 *)(_LAB_2c644714 + 0x44) = uVar2;
      }
      else {
        *(undefined4 *)(*(int *)(param_1 + 8) + 0xc) = uVar2;
      }
    }
    param_1[0] = '\0';
    param_1[1] = '\0';
    if ((int)((uint)(byte)param_1[2] << 0x1f) < 0) {
      if (*(int *)(_LAB_2c644714 + 0x8c) == 0) {
        FUN_2c64447c(*(undefined4 *)(_LAB_2c644714 + 0x80),param_1);
        func_0x2c643b00(param_1);
        return 0;
      }
      FUN_2c64749c();
    }
    func_0x2c643b00(param_1);
    return 0;
  }
  FUN_2c643ad8(param_1,0xfffffffc);
  return 0xfffffffc;
}

