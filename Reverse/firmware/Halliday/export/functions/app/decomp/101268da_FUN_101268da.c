/* FUN_101268da @ 0x101268da */

void FUN_101268da(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_10126fd2();
  for (iVar2 = 0; iVar2 != iVar1; iVar2 = iVar2 + 1) {
    uVar3 = *(undefined4 *)(**(int **)(param_1 + 8) + iVar2 * 4);
    FUN_10125af4(uVar3);
    FUN_10086f50(uVar3,0x2a,0);
    FUN_10125af4(uVar3);
    FUN_101268da(uVar3);
  }
  return;
}

