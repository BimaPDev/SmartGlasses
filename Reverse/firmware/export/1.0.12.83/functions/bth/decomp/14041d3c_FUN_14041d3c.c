/* FUN_14041d3c @ 0x14041d3c */

undefined4 FUN_14041d3c(uint param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = DAT_14041d80;
  do {
    pbVar1 = pbVar2 + 1;
    if (*pbVar2 == param_1) {
      return 1;
    }
    pbVar2 = pbVar1;
  } while (pbVar1 != DAT_14041d80 + 4);
  FUN_1402a6e8(4,0x45e,DAT_14041d94,DAT_14041d90,DAT_14041d8c,DAT_14041d88,param_1,
               *(undefined1 *)(DAT_14041d84 + 0xc),*(undefined1 *)(DAT_14041d84 + 0xd),
               *(undefined1 *)(DAT_14041d84 + 0xe));
  return 0;
}

