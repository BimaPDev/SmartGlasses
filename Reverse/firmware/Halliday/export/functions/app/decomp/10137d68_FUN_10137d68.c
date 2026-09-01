/* FUN_10137d68 @ 0x10137d68 */

void FUN_10137d68(undefined4 *param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  code *pcVar4;
  
  if ((param_1[0x1a] != 0) && (pcVar4 = *(code **)(param_1[0x1a] + 0xc), pcVar4 != (code *)0x0)) {
    uVar1 = *(ushort *)(*(int *)(param_2 + 8) + 1);
    sVar2 = (uVar1 << 8 | uVar1 >> 8) - 3;
    if (sVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_2 + 8) + 3;
    }
    (*pcVar4)(*param_1,*(undefined1 *)((int)param_1 + 0x62),4,iVar3,sVar2,param_2,param_3);
  }
  return;
}

