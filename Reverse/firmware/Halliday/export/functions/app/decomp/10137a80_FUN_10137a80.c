/* FUN_10137a80 @ 0x10137a80 */

void FUN_10137a80(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  iVar1 = FUN_10137964(*(int *)(param_1 + 0x30) + 0x97,param_2,0x20,8);
  puVar2 = (undefined1 *)FUN_100c1fe4(iVar1 + 8);
  *puVar2 = *(undefined1 *)(param_1 + 0x40);
  *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(param_1 + 0x3e);
  if ((*(char *)(param_1 + 0x41) == '\x05') &&
     ((*(byte *)(*(int *)(param_1 + 0x30) + 0x98) & 0xfd) == 0)) {
    puVar2[7] = *(undefined1 *)(param_1 + 0x42);
    if (param_2 == 0) {
      uVar4 = 0xe0;
    }
    else {
      uVar4 = 0xf0;
    }
  }
  else {
    uVar4 = 0;
    puVar2[7] = 0;
  }
  puVar2[1] = uVar4;
  puVar2[6] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  uVar3 = FUN_100df30c(2,*(undefined4 *)(iVar1 + 8));
  FUN_101376b2(iVar1,uVar3);
  FUN_101376b8(*(undefined4 *)(param_1 + 0x30),iVar1,1);
  return;
}

