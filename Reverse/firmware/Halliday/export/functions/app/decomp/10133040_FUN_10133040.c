/* FUN_10133040 @ 0x10133040 */

void FUN_10133040(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  iVar1 = FUN_100c9b88(&uStack_10,6);
  if (iVar1 == 0) {
    uStack_c = uStack_c & 0xffff3fff;
    FUN_100c68b0(&uStack_10);
  }
  return;
}

