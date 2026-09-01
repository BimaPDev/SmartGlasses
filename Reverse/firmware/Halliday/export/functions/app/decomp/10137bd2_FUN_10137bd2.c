/* FUN_10137bd2 @ 0x10137bd2 */

void FUN_10137bd2(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *param_1;
  iVar5 = param_1[0x24];
  while (iVar3 = iVar5, iVar3 != 0) {
    iVar5 = *(int *)(iVar3 + 0x38);
    if (*(char *)(iVar3 + 0x41) == '\x02') {
      if (((param_2 == 0) && (*(char *)(iVar4 + 0xb) != '\0')) &&
         (*(byte *)(iVar3 + 0x3c) <= *(byte *)(iVar4 + 9))) {
        if (*(char *)(iVar3 + 0x3d) == '\0') {
          FUN_101377c4(param_1,*(undefined1 *)(iVar3 + 0x40));
          FUN_10137a44(iVar3);
        }
        else {
          uVar1 = *(ushort *)(iVar3 + 0x3e);
          uVar2 = *(ushort *)(param_1 + 0x25);
          if (uVar1 <= *(ushort *)(param_1 + 0x25)) {
            uVar2 = uVar1;
          }
          *(ushort *)(iVar3 + 0x3e) = uVar2;
          *(undefined1 *)(iVar3 + 0x41) = 5;
          FUN_10137a80(iVar3,1,uVar1,uVar2,param_4);
        }
      }
      else {
        FUN_10137b70(iVar3);
      }
    }
  }
  return;
}

