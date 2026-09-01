/* FUN_1001aa1c @ 0x1001aa1c */

void FUN_1001aa1c(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r1;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  iVar1 = DAT_1001aaf0;
  iVar6 = *DAT_1001aaec;
  FUN_1011dbf4(param_1 + 0x3c,0xffffffff,param_3,0);
  uVar8 = param_3;
  do {
    uVar3 = (uint)*(byte *)(param_1 + 8);
    if (uVar3 - *(byte *)(param_1 + 7) < 8) goto LAB_1001aa72;
    FUN_1001a900(param_1 + 0x1c);
    do {
      FUN_10113e2c(param_1 + 0x3c);
      if (*DAT_1001aaec == iVar6) {
        return;
      }
      FUN_1013cdc0(param_3 - uVar8);
      uVar3 = extraout_r1;
LAB_1001aa72:
      uVar2 = uVar3 & 7;
      iVar10 = param_1 + uVar2 * 2;
      uVar11 = (uint)*(ushort *)(iVar10 + 10);
      uVar9 = 0x1f8 - uVar11 & 0xffff;
      uVar4 = uVar9;
      if (uVar8 <= uVar9) {
        uVar4 = uVar8;
      }
      uVar7 = uVar4 & 0xffff;
      if (uVar11 == 0) {
        *(char *)(iVar1 + uVar2 * 0x200) = (char)param_4;
LAB_1001aab8:
        FUN_1011ea40(uVar11 + uVar2 * 0x200 + 8 + iVar1,param_2);
        *(short *)(iVar10 + 10) = *(short *)(iVar10 + 10) + (short)uVar4;
        cVar5 = (char)uVar7;
        if (uVar9 == uVar7) {
          cVar5 = *(char *)(param_1 + 8) + '\x01';
        }
        param_2 = param_2 + uVar4;
        uVar8 = uVar8 - uVar4;
        if (uVar9 == uVar7) {
          *(char *)(param_1 + 8) = cVar5;
        }
      }
      else {
        if (*(byte *)(iVar1 + uVar2 * 0x200) == param_4) goto LAB_1001aab8;
        *(char *)(param_1 + 8) = (char)uVar3 + '\x01';
      }
    } while (uVar8 == 0);
  } while( true );
}

