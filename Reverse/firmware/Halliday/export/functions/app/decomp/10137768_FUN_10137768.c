/* FUN_10137768 @ 0x10137768 */

void FUN_10137768(int param_1,char param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_1013401c(0,0,0xffffffff,0xffffffff);
  pbVar2 = (byte *)FUN_100c1fe4(iVar1 + 8,3);
  *pbVar2 = param_2 << 2 | (*(char *)(param_1 + 0x97) == '\0') << 1 | 1;
  pbVar2[1] = 0x1f;
  pbVar2[2] = 1;
  uVar3 = FUN_100df30c(3,*(undefined4 *)(iVar1 + 8));
  FUN_101376b2(iVar1,uVar3);
  FUN_101376b8(param_1,iVar1,1);
  return;
}

