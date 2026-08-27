/* FUN_14057c80 @ 0x14057c80 */

void FUN_14057c80(int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = DAT_14057cb4;
  *(undefined1 *)(param_1 + 0x18b) = param_3;
  iVar2 = *(int *)(iVar2 + 0x10);
  *(byte *)(param_1 + 0x189) = *(byte *)(param_1 + 0x189) | 0x10;
  pcVar1 = *(code **)(iVar2 + 0x10);
  (*pcVar1)(*(undefined1 *)(param_1 + 0x184),*(undefined4 *)(param_1 + 0xc),param_2,pcVar1,param_4);
  *(byte *)(param_1 + 0x189) = *(byte *)(param_1 + 0x189) & 0xef;
  return;
}

