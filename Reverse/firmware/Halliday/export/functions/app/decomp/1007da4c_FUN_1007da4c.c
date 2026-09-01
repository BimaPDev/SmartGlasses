/* FUN_1007da4c @ 0x1007da4c */

undefined4 FUN_1007da4c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  piVar9 = (int *)param_1[3];
  piVar11 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  local_1c = thunk_FUN_101204b6();
  iVar3 = FUN_1007da08(param_1,&local_1c,piVar9);
  if (iVar3 == 0) {
    iVar3 = *piVar9;
    uVar8 = (uint)*(ushort *)(iVar3 + 0x10);
    uVar5 = uVar8;
    if (0x3ff < uVar8) {
      uVar5 = 0x400;
    }
    *(short *)((int)piVar9 + 0x10da) = (short)uVar5;
    if (uVar8 < 0x400) {
      iVar10 = 0x14;
    }
    else {
      iVar10 = 0x28;
    }
    *(char *)((int)piVar9 + 0x10d6) = (char)iVar10;
    uVar2 = *(ushort *)(iVar3 + 0x12);
    *(ushort *)(piVar9 + 0x30) = uVar2;
    *(ushort *)((int)piVar9 + 0xc2) = *(short *)(iVar3 + 0xe) * (ushort)*(byte *)(iVar3 + 9);
    bVar1 = *(byte *)(iVar3 + 10);
    if (uVar8 != 0) {
      *(char *)((int)piVar9 + 0xc5) =
           (char)(((ulonglong)uVar8 / (ulonglong)bVar1) / (ulonglong)uVar5);
    }
    *(byte *)(piVar9 + 0x31) = bVar1 * *(char *)(iVar3 + 0xb);
    if (uVar5 - uVar2 == iVar10) {
      return 0;
    }
    if (*(char *)(*param_1 + 0x10) == '\0') {
      return 0xffffffff;
    }
    pcVar7 = *(code **)(*param_1 + 0xc);
    if (pcVar7 == (code *)0x0) {
      return 0xffffffff;
    }
    uVar6 = 0x4a;
    puVar4 = PTR_s_Error___s__d_IDTbl_param_Default_1007db00;
  }
  else {
    if (*(char *)(*param_1 + 0x10) == '\0') {
      return 0xffffffff;
    }
    pcVar7 = *(code **)(*param_1 + 0xc);
    if (pcVar7 == (code *)0x0) {
      return 0xffffffff;
    }
    uVar6 = 0x37;
    puVar4 = PTR_s_Error___s__d_Can_t_get_spinand_s_1007dafc;
  }
  (*pcVar7)(puVar4,PTR_s_init_spinand_params_1007daf8,uVar6,pcVar7,piVar11);
  return 0xffffffff;
}

