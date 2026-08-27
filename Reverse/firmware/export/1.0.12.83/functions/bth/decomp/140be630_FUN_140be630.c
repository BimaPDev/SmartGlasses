/* FUN_140be630 @ 0x140be630 */

void FUN_140be630(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar2 = DAT_140be664;
  *(undefined4 *)(DAT_140be664 + 6) = 0;
  *puVar2 = 0x100;
  iVar3 = DAT_140be66c;
  iVar6 = DAT_140be668;
  *(int *)(puVar2 + 0x48) = DAT_140be668;
  uVar4 = DAT_140be670;
  *(char *)((int)puVar2 + 3) = (char)param_2;
  *(uint *)(puVar2 + 4) = (uint)((ulonglong)uVar4 * (ulonglong)(uint)(iVar3 - iVar6) >> 0x24);
  *(undefined1 *)(puVar2 + 1) = 1;
  *DAT_140be798 = (char)param_2;
  if (param_2 == 0) {
    iVar6 = *DAT_140be79c;
    piVar1 = DAT_140be79c;
  }
  else {
    FUN_140e5918(DAT_140be7b0,0x800,DAT_140be7ac);
    FUN_1402bafc(DAT_140be7b8,0x800,DAT_140be7b4);
    uVar5 = FUN_140e5418(DAT_140be7bc,0);
    piVar1 = DAT_140be79c;
    *DAT_140be7c0 = uVar5;
    iVar6 = *piVar1;
  }
  if (iVar6 == 0) {
    iVar6 = FUN_140e5138(DAT_140be7c4);
    *piVar1 = iVar6;
  }
  FUN_1402a6e8(4,0x122,DAT_140be7a8,DAT_140be7a4,DAT_140be7a0,param_2);
  return;
}

