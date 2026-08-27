/* FUN_14004264 @ 0x14004264 */

uint FUN_14004264(undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_14006a74();
  if ((int)uVar1 < 0) {
    uVar1 = 0x80000000;
  }
  else {
    uVar1 = uVar1 & ~param_2;
  }
  return uVar1;
}

