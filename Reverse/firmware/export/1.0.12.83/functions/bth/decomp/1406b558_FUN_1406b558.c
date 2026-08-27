/* FUN_1406b558 @ 0x1406b558 */

undefined4 FUN_1406b558(uint param_1,undefined4 param_2,uint param_3,uint param_4)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  int *piVar4;
  ushort *puVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  
  iVar6 = DAT_1406b4b0;
  if (param_3 == 0) {
    return 0x40;
  }
  if (param_4 < param_3) {
    return 0x40;
  }
  if (1 < param_1) {
    return 0x43;
  }
  iVar10 = *(int *)(DAT_1406b4b0 + (param_1 + 0x22) * 4);
  if (iVar10 == 0) {
    return 0x43;
  }
  uVar8 = param_4;
  piVar4 = (int *)FUN_14066108(param_2);
  if (((piVar4 == (int *)0x0) || (*(char *)((int)piVar4 + 9) != '\0')) ||
     (*(int *)(*piVar4 + 0x28) == 0)) {
    return 0x42;
  }
  iVar6 = *(int *)(iVar6 + (param_1 + 0x22) * 4);
  cVar1 = *(char *)(iVar6 + 0x4c);
  if (cVar1 != '\0') {
    puVar5 = *(ushort **)(iVar6 + 0x48);
    puVar7 = puVar5 + (short)(ushort)(byte)(cVar1 - 1) * 3 + 3;
    puVar9 = (ushort *)0x0;
    do {
      if (*puVar5 == 0) {
        if (puVar9 == (ushort *)0x0) {
          puVar9 = puVar5;
        }
      }
      else if ((*puVar5 <= param_4) && (param_3 <= puVar5[1])) {
        return 0x43;
      }
      puVar5 = puVar5 + 3;
    } while (puVar7 != puVar5);
    if (puVar9 != (ushort *)0x0) goto LAB_1406b3fa;
  }
  if (*(char *)(iVar10 + 0x4d) != *(char *)(iVar10 + 0x4c)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406b4b8,0x206,DAT_1406b4b4,uVar8);
  }
  bVar3 = *(char *)(iVar10 + 0x4c) + 0xb;
  *(byte *)(iVar10 + 0x4c) = bVar3;
  iVar6 = FUN_14073fdc((uint)bVar3 * 6,0);
  if (iVar6 == 0) {
    return 0x4b;
  }
  if (*(int *)(iVar10 + 0x48) != 0) {
    FUN_140e5278(iVar6,*(int *)(iVar10 + 0x48),(uint)*(byte *)(iVar10 + 0x4d) * 6);
    FUN_14074168(*(undefined4 *)(iVar10 + 0x48));
  }
  bVar3 = *(byte *)(iVar10 + 0x4d);
  uVar8 = (uint)bVar3;
  *(int *)(iVar10 + 0x48) = iVar6;
  puVar9 = (ushort *)(iVar6 + uVar8 * 6);
  if (uVar8 < *(byte *)(iVar10 + 0x4c)) {
    while( true ) {
      uVar2 = (ushort)bVar3;
      *(undefined2 *)(iVar6 + (short)uVar2 * 6) = 0;
      bVar3 = (char)uVar8 + 1;
      *(undefined1 *)(*(int *)(iVar10 + 0x48) + (short)uVar2 * 6 + 4) = 0xff;
      uVar8 = (uint)bVar3;
      if (*(byte *)(iVar10 + 0x4c) <= uVar8) break;
      iVar6 = *(int *)(iVar10 + 0x48);
    }
  }
LAB_1406b3fa:
  if (*puVar9 != 0) {
    return 0x43;
  }
  *puVar9 = (ushort)param_3;
  puVar9[1] = (ushort)param_4;
  *(char *)(puVar9 + 2) = (char)param_2;
  *(char *)(iVar10 + 0x4d) = *(char *)(iVar10 + 0x4d) + '\x01';
  return 0;
}

