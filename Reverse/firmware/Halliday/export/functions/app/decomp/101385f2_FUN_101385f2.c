/* FUN_101385f2 @ 0x101385f2 */

undefined4 FUN_101385f2(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)FUN_10138392();
  if (*(char *)(*piVar3 + (uint)*(byte *)(piVar3 + 1)) == '\"') {
    *(byte *)(piVar3 + 1) = *(byte *)(piVar3 + 1) + 1;
    iVar4 = 0;
    while( true ) {
      bVar1 = *(byte *)(param_1 + 1);
      cVar2 = *(char *)(*param_1 + (uint)bVar1);
      if ((cVar2 == '\0') || (cVar2 == '\"')) break;
      if (iVar4 == param_3) {
        return 0xffffffc3;
      }
      *(byte *)(param_1 + 1) = bVar1 + 1;
      *(undefined1 *)(param_2 + iVar4) = *(undefined1 *)(*param_1 + (uint)bVar1);
      iVar4 = iVar4 + 1;
    }
    if (iVar4 != param_3) {
      *(undefined1 *)(param_2 + iVar4) = 0;
      if (*(char *)(*param_1 + (uint)*(byte *)(param_1 + 1)) == '\"') {
        *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) + 1;
        FUN_10138392(param_1);
        FUN_10138382();
        return 0;
      }
    }
  }
  return 0xffffffc3;
}

