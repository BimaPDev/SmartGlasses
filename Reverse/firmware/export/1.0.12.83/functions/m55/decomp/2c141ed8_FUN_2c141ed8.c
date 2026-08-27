/* FUN_2c141ed8 @ 0x2c141ed8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c141ed8(char *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 == -9)) {
    if (*(int *)(param_1 + 8) != 0) {
      do {
        uVar1 = FUN_2c14089c(param_1);
        FUN_2c140ec8(uVar1,0);
      } while (*(int *)(param_1 + 8) != 0);
      func_0x2c140db8();
    }
    uVar2 = (uint)(byte)param_1[2];
    *param_1 = '\0';
    if ((int)(uVar2 << 0x1e) < 0) {
      FUN_2c13f5d4(*(undefined4 *)(_DAT_2c141f58 + 0x78),*(undefined4 *)(param_1 + 0x18));
      uVar2 = (uint)(byte)param_1[2];
    }
    if ((int)(uVar2 << 0x1f) < 0) {
      if (*(int *)(_DAT_2c141f58 + 0x9c) == 0) {
        FUN_2c13f5d4(*(undefined4 *)(_DAT_2c141f58 + 0x80),param_1);
        func_0x2c13ef20(param_1);
        return 0;
      }
      FUN_2c141cb0();
    }
    func_0x2c13ef20(param_1);
    return 0;
  }
  FUN_2c13eeec(param_1,0xfffffffc);
  return 0xfffffffc;
}

