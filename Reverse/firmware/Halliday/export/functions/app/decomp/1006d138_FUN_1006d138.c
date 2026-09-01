/* FUN_1006d138 @ 0x1006d138 */

undefined4 FUN_1006d138(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = **(int **)(param_1 + 4);
  iVar1 = *(int *)(iVar2 + 0x14);
  if (iVar1 == 0) {
    uVar5 = param_3;
    FUN_10119dc2(DAT_1006d194,DAT_1006d190,DAT_1006d18c,0x2b7,param_1,param_2,param_3,0,param_1,
                 param_2,param_3);
    FUN_10119dc2(DAT_1006d198);
    FUN_1011a1f0(DAT_1006d18c,0x2b7,uVar5,iVar1);
  }
  pcVar4 = *(code **)(*(int *)(*(int *)(iVar2 + 0x14) + 8) + 4);
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(*(int *)(iVar2 + 0x14),*(undefined1 *)(iVar2 + 0x19),iVar3 + 4,param_2,param_3);
  }
  (**(code **)(*(int *)(*(int *)(iVar2 + 0x14) + 8) + 8))
            (*(int *)(iVar2 + 0x14),*(undefined1 *)(iVar2 + 0x19));
  return 0;
}

