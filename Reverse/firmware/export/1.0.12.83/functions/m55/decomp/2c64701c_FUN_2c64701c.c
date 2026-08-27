/* FUN_2c64701c @ 0x2c64701c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c64701c(char *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (char *)0x0) && (*param_1 == -10)) {
    if (*(int *)(param_1 + 8) != 0) {
      do {
        uVar1 = FUN_2c645b54(param_1);
        FUN_2c64621c(uVar1,0xfffffffd,0);
      } while (*(int *)(param_1 + 8) != 0);
      FUN_2c64610c();
    }
    *param_1 = '\0';
    if ((int)((uint)(byte)param_1[2] << 0x1f) < 0) {
      if (*(int *)(_LAB_2c64708c + 0x98) == 0) {
        FUN_2c64447c(*(undefined4 *)(_LAB_2c64708c + 0x80),param_1);
        func_0x2c643b6c(param_1);
        return 0;
      }
      FUN_2c64749c();
    }
    func_0x2c643b6c(param_1);
    return 0;
  }
  FUN_2c643b3c(param_1,0xfffffffc);
  return 0xfffffffc;
}

