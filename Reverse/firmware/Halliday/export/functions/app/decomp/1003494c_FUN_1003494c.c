/* FUN_1003494c @ 0x1003494c */

void FUN_1003494c(undefined4 param_1,int *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar8 = *DAT_100349e8;
  uVar10 = (DAT_100349ec - DAT_100349f0) * 0x20 & 0xff00;
  if (param_2 != (int *)0x0) goto LAB_1003498c;
  FUN_100a5b78(uVar10 | 0x1960011,DAT_100349f8,DAT_100349f4);
  do {
    uVar5 = 0xffffffff;
    while( true ) {
      if (*DAT_100349e8 == iVar8) {
        return;
      }
      param_1 = FUN_1013cdc0(uVar5);
LAB_1003498c:
      iVar6 = FUN_100348d0();
      if (iVar6 == 0) break;
      uVar2 = *(ushort *)(iVar6 + 8);
      uVar3 = *(ushort *)(iVar6 + 10);
      uVar4 = *(undefined2 *)(iVar6 + 0xc);
      *param_2 = iVar6;
      param_2[2] = (uint)uVar2;
      *(undefined2 *)(param_2 + 3) = uVar4;
      param_2[1] = (uint)uVar3;
      bVar1 = *(byte *)(iVar6 + 6);
      *(byte *)((int)param_2 + 0xe) = bVar1;
      uVar9 = (uint)uVar2 * (uint)*(ushort *)(iVar6 + 2);
      sVar7 = (ushort)bVar1 * *(short *)(iVar6 + 4);
      *(short *)(param_2 + 4) = (short)uVar9;
      *(short *)((int)param_2 + 0x12) = sVar7;
      FUN_100a5b78(uVar10 | 0x1aa0035,DAT_100349f8,DAT_10034a04,param_1,(uint)uVar3,(ushort)bVar1,
                   uVar9 & 0xffff,sVar7);
      uVar5 = 0;
    }
    FUN_100a5b78(DAT_100349fc | uVar10,DAT_100349f8,DAT_10034a00,param_1);
  } while( true );
}

