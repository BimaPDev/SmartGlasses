/* FUN_1406e428 @ 0x1406e428 */

void FUN_1406e428(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_1406e4b0;
  iVar3 = *(int *)(DAT_1406e4b0 + (param_1 + 6) * 4);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406e4b8,0x263,DAT_1406e4bc);
  }
  if (*(short *)(param_2 + 8) != 0) {
    FUN_14073a6c(iVar3 + 8,param_2);
    FUN_14074168(param_2);
    return;
  }
  FUN_14073a58(iVar3);
  FUN_14074168(param_2);
  iVar2 = *(int *)(iVar2 + (param_1 + 6) * 4);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406e4b8,0x1a2,DAT_1406e4b4);
  }
  FUN_140587d4(iVar2 + 0x10);
  bVar1 = *(byte *)(iVar3 + 0x1a);
  if ((bVar1 & 1) != 0) {
    *(byte *)(iVar3 + 0x1a) = bVar1 | 2;
    return;
  }
  FUN_1406e314(param_1,bVar1 & 1,bVar1 & 1);
  return;
}

