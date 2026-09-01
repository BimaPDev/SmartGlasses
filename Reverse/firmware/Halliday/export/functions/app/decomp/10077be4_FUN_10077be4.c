/* FUN_10077be4 @ 0x10077be4 */

void FUN_10077be4(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *DAT_10077c04 & 0xffffffc0 | 0x84;
  }
  else {
    uVar1 = *DAT_10077c04 & 0xffffffc0 | 0x8c;
  }
  *DAT_10077c04 = uVar1;
  *DAT_10077c08 = *DAT_10077c08 + '\x01';
  return;
}

