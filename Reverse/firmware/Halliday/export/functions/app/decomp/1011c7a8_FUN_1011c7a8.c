/* FUN_1011c7a8 @ 0x1011c7a8 */

void FUN_1011c7a8(int param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  uint local_38;
  uint uStack_34;
  
  iVar5 = 0;
  iVar4 = 0;
  uVar3 = 0;
  while( true ) {
    lVar2 = CONCAT44(iVar4,uVar3);
    if (param_4 <= (char)iVar5) break;
    iVar6 = 0;
    iVar4 = 0;
    puVar8 = (uint *)(param_3 + iVar5 * 4);
    do {
      lVar1 = (ulonglong)*puVar8 * (ulonglong)*(uint *)(param_2 + iVar6 * 4);
      uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
      local_38 = (uint)lVar2;
      uStack_34 = (uint)((ulonglong)lVar2 >> 0x20);
      lVar2 = lVar1 + lVar2;
      uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + (uint)(CARRY4(uVar10,uStack_34) ||
                            CARRY4(uVar10 + uStack_34,(uint)CARRY4((uint)lVar1,local_38)));
      puVar8 = puVar8 + -1;
    } while ((int)(char)iVar6 <= (int)(char)iVar5);
    *(int *)(param_1 + iVar5 * 4) = (int)lVar2;
    iVar5 = iVar5 + 1;
  }
  cVar9 = '\0';
  while( true ) {
    lVar2 = CONCAT44(iVar4,uVar3);
    iVar5 = (int)(char)(cVar9 + (char)param_4);
    if (param_4 * 2 + -1 <= iVar5) break;
    iVar6 = (int)(char)(cVar9 + '\x01');
    iVar4 = 0;
    puVar8 = (uint *)(param_2 + iVar6 * 4);
    puVar11 = (uint *)(param_3 + (iVar5 - iVar6) * 4);
    while( true ) {
      uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar10 = (uint)lVar2;
      if (param_4 <= iVar6) break;
      lVar1 = (ulonglong)*puVar8 * (ulonglong)*puVar11;
      uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
      lVar2 = lVar1 + lVar2;
      iVar4 = iVar4 + (uint)(CARRY4(uVar7,uVar3) ||
                            CARRY4(uVar7 + uVar3,(uint)CARRY4((uint)lVar1,uVar10)));
      iVar6 = (int)(char)((char)iVar6 + '\x01');
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + -1;
    }
    *(uint *)(param_1 + iVar5 * 4) = uVar10;
    cVar9 = cVar9 + '\x01';
  }
  *(uint *)(param_1 + param_4 * 8 + -4) = uVar3;
  return;
}

