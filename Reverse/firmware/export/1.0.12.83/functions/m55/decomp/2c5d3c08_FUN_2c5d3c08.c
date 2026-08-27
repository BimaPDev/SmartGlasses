/* FUN_2c5d3c08 @ 0x2c5d3c08 */

void FUN_2c5d3c08(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = registry_lookup(0x1069);
  registry_lookup(0x1069);
  uVar2 = FUN_2c66c4ec();
  uVar3 = FUN_2c5e2e80(DAT_2c5d3c7c);
  iVar4 = FUN_2c62b85c(uVar1,uVar2,uVar3,0,0);
  if (iVar4 < 0xf1) {
    FUN_2c607048(*(undefined4 *)(param_1 + 0x78),0xf0,0x18);
    FUN_2c607048(*(undefined4 *)(param_1 + 0x6c),0x144,0x50);
  }
  else {
    FUN_2c607048(*(undefined4 *)(param_1 + 0x78),0xf0,0x30);
    FUN_2c607048(*(undefined4 *)(param_1 + 0x6c),0x144,0x68);
  }
  FUN_2c5d3494(param_1,*(undefined4 *)(param_1 + 0x6c));
  return;
}

