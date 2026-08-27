/* FUN_1404a5f0 @ 0x1404a5f0 */

undefined4 * FUN_1404a5f0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  
  puVar7 = DAT_1404a640;
  iVar6 = DAT_1404a63c;
  puVar5 = DAT_1404a638;
  uVar1 = *(undefined1 *)(DAT_1404a63c + 0xda);
  uVar2 = *(undefined1 *)(DAT_1404a63c + 0xdb);
  uVar3 = *(undefined1 *)(DAT_1404a63c + 0xd8);
  uVar8 = DAT_1404a640[1];
  uVar9 = DAT_1404a640[2];
  uVar10 = DAT_1404a640[3];
  puVar11 = DAT_1404a640 + 4;
  *DAT_1404a638 = *DAT_1404a640;
  puVar5[1] = uVar8;
  puVar5[2] = uVar9;
  puVar5[3] = uVar10;
  uVar8 = puVar7[5];
  uVar9 = puVar7[6];
  uVar10 = puVar7[7];
  puVar5[4] = *puVar11;
  puVar5[5] = uVar8;
  puVar5[6] = uVar9;
  uVar4 = *(undefined1 *)(iVar6 + 0xde);
  *(short *)(puVar5 + 7) = (short)uVar10;
  FUN_140dc3ac((int)puVar5 + 0x1d,DAT_1404a644,uVar4,*(undefined1 *)(iVar6 + 0xd9),uVar3,uVar2,uVar1
              );
  return puVar5;
}

