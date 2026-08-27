/* FUN_14050a40 @ 0x14050a40 */

uint FUN_14050a40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = DAT_14050a6c;
  FUN_140e5148(*DAT_14050a6c,0xffffffff,param_3,param_4,param_4);
  uVar2 = *puVar1;
  uVar4 = *DAT_14050a70;
  if (uVar4 < 0x1000000) {
    uVar3 = uVar4 + 1;
  }
  else {
    uVar4 = 0x100000;
    uVar3 = DAT_14050a74;
  }
  *DAT_14050a70 = uVar3;
  FUN_140e52d8(uVar2);
  return uVar4;
}

