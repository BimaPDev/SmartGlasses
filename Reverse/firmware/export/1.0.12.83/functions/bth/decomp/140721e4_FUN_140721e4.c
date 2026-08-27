/* FUN_140721e4 @ 0x140721e4 */

void FUN_140721e4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = DAT_14072228;
  *(char *)(param_1 + 0x32) = (char)(param_4 + 0xf >> 4);
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(short *)(param_1 + 0x30) = (short)param_4;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  *(undefined1 *)(param_1 + 0x33) = 1;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(param_1 + 0x20) = *puVar1;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  FUN_14072014(param_1,param_1 + 0x20);
  return;
}

