/* FUN_1406e4cc @ 0x1406e4cc */

void FUN_1406e4cc(int param_1,uint param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_1406e51c + (param_1 + 6) * 4);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406e528,0x283,DAT_1406e524);
  }
  iVar2 = *piVar3;
  if ((iVar2 != 0) && (*(byte *)(iVar2 + 0xd) == param_2)) {
    if (*(ushort *)(param_3 + 2) < 3) {
      uVar1 = *(undefined2 *)(DAT_1406e520 + (uint)*(ushort *)(param_3 + 2) * 2);
    }
    else {
      uVar1 = 0x4c;
    }
    FUN_1406e314(param_1,0,1,uVar1);
    return;
  }
  return;
}

