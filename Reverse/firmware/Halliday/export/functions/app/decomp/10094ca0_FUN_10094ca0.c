/* FUN_10094ca0 @ 0x10094ca0 */

int FUN_10094ca0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = DAT_10094cd8;
  iVar5 = 0;
  for (iVar4 = 0; (iVar5 != param_2 && (*(char *)(param_1 + iVar4) != '\0'));
      iVar4 = iVar4 + (uint)bVar3) {
    iVar2 = (*(code *)*puVar1)(param_1 + iVar4);
    bVar3 = (byte)iVar2;
    if (iVar2 == 0) {
      bVar3 = 1;
    }
    iVar5 = iVar5 + 1;
  }
  return iVar4;
}

