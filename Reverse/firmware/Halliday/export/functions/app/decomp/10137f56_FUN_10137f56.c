/* FUN_10137f56 @ 0x10137f56 */

void FUN_10137f56(undefined4 *param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  
  pbVar4 = *(byte **)(param_2 + 8);
  puVar5 = param_1;
  iVar2 = param_2;
  FUN_1013cb84(param_1 + 0x1c);
  *(undefined1 *)((int)param_1 + 0x5d) = 4;
  FUN_100c1f58((undefined4 *)(param_2 + 8),3);
  uVar1 = *(ushort *)(pbVar4 + 1);
  iVar2 = FUN_100e0358(param_1,param_2,(uVar1 << 8 | uVar1 >> 8) - 3,uVar1,puVar5,iVar2,param_3);
  if ((((iVar2 == 0) && ((*pbVar4 & 0x7f) == 0x10)) && (param_1[0x1a] != 0)) &&
     (pcVar3 = *(code **)(param_1[0x1a] + 0xc), pcVar3 != (code *)0x0)) {
    (*pcVar3)(*param_1,*(undefined1 *)((int)param_1 + 0x62),8,0,0);
  }
  return;
}

