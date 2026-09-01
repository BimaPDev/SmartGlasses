/* FUN_10080444 @ 0x10080444 */

undefined4 FUN_10080444(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int extraout_r2;
  uint uVar4;
  uint extraout_r3;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar2 = DAT_10080498;
  uVar4 = 0x10d8;
  iVar3 = *(int *)(param_1 + 0xc);
  uVar5 = (uint)*(ushort *)(DAT_10080498 + 8);
  uVar1 = *(ushort *)(iVar3 + 0x10d8);
  iVar6 = DAT_10080498 + 0xe;
  while( true ) {
    if (uVar1 <= uVar5) {
      return 0xffffffff;
    }
    uVar7 = FUN_10121e28(param_1,uVar5,iVar3,uVar4,param_4);
    uVar4 = extraout_r3;
    if (((int)uVar7 == 0) && (uVar4 = (uint)*(ushort *)(iVar6 + uVar5 * 2), uVar4 == 0xffff)) break;
    uVar5 = uVar5 + 1;
    iVar3 = extraout_r2;
  }
  *(undefined2 *)(iVar2 + uVar5 * 2 + 0xe) = 0xfffd;
  *(short *)(iVar2 + 8) = (short)uVar5;
  *(short *)(iVar2 + 4) = *(short *)(iVar2 + 4) + -1;
  return (int)((ulonglong)uVar7 >> 0x20);
}

