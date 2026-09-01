/* FUN_1007fc00 @ 0x1007fc00 */

void FUN_1007fc00(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  byte *pbVar4;
  
  iVar1 = DAT_1007fc58;
  iVar3 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar3 + 0x110c) == -1) {
    *(undefined1 *)(iVar3 + 0x110c) = 0;
    pbVar4 = *(byte **)(iVar3 + 0x74);
    for (puVar2 = (undefined1 *)(iVar3 + 0x1104);
        puVar2 + (iVar1 - iVar3) < *(undefined1 **)((uint)*pbVar4 * 0x1c + iVar3 + 0x3c);
        puVar2 = puVar2 + 1) {
      *puVar2 = 0;
    }
    *(undefined1 *)(iVar3 + 0x110c) = 1;
  }
  else {
    *(char *)(iVar3 + 0x110c) = *(char *)(iVar3 + 0x110c) + '\x01';
  }
  *(undefined1 *)(param_2 + iVar3 + 0x1104) = *(undefined1 *)(iVar3 + 0x110c);
  return;
}

