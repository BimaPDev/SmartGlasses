/* FUN_2c4b4fd4 @ 0x2c4b4fd4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4b4fd4(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (*(char *)(param_1 + 4) != '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0xc);
    uVar1 = *(undefined2 *)(param_2 + 0xe);
    param_1[6] = param_2;
    *(undefined2 *)((int)param_1 + 0xe) = uVar1;
  }
  sVar6 = *(short *)(param_2 + 0x16) - *(short *)(param_2 + 0x14);
  *(short *)(param_2 + 0x14) = *(short *)(param_2 + 0x16);
  *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_2 + 0x19);
  if (sVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x37,DAT_2c4b5118,DAT_2c4b5114,_LAB_2c4b511c,*param_1,sVar6);
  }
  uVar2 = *(ushort *)(param_2 + 0x10);
  uVar8 = (uint)uVar2;
  uVar11 = (uint)*(ushort *)(param_2 + 0x12);
  uVar4 = (uint)*(ushort *)((int)param_1 + 0xe);
  uVar7 = uVar8;
  if (uVar8 < uVar11) {
    uVar7 = uVar11;
  }
  if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x3d,DAT_2c4b5118,DAT_2c4b5114,DAT_2c4b5110,*param_1,uVar8,uVar11,uVar4);
  }
  puVar5 = (ushort *)param_1[2];
  uVar7 = (uint)*(ushort *)(param_1 + 3);
  uVar10 = (uint)puVar5[uVar8];
  if (uVar7 < uVar10) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x43,DAT_2c4b5118,DAT_2c4b5114,DAT_2c4b5120,*param_1,uVar10,uVar7,uVar8);
  }
  if (uVar8 != uVar11) {
    while( true ) {
      uVar8 = uVar8 + 1;
      if (uVar8 < uVar4) {
        puVar5 = puVar5 + uVar8;
      }
      else {
        uVar8 = 0;
      }
      uVar9 = (uint)*puVar5;
      if (uVar7 < uVar9) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x4e,DAT_2c4b5118,DAT_2c4b5114,DAT_2c4b5124,*param_1,uVar9,uVar7,uVar8);
      }
      if (uVar9 <= uVar7) {
        uVar7 = uVar9;
      }
      if (uVar10 < uVar7) {
        uVar7 = uVar9 - uVar10;
      }
      else {
        uVar10 = 0;
        uVar7 = uVar9;
      }
      if (((uVar7 != 0) &&
          ((iVar3 = FUN_2c674288(), iVar3 == 0 ||
           (iVar3 = FUN_2c674158(param_1[1] + uVar10,uVar7), iVar3 == 0)))) || (uVar8 == uVar11))
      break;
      uVar4 = (uint)*(ushort *)((int)param_1 + 0xe);
      puVar5 = (ushort *)param_1[2];
      uVar7 = (uint)*(ushort *)(param_1 + 3);
      uVar10 = uVar9;
    }
    uVar2 = (ushort)uVar8;
  }
  *(ushort *)(param_2 + 0x10) = uVar2;
  return;
}

