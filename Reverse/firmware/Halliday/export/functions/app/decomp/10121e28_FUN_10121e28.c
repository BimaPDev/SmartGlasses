/* FUN_10121e28 @ 0x10121e28 */

undefined1 FUN_10121e28(int *param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if (*(char *)(*param_1 + 7) == '\0') {
    pbVar2 = (byte *)(param_1[3] + 0x1ebc);
    do {
      pbVar1 = pbVar2 + 1;
      if (*pbVar2 == param_2) {
        return 1;
      }
      pbVar2 = pbVar1;
    } while (pbVar1 != (byte *)(param_1[3] + 0x1ec0));
  }
  return 0;
}

