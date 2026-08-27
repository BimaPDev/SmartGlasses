/* FUN_2c012f40 @ 0x2c012f40 */

undefined4 FUN_2c012f40(char *param_1)

{
  bool bVar1;
  
  do {
    ExclusiveAccess(param_1);
    if (*param_1 != '\0') {
      ClearExclusiveLocal();
      return 0xffffffff;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = '\x01';
  DataMemoryBarrier(0x1f);
  return 0;
}

