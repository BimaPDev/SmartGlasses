/* FUN_10100fdc @ 0x10100fdc */

undefined4 FUN_10100fdc(int param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (*(uint *)(param_2 + 8) < param_1 + 4U) {
    FUN_100f9004(param_2,8);
  }
  uVar1 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  if ((*(uint *)(param_2 + 8) < param_1 + uVar1) || (uVar1 < 0x106)) {
    FUN_100f9004(param_2,8);
  }
  if (*(char *)(param_2 + 0xc) != '\0') {
    pbVar3 = (byte *)(param_1 + 6);
    do {
      while (pbVar2 = pbVar3 + 1, *(uint *)(param_2 + 0x14) <= (uint)*pbVar3) {
        FUN_100f9004(param_2,0x10);
        pbVar3 = pbVar2;
        if (pbVar2 == (byte *)(param_1 + 0x106)) {
          return 0;
        }
      }
      pbVar3 = pbVar2;
    } while (pbVar2 != (byte *)(param_1 + 0x106));
  }
  return 0;
}

