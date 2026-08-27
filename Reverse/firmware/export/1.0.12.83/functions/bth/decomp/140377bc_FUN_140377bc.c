/* FUN_140377bc @ 0x140377bc */

void FUN_140377bc(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  uVar1 = DAT_14037864;
  iVar7 = 0;
  iVar6 = 0x19;
  iVar5 = 0;
  puVar8 = DAT_14037850;
  puVar9 = DAT_14037860;
  while( true ) {
    FUN_1402a6e8(4,0x441,DAT_14037858,uVar1,DAT_14037854,*puVar9,*puVar8);
    uVar3 = *puVar9;
    uVar4 = *puVar8;
    do {
      iVar2 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      FUN_14036aa8(&DAT_d0310000 + iVar2,(int)(short)uVar3,(int)(short)uVar4);
    } while (iVar5 <= iVar6);
    iVar7 = iVar7 + 1;
    if (iVar7 == 3) break;
    if (iVar7 == 1) {
      iVar6 = 0x33;
      iVar5 = 0x1a;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    else {
      iVar6 = 0x4e;
      iVar5 = 0x34;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  *(uint *)(DAT_1403785c + 0x250) = *(uint *)(DAT_1403785c + 0x250) & 0x7fffffff | 0x80000000;
  return;
}

