/* FUN_10001af4 @ 0x10001af4 */

undefined4 FUN_10001af4(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint extraout_r3;
  int iVar4;
  
  uVar2 = (uint)*param_1;
  if (uVar2 < 3) goto LAB_10001b0c;
  uVar1 = 0xaa;
  uVar3 = DAT_10001b30;
  while( true ) {
    param_2 = FUN_100031f8(DAT_10001b38,uVar1,DAT_10001b34,uVar3,param_4);
    uVar2 = extraout_r3;
LAB_10001b0c:
    iVar4 = uVar2 * 0x34 + DAT_10001b3c;
    if (*(int *)(iVar4 + 0x28) != 0) break;
    uVar1 = 0xab;
    uVar3 = DAT_10001b40;
  }
  if (*(code **)(iVar4 + 0x2c) != (code *)0x0) {
    (**(code **)(iVar4 + 0x2c))(param_2,*(undefined2 *)(param_1 + 2),*(undefined4 *)(iVar4 + 0x30));
  }
  return 0;
}

