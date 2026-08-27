/* FUN_1403714c @ 0x1403714c */

uint FUN_1403714c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  FUN_1402a6e8(4,0x365,DAT_140371a0,DAT_1403719c,DAT_14037198,uVar1,uVar1);
  if (uVar1 + 0x32 < 0x65) {
    uVar2 = uVar1 & 0x3fff;
  }
  else {
    uVar2 = 0;
    uVar1 = uVar2;
  }
  FUN_1402a6e8(4,0x36d,DAT_140371a0,DAT_1403719c,DAT_140371a4,uVar2,uVar1);
  return uVar2;
}

