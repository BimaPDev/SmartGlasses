/* FUN_140825e8 @ 0x140825e8 */

void FUN_140825e8(int param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  char cVar10;
  
  uVar5 = FUN_1408ad70(*(undefined4 *)(param_1 + 8));
  uVar1 = *(ushort *)(param_2 + 8);
  bVar3 = *(byte *)(param_1 + 0x31);
  if (uVar1 < 0x80) {
    pbVar6 = (byte *)FUN_1407554c(param_2,3);
    pbVar6[2] = (char)uVar1 << 1 | 1;
  }
  else {
    pbVar6 = (byte *)FUN_1407554c(param_2,4);
    pbVar6[2] = (char)uVar1 << 1;
    pbVar6[3] = (byte)(uVar1 >> 7);
  }
  pbVar6[1] = 0xef;
  *pbVar6 = bVar3;
  pbVar7 = (byte *)FUN_14075458(param_2,1);
  iVar8 = FUN_14082098();
  *pbVar7 = ~*(byte *)(iVar8 + (uint)(*(byte *)(iVar8 + (uint)(byte)~*pbVar6) ^ pbVar6[1]));
  *(short *)(param_1 + 0x1e) = *(short *)(param_1 + 0x1e) + 1;
  if ((*(char *)(param_1 + 0x3b) != '\0') && (iVar8 = FUN_140786b4(), 5 < iVar8)) {
    cVar10 = *(char *)(param_1 + 0x3b) + -1;
    *(char *)(param_1 + 0x3b) = cVar10;
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x44,DAT_140826ec,uVar5,*(undefined1 *)(param_1 + 0x30),cVar10,
                 *(undefined2 *)(param_2 + 8));
  }
  FUN_14074c04(param_2,param_1 + 0xc);
  uVar2 = *(undefined2 *)(param_1 + 0x1e);
  uVar4 = *(undefined1 *)(param_1 + 0x3b);
  uVar9 = FUN_140786b4();
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x44,DAT_140826e8,uVar5,uVar2,uVar4,uVar9);
}

