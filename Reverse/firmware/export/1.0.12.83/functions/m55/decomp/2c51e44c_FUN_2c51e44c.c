/* FUN_2c51e44c @ 0x2c51e44c */

void FUN_2c51e44c(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x18))();
  iVar4 = (**(code **)(**(int **)(param_1 + 8) + 0x30))(*(int **)(param_1 + 8));
  if ((iVar3 == 0) || (iVar4 < 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c51e4ac,0x12d,DAT_2c51e4b0,DAT_2c51e4a8,DAT_2c51e4a4);
  }
  cVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x34))(*(int **)(param_1 + 8),iVar3);
  cVar1 = (char)iVar4;
  iVar3 = *(int *)(param_1 + 0x24);
  if (('\0' < cVar1) && (cVar2 <= cVar1)) {
    *(char *)(iVar3 + 0x2d) = cVar1;
    *(char *)(iVar3 + 0x2e) = cVar2;
    FUN_2c607df0();
    return;
  }
  *(undefined1 *)(iVar3 + 0x2d) = 0;
  *(undefined1 *)(iVar3 + 0x2e) = 0;
  FUN_2c607df0();
  return;
}

