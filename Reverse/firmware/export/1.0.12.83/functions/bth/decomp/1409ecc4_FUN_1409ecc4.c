/* FUN_1409ecc4 @ 0x1409ecc4 */

undefined4 FUN_1409ecc4(void)

{
  short sVar1;
  ushort uVar2;
  undefined2 uVar3;
  short *psVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  
  FUN_1409ebdc();
  piVar5 = DAT_1409edd0;
  psVar4 = DAT_1409edcc;
  sVar1 = *DAT_1409edcc;
  *DAT_1409edd0 = (int)DAT_1409edcc;
  if (sVar1 == -0x4580) {
    uVar2 = psVar4[1];
    if (uVar2 - 1 < 2) {
      *DAT_1409edd4 = (char)uVar2;
      if (uVar2 == 1) {
        iVar13 = *(int *)(psVar4 + 2);
        iVar11 = FUN_140a2edc(0,psVar4 + 4,0x140);
        puVar6 = DAT_1409edd8;
        if (iVar13 == iVar11) {
          iVar11 = *piVar5;
          uVar3 = *(undefined2 *)(iVar11 + 0x110);
          *DAT_1409edd8 = *(undefined4 *)(iVar11 + 0x10c);
          *(undefined2 *)(puVar6 + 1) = uVar3;
          uVar9 = DAT_1409ede4;
          puVar6 = DAT_1409ede0;
          uVar7 = DAT_1409eddc;
          uVar3 = *(undefined2 *)(iVar11 + 0x118);
          *DAT_1409ede0 = *(undefined4 *)(iVar11 + 0x114);
          *(undefined2 *)(puVar6 + 1) = uVar3;
          FUN_1402a6e8(4,0x9d,DAT_1409ede8,DAT_1409edec,uVar9,uVar7,iVar11 + 0x10);
          goto LAB_1409ed3c;
        }
      }
      else {
        if (0x1000 < *(int *)(psVar4 + 0x96) + 0x134U) {
          FUN_1402a6e8(4,0xa5,DAT_1409ede8,DAT_1409edec,DAT_1409edf4,*(int *)(psVar4 + 0x96));
          return 0xffffffff;
        }
        iVar13 = *(int *)(psVar4 + 0x98);
        iVar11 = FUN_140a2edc(0,psVar4 + 0x9a);
        puVar8 = DAT_1409ede0;
        uVar7 = DAT_1409eddc;
        puVar6 = DAT_1409edd8;
        if (iVar13 == iVar11) {
          iVar11 = *piVar5;
          uVar3 = *(undefined2 *)(iVar11 + 0x23c);
          uVar12 = *(undefined4 *)(iVar11 + 0x238);
          *DAT_1409edd8 = uVar12;
          uVar9 = DAT_1409ede4;
          *(undefined2 *)(puVar6 + 1) = uVar3;
          uVar10 = DAT_1409ede8;
          *(undefined2 *)(puVar8 + 1) = uVar3;
          *puVar8 = uVar12;
          FUN_1402a6e8(4,0xb8,uVar10,DAT_1409edec,uVar9,uVar7,iVar11 + 0x13c);
LAB_1409ed3c:
          FUN_1402a9fc(DAT_1409edf0,1,6,DAT_1409edd8);
          FUN_1402a9fc(DAT_1409edf0,1,6,DAT_1409ede0);
          return 0;
        }
      }
    }
  }
  *piVar5 = 0;
  return 0xffffffff;
}

