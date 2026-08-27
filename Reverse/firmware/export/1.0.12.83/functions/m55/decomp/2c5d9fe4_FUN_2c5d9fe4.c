/* FUN_2c5d9fe4 @ 0x2c5d9fe4 */

undefined4 FUN_2c5d9fe4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = DAT_2c5da068;
  if (*DAT_2c5da068 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  uVar3 = FUN_2c47245c(0,0x5c);
  FUN_2c5d9c78(uVar3,param_2,param_3,param_1 + 0xc,param_1 + 0x24,*(undefined4 *)(param_1 + 4),
               *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x3c),
               *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
               *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
               *(undefined4 *)(param_1 + 0x50));
  uVar2 = DAT_2c5da06c;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_2c5d9e50(param_1 + 0xc,0,*(undefined4 *)(param_1 + 0x10),uVar2,0);
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return uVar3;
}

