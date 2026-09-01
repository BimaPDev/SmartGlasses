/* FUN_10137d9c @ 0x10137d9c */

void FUN_10137d9c(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  code *pcVar2;
  
  if ((param_1[0x1a] != 0) && (pcVar2 = *(code **)(param_1[0x1a] + 0xc), pcVar2 != (code *)0x0)) {
    uVar1 = *(ushort *)(*(int *)(param_2 + 8) + 1);
    (*pcVar2)(*param_1,*(undefined1 *)((int)param_1 + 0x62),1,*(int *)(param_2 + 8) + 3,
              (uVar1 << 8 | uVar1 >> 8) - 3,param_2);
  }
  return;
}

