/* FUN_1000ad34 @ 0x1000ad34 */

void FUN_1000ad34(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar1 = DAT_1000ad98;
  cVar4 = '\b';
  iVar5 = *DAT_1000ad94;
  iVar6 = *(byte *)(DAT_1000ad98 + 0xc) + 8;
  iVar7 = DAT_1000ad98 + iVar6 * 8;
  do {
    bVar8 = *(char *)(iVar7 + 4) == '\x01';
    if (bVar8) {
      *param_1 = *(undefined4 *)(iVar1 + iVar6 * 8);
    }
    cVar3 = *(char *)(iVar1 + 0xc);
    if (bVar8) {
      *(undefined1 *)(iVar7 + 4) = 0;
    }
    cVar3 = cVar3 + '\x01';
    if (cVar3 < '\b') {
      *(char *)(iVar1 + 0xc) = cVar3;
    }
    else {
      *(undefined1 *)(iVar1 + 0xc) = 0;
    }
    if (bVar8) goto LAB_1000ad8a;
    cVar4 = cVar4 + -1;
  } while (cVar4 != '\0');
  uVar2 = 0xffffffff;
  while (*DAT_1000ad94 != iVar5) {
    FUN_1013cdc0(uVar2);
LAB_1000ad8a:
    uVar2 = 0;
  }
  return;
}

