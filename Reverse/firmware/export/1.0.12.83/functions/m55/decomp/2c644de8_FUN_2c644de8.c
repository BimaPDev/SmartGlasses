/* FUN_2c644de8 @ 0x2c644de8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c644de8(char *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 == -6)) {
    if (*(int *)(param_1 + 8) != 0) {
      do {
        uVar1 = FUN_2c645b54(param_1);
        FUN_2c64621c(uVar1,0xfffffffd,0);
      } while (*(int *)(param_1 + 8) != 0);
      FUN_2c64610c();
    }
    uVar2 = (uint)(byte)param_1[2];
    *param_1 = '\0';
    if ((int)(uVar2 << 0x1e) < 0) {
      FUN_2c64447c(*(undefined4 *)(_LAB_2c644e6c + 0x7c),*(undefined4 *)(param_1 + 0x18));
      uVar2 = (uint)(byte)param_1[2];
    }
    if ((int)(uVar2 << 0x1f) < 0) {
      if (*(int *)(_LAB_2c644e6c + 0xa0) == 0) {
        FUN_2c64447c(*(undefined4 *)(_LAB_2c644e6c + 0x80),param_1);
        func_0x2c643bf0(param_1);
        return 0;
      }
      FUN_2c64749c();
    }
    func_0x2c643bf0(param_1);
    return 0;
  }
  FUN_2c643ba8(param_1,0xfffffffc);
  return 0xfffffffc;
}

