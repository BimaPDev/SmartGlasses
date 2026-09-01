/* FUN_10133ed2 @ 0x10133ed2 */

void FUN_10133ed2(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined8 uVar3;
  
  FUN_1013cb84(param_1 + 0x10);
  uVar2 = extraout_r1;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_100c1c90();
    *(undefined4 *)(param_1 + 0x84) = 0;
    uVar2 = extraout_r1_00;
  }
  while (uVar3 = FUN_100c1b58(param_1 + 0x68,uVar2,0,0),
        uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20), (int)uVar3 != 0) {
    FUN_100c1c90();
    uVar2 = extraout_r1_01;
  }
  while (iVar1 = FUN_100c1b58(param_1 + 0xb0,uVar2,0,0), iVar1 != 0) {
    FUN_100c1c90();
    uVar2 = extraout_r1_02;
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_100c1c90();
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined2 *)(param_1 + 0x9c) = 0;
  }
  return;
}

