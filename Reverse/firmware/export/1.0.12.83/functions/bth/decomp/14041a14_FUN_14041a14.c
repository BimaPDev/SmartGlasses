/* FUN_14041a14 @ 0x14041a14 */

void FUN_14041a14(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar8;
  undefined4 uVar9;
  
  uVar8 = (uint)*(byte *)(param_1 + 5);
  uVar9 = DAT_14041a44;
  FUN_1402a6e8(4,0xb1,DAT_14041a50,DAT_14041a4c,DAT_14041a48,DAT_14041a44,uVar8);
  thunk_FUN_14043b00(0xa0);
  pcVar2 = DAT_1403d5dc;
  cVar1 = *(char *)(param_1 + 4);
  FUN_1405395c(cVar1,0);
  uVar3 = DAT_1403d5e4;
  uVar6 = DAT_1403d5e0;
  FUN_1402a6e8(4,0x6c,DAT_1403d5ec,DAT_1403d5e8,DAT_1403d5e4,DAT_1403d5e0,*pcVar2,uVar9,uVar8,
               unaff_r4,unaff_r5);
  if (*pcVar2 == cVar1) {
    iVar7 = 0;
  }
  else {
    FUN_1402a6e8(4,0x6c,DAT_1403d5ec,DAT_1403d5e8,uVar3,uVar6,pcVar2[0xd],uVar9,uVar8,unaff_r4,
                 unaff_r5);
    if (pcVar2[0xd] != cVar1) goto LAB_1403d59e;
    iVar7 = 1;
  }
  pcVar2[iVar7 * 0xd] = -1;
LAB_1403d59e:
  puVar5 = DAT_1403d5f4;
  puVar4 = DAT_1403d5f0;
  FUN_140e5718(*DAT_1403d5f0);
  FUN_1402ce98(0x1c,0);
  FUN_140e5608(*puVar4);
  uVar6 = *puVar5;
  *puVar4 = 0;
  FUN_140e5718(uVar6);
  FUN_140e5608(*puVar5);
  *puVar5 = 0;
  return;
}

