/* FUN_2c5e0c64 @ 0x2c5e0c64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5e0c64(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iStack_c;
  
  uVar1 = _LAB_2c5e0ca4;
  pcVar2 = (char *)0x0;
  iStack_c = param_1;
  do {
    if (iStack_c == 0) {
      if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
        return 0xffffffff;
      }
      break;
    }
    pcVar2 = (char *)FUN_2c66c5b6(&iStack_c,uVar1);
    if (pcVar2 == (char *)0x0) {
      return 0xffffffff;
    }
  } while (*pcVar2 == '\0');
  uVar1 = func_0x2c5e10c4(pcVar2,0);
  return uVar1;
}

