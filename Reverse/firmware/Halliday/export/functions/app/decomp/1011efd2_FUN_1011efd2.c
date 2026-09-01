/* FUN_1011efd2 @ 0x1011efd2 */

undefined4 FUN_1011efd2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x14);
  pcVar2 = *(code **)(*(int *)(iVar1 + 8) + 0xc);
  (*pcVar2)(iVar1,*(undefined1 *)(*(int *)(param_1 + 0x10) + 0x18),param_3,pcVar2,param_4);
  return 0;
}

