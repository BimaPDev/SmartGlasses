/* FUN_10083dc8 @ 0x10083dc8 */

undefined4 FUN_10083dc8(undefined1 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  char cVar10;
  undefined4 *puVar11;
  
  puVar3 = DAT_10083e30;
  DAT_10083e30[5] = 0;
  puVar3[6] = 0;
  puVar4 = DAT_10083e34;
  *(undefined1 *)((int)puVar3 + 0x17) = param_1;
  puVar8 = puVar4;
  puVar5 = puVar3;
  do {
    puVar11 = puVar5;
    puVar7 = puVar8;
    uVar6 = puVar7[1];
    puVar8 = puVar7 + 2;
    *puVar11 = *puVar7;
    puVar11[1] = uVar6;
    puVar5 = puVar11 + 2;
  } while (puVar8 != puVar4 + 4);
  bVar2 = false;
  uVar1 = *(undefined1 *)(puVar7 + 3);
  puVar11[2] = *puVar8;
  *(undefined1 *)(puVar11 + 3) = uVar1;
  iVar9 = 0;
  do {
    cVar10 = (char)iVar9;
    if (*(char *)((int)puVar3 + iVar9 * 2 + 1) == '\x7f') {
      if (!bVar2) goto LAB_10083e08;
      break;
    }
    iVar9 = iVar9 + 1;
    cVar10 = cVar10 + '\x01';
    bVar2 = true;
  } while (iVar9 != 10);
  *(char *)((int)puVar3 + 0x16) = cVar10;
LAB_10083e08:
  puVar3[6] = 0x7f;
  if (*(char *)((int)puVar3 + 0x16) == '\0') {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = 0;
    *(undefined1 *)((int)puVar3 + 0x15) = 1;
  }
  return uVar6;
}

