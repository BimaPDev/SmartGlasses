/* FUN_1007d5e8 @ 0x1007d5e8 */

void FUN_1007d5e8(int param_1,uint param_2,undefined4 param_3)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  uint local_1c;
  
  piVar2 = DAT_1007d678;
  pcVar5 = (code *)DAT_1007d678[0x59];
  iVar6 = *(int *)(*DAT_1007d678 + 0x10);
  iVar7 = *(int *)(*DAT_1007d678 + 4);
  local_1c = 0;
  if ((pcVar5 != (code *)0x0) && (*(byte *)(DAT_1007d678 + 0x75) != param_2)) {
    local_1c = param_1 * 1000;
    (*pcVar5)(7,&local_1c,pcVar5,local_1c,param_1,param_2,param_3);
    local_1c = param_2;
    (*(code *)piVar2[0x59])(8,&local_1c);
    FUN_1011fe70(param_1);
  }
  *(char *)(piVar2 + 0x75) = (char)param_2;
  sVar1 = *(short *)(iVar7 + 8);
  *(short *)((int)piVar2 + 0x1d6) = (short)param_1;
  if ((sVar1 != 0) &&
     (iVar3 = FUN_1011fee8(),
     (uint)*(ushort *)(iVar7 + 8) * 1000 < (uint)(iVar3 - *(int *)(iVar6 + 0x48)))) {
    FUN_100a5b78(DAT_1007d684 | (DAT_1007d680 - DAT_1007d67c) * 0x20 & 0xff00U,DAT_1007d68c,
                 DAT_1007d688,param_1,param_2);
    uVar4 = FUN_1011fee8();
    *(undefined4 *)(iVar6 + 0x48) = uVar4;
  }
  return;
}

