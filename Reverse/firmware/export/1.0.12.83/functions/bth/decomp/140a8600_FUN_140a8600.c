/* FUN_140a8600 @ 0x140a8600 */

undefined4
FUN_140a8600(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            undefined4 param_7)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  
  piVar4 = DAT_140a8818;
  piVar3 = DAT_140a8814;
  FUN_1402a6e8(4,0x2ac,DAT_140a87d0,DAT_140a87cc,DAT_140a87c8,DAT_140a87c4);
  *piVar3 = param_1;
  *piVar4 = param_2;
  piVar5 = DAT_140a881c;
  piVar2 = DAT_140a87d8;
  if (param_5 == 0) {
    FUN_1402a6e8(4,0x2b9,DAT_140a87d0,DAT_140a87cc,DAT_140a8800,DAT_140a87c4);
    *piVar2 = param_3;
    *piVar5 = param_4;
    FUN_140a2224(param_6,param_7);
    iVar6 = FUN_140a2394(1,0);
    *DAT_140a87dc = iVar6;
    if (iVar6 == 0) {
      param_3 = 0;
      param_4 = 0;
      goto LAB_140a87a0;
    }
LAB_140a876c:
    *DAT_140a87e4 = 0;
    *DAT_140a87e8 = 0;
    goto LAB_140a86c0;
  }
  lVar1 = (longlong)DAT_140a87d4;
  *DAT_140a881c =
       param_4 * ((int)((longlong)DAT_140a87d4 * (longlong)param_2 >> 0x26) - (param_2 >> 0x1f));
  *piVar2 = param_3 * ((int)(lVar1 * param_1 >> 0x26) - (param_1 >> 0x1f));
  FUN_140a2224(param_6,param_7);
  iVar6 = FUN_140a2394(1,0);
  *DAT_140a87dc = iVar6;
  if (iVar6 == 0) {
LAB_140a87a0:
    FUN_1402a6e8(4,0x187,DAT_140a87d0,DAT_140a87cc,DAT_140a8810,DAT_140a880c);
  }
  if (param_5 == param_3) {
    if (param_5 == param_4) goto LAB_140a876c;
    uVar7 = 0;
    uVar8 = uVar7;
LAB_140a868c:
    *DAT_140a87e4 = (char)uVar7;
    *DAT_140a87e8 = 1;
    uVar7 = DAT_140a87ec;
  }
  else {
    if (param_5 != param_4) {
      uVar7 = 1;
      uVar8 = DAT_140a87e0;
      goto LAB_140a868c;
    }
    uVar7 = 0;
    *DAT_140a87e4 = 1;
    *DAT_140a87e8 = 0;
    uVar8 = DAT_140a87e0;
  }
  uVar8 = FUN_140e5228(param_5 * ((int)((longlong)DAT_140a87d4 * (longlong)param_1 >> 0x26) -
                                 (param_1 >> 0x1f)),1,*piVar2,2,2,0,uVar8,uVar7);
  *DAT_140a87f0 = uVar8;
LAB_140a86c0:
  FUN_140a8590(*piVar3,*piVar2);
  uVar7 = DAT_140a87fc;
  uVar8 = DAT_140a87f4;
  iVar6 = *piVar5;
  iVar10 = *piVar4;
  FUN_1402a6e8(4,0x261,DAT_140a87d0,DAT_140a87cc,DAT_140a87f8,DAT_140a87f4,iVar10,iVar6);
  FUN_1402a6e8(4,0x2a0,DAT_140a87d0,DAT_140a87cc,uVar7,uVar8);
  uVar9 = FUN_1402d004();
  if (uVar9 < 6) {
    FUN_140b4344(0x14,6);
    iVar10 = 6;
    FUN_1402a6e8(4,0x33f,DAT_140a87d0,DAT_140a87cc,DAT_140a8808,DAT_140a8804,6,iVar6);
  }
  FUN_1402a6e8(4,0x350,DAT_140a87d0,DAT_140a87cc,uVar7,DAT_140a87c4,iVar10,iVar6);
  return 0;
}

