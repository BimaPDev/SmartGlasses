/* FUN_14072b38 @ 0x14072b38 */

short FUN_14072b38(undefined4 *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  short sVar4;
  
  pcVar1 = (char *)*param_1;
  pbVar2 = (byte *)(pcVar1 + 1);
  *param_1 = pbVar2;
  sVar4 = *pcVar1 + -0x30;
  if (9 < (byte)pcVar1[1] - 0x30) {
    return sVar4;
  }
  do {
    pbVar3 = pbVar2 + 1;
    *param_1 = pbVar3;
    sVar4 = sVar4 * 10 + -0x30 + (short)(char)*pbVar2;
    pbVar2 = pbVar3;
  } while (*pbVar3 - 0x30 < 10);
  return sVar4;
}

