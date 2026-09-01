/* FUN_101379fc @ 0x101379fc */

void FUN_101379fc(int param_1,undefined4 param_2,byte param_3)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_10137964(*(int *)(param_1 + 0x30) + 0x97,param_2,0x38,2);
  pbVar3 = (byte *)FUN_100c1fe4(iVar2 + 8,2);
  cVar1 = *(char *)(param_1 + 0x40);
  pbVar3[1] = param_3;
  *pbVar3 = cVar1 << 2 | 3;
  uVar4 = FUN_100df30c(2,*(undefined4 *)(iVar2 + 8));
  FUN_101376b2(iVar2,uVar4);
  FUN_101376b8(*(undefined4 *)(param_1 + 0x30),iVar2,1);
  return;
}

