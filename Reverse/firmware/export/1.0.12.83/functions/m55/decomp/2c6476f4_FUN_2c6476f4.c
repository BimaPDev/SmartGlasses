/* FUN_2c6476f4 @ 0x2c6476f4 */

undefined4 FUN_2c6476f4(char *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 == -9)) {
    if (*(int *)(param_1 + 8) != 0) {
      do {
        uVar1 = FUN_2c645b54(param_1);
        FUN_2c64621c(uVar1,0);
      } while (*(int *)(param_1 + 8) != 0);
      FUN_2c64610c();
    }
    uVar2 = (uint)(byte)param_1[2];
    *param_1 = '\0';
    if ((int)(uVar2 << 0x1e) < 0) {
      FUN_2c64447c(*(undefined4 *)(DAT_2c647774 + 0x78),*(undefined4 *)(param_1 + 0x18));
      uVar2 = (uint)(byte)param_1[2];
    }
    if ((int)(uVar2 << 0x1f) < 0) {
      if (*(int *)(DAT_2c647774 + 0x9c) == 0) {
        FUN_2c64447c(*(undefined4 *)(DAT_2c647774 + 0x80),param_1);
        FUN_2c643ba4(param_1);
        return 0;
      }
      FUN_2c64749c();
    }
    FUN_2c643ba4(param_1);
    return 0;
  }
  FUN_2c643b70(param_1,0xfffffffc);
  return 0xfffffffc;
}

